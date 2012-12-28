// Robert Gruener
// Compilers ECE466
// quads.c

#include "quads.h"
#include "parser.tab.h"

#define PRINT_VAR_SCOPE(var) if (var->scope == FILE_SCOPE) \
                            printf("{global}"); \
                        else \
                            printf("{lvar}");

extern int print_quads, debug;
int bb_fn_counter = 1;
int bb_counter = 1;
int tmp_counter = 1;

struct quad_list * quads_generate_function(struct ast_node *function, struct ast_node *head){
    if (function->type != AST_VAR || function->left->type != AST_FN){
        fprintf(stderr, "Error While Generating QUADS for function\n");
    }
    struct quad_list *new_list = new_quad_list();
    struct quad_list *ret;
    while (head != NULL){
        if (debug){
            printf("Evaluating AST NODE:\n");
            ast_print_node(head, 1);
        }
        ret = quads_gen(head);
        new_list = quad_list_cat(new_list, ret);
        head = head->next;
    }
    if (print_quads){
        if (debug)
            printf("about to print quads: size=%d %p\n", new_list->size, new_list);
        quads_print(function, new_list);
    }
}

struct quad_list * quads_gen(struct ast_node *node){
    struct quad_list *new_list = new_quad_list();
    struct ast_node *left,*right,*addr;
    switch(node->type){
        case AST_ASSGN:
            if (debug){
                printf("Found Assignment\n");
            }
            quads_gen_assign(new_list, node);
            break;
        case AST_BINOP:
            // Should not generate anything but for debugging leave it in
            if (debug){
                printf("Found Binary Op\n");
            }
            quads_gen_rvalue(new_list, node, NULL);
            break;
    }
    return new_list;    
}

struct ast_node * quads_gen_assign(struct quad_list *quad_list, struct ast_node *node){
    struct ast_node *dst, *tmp;
    int dstmode;
    dst = quads_gen_lvalue(quad_list, node->left, &dstmode);
    if (dst == NULL){
        fprintf(stderr, "Error: Invalid LHS of Assignment");
    } else if (dstmode == DIRECT){
        quads_gen_rvalue(quad_list, node->right, dst); 
    } else {
        tmp = quads_gen_rvalue(quad_list, node->right, NULL);
        emit(quad_list, STORE, tmp, dst, NULL);
    }
}

struct ast_node * quads_gen_rvalue(struct quad_list *quad_list, struct ast_node *node, struct ast_node *target){
    struct ast_node *left,*right,*addr,*tmp;
    switch(node->type){
        case AST_VAR:
            if (node->left != NULL && node->left->type == AST_SCALAR){
                if (debug){
                    printf("Found variable or type scalar\n");
                }
                return node;
            }
            if (node->left != NULL && node->left->type == AST_ARRAY){
                if (debug){
                    printf("Found variable or type array\n");
                }
                tmp = quads_new_temp();
                emit(quad_list, LEA, node, NULL, tmp);
                return node;
            }
            break;
        case AST_NUM:
            if (debug){
                printf("Found NUM CONSTANT\n");
            }
            return node;
            break;
        case AST_CHAR:
            if (debug){
                printf("Found CHAR CONSTANT\n");
            }
            return node;
            break;
        case AST_STR:
            if (debug){
                printf("Found STRING CONSTANT\n");
            }
            return node;
            break;
        case AST_BINOP:
            if (debug){
                printf("Found binary op\n");
            }
            left = quads_gen_rvalue(quad_list, node->left, NULL);
            right = quads_gen_rvalue(quad_list, node->right, NULL);
            if (target == NULL) target = quads_new_temp();
            emit(quad_list, node->attributes.op, left, right, target);
            return target;
            break;
        case AST_UNOP:
            switch (node->attributes.op){
                case '*':
                    addr = quads_gen_rvalue(quad_list, node->left, NULL);
                    if (target == NULL) target = quads_new_temp();
                    emit(quad_list, LOAD, addr, NULL, target);
                    break;
                case SIZEOF:
                    break;
                default:
                    break;
            }
            break;
    }
}

