// Robert Gruener
// Compilers ECE466
// symbol_table.c

#include "symbol_table.h"

extern char* filename;
extern int line_number;
extern int debug;

struct sym_table * sym_table_new(char *file_name, int scope, int line_begin, struct sym_table *prev){
    struct sym_table *table;
    int i;
    /*if (debug){*/
        /*fprintf(stderr, "New Scope %d\n", scope);*/
    /*}*/
    if ((table = malloc(sizeof(struct sym_table))) == NULL){
        fprintf(stderr, "Error While Allocating Memory: %s\n", strerror(errno));
        return NULL;
    }
    for (i=0;i<4;i++){
        table->symbols[i] = hashTable_new(1000);
    }
    strcpy(table->file_name, file_name);
    table->scope = scope;
    table->line_begin = line_number;
    table->prev = prev;
    return table;
}

struct sym_table * sym_table_pop(struct sym_table *cur){
    struct sym_table *next = cur->prev;
    free(cur);
    return next;
}

int insert_ident(struct sym_table *cur, char *ident, void *ptr, int namesp){
    struct sym_table *sym_prev = cur;
    while (sym_prev != NULL){
        if (hashTable_contains(sym_prev->symbols[namesp], ident)){
            return 0;
        }
        sym_prev = sym_prev->prev;
    }
    hashTable_insert(cur->symbols[namesp], ident, ptr);
    /*if (debug){*/
        /*printf("Inserting %s into %d - %p\n", ident, namesp, ptr);*/
        /*hashTable_print(cur->symbols[namesp]);*/
    /*}*/
    return 1;
}

void * get_ident(struct sym_table *cur, char* ident, int namesp){
    struct sym_table *sym_prev = cur;
    void * ret = NULL;
    while (sym_prev != NULL){
        if (hashTable_contains(sym_prev->symbols[namesp], ident)){
            ret = hashTable_getPointer(sym_prev->symbols[namesp], ident, NULL);
            return ret;
        }
        sym_prev = sym_prev->prev;
    }
    /*if (debug){*/
        /*printf("Identifier %s not found\n", ident);*/
    /*}        */
    return ret;

    /*void * ret = NULL;*/
    /*int b = 0;*/
    /*while (!b && cur != NULL){*/
        /*ret = hashTable_getPointer(cur->symbols[namesp], ident, &b);*/
        /*cur = cur->prev;*/
    /*}*/
    /*if (!b){*/
        /*if (debug){*/
            /*printf("Identifier %s not found\n", ident);*/
        /*}        */
        /*[>fprintf(stderr, "Error: No Previous Declaration of Identifier %s - %s:%d\n", ident, filename, line_number);<]*/
        /*return NULL;*/
    /*}*/
    /*return ret;*/
}
