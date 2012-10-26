%option noyywrap
%option stack
%{
#include "math.h"
#include "helper.h"
#include "parse1.tab.h"
YYSTYPE yylval;

EXT extra;
int num_lines =1;
%}
%x STRING
%x CHARLIT
%x ESC
%x COM
%x SCOM
%x POST
%x OCTAL
%x HEX
%%
L?\"    yy_push_state(STRING);
\' yy_push_state(CHARLIT);
\n ++num_lines;
"//"    ++num_lines; yy_push_state(SCOM);
"/*"    yy_push_state(COM);

<SCOM>\n     yy_push_state(INITIAL);
<SCOM>. ;
<COM>{
[^*\n]  ;
"*"+[^*/\n]*    ;
\n   ++num_lines;
"*"+"/"    yy_push_state(INITIAL);
}

0[xX]    yy_push_state(HEX);
0   yy_push_state(OCTAL); yyless(yyleng-1);


<OCTAL>{
[0-7]* {
                sscanf(yytext,"%o",(unsigned int *)&yylval.integer);
                extra.nums[0] = 0;
                extra.nums[1] = 3;
                yy_push_state(INITIAL);
                return NUMBER;
            }
[0-7]*[uUlLeE] {
                sscanf(yytext,"%o",(unsigned int *)&yylval.integer);
                strncpy(extra.buffer,yytext,yyleng-1);
                extra.position = yyleng-1;
                extra.buffer[extra.position++] = '\0';
                extra.nums[0] = 0;
                extra.nums[1] = 3;
                yy_push_state(POST);
                yyless(yyleng-1);
            }
.   unput(yytext[0]); fprintf(stderr,"Invalid Character\n"); yy_push_state(INITIAL);
}


[1-9][0-9]+\.[0-9]*|[1-9]?[0-9]?\.[0-9]+  {
                    yylval.real = atof(yytext);
                    extra.is_real = 1;
                    yy_push_state(INITIAL);
                    extra.nums[0] = 1;
                    extra.nums[1] = 2;
                    return NUMBER;
                }
([1-9][0-9]+\.[0-9]*|[1-9]?[0-9]?\.[0-9]+)[eEfFlL]  {
                    yylval.real = atof(yytext);
                    strncpy(extra.buffer,yytext,yyleng-1);
                    extra.position = yyleng-1;
                    extra.buffer[extra.position++] = '\0';
                    extra.is_real = 1;
                    yy_push_state(POST);
                    extra.nums[0] = 1;
                    extra.nums[1] = 2;
    //                printf("yytext=%s, yyleng=%d\n",yytext,yyleng);
                    yyless(yyleng-1);
                }

[1-9][0-9]*  { //decimal
                yylval.integer = atoi(yytext);
                yy_push_state(INITIAL);
                extra.nums[0] = 0;
                extra.nums[1]=3;
                return NUMBER;
}

[1-9][0-9]*[lLuUfFeE] {
                yylval.integer = atoi(yytext);
                strncpy(extra.buffer,yytext,yyleng-1);
                 extra.position = yyleng - 1;               
                extra.buffer[extra.position++] ='\0';
                yy_push_state(POST);
                extra.nums[0] = 0;
                extra.nums[1]=3;
//                printf("yyleng=%d, yytext=%s\n",yyleng,yytext);
                yyless(yyleng-1);
//                printf("new yytext=%s\n",yytext);
}

<HEX>{
[0-9A-Fa-f]+   {
                        sscanf(yytext,"%x",(unsigned int *)&yylval.integer);
                        yy_push_state(INITIAL);
                        extra.nums[0] = 0;
                        extra.nums[1] = 3;
                        return NUMBER;
                    }
[0-9A-Fa-f]+[uUlLPp]   {
                        sscanf(yytext,"%x",(unsigned int *)&yylval.integer);
                        strcpy(extra.buffer,"0x");
                        extra.position = 2;
                        strncpy(extra.buffer+extra.position,yytext,yyleng-1);
                        extra.position+= yyleng - 1;               
                        extra.buffer[extra.position++] ='\0';                        
//                        sscanf(a,"%x",&extra.hex_num);
                        yy_push_state(POST);
                        extra.nums[0] = 0;
                        extra.nums[1] = 3;
                        extra.is_hex = 1;
                        yyless(yyleng-1);
                }
}

