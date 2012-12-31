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
struct basic_block *current_bb;
struct basic_block_list *fn_blocks;

struct quad_list * quads_generate_function(struct ast_node *function, struct ast_node *head){
    if (function->type != AST_VAR || function->left->type != AST_FN){
        fprintf(stderr, "Error While Generating QUADS for function\n");
    }
    fn_blocks = new_block_list();
    struct basic_block *block = new_bb();
    current_bb = block;
    while (head != NULL){
        if (debug){
            printf("Evaluating AST NODE:\n");
            ast_print_node(head, 1);
        }
        quads_gen_stmt(head);
        head = head->next;
    }
    if (print_quads){
        quads_print(function, block);
    }
    bb_fn_counter++;
}

struct quad_list * quads_gen_stmt(struct ast_node *node){
    struct quad_list *new_list = new_quad_list();
    struct ast_node *left,*right,*addr;
    switch(node->type){
        case AST_ASSGN:
            if (debug){
                printf("Found Assignment\n");
            }
            quads_gen_assign(node);
            break;
        case AST_BINOP:
            // Should not generate anything but for debugging leave it in
            if (debug){
                printf("Found Binary Op\n");
            }
            quads_gen_rvalue(node, NULL);
            break;
        case AST_IF:
            if (debug){
                printf("Found IF\n");
            }
            quads_gen_if(node);
            break;
    }
    return new_list;    
}

struct ast_node * quads_gen_assign(struct ast_node *node){
    struct ast_node *dst, *tmp;
    int dstmode;
    dst = quads_gen_lvalue(node->left, &dstmode);
    if (dst == NULL){
        fprintf(stderr, "Error: Invalid LHS of Assignment");
    } else if (dstmode == DIRECT){
        tmp = quads_gen_rvalue(node->right, dst);
        if (tmp && (tmp->type == AST_NUM || tmp->type == AST_CHAR)){
            emit(MOV, tmp, NULL, dst);
        }
    } else {
        tmp = quads_gen_rvalue(node->right, NULL);
        emit(STORE, tmp, NULL, dst);
    }
    return dst;
}

struct ast_node * quads_gen_rvalue(struct ast_node *node, struct ast_node *target){
    struct ast_node *left,*right,*addr,*tmp, *new_node1, *new_node2;
    int ptr_left, ptr_right;
    switch(node->type){
        case AST_VAR:
            if (node->left != NULL && node->left->type == AST_SCALAR){
                if (debug){
                    printf("Found variable of type scalar\n");
                }
                return node;
            }
            if (node->left != NULL && node->left->type == AST_ARRAY){
                if (debug){
                    printf("Found variable of type array\n");
                }
                tmp = quads_new_temp();
                emit(LEA, node, NULL, tmp);
                return tmp;
            }
            if (debug){
                printf("Found variable of type unknown: %d\n", node->left->type);
            }
            return node;
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
            ptr_left = get_pointer(node->left, 0);
            ptr_right = get_pointer(node->right, 0);
            if (ptr_left && ptr_right){
                if (node->attributes.op != '-'){
                    fprintf(stderr, "Error Invalid binary operation on 2 pointers\n");
                }
                
            } else if (ptr_left){
                if (node->attributes.op != '-' && node->attributes.op != '+'){
                    fprintf(stderr, "Error Invalid binary operation for pointer arithmetic\n");
                }
                left = quads_gen_rvalue(node->left, NULL);
                tmp = quads_gen_rvalue(node->right, NULL);
                new_node1 = ast_newnode(AST_BINOP);
                new_node1->attributes.op = '*';
                new_node1->left = tmp;
                new_node2 = ast_newnode(AST_NUM);
                new_node2->attributes.num = ptr_left;
                new_node1->right = new_node2;
                right = quads_gen_rvalue(new_node1, NULL);
            } else if (ptr_right){
                if (node->attributes.op != '-' && node->attributes.op != '+'){
                    fprintf(stderr, "Error Invalid binary operation for pointer arithmetic\n");
                }
                right = quads_gen_rvalue(node->right, NULL);
                tmp = quads_gen_rvalue(node->left, NULL);
                new_node1 = ast_newnode(AST_BINOP);
                new_node1->attributes.op = '*';
                new_node1->right = tmp;
                new_node2 = ast_newnode(AST_NUM);
                new_node2->attributes.num = ptr_right;
                new_node1->left = new_node2;
                left = quads_gen_rvalue(new_node1, NULL);
            } else {
                left = quads_gen_rvalue(node->left, NULL);
                right = quads_gen_rvalue(node->right, NULL);
            }
            if (target == NULL) target = quads_new_temp();
            emit(node->attributes.op, left, right, target);
            return target;
            break;
        case AST_UNOP:
            switch (node->attributes.op){
                case '*':
                    if (debug) printf("Dereference Pointer\n");
                    if (node->left && node->left->type == AST_ARRAY || 
                            (node->left->type == AST_BINOP && node->left->left->type == AST_VAR && node->left->left->left->type == AST_ARRAY 
                             && node->left->left->left->left->type == AST_ARRAY) || 
                            (node->left->type == AST_BINOP && node->left->right->type == AST_VAR && node->left->right->left->type == AST_ARRAY
                             && node->left->right->left->left->type == AST_ARRAY) ){
                        if (debug) printf("Dereference pointer to array\n");
                        return quads_gen_rvalue(node->left, target);
                    }
                    addr = quads_gen_rvalue(node->left, NULL);
                    if (target == NULL) target = quads_new_temp();
                    emit(LOAD, addr, NULL, target);
                    return target;
                    break;
                case SIZEOF:
                    new_node1 = ast_newnode(AST_NUM);
                    new_node1->attributes.num = get_sizeof(node->left);
                    return new_node1;
                    break;
                default:
                    break;
            }
            break;
    }
}

