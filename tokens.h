// Robert Gruener
// Compilers ECE466
// Lexical Analysis
// tokens.h

#ifndef _TOKENS_H 
#define _TOKENS_H

//enum tokens {
		//TOKEOF=0,
		//IDENT=257,
		//CHARLIT,
		//STRING,
		//NUMBER,
		//INDSEL,
		//PLUSPLUS,
		//MINUSMINUS,
		//SHL,
		//SHR,
		//LTEQ,
		//GTEQ,
		//EQEQ,
		//NOTEQ,
		//LOGAND,
		//LOGOR,
		//ELLIPSIS,
		//TIMESEQ,
		//DIVEQ,
		//MODEQ,
		//PLUSEQ,
		//MINUSEQ,
		//SHLEQ,
		//SHREQ,
		//ANDEQ,
		//OREQ,
		//XOREQ,
		//AUTO,
		//BREAK,
		//CASE,
		//CHAR,
		//CONST,
		//CONTINUE,
		//DEFAULT,
		//DO,
		//DOUBLE,
		//ELSE,
		//ENUM,
		//EXTERN,
		//FLOAT,
		//FOR,
		//GOTO,
		//IF,
		//INLINE,
		//INT,
		//LONG,
		//REGISTER,
		//RESTRICT,
		//RETURN,
		//SHORT,
		//SIGNED,
		//SIZEOF,
		//STATIC,
		//STRUCT,
		//SWITCH,
		//TYPEDEF,
		//UNION,
		//UNSIGNED,
		//VOID,
		//VOLATILE,
		//WHILE,
		//_BOOL,
		//_COMPLEX,
		//_IMAGINARY
//};

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