<POST>{
[Ll]   {
//            printf("post cond, yytext=%s\n",yytext);
            if(extra.nums[0] == 0)
                extra.nums[1] = 5;
            else if(extra.nums[0] == 1)
            {
                extra.nums[1] = 7;
                extra.is_real = 1;
            }
            yy_pop_state();
            yy_push_state(INITIAL);
            return NUMBER;
        }

"ll"|"LL"   extra.nums[1] = 6; yy_pop_state(); yy_push_state(INITIAL); return NUMBER;


[Uu]    {
                extra.nums[1] = 8;       
                yy_pop_state();
                yy_push_state(INITIAL);                
                return NUMBER;
        }

"UL"|"LU"   {
            if(extra.nums[0] == 0)
                extra.nums[1] = 9;
               
            else if(extra.nums[0] == 1)
               fprintf(stderr,"Error in postfix!\n");
            
            yy_pop_state();
            yy_push_state(INITIAL);            
            return NUMBER;
        }

[Ff]   {
            yy_pop_state();
            yy_push_state(INITIAL);
            if(extra.nums[0] == 1)
            {
                extra.nums[1] = 4; 
                yylval.real = (long double) yylval.integer;
                extra.is_real = 1;
            }
            else
                unput((char)yytext[0]);
            
            return NUMBER;
        }

"LLU"|"ULL"   extra.nums[1] = 10; yy_pop_state(); yy_push_state(INITIAL); return NUMBER;

[pPeE][+-]?[0-9]+[fF]?   {
                        sprintf(extra.buffer,"%s%s\0",extra.buffer,yytext);
                        extra.position+=yyleng+1;
                        char* a= (char *)malloc(extra.position);
                        strncpy(a,extra.buffer,extra.position);
  //                      printf("upd buffer=%sand a=%s\n",extra.buffer,a);

                        extra.is_real = 1;
                        sscanf(a,"%Lg",&yylval.real);
                        extra.nums[0] = 1;
                        extra.nums[1] = 4;
                        yy_pop_state();
                        yy_push_state(INITIAL);
                        return NUMBER;
                    }
[pPeE][+-]?[0-9]+([fF]?[lL]|[lL][fF]?)   {
                        sprintf(extra.buffer,"%s%s\0",extra.buffer,yytext);
                        extra.position+=yyleng+1;
                        char* a= (char *)malloc(extra.position);
                        strncpy(a,extra.buffer,extra.position);
//                        printf("upd buffer=%sand a=%s\n",extra.buffer,a);

                        extra.is_real = 1;
                        sscanf(a,"%Lg",&yylval.real);
                        extra.nums[0] = 1;
                        extra.nums[1] = 7;
                        yy_pop_state();
                        yy_push_state(INITIAL);
                        return NUMBER;
                    }

. printf("nope, yylval.integer=%lld, yytext=%s\n",yylval.integer,yytext); yy_pop_state(); yy_push_state(INITIAL); return NUMBER; 
}

auto	assign(	"AUTO",0)	;	return	AUTO	;
break	assign(	"BREAK",0);	return	BREAK	;
case	assign(	"CASE",0);	return	CASE	;
char	assign(	"CHAR",0);	return	CHAR	;
const	assign(	"CONST",0);	return	CONST	;
continue	assign( "CONTINUE",0);	return	CONTINUE	;
default	assign(	"DEFAULT",0);	return	DEFAULT	;
do	assign(	"DO",0);	return	DO	;
double	assign(	"DOUBLE",0);	return	DOUBLE	;
else	assign(	"ELSE",0);	return	ELSE	;
enum	assign(	"ENUM",0);	return	ENUM	;
extern	assign(	"EXTERN",0);	return	EXTERN	;
float	assign(	"FLOAT",0);	return	FLOAT	;
for	assign(	"FOR",0);	return	FOR	;
goto	assign(	"GOTO",0);	return	GOTO	;
if	assign(	"IF",0);	return	IF	;
inline	assign(	"INLINE",0);	return	INLINE	;
int	assign(	"INT",0);	return	INT	;
long	assign(	"LONG",0);	return	LONG	;
register	assign(	"REGISTER",0);	return	REGISTER	;
restrict	assign(	"RESTRICT",0);	return	RESTRICT	;
return	assign(	"RETURN",0);	return	RETURN	;
short	assign(	"SHORT",0);	return	SHORT	;
signed	assign(	"SIGNED",0);	return	SIGNED	;
sizeof	assign(	"SIZEOF",0);	return	SIZEOF	;
static	assign(	"STATIC",0);	return	STATIC	;
struct	assign(	"STRUCT",0);	return	STRUCT	;
switch	assign(	"SWITCH",0);	return	SWITCH	;
typedef	assign(	"TYPEDEF",0);	return	TYPEDEF	;
union	assign(	"UNION",0);	return	UNION	;
unsigned	assign(	"UNSIGNED",0);	return	UNSIGNED	;
void	assign(	"VOID",0);	return	VOID	;
volatile	assign(	"VOLATILE",0);	return	VOLATILE	;
while	assign(	"WHILE",0);	return	WHILE	;
_Bool	assign(	"_BOOL",0);	return	_BOOL	;
_Complex	assign(	"_COMPLEX",0);	return	_COMPLEX	;
_Imaginary	assign(	"_IMAGINARY",0);	return	_IMAGINARY	;