int get_pointer(struct ast_node *node, int deref){
    struct ast_node *size_node = node;
    int r,l,i=0;
    if (node->type == AST_UNOP){
        return get_pointer(node->left, deref+1);
    } else if (node->type == AST_BINOP){
        l = get_pointer(node->left, deref);
        r = get_pointer(node->right, deref);
        if (l && r){
            printf("I dont know why you are adding 2 pointers");
        } else if (l){
            return l;
        } else if (r){
            return r;
        }
    } else if (node->type == AST_VAR && node->left && (node->left->type == AST_PTR || node->left->type == AST_ARRAY)){
        while (i++ < deref){
            printf("pointer deref\n");
            size_node = node->left;
        }
        return get_sizeof(size_node->left->left);
    }
    return 0;
}

int get_sizeof(struct ast_node *node){
    if (node->type == AST_SCALAR){
        if (node->attributes.scalar_type == SCALAR_INT){
            return 4;
        } else if (node->attributes.scalar_type == SCALAR_CHAR){
            return 1;
        } else {
            return 4;
        }
    } else if (node->type == AST_PTR){
        return 8;
    } else if (node->type == AST_ARRAY){
        return node->attributes.size * get_sizeof(node->left);
    } else if (node->type == AST_UNOP){
        if (node->attributes.op = '&'){
            return 8;
        }
    } else if (node->type == AST_VAR){
        return get_sizeof(node->left);
    }
    return 0;
}

struct ast_node * quads_gen_lvalue(struct ast_node *node, int *mode){
    struct ast_node *left,*right,*addr;
    switch(node->type){
        case AST_VAR:
            if (node->left != NULL && node->left->type == AST_SCALAR)
                *mode = DIRECT;
                if (debug){
                    printf("Pointer: Direct Access\n");
                }
                return node;
            break;
        case AST_NUM:
            return NULL;
        case AST_CHAR:
            return NULL;
        case AST_STR:
            return NULL;
        case AST_UNOP:
            if (node->attributes.op != '*') break;
        case AST_PTR:
            *mode = INDIRECT;
            if (debug){
                printf("Pointer: Indirect Access\n");
            }
            return quads_gen_rvalue(node->left, NULL);
            break;
    }
}

void quads_gen_if(struct ast_node *node){
    struct basic_block *Bt, *Bf, *Bn;
    Bt = new_bb();
    Bf = new_bb();
    if (node->other != NULL){
        Bn = new_bb();
    } else {
        Bn = Bf;
    }
    quads_gen_cond(node->cond, Bt, Bf);
    current_bb = Bt;
    quads_gen_stmt(node->body);
    link_bb(current_bb, ALWAYS, Bn, NULL);
    if (node->other != NULL){
        current_bb = Bf;
        quads_gen_stmt(node->other);
        link(current_bb, ALWAYS, Bn, NULL);
    }
    current_bb = Bn;
}

