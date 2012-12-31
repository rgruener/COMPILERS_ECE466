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

enum branching {
    NEVER = 0,
    ALWAYS,
    COND_LT,
    COND_GT,
    COND_LE,
    COND_GE,
    COND_EQ,
    COND_NE,
    COND_OR,
    COND_AND
};

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

struct basic_block {
    struct quad_list *quads;
    int fn_cnt, bb_cnt;
    struct basic_block *left, *right, *next;
    int when;
};

struct basic_block_list {
    struct basic_block *head, *tail;
    int size;
};

struct quad_list * quads_generate_function(struct ast_node *function, struct ast_node *head);

struct quad_list * quads_gen_stmt(struct ast_node *root);

struct ast_node * quads_gen_assign(struct ast_node *node);

struct ast_node * quads_gen_rvalue(struct ast_node *node, struct ast_node *target);

struct ast_node * quads_gen_lvalue(struct ast_node *node, int *mode);

void quads_gen_if(struct ast_node *node);

void quads_gen_cond(struct ast_node *node, struct basic_block *true_block, struct basic_block *false_block);

struct quad_list * emit(int opcode, struct ast_node *left, struct ast_node *right, struct ast_node *target);

int get_pointer(struct ast_node *node, int deref);

int get_sizeof(struct ast_node *node);

struct ast_node * quads_new_temp();

void quads_print(struct ast_node *function, struct basic_block * bb);

void quads_print_bb(struct basic_block *bb);

void quads_print_instr(struct quad *cur);

void quads_print_binary_op(struct quad *cur, const char *s);

void quads_print_var_or_tmp(struct ast_node *cur);

struct quad_list * new_quad_list();

struct quad_list * quad_list_cat(struct quad_list *root, struct quad_list *tail);

struct quad_list * quad_list_push(struct quad_list *root, struct quad *new_quad);

struct basic_block * new_bb();

struct basic_block * link_bb(struct basic_block *bb, int when, struct basic_block *left, struct basic_block *right);

struct basic_block_list * new_block_list();

struct basic_block_list * block_list_push(struct basic_block_list *list, struct basic_block *block);

#endif
