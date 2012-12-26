// Robert Gruener
// Compilers ECE466
// ast.c

#include "ast.h"

extern int debug;
extern struct sym_table *current_scope;

struct ast_node * ast_newnode(int type){
    struct ast_node *new_node;
    /*if (debug){*/
        /*printf("New Node of type: %d\n", type);*/
    /*}*/
    if ((new_node = malloc(sizeof(struct ast_node))) == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        return NULL;
    }
    new_node->type = type;
    new_node->next = NULL;
    return new_node;
}

struct ast_node * ast_reverse_tree(struct ast_node *root){
    struct ast_node * new_root = NULL;
    while (root != NULL){
        struct ast_node *next = root->next;
        root->next = new_root;
        new_root = root;
        root = next;
    }
    return new_root;
}

struct ast_node * ast_push_back(struct ast_node *root, struct ast_node *new_node){
    struct ast_node *next = root->next;
    struct ast_node *tmp = root;
    while (root->next != NULL){
        root = root->next;
    }
    root->next = new_node;
    return tmp;
}

void ast_print_syntax_error(char *file_name, int line_number){
    fprintf(stderr, "The syntax in %s: %d is not supported\n", file_name, line_number);
}

void ast_print_tree(struct ast_node *root){
    int num=0, i;
    while (root != NULL){
        for (i=0; i<num; i++){
            printf("\t");
        }
        printf("Node ");
        switch (root->type){
            case AST_VAR:
                printf("Variable %s, FILE: %s - %d, SCOPE: %d, SCOPE START: %s - %d TYPE:\n", root->attributes.identifier, 
                            current_scope->file_name, root->attributes.ln_effective, current_scope->scope,
                            current_scope->file_name, current_scope->line_begin);
                break;
            case AST_SCALAR:
                printf("Scalar, ", root->attributes.num_signed);
                switch (root->attributes.scalar_type){
                    case SCALAR_INT:
                        printf("INT");
                        break;
                    case SCALAR_CHAR:
                        printf("CHAR");
                        break;
                    case SCALAR_DOUBLE:
                        printf("DOUBLE");
                        break;
                }
                if (root->attributes.num_signed == SIZE_UNSIGNED)
                    printf(", UNSIGNED");
                printf("\n");
                break;
            case AST_ARRAY:
                printf("Array, Size: %d\n", root->attributes.size);
                break;
            case AST_FN:
                printf("Function, Name: %s\n", root->attributes.identifier);
                break;
            case AST_PTR:
                printf("Pointer\n");
                break;
        }
        root = root->next;
        num++;
    }
}
