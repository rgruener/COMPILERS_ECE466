%option noyywrap
%{
// Robert Gruener
// Compilers ECE466
// Lexical Analysis
// lex.l

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tokens.h"
#include "parser.tab.h"

int line_number;
char filename[256];
char string_buffer[MAX_STRING_LITERAL];
char *string_buf_ptr;
%}

%x IN_COMMENT
%x IN_FILE_DIRECTIVE
%x IN_STRING
%x IN_CHAR
%%

"\[" {return '[';} /* Operators and Punctuators */
"\]" {return ']';}
"\(" {return '(';}
"\)" {return ')';}
"\{" {return '{';}
"\}" {return '}';}
"\." {return '.';}
"\&" {return '&';}
"\*" {return '*';}
"\+" {return '+';}
"\-" {return '-';}
"\~" {return '~';}
"\!" {return '!';}
"\/" {return '/';}
"\%" {return '%';}
"\<" {return '<';}
"\>" {return '>';}
"\^" {return '^';}
"\?" {return '?';}
"\:" {return ':';}
"\;" {return ';';}
"\=" {return '=';}
"\," {return ',';}
"\|" {return '|';}
"\-\>" {return INDSEL;}
"\++" {return PLUSPLUS;}
"--" {return MINUSMINUS;}
"\<\<" {return SHL;}
"\>\>" {return SHR;}
"\<=" {return LTEQ;}
"\>=" {return GTEQ;}
"==" {return EQEQ;}
"!=" {return NOTEQ;}
"&&" {return LOGAND;}
"\|\|" {return LOGOR;}
"\.\.\." {return ELLIPSIS;}
"\*=" {return TIMESEQ;}
"\/=" {return DIVEQ;}
"%=" {return MODEQ;}
"\+=" {return PLUSEQ;}
"-=" {return MINUSEQ;}
"\<\<=" {return SHLEQ;}
"\>\>=" {return SHREQ;}
"&=" {return ANDEQ;}
"\|=" {return OREQ;}
"^=" {return XOREQ;}
"auto" {return AUTO;}
"break" {return BREAK;}
"case" {return CASE;}
"char" {return CHAR;}
"const" {return CONST;}
"continue" {return CONTINUE;}
"default" {return DEFAULT;}
"do" {return DO;}
"double" {return DOUBLE;}
"else" {return ELSE;}
"enum" {return ENUM;}
"extern" {return EXTERN;}
"float" {return FLOAT;}
"for" {return FOR;}
"goto" {return GOTO;}
"if" {return IF;}
"int" {return INT;}
"inline" {return INLINE;}
"long" {return LONG;}
"register" {return REGISTER;}
"restrict" {return RESTRICT;}
"return" {return RETURN;}
"short" {return SHORT;}
"signed" {return SIGNED;}
"sizeof" {return SIZEOF;}
"static" {return STATIC;}
"struct" {return STRUCT;}
"switch" {return SWITCH;}
"typedef" {return TYPEDEF;}
"union" {return UNION;}
"unsigned" {return UNSIGNED;}
"void" {return VOID;}
"volatile" {return VOLATILE;}
"while" {return WHILE;}
"_Bool" {return _BOOL;}
"_Complex" {return _COMPLEX;}
"_Imaginary" {return _IMAGINARY;}
"\n" {line_number++;}
[_A-Za-z][_A-Za-z0-9]* {yylval.yystring = yytext; return IDENT;}
L?\' {BEGIN(IN_CHAR); string_buf_ptr = string_buffer;} /* Char Literals */
<IN_CHAR>{
\' {BEGIN(0); *string_buf_ptr = '\0'; return CHARLIT;}
\n {/* error - unterminated string constand */;}
\\0 {*string_buf_ptr++='\0';}
\\a {*string_buf_ptr++='\a';}
\\b {*string_buf_ptr++='\b';}
\\f {*string_buf_ptr++='\f';}
\\n {*string_buf_ptr++='\n';}
\\r {*string_buf_ptr++='\r';}
\\t {*string_buf_ptr++='\t';}
\\v {*string_buf_ptr++='\v';}
\\\" {*string_buf_ptr++='\"';}
\\\\ {*string_buf_ptr++='\\';}
\\[0-7]{1,3} {
        unsigned int result;
        (void) sscanf( yytext+1, "%o", &result);
        if (result > 0xff){
            fprintf(stderr, "%s:%d:Warning:Hex escape sequence %s out of range", filename, line_number, yytext);
            result = '\377';
        }
        *string_buf_ptr++ = result;
    }
\\x[0-9a-fA-F]+ {
        int result;
        (void) sscanf( yytext+2, "%x", &result);
        if (result > 0xff){
            fprintf(stderr, "%s:%d:Warning:Hex escape sequence %s out of range", filename, line_number, yytext);
            result = '\377';
        }
        *string_buf_ptr++ = result;
    }
\\(.|\n) {*string_buf_ptr++ = yytext[1];}
[^\\\'\n]* {
        char *yptr = yytext;
        while (*yptr)
            *string_buf_ptr++ = *yptr++;
    }
}
L?\" {string_buf_ptr=string_buffer; BEGIN(IN_STRING);} /* String Literals */
<IN_STRING>{
\" {BEGIN(0); *string_buf_ptr = '\0'; return STRING;}
\n {/* error - unterminated string constand */;}
\\0 {*string_buf_ptr++='\0';}
\\a {*string_buf_ptr++='\a';}
\\b {*string_buf_ptr++='\b';}
\\f {*string_buf_ptr++='\f';}
\\n {*string_buf_ptr++='\n';}
\\r {*string_buf_ptr++='\r';}
\\t {*string_buf_ptr++='\t';}
\\v {*string_buf_ptr++='\v';}
\\\" {*string_buf_ptr++='\"';}
\\\\ {*string_buf_ptr++='\\';}
\\[0-7]{1,3} {
        int result;
        (void) sscanf( yytext+1, "%o", &result);
        if (result > 0xff){
            fprintf(stderr, "%s:%d:Warning:Octal escape sequence %s out of range\n", filename, line_number, yytext);
            result = '\377';
        }
        *string_buf_ptr++ = result;
    }
\\x[0-9a-fA-F]+ {
        int result;
        (void) sscanf( yytext+2, "%x", &result);
        if (result > 0xff){
            fprintf(stderr, "%s:%d:Warning:Hex escape sequence %s out of range\n", filename, line_number, yytext);
            result = '\377';
        }
        *string_buf_ptr++ = result;
    }
\\(.|\n) {*string_buf_ptr++ = yytext[1];}
[^\\\"\n]* {
        char *yptr = yytext;
        while (*yptr)
            *string_buf_ptr++ = *yptr++;
    }
}
[1-9][0-9]* { /* DECIMAL INTEGER CONSTANTS */
        yylval.n_size = SIZE_INT;
        yylval.n_signed = SIZE_SIGNED;
        (void) sscanf(yytext, "%llu", &yylval.yyint);
        return NUMBER;
    }
