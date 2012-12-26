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

enum ast_type {
    AST_VAR=0,
    AST_PTR,
    AST_ARRAY,
    AST_FN,
    AST_SCALAR,
    AST_STRUCT,
    AST_UNION,
    AST_NUM,
    AST_STR,
    AST_CHAR,
    AST_BINOP,
    AST_UNOP
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
    struct atts {
        int num;
        int op;
        char identifier[36];
        char str[MAX_STRING_LITERAL];
        struct ast_node *params;
        int size;
        int num_signed;
        enum scalar_type scalar_type;
        int ln_effective;
    } attributes;
};

struct ast_node * ast_newnode(int type);

struct ast_node * ast_reverse_tree(struct ast_node *root);

struct ast_node * ast_push_back(struct ast_node *root, struct ast_node *new_node);

void ast_print_syntax_error(char *file_name, int line_number);

void ast_print_tree(struct ast_node *root);

#endif
