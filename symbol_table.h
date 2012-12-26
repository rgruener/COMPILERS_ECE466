// Robert Gruener
// Compilers ECE466
// symbol_table.h

#ifndef _SYMBOL_TABLE_H
#define _SYMBOL_TABLE_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "hash.h"

#define NAMESPACE_LABELS 0
#define NAMESPACE_TAGS 1
#define NAMESPACE_STRUCT_DEF 2
#define NAMESPACE_OTHER 3

#define FILE_SCOPE 0
#define FUNCTION_SCOPE 1
#define BLOCK_SCOPE 2
#define PROTOTYPE_SCOPE 3

struct sym_table {
    struct hashTable *symbols[4];
    char file_name[256];
    int scope;
    int line_begin;
    struct sym_table *prev;
};

struct sym_table * sym_table_new(char *file_name, int scope, int line_begin, struct sym_table *prev);

struct sym_table * sym_table_pop(struct sym_table *cur);

int insert_ident(struct sym_table *cur, char *ident, void *ptr, int namesp);

void * get_ident(struct sym_table *cur, char* ident, int namesp);

#endif
