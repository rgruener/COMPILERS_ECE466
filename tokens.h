// Robert Gruener
// Compilers ECE466
// Lexical Analysis
// tokens.h

#ifndef _TOKENS_H 
#define _TOKENS_H

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
    long double yydouble;
    enum number_size n_size;
    enum number_size n_signed;
} YYSTYPE;


YYSTYPE yylval;

#endif
