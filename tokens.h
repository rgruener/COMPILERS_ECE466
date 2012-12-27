// Robert Gruener
// Compilers ECE466
// Lexical Analysis
// tokens.h

#ifndef _TOKENS_H 
#define _TOKENS_H

#include "ast.h"

enum number_size {
    SIZE_INT=0,
    SIZE_LONG,
    SIZE_LONGLONG,
    SIZE_FLOAT,
    SIZE_DOUBLE,
    SIZE_LONGDOUBLE,
    SIZE_UNSIGNED,
    SIZE_SIGNED
};

typedef struct {
    char yychar;
    char * yystring;
    unsigned long long int yyint;
    unsigned int yystring_size;
    long double yydouble;
    enum number_size n_size;
    enum number_size n_signed;
    struct ast_node *node;
    struct ast_node_list *node_list;
} YYSTYPE;

#define YYSTYPE YYSTYPE

YYSTYPE yylval;

#endif