[_A-Za-z][_A-Za-z0-9]* {
                assign(yytext,1);
                return IDENT;
}
[^_a-zA-Z0-9\'\"\\]   assign(yytext,1); return (char)yytext[0];
"->"	assign( "INDSEL",0);	return	INDSEL	;
"++"	assign( "PLUSPLUS",0);	return	PLUSPLUS	;
"--"	assign( "MINUSMINUS",0);	return	MINUSMINUS	;
"<<"	assign(	"SHL",0);	return	SHL	;
">>"	assign(	"SHR",0);	return	SHR	;
"<="	assign(	"LTEQ",0);	return	LTEQ	;
">="	assign(	"GTEQ",0);	return	GTEQ	;
"=="	assign(	"EQEQ",0);	return	EQEQ	;
"!="	assign(	"NOTEQ",0);	return	NOTEQ	;
"&&"	assign(	"LOGAND",0);	return	LOGAND	;
"||"	assign(	"LOGOR",0);	return	LOGOR	;
"..."	assign(	"ELLIPSIS",0);	return	ELLIPSIS	;
"*="	assign(	"TIMESEQ",0);	return	TIMESEQ	;
"/="	assign(	"DIVEQ",0);	return	DIVEQ	;
"%="	assign(	"MODEQ",0);	return	MODEQ	;
"+="	assign(	"PLUSEQ",0);	return	PLUSEQ	;
"-="	assign(	"MINUSEQ",0);	return	MINUSEQ	;
"<<="	assign(	"SHLEQ",0);	return	SHLEQ	;
">>="	assign(	"SHREQ",0);	return	SHREQ	;
"&="	assign(	"ANDEQ",0);	return	ANDEQ	;
"|="	assign(	"OREQ",0);	return	OREQ	;
"^="	assign(	"XOREQ",0);	return	XOREQ	;




<STRING>{
\" yylval.str=extra.buffer; yylval.str[extra.position] = '\0'; yy_push_state(INITIAL); return STRING;
[\\]    yy_push_state(ESC);
[^\\\"]+ {
//            printf("yytext=%s, yylval.str=%s\n",yytext,yylval.str);
            strcpy(extra.buffer+extra.position,yytext);
            extra.position+=yyleng;
        }
}

<CHARLIT>{
\'  {
        extra.position = 1;
        yylval.str=extra.buffer;
        yylval.str[extra.position] = '\0';
        yy_push_state(INITIAL); 
        return CHARLIT;
    }
[\\]    yy_push_state(ESC);
[^\\\']+  strcpy(extra.buffer+extra.position,yytext); extra.position+=yyleng;
}


<ESC>{
[x][0-9a-fA-F]+   {
           // printf("in str hex: %s\n",yytext);
            long int l1;
            char *endP;
            char *sm;
            sm = (char*) malloc(sizeof(yytext)/sizeof(char));
            sprintf(sm,"%s",yytext+1);
           // printf("sm is: %s\n",sm);
            l1 = strtol(sm,&endP,16);
            if(l1>0xff)
                l1 = 0xff;
            extra.buffer[extra.position++] = l1;
            yy_pop_state();
        }  
[abfnrtvABFNRTV0\\\"\'] {
        if(yytext[0] == 'a' || yytext[0] == 'A')
            extra.buffer[extra.position++] = '\a';
        else if(yytext[0] == 'b' || yytext[0] == 'B')
            extra.buffer[extra.position++] = '\b';
         else if(yytext[0] == 'f' || yytext[0] == 'F')
            extra.buffer[extra.position++] = '\f';           
        else if(yytext[0] == 'n' || yytext[0] == 'N')
            extra.buffer[extra.position++] = '\n';           
        else if(yytext[0] == 'n' || yytext[0] == 'N')
            extra.buffer[extra.position++] = '\n';           
         else if(yytext[0] == 'r' || yytext[0] == 'R')
            extra.buffer[extra.position++] = '\r';                   
        else if(yytext[0] == 't' || yytext[0] == 'T')
            extra.buffer[extra.position++] = '\t';         
        else if(yytext[0] == 'v' || yytext[0] == 'V')
            extra.buffer[extra.position++] = '\v';           
        else if(yytext[0] == 'v' || yytext[0] == 'V')
            extra.buffer[extra.position++] = '\v';           
        else if(yytext[0] == '0')
            extra.buffer[extra.position++] = '\0';           
        else if(yytext[0] == '\\')
            extra.buffer[extra.position++] = '\\';           
        else if(yytext[0] == '\"')
            extra.buffer[extra.position++] = '\"';           
         else if(yytext[0] == '\'')
            extra.buffer[extra.position++] = '\'';                  

        yy_pop_state();
        }
[0-7]+  {
            long int l1;
            char *endP;
            l1 = strtol(yytext,&endP,8);
            if(l1>0xff)
                l1 = 0xff;
            extra.buffer[extra.position++] = (char)l1;
            yy_pop_state();
        }
       
.  {
        fprintf(stderr,"Unknown escape sequence: \\%s\n",yytext);
        sprintf(extra.buffer+extra.position,"\\%s",yytext); 
        extra.position+=2;   
        yy_pop_state();
    }
}

<INITIAL,STRING,CHARLIT>.   yy_push_state(INITIAL); fprintf(stderr,"Error: unknown token %s\n",yytext);

%%
void assign(char* text, int flag) { 
    strcpy(extra.buffer+extra.position,text);
    if(flag == 1)
       extra.position+=yyleng; 
    else
       extra.position+=strlen(text);
    
    yylval.str = extra.buffer;  
    yylval.str[extra.position] = '\0';  
}
