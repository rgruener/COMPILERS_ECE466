// Robert Gruener
// Compilers ECE466
// ast.c

#include "ast.h"
#include "parser.tab.h"

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
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->cond = NULL;
    new_node->body = NULL;
    new_node->other = NULL;
    return new_node;
}

struct ast_node * ast_reverse_tree(struct ast_node *root, int which){
    struct ast_node * new_root = NULL;
    while (root != NULL){
        struct ast_node *next;
        if (which == NEXT){
            next = root->next;
            root->next = new_root;
        } else if (which == LEFT){
            next = root->left;
            root->left = new_root;
        }
        new_root = root;
        root = next;
    }
    return new_root;
}

struct ast_node * ast_push_back(struct ast_node *root, struct ast_node *new_node, int which){
    if (which == NEXT){
        struct ast_node *next = root->next;
        struct ast_node *tmp = root;
        while (root->next != NULL){
            root = root->next;
        }
        root->next = new_node;
        return tmp;
    } else if (which == LEFT){
        struct ast_node *next = root->left;
        struct ast_node *tmp = root;
        while (root->left != NULL){
            root = root->left;
        }
        root->left = new_node;
        return tmp;
    }
    return NULL;
}

void ast_print_syntax_error(char *file_name, int line_number){
    fprintf(stderr, "The syntax in %s: %d is not supported\n", file_name, line_number);
}

void ast_dump(struct ast_node *root){
    printf("AST DUMP for function\n");
    printf("\tLIST {\n");
    while (root != NULL){
        ast_print_node(root, 2);
        root = root->next;
    }
    printf("}\n");
}

void ast_print_node(struct ast_node *root, int tabs){
    int i;
    char tab_string[100];
    for (i=0; i<tabs; i++){
        /*printf("\t");*/
        tab_string[i] = '\t';
    }
    tab_string[i] = '\0';
    switch (root->type){
        case AST_ASSGN:
            printf("%sASSIGNMENT\n", tab_string);
            ast_print_node(root->left, tabs+1);
            ast_print_node(root->right, tabs+1);
            break;
        case AST_VAR:
            printf("%svariable name=%s def @%s:%d\n", tab_string, root->attributes.identifier, root->attributes.file_name, root->attributes.ln_effective);
            break;
        case AST_FNCALL:
            printf("%sFNCALL, no arguments\n", tab_string);
            ast_print_node(root->left, tabs+1);
            break;
        case AST_NUM:
            printf("%sCONSTANT: (type=int):%d\n", tab_string, root->attributes.num);
            break;
        case AST_CHAR:
            printf("%sCONSTANT: (type=char):%c\n", tab_string, (char)root->attributes.num);
            break;
        case AST_STR:
            printf("%sCONSTANT: (type=char *):%s\n", tab_string, root->attributes.str);
            break;
        case AST_SCALAR:
            printf("%sSCALAR: (type=", tab_string, root->attributes.num_signed);
            switch (root->attributes.scalar_type){
                case SCALAR_INT:
                    printf("int)\n");
                    break;
                case SCALAR_CHAR:
                    printf("char)\n");
                    break;
                case SCALAR_DOUBLE:
                    printf("double)\n");
                    break;
            }
            break;
        case AST_ARRAY:
            printf("%sArray, (size=%d)\n", tab_string, root->attributes.size);
            break;
        case AST_BINOP:
            printf("%sBINARY OP ", tab_string);
            switch (root->attributes.op){
                case '*':
                    printf("MULTIPLICATION\n");
                    break;
                case '/':
                    printf("DIVISION\n");
                    break;
                case '%':
                    printf("MODULO\n");
                    break;
                case '+':
                    printf("ADDITION\n");
                    break;
                case '-':
                    printf("SUBTRACTION\n");
                    break;
                case SHL:
                    printf("SHL\n");
                    break;
                case SHR:
                    printf("SHR\n");
                    break;
                case '<':
                    printf("LESS THAN\n");
                    break;
                case '>':
                    printf("GREATER THAN\n");
                    break;
                case LTEQ:
                    printf("LTEQ\n");
                    break;
                case GTEQ:
                    printf("GTEQ\n");
                    break;
                case EQEQ:
                    printf("EQEQ\n");
                    break;
                case NOTEQ:
                    printf("NOTEQ\n");
                    break;
                case '&':
                    printf("AND\n");
                    break;
                case '|':
                    printf("OR\n");
                    break;
                case '^':
                    printf("XOR\n");
                    break;
                case LOGAND:
                    printf("LOGAND\n");
                    break;
                case LOGOR:
                    printf("LOGOR\n");
                    break;
            }
            ast_print_node(root->left, tabs+1);
            ast_print_node(root->right, tabs+1);
            break;
        case AST_UNOP:
            printf("%sUNARY OP ", tab_string);
            switch (root->attributes.op){
                case SIZEOF:
                    printf("SIZEOF\n");
                    break;
                case POSTINC:
                    printf("POSTINC\n");
                    break;
                case PREINC:
                    printf("PREINC\n");
                    break;
                case POSTDEC:
                    printf("POSTDEC\n");
                    break;
                case PREDEC:
                    printf("PREDEC\n");
                    break;
                default:
                    printf("%c\n", root->attributes.op);
                    break;
            }
            ast_print_node(root->left, tabs+1);
            break;
        case AST_IF:
            printf("%sIF\n", tab_string);
            printf("%sCOND:\n", tab_string);
            ast_print_node(root->cond, tabs+1);
            printf("%sTHEN:\n", tab_string);
            ast_print_node(root->body, tabs+1);
            if (root->other != NULL){
                printf("%sELSE:\n", tab_string);
                ast_print_node(root->other, tabs+1);
            }
            break;
        case AST_WHILE:
            printf("%sWHILE\n", tab_string);
            printf("%sCOND:\n", tab_string);
            ast_print_node(root->cond, tabs+1);
            printf("%sBODY:\n", tab_string);
            ast_print_node(root->body, tabs+1);
            break;
        case AST_FOR:
            printf("%sFOR\n", tab_string);
            printf("%sINIT:\n", tab_string);
            ast_print_node(root->left, tabs+1);
            printf("%sCOND:\n", tab_string);
            ast_print_node(root->cond, tabs+1);
            printf("%sBODY:\n", tab_string);
            ast_print_node(root->body, tabs+1);
            printf("%sINCR:\n", tab_string);
            ast_print_node(root->right, tabs+1);
            break;
    }
}

