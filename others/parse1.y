%{
#include "helper.h"
extern int yylex();
extern int yyleng;
extern FILE* yyin;
EXT extra;
void yyerror(const char *s) { fprintf(stderr,"Error, unrecognized phrase %s\n", s);}
%}

%union{
    char *str;
    long long integer;
    long double real;
    char character;
}
%token <str> IDENT
%token <character> CHARLIT
%token <str> STRING
%token<integer> NUMBER
%token <str> INDSEL PLUSPLUS MINUSMINUS SHL SHR LTEQ GTEQ EQEQ NOTEQ LOGAND LOGOR ELLIPSIS TIMESEQ 
%token <str> DIVEQ MODEQ PLUSEQ MINUSEQ SHLEQ SHREQ ANDEQ OREQ XOREQ AUTO BREAK CASE CHAR CONST
%token <str> CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER
%token <str> RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED
%token <str> VOID VOLATILE WHILE _BOOL _COMPLEX _IMAGINARY
%type<integer> expr
%%
input: 
     | input line
     ;

line: '\n'
    | expr '\n'  {printf("end: %lld\n",$1);}
    ;

expr: '(' expr ')'  {$$ = $2;}
    |   NUMBER  {$$ = $1;}
    | NUMBER '+' NUMBER { $$ = $1 + $3; printf("end: %lld\n",$$);}
    ;
%%




int main(int argc, char** argv)
{
	++argv, --argc;  /* skip over program name */
    char *fname;
    if ( argc > 0 )
    {
        fname = argv[0];
        yyin = fopen( argv[0], "r" );
    }
    else
    {
        fname="stdin";
        yyin = stdin;
    }
			
    yylval.str = (char*) malloc(10000);
    extra.nums[1] = 3;
    extra.is_real = 0;
    extra.buffer = (char*) malloc(1000);
    extra.position = 0;
    extra.is_hex = 0;
	char *types[] = {"INTEGER","REAL","DOUBLE", "INT","FLOAT","LONG","LONGLONG","LONGDOUBLE","UNSIGNED,INT", "UNSIGNED,LONG", "UNSIGNED,LONGLONG"};
    yyparse();

    /*
    do{
        yyparse();
    
        extra.is_real = 0;
        extra.position = 0;
        extra.is_hex = 0;        
       }
    while(!feof(yyin));*/
}