[1-9][0-9]*[uU] {
        yylval.n_size = SIZE_INT;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%llu", &yylval.yyint);
        return NUMBER;
    }
[1-9][0-9]*[lL] {
        yylval.n_size = SIZE_LONG;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%llu", &yylval.yyint);
        return NUMBER;
    }
[1-9][0-9]*(ll|LL) {
        yylval.n_size = SIZE_LONGLONG;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-2] = '\0';
        (void) sscanf(yytext, "%llu", &yylval.yyint);
        return NUMBER;
    }
[1-9][0-9]*([lL][uU])|([uU][lL]) {
        yylval.n_size = SIZE_LONG;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-2] = '\0';
        (void) sscanf(yytext, "%llu", &yylval.yyint);
        return NUMBER;
    }
[1-9][0-9]*((ll|LL)[uU])|([uU](ll|LL)) {
        yylval.n_size = SIZE_LONGLONG;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-3] = '\0';
        (void) sscanf(yytext, "%llu", &yylval.yyint);
        return NUMBER;
    } /* END DECIMAL INTEGER CONSTANTS */
0[0-7]* { /* OCTAL INTEGER CONSTANTS */
        yylval.n_size = SIZE_INT;
        yylval.n_signed = SIZE_SIGNED;
        (void) sscanf(yytext, "%llo", &yylval.yyint);
        return NUMBER;
    }
