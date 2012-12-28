// Robert Gruener
// Compilers ECE466
// ast.h

#ifndef _AST_H
#define _AST_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "tokens.h"
#include "symbol_table.h"

#define LEFT 1
#define NEXT 2

enum ast_type {
    AST_VAR=0,
    AST_PTR,
    AST_ARRAY,
    AST_FN,
    AST_TYPEDEF,
    AST_STORAGE,
    AST_SCALAR,
    AST_STRUCT,
    AST_UNION,
    AST_NUM,
    AST_STR,
    AST_CHAR,
    AST_BINOP,
    AST_UNOP,
    AST_ASSGN,
    AST_FNCALL,
    AST_FOR,
    AST_IF,
    AST_WHILE,
    AST_DO,
    AST_SWITCH,
    AST_TMP
};

enum storage_class {
    STORE_AUTO = 0,
    STORE_EXTERN,
    STORE_REGISTER,
    STORE_STATIC
};

enum scalar_type {
    SCALAR_INT = 0,
    SCALAR_CHAR,
    SCALAR_DOUBLE
};

#define MAX_STRING_LITERAL 2000

struct ast_node {
    enum ast_type type;
    struct ast_node *left;
    struct ast_node *right;
    struct ast_node *next;
    struct ast_node *cond;
    struct ast_node *body;
    struct ast_node *other;
    int scope;
    struct atts {
        int num;
        int op;
        char identifier[36];
        char str[MAX_STRING_LITERAL];
        struct ast_node *params;
        int size;
        int num_signed;
        enum scalar_type scalar_type;
        enum storage_class storage_class;
        int ln_effective;
        char file_name[256];
    } attributes;
};

struct ast_node_list {
    struct ast_node *head, *tail;
    int size;
};

struct ast_node * ast_newnode(int type);

struct ast_node * ast_reverse_tree(struct ast_node *root, int which);

struct ast_node * ast_push_back(struct ast_node *root, struct ast_node *new_node, int which);

int ast_list_size(struct ast_node *root, int which);

void ast_print_syntax_error(char *file_name, int line_number);

void ast_dump(struct ast_node *root, char *fn_name);

void ast_print_node(struct ast_node *root, int tabs);

void ast_print_tree(struct ast_node *root);

#endif