void quads_gen_cond(struct ast_node *node, struct basic_block *true_block, struct basic_block *false_block){
    struct ast_node *left, *right, *tmp1, *tmp2;
    switch(node->type){
        case AST_VAR:
            tmp1 = quads_gen_rvalue(node, NULL);
            tmp2 = ast_newnode(AST_NUM);
            tmp2->attributes.num = 0;
            emit(CMP, tmp1, tmp2, NULL);
            link_bb(current_bb, COND_NE, true_block, false_block);
            break;
        case AST_NUM:
        case AST_CHAR:
            tmp2 = ast_newnode(AST_NUM);
            tmp2->attributes.num = 0;
            emit(CMP, node, tmp2, NULL);
            link_bb(current_bb, COND_NE, true_block, false_block);
            break;
        case AST_STR:
            link_bb(current_bb, ALWAYS, true_block, false_block);
            break;
        case AST_BINOP:
            switch (node->attributes.op){
                case '<':
                    left = quads_gen_rvalue(node->left, NULL);
                    right = quads_gen_rvalue(node->right, NULL);
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_LT, true_block, false_block);
                    break;
                case '>':
                    left = quads_gen_rvalue(node->left, NULL);
                    right = quads_gen_rvalue(node->right, NULL);
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_LT, true_block, false_block);
                    break;
                case LTEQ:
                    left = quads_gen_rvalue(node->left, NULL);
                    right = quads_gen_rvalue(node->right, NULL);
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_LT, true_block, false_block);
                    break;
                case GTEQ:
                    left = quads_gen_rvalue(node->left, NULL);
                    right = quads_gen_rvalue(node->right, NULL);
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_LT, true_block, false_block);
                    break;
                case EQEQ:
                    left = quads_gen_rvalue(node->left, NULL);
                    right = quads_gen_rvalue(node->right, NULL);
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_LT, true_block, false_block);
                    break;
                case NOTEQ:
                    left = quads_gen_rvalue(node->left, NULL);
                    right = quads_gen_rvalue(node->right, NULL);
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_LT, true_block, false_block);
                    break;
                case LOGAND:
                    left = quads_gen_rvalue(node->left, NULL);
                    right = quads_gen_rvalue(node->right, NULL);
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_LT, true_block, false_block);
                    break;
                case LOGOR:
                    left = quads_gen_rvalue(node->left, NULL);
                    right = quads_gen_rvalue(node->right, NULL);
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_LT, true_block, false_block);
                    break;
                default:
                    left = quads_gen_rvalue(node, NULL);
                    right = ast_newnode(AST_NUM);
                    right->attributes.num = 0;
                    emit(CMP, left, right, NULL);
                    link_bb(current_bb, COND_NE, true_block, false_block);
            }
            break;
        case AST_UNOP:
            left = quads_gen_rvalue(node, NULL);
            right = ast_newnode(AST_NUM);
            right->attributes.num = 0;
            emit(CMP, left, right, NULL);
            link_bb(current_bb, COND_NE, true_block, false_block);
            break;
        case AST_ASSGN:
            left = quads_gen_assign(node);
            right = ast_newnode(AST_NUM);
            right->attributes.num = 0;
            emit(CMP, left, right, NULL);
            link_bb(current_bb, COND_NE, true_block, false_block);
            break;
    }
        
}