void ast_print_tree(struct ast_node *root){
    int num=0, i;
    while (root != NULL){
        for (i=0; i<num; i++){
            printf("\t");
        }
        /*printf("Node ");*/
        switch (root->type){
            case AST_VAR:
                printf("Variable %s, FILE: %s - %d, SCOPE: %d, SCOPE START: %s - %d ", root->attributes.identifier, 
                            current_scope->file_name, root->attributes.ln_effective, current_scope->scope,
                            current_scope->file_name, current_scope->line_begin);
                if (root->left->type == AST_STORAGE){
                    printf("Storage class: ");
                }
                while (root->left->type == AST_STORAGE){
                    root = root->left;
                    switch (root->attributes.storage_class){
                        case STORE_AUTO:
                            printf("AUTO, ");
                            break;
                        case STORE_EXTERN:
                            printf("EXTERN, ");
                            break;
                        case STORE_REGISTER:
                            printf("REGISTER, ");
                            break;
                        case STORE_STATIC:
                            printf("STATIC, ");
                            break;
                    }
                }
                printf("TYPE: \n");
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
                printf("Function Returns: \n");
                break;
            case AST_PTR:
                printf("Pointer to\n");
                break;
            case AST_TYPEDEF:
                printf("Typedef to\n");
                break;
            case AST_STORAGE:
                printf("Storage class: ");
                switch (root->attributes.storage_class){
                    case STORE_AUTO:
                        printf("AUTO\n");
                        break;
                    case STORE_EXTERN:
                        printf("EXTERN\n");
                        break;
                    case STORE_REGISTER:
                        printf("REGISTER\n");
                        break;
                    case STORE_STATIC:
                        printf("STATIC\n");
                        break;
                }
                break;
        }
        root = root->left;
        num++;
    }
}
