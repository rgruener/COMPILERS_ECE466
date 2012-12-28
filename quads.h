// Robert Gruener
// Compilers ECE466
// quads.h

#ifndef _QUADS_H
#define _QUADS_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "ast.h"
#include "symbol_table.h"

#define DIRECT 0
#define INDIRECT 1

enum quad_operations {
    LEA = 0,
    STORE,
    LOAD,
    MOV,
    CALL,
    CMP,
};

struct quad {
    int opcode;
    struct ast_node *target, *left, *right;
    struct quad *next;
};

struct quad_list {
    struct quad *head, *tail;
    int size;
};

struct quad_list * quads_generate_function(struct ast_node *function, struct ast_node *head);

struct quad_list * quads_gen(struct ast_node *root);

struct ast_node * quads_gen_assign(struct quad_list *quad_list, struct ast_node *node);

struct ast_node * quads_gen_rvalue(struct quad_list *quad_list, struct ast_node *node, struct ast_node *target);

struct ast_node * quads_gen_lvalue(struct quad_list *quad_list, struct ast_node *node, int *mode);

struct quad_list * emit(struct quad_list *quads, int opcode, struct ast_node *left, struct ast_node *right, struct ast_node *target);

struct ast_node * quads_new_temp();

void quads_print(struct ast_node *function, struct quad_list *quads);

void quads_print_binary_op(struct quad *cur, const char *s);

struct quad_list * new_quad_list();

struct quad_list * quad_list_cat(struct quad_list *root, struct quad_list *tail);

struct quad_list * quad_list_push(struct quad_list *root, struct quad *new_quad);

#endif