struct quad_list * emit(int opcode, struct ast_node *left, struct ast_node *right, struct ast_node *target){
    struct quad *new_quad = malloc(sizeof(struct quad));
    if (new_quad == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        exit(-1);
    }
    new_quad->opcode = opcode;
    new_quad->left = left;
    new_quad->right = right;
    new_quad->target = target;
    new_quad->next = NULL;
    if (debug){
        printf("emitting new quad to quad list, opcode: %d\n", new_quad->opcode);
        quads_print_instr(new_quad);
    }
    return quad_list_push(current_bb->quads, new_quad);
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

struct basic_block * new_bb(){
    struct basic_block *new = malloc(sizeof(struct basic_block));
    if (new == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        exit(-1);
    }
    if (debug){
        printf("New Basic Block .BB%d.%d\n", bb_fn_counter, bb_counter);
    }
    new->fn_cnt = bb_fn_counter;
    new->bb_cnt = bb_counter++;
    new->left = NULL;
    new->right = NULL;
    new->next = NULL;
    new->quads = new_quad_list();
    new->when = NEVER;
    block_list_push(fn_blocks, new);
    return new;
}

struct basic_block * link_bb(struct basic_block *bb, int when, struct basic_block *left, struct basic_block *right){
    bb->left = left;
    bb->right = right;
    bb->when = when;
    if (debug){
        printf("linked .BB%d.%d to ", bb->fn_cnt, bb->bb_cnt);
        if (left) printf(".BB%d.%d", left->fn_cnt, left->bb_cnt);
        if (right) printf(",.BB%d.%d", right->fn_cnt, right->bb_cnt);
        printf(" with cond: %d\n", when);
    }
}

struct basic_block_list * new_block_list(){
    struct basic_block_list *new_list = malloc(sizeof(struct basic_block_list));
    if (new_list == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        exit(-1);
    }
    new_list->head = new_list->tail = NULL;
    new_list->size = 0;
    return new_list;
}

struct basic_block_list * block_list_push(struct basic_block_list *list, struct basic_block *block){
    if (list->size++ == 0){
        list->head = list->tail = block;
    } else {
        list->tail->next = block;
        list->tail = block;
    }
    return list;
}

struct quad_list * quad_list_push(struct quad_list *root, struct quad *new_quad){
    if (root->size == 0){
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
        if (root->tail->next != NULL){
            printf("error in quad_listpush\n");
        }
    }
    root->size++;
    return root;
}

struct quad_list * quad_list_cat(struct quad_list *root, struct quad_list *tail){
    if (root->size == 0){
        root->head = tail->head;
        root->tail = tail->tail;
        root->size = tail->size;
        free(tail);
        return root;
    } else if (tail->size == 0){
        return root;
    }
    root->tail->next = tail->head;
    root->tail = tail->tail;
    root->size += tail->size;
    free(tail);
    return root;
}

void quads_print(struct ast_node *function, struct basic_block *bb){
    printf("\n%s:\n", function->attributes.identifier);
    quads_print_bb(bb);
}

void quads_print_bb(struct basic_block *bb){
    if (bb != NULL){
        struct basic_block *cur_bb = bb;
        struct quad *cur = bb->quads->head;
        printf(".BB%d.%d\n", bb->fn_cnt, bb->bb_cnt);
        while (cur != NULL){
            quads_print_instr(cur);
            cur = cur->next;
        }
        switch (bb->when){
            case NEVER:
                break;
            case ALWAYS:
                printf("\t\t\tBR\t.BB%d.%d\n", bb->left->fn_cnt, bb->left->bb_cnt);
                break;
            case COND_LT:
                printf("\t\t\tBRLT\t.BB%d.%d,.BB%d.%d\n",bb->left->fn_cnt,bb->left->bb_cnt,
                       bb->right->fn_cnt,bb->right->bb_cnt); 
                break;
            case COND_GT:
                printf("\t\t\tBRGT\t.BB%d.%d,.BB%d.%d\n",bb->left->fn_cnt,bb->left->bb_cnt,
                       bb->right->fn_cnt,bb->right->bb_cnt); 
                break;
            case COND_LE:
                printf("\t\t\tBRLE\t.BB%d.%d,.BB%d.%d\n",bb->left->fn_cnt,bb->left->bb_cnt,
                       bb->right->fn_cnt,bb->right->bb_cnt); 
                break;
            case COND_GE:
                printf("\t\t\tBRGE\t.BB%d.%d,.BB%d.%d\n",bb->left->fn_cnt,bb->left->bb_cnt,
                       bb->right->fn_cnt,bb->right->bb_cnt); 
                break;
            case COND_EQ:
                printf("\t\t\tBREQ\t.BB%d.%d,.BB%d.%d\n",bb->left->fn_cnt,bb->left->bb_cnt,
                       bb->right->fn_cnt,bb->right->bb_cnt); 
                break;
            case COND_NE:
                printf("\t\t\tBRNE\t.BB%d.%d,.BB%d.%d\n",bb->left->fn_cnt,bb->left->bb_cnt,
                       bb->right->fn_cnt,bb->right->bb_cnt); 
                break;
        }
        quads_print_bb(bb->next);
    }
}

void quads_print_instr(struct quad *cur){
    if (cur != NULL){
        if (cur->target != NULL){
            if (cur->target->type == AST_TMP){
                printf("\t%%T%05d\t=\t", cur->target->attributes.num);
            } else if (cur->target->type == AST_VAR){
                printf("\t%s\t=\t", cur->target->attributes.identifier);
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
                printf("STORE\t");
                quads_print_var_or_tmp(cur->left);
                printf(",");
                quads_print_var_or_tmp(cur->right);
                printf("\n");
                break;
            case CMP:
                printf("CMP\t");
                if (cur->left->type == AST_NUM || cur->left->type == AST_CHAR){
                    printf("%d", cur->left->attributes.num);
                } else {
                    quads_print_var_or_tmp(cur->left);
                }
                printf(",");
                if (cur->right->type == AST_NUM || cur->right->type == AST_CHAR){
                    printf("%d", cur->right->attributes.num);
                } else {
                    quads_print_var_or_tmp(cur->right);
                }
                printf("\n");
                break;
            case MOV:
                printf("MOV\t%d\n", cur->left->attributes.num);
                break;
            case LOAD:
                if (cur->left->type == AST_TMP){
                    printf("LOAD\t[%%T%05d]\n", cur->left->attributes.num);
                } else {
                    printf("LOAD\t%s\n", cur->left->attributes.identifier);
                }
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
            case SHL:
                quads_print_binary_op(cur, "SUB");
                break;
            case SHR:
                quads_print_binary_op(cur, "SUB");
                break;
            case '<':
                quads_print_binary_op(cur, "SUB");
                break;
            case '>':
                quads_print_binary_op(cur, "SUB");
                break;
            case LTEQ:
                quads_print_binary_op(cur, "SUB");
                break;
            case GTEQ:
                quads_print_binary_op(cur, "SUB");
                break;
            case EQEQ:
                quads_print_binary_op(cur, "SUB");
                break;
            case NOTEQ:
                quads_print_binary_op(cur, "SUB");
                break;
            case '&':
                quads_print_binary_op(cur, "SUB");
                break;
            case '|':
                quads_print_binary_op(cur, "SUB");
                break;
            case '^':
                quads_print_binary_op(cur, "SUB");
                break;
            case LOGAND:
                quads_print_binary_op(cur, "SUB");
                break;
            case LOGOR:
                quads_print_binary_op(cur, "SUB");
                break;
        }
    } else {
        printf("QUAD WAS NULL!!\n");
    }
}

void quads_print_binary_op(struct quad *cur, const char *s){
    printf("%s\t", s);
    if (cur->left->type == AST_VAR){
        printf("%s", cur->left->attributes.identifier);
        PRINT_VAR_SCOPE(cur->left);
    } else if (cur->left->type == AST_TMP){
        printf("%%T%05d", cur->left->attributes.num);
    } else if (cur->left->type == AST_NUM || cur->left->type == AST_CHAR){
        printf("%d", cur->left->attributes.num);
    } else {
        printf("\nExpected Var or CONST got type: %d\n", cur->left->type);
    }
    if (cur->right->type == AST_VAR){
        printf(",%s", cur->right->attributes.identifier);
        PRINT_VAR_SCOPE(cur->right);
        printf("\n");
    } else if (cur->right->type == AST_TMP){
        printf(",%%T%05d\n", cur->right->attributes.num);
    } else if (cur->right->type == AST_NUM || cur->right->type == AST_CHAR){
        printf(",%d\n", cur->right->attributes.num);
    } else {
        printf("\nExpected Var or CONST got type: %d\n", cur->left->type);
    }
}

void quads_print_var_or_tmp(struct ast_node *cur){
    if (cur->type == AST_VAR){
        printf("%s", cur->attributes.identifier);
        PRINT_VAR_SCOPE(cur->left);
    } else if (cur->type == AST_TMP){
        printf("%%T%05d", cur->attributes.num);
    }
}