0[0-7]*[uU] {
        yylval.n_size = SIZE_INT;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%llo", &yylval.yyint);
        return NUMBER;
    }
0[0-7]*[lL] {
        yylval.n_size = SIZE_LONG;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%llo", &yylval.yyint);
        return NUMBER;
    }
0[0-7]*(ll|LL) {
        yylval.n_size = SIZE_LONGLONG;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-2] = '\0';
        (void) sscanf(yytext, "%llo", &yylval.yyint);
        return NUMBER;
    }
0[0-7]*([lL][uU])|([uU][lL]) {
        yylval.n_size = SIZE_LONG;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-2] = '\0';
        (void) sscanf(yytext, "%llo", &yylval.yyint);
        return NUMBER;
    }
0[0-7]*((ll|LL)[uU])|([uU](ll|LL)) {
        yylval.n_size = SIZE_LONGLONG;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-3] = '\0';
        (void) sscanf(yytext, "%llo", &yylval.yyint);
        return NUMBER;
    } /* END OCTAL INTEGER CONSTANTS */
0x[0-9a-fA-F]* { /* HEX INTEGER CONSTANTS */
        yylval.n_size = SIZE_INT;
        yylval.n_signed = SIZE_SIGNED;
        (void) sscanf(yytext, "%llx", &yylval.yyint);
        return NUMBER;
    }
0x[0-9a-fA-F]*[uU] {
        yylval.n_size = SIZE_INT;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%llx", &yylval.yyint);
        return NUMBER;
    }
0x[0-9a-fA-F]*[lL] {
        yylval.n_size = SIZE_LONG;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%llx", &yylval.yyint);
        return NUMBER;
    }
0x[0-9a-fA-F]*(ll|LL) {
        yylval.n_size = SIZE_LONGLONG;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-2] = '\0';
        (void) sscanf(yytext, "%llx", &yylval.yyint);
        return NUMBER;
    }
0x[0-9a-fA-F]*([lL][uU])|([uU][lL]) {
        yylval.n_size = SIZE_LONG;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-2] = '\0';
        (void) sscanf(yytext, "%llx", &yylval.yyint);
        return NUMBER;
    }
0x[0-9a-fA-F]*((ll|LL)[uU])|([uU](ll|LL)) {
        yylval.n_size = SIZE_LONGLONG;
        yylval.n_signed = SIZE_UNSIGNED;
        yytext[yyleng-3] = '\0';
        (void) sscanf(yytext, "%llx", &yylval.yyint);
        return NUMBER;
    } /* END HEX INTEGER CONSTANTS */