struct ast_node * quads_gen_lvalue(struct quad_list *quad_list, struct ast_node *node, int *mode){
    struct ast_node *left,*right,*addr;
    switch(node->type){
        case AST_VAR:
            if (node->left != NULL && node->left->type == AST_SCALAR)
                *mode = DIRECT;
                return node;
            break;
        case AST_NUM:
            return NULL;
        case AST_CHAR:
            return NULL;
        case AST_STR:
            return NULL;
        case AST_PTR:
            *mode = INDIRECT;
            return quads_gen_rvalue(quad_list, node->left, NULL);
            break;
    }
}

struct quad_list * emit(struct quad_list *quads, int opcode, struct ast_node *left, struct ast_node *right, struct ast_node *target){
    struct quad *new_quad = malloc(sizeof(struct quad));
    if (new_quad == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        exit(-1);
    }
    new_quad->opcode = opcode;
    new_quad->left = left;
    new_quad->right = right;
    new_quad->target = target;
    if (debug){
        printf("emitting new quad to quad list, opcode: %d\n", new_quad->opcode);
    }
    return quad_list_push(quads, new_quad);
}

struct ast_node * quads_new_temp(){
    struct ast_node * temp = ast_newnode(AST_TMP);
    temp->attributes.num = tmp_counter++;
    if (debug){
        printf("Generated TMP node with val: %d\n", temp->attributes.num);
    }
    return temp;
}

struct quad_list * new_quad_list(){
    struct quad_list *new_list = malloc(sizeof(struct quad_list));
    if (new_list == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        exit(-1);
    }
    new_list->size = 0;
    new_list->head = new_list->tail = NULL;
    return new_list;
}

struct quad_list * quad_list_push(struct quad_list *root, struct quad *new_quad){
    if (root->size++ == 0){
        root->head = root->tail = new_quad;
        if (debug){
            printf("In quad_list_push, size=0 %p\n", root);
        }
    } else {
        if (debug){
            printf("In quad_list_push, size>0 %p\n", root);
        }
        root->tail->next = new_quad;
        root->tail = new_quad;
    }
    return root;
}

struct quad_list * quad_list_cat(struct quad_list *root, struct quad_list *tail){
    if (root->size == 0){
        root->head = tail->head;
        root->tail = tail->tail;
        root->size = tail->size;
    } else if (tail->size == 0){
        return root;
    }
    root->tail = tail->tail;
    root->size += tail->size;
    free(tail);
    return root;
}

void quads_print(struct ast_node *function, struct quad_list *quads){
    if (print_quads){
        printf("\n%s:\n", function->attributes.identifier);
    }
    struct quad *cur = quads->head;
    while (cur != NULL){
        if (cur->target != NULL){
            if (cur->target->type == AST_TMP){
                printf("\t%%T%5d =\t", cur->target->attributes.num);
            } else if (cur->target->type == AST_VAR){
                printf("\t%s =\t", cur->target->attributes.identifier);
            }
        } else {
            printf("\t\t\t");
        }
        switch (cur->opcode) {
            case LEA:
                printf("LEA\t%s", cur->left->attributes.identifier);
                PRINT_VAR_SCOPE(cur->left);
                printf("\n");
                break;
            case STORE:
                break;
            case '*':
                quads_print_binary_op(cur, "MUL");
                break;
            case '/':
                quads_print_binary_op(cur, "DIV");
                break;
            case '%':
                quads_print_binary_op(cur, "MOD");
                break;
            case '+':
                quads_print_binary_op(cur, "ADD");
                break;
            case '-':
                quads_print_binary_op(cur, "SUB");
                break;
        }
        cur = cur->next;
    }
}

void quads_print_binary_op(struct quad *cur, const char *s){
    printf("%s\t", s);
    if (cur->left->type == AST_VAR){
        printf("%s", cur->left->attributes.identifier);
        PRINT_VAR_SCOPE(cur->left);
    } else {
        printf("%d", cur->left->attributes.num);
    }
    if (cur->right->type == AST_VAR){
        printf(",%s\n", cur->right->attributes.identifier);
        PRINT_VAR_SCOPE(cur->right);
    } else {
        printf(",%d\n", cur->right->attributes.num);
    }
}