[0-9]*\.[0-9]* { /* DECIMAL REAL CONSTANTS */
        yylval.n_size = SIZE_DOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
[0-9]*\.[0-9]*[fF] {
        yylval.n_size = SIZE_FLOAT;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
[0-9]*\.[0-9]*[lL] {
        yylval.n_size = SIZE_LONGDOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
[0-9]*\.[0-9]*[eE][\+\-]?[0-9]+ {
        yylval.n_size = SIZE_DOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
[0-9]*\.[0-9]*[eE][\+\-]?[0-9]+[fF] {
        yylval.n_size = SIZE_FLOAT;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
[0-9]*\.[0-9]*[eE][\+\-]?[0-9]+[lL] {
        yylval.n_size = SIZE_LONGDOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
[0-9]+[eE][\+\-]?[0-9]+ {
        yylval.n_size = SIZE_DOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
[0-9]+[eE][\+\-]?[0-9]+[fF] {
        yylval.n_size = SIZE_FLOAT;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
[0-9]+[eE][\+\-]?[0-9]+[lL] {
        yylval.n_size = SIZE_LONGDOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    } /* END DECIMAL REAL CONSTANTS */
0[xX]([0-9a-fA-F]*)?\.[0-9a-fA-F]+[pP][\+\-]?[0-9]* { /* HEX REAL CONSTANTS */
        yylval.n_size = SIZE_DOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
0[xX]([0-9a-fA-F]*)?\.[0-9a-fA-F]+[pP][\+\-]?[0-9]*[fF] {
        yylval.n_size = SIZE_FLOAT;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
0[xX]([0-9a-fA-F]*)?\.[0-9a-fA-F]+[pP][\+\-]?[0-9]*[lL] {
        yylval.n_size = SIZE_LONGDOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
0[xX][0-9a-fA-F]+[pP][\+\-]?[0-9]* {
        yylval.n_size = SIZE_DOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
0[xX][0-9a-fA-F]+[pP][\+\-]?[0-9]*[fF] {
        yylval.n_size = SIZE_FLOAT;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    }
0[xX][0-9a-fA-F]+[pP][\+\-]?[0-9]*[lL] {
        yylval.n_size = SIZE_LONGDOUBLE;
        yylval.n_signed = SIZE_SIGNED;
        yytext[yyleng-1] = '\0';
        (void) sscanf(yytext, "%Lg", &yylval.yydouble);
        return NUMBER;
    } /* END HEX REAL CONSTANTS */

"\#" {BEGIN(IN_FILE_DIRECTIVE);} /* Preprocessing Line Number and Filename */
<IN_FILE_DIRECTIVE>{
"\n" {BEGIN(0);}
[0-9]+ {line_number=atoi(yytext);}
L?\"(\\.|[^\\\"])*\" {strncpy(filename, yytext+1, strlen(yytext)-2);filename[strlen(yytext)-2]='\0';}
.
}

%%

char oct_to_dec(char *oct){
}

int print_chars(char *str, char *end){
    while (str != end){
        switch (*str){
            case '\0':
                printf("\\0");
                break;
            case '\\':
                printf("\\\\");
                break;
            case '\'':
                printf("\\\'");
                break;
            case '\"':
                printf("\\\"");
                break;
            case '\a':
                printf("\\a");
                break;
            case '\b':
                printf("\\b");
                break;
            case '\f':
                printf("\\f");
                break;
            case '\n':
                printf("\\n");
                break;
            case '\t':
                printf("\\t");
                break;
            case '\r':
                printf("\\r");
                break;
            case '\v':
                printf("\\v");
                break;
            default:
                if (*str > 126 || *str < 32){
                    printf("\\%03o", (unsigned char)*str);
                } else {
                    printf("%c", *str);
                }
                break;
        }
        str++;
    }
    printf("\n");
    return 0;
}

/*main(){*/
	/*line_number = 1;*/
    /*strcpy(filename, "<stdin>");*/
	/*enum tokens tok;*/
    /*const char * number_types[] = {*/
        /*"INT",*/
        /*"LONG",*/
        /*"LONGLONG",*/
        /*"FLOAT",*/
        /*"DOUBLE",*/
        /*"LONGDOUBLE"*/
    /*};*/
    /*const char * token_names[] = {*/
		/*"IDENT",*/
		/*"CHARLIT",*/
		/*"STRING",*/
		/*"NUMBER",*/
		/*"INDSEL",*/
		/*"PLUSPLUS",*/
		/*"MINUSMINUS",*/
		/*"SHL",*/
		/*"SHR",*/
		/*"LTEQ",*/
		/*"GTEQ",*/
		/*"EQEQ",*/
		/*"NOTEQ",*/
		/*"LOGAND",*/
		/*"LOGOR",*/
		/*"ELLIPSIS",*/
		/*"TIMESEQ",*/
		/*"DIVEQ",*/
		/*"MODEQ",*/
		/*"PLUSEQ",*/
		/*"MINUSEQ",*/
		/*"SHLEQ",*/
		/*"SHREQ",*/
		/*"ANDEQ",*/
		/*"OREQ",*/
		/*"XOREQ",*/
		/*"AUTO",*/
		/*"BREAK",*/
		/*"CASE",*/
		/*"CHAR",*/
		/*"CONST",*/
		/*"CONTINUE",*/
		/*"DEFAULT",*/
		/*"DO",*/
		/*"DOUBLE",*/
		/*"ELSE",*/
		/*"ENUM",*/
		/*"EXTERN",*/
		/*"FLOAT",*/
		/*"FOR",*/
		/*"GOTO",*/
		/*"IF",*/
		/*"INLINE",*/
		/*"INT",*/
		/*"LONG",*/
		/*"REGISTER",*/
		/*"RESTRICT",*/
		/*"RETURN",*/
		/*"SHORT",*/
		/*"SIGNED",*/
		/*"SIZEOF",*/
		/*"STATIC",*/
		/*"STRUCT",*/
		/*"SWITCH",*/
		/*"TYPEDEF",*/
		/*"UNION",*/
		/*"UNSIGNED",*/
		/*"VOID",*/
		/*"VOLATILE",*/
		/*"WHILE",*/
		/*"_BOOL",*/
		/*"_COMPLEX",*/
		/*"_IMAGINARY"*/
    /*};*/
	/*while (tok=yylex()){*/
        /*if (tok < 257){*/
            /*printf("%s\t%d\t%c\n", filename, line_number, tok);  */
        /*} */
        /*else {*/
            /*switch(tok){*/
                /*case TOKEOF:*/
                    /*printf("%s\t%d\tTOKEOF\n", filename, line_number);*/
                    /*break;*/
                /*case IDENT:*/
                    /*printf("%s\t%d\tIDENT\t%s\n", filename, line_number, yylval.yystring);*/
                    /*break;*/
                /*case CHARLIT:*/
                    /*printf("%s\t%d\tCHARLIT\t", filename, line_number);*/
                    /*if (string_buf_ptr - string_buffer > 1){*/
                        /*fprintf(stderr, "%s:%d:Warning:Unsupported multibyte character literal truncated to first byte\n", filename, line_number);*/
                    /*}*/
                    /*print_chars(string_buffer, string_buffer+1);*/
                    /*break;*/
                /*case STRING:*/
                    /*printf("%s\t%d\tSTRING\t", filename, line_number);*/
                    /*print_chars(string_buffer, string_buf_ptr);*/
                    /*break;*/
                /*case NUMBER:*/
                    /*printf("%s\t%d\tNUMBER", filename, line_number);*/
                    /*if (yylval.n_size < 3){*/
                        /*printf("\tINTEGER\t%lld\t", yylval.yyint);*/
                    /*} else {*/
                        /*printf("\tREAL\t%Lg\t", yylval.yydouble);*/
                    /*}*/
                    /*if (yylval.n_size < 3 && yylval.n_signed == SIZE_UNSIGNED){*/
                        /*printf("UNSIGNED,");*/
                    /*}*/
                    /*printf("%s\n", number_types[yylval.n_size]);*/
                    /*break;*/
                /*default:*/
                    /*printf("%s\t%d\t%s\n", filename, line_number, token_names[tok-IDENT]);  */
                    /*break;*/
            /*}	*/
        /*}*/
	/*}*/
	/*printf("EOF\n");*/
/*}*/

