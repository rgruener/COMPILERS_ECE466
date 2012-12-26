/* Robert Gruener */
/* ECE466 Compilers */
/* parser.y */

%{
#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include "hash.h"
#include "tokens.h"
#include "symbol_table.h"
#include "ast.h"

extern int yylex();
extern int yyleng;
extern int line_number;
extern char filename[256];
extern FILE *yyin;
int yyerror(const char *p) {fprintf(stderr, "ERROR: unrecognized syntax: %s\n", p);}

int debug=0;
int print_ast=0;

struct sym_table *current_scope;
%}

%token <str> IDENT
%token <character> CHARLIT
%token <str> STRING
%token<integer> NUMBER
%token <str> INDSEL PLUSPLUS MINUSMINUS SHL SHR LTEQ GTEQ EQEQ NOTEQ LOGAND LOGOR ELLIPSIS TIMESEQ 
%token <str> DIVEQ MODEQ PLUSEQ MINUSEQ SHLEQ SHREQ ANDEQ OREQ XOREQ AUTO BREAK CASE CHAR CONST
%token <str> CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER
%token <str> RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF TYPEDEF_NAME UNION UNSIGNED
%token <str> VOID VOLATILE WHILE _BOOL _COMPLEX _IMAGINARY

%type<node> declaration declaration_specifiers initialized_declarator_list simple_declarator integer_type_specifier
%type<node> pointer_declarator pointer direct_declarator primary_expression array_declarator
%type<node> logical_or_expression logical_and_expression logical_negation_expression multiplicative_expression additive_expression
%type<node> bitwise_negation_expression inclusive_or_expression exclusive_or_expression and_expression equality_expression relational_expression
%type<node> shift_expression indirection_expression unary_plus_expression unary_minus_expression postdecrement_expression postincrement_expression
%type<node> preincrement_expression predecrement_expression address_expression constant_expression cast_expression function_declarator
%type<node> character_type_specifier storage_class_specifier type_specifier type_qualifier function_specifier declarator
%type<node> expression parenthesized_expression enumeration_type_specifier floating_point_specifier type_name union_type_specifier void_type_specifier
%type<node> initialized_declarator structure_type_specifier typedef_name bool_type_specifier

%start translation_unit

%% /* Grammar rules and actions follow */


declaration
        : declaration_specifiers initialized_declarator_list ';' {  $1->next = $2;
                                                                    $$ = ast_reverse_tree($1);
                                                                    if (print_ast){ast_print_tree($$);} }
        ;

declaration_specifiers
        : storage_class_specifier
        | storage_class_specifier declaration_specifiers
        | type_specifier
        | type_specifier declaration_specifiers
        | type_qualifier
        | type_qualifier declaration_specifiers
        | function_specifier
        | function_specifier declaration_specifiers
        ;

function_specifier
        : INLINE
        ;

initialized_declarator_list
        : initialized_declarator
        | initialized_declarator_list ',' initialized_declarator
        ;

initialized_declarator
        : declarator {if(debug)printf("declarator\n");}
        | declarator '=' initializer
        ;

storage_class_specifier
        : AUTO
        | EXTERN
        | REGISTER
        | STATIC
        | TYPEDEF
        ;

type_specifier
        : enumeration_type_specifier
        | floating_point_specifier
        | integer_type_specifier
        | structure_type_specifier
        | typedef_name
        | union_type_specifier
        | void_type_specifier
        ;

type_qualifier
        : CONST
        | VOLATILE
        | RESTRICT
        ;

declarator
        : pointer_declarator {if(debug)printf("pointer_declarator\n");}
        | direct_declarator {if(debug)printf("direct_declarator\n");}
        ;

direct_declarator
        : simple_declarator {if(debug)printf("simple_declarator\n");}
        | '(' declarator ')' {if(debug)printf("parenthasized_declarator\n"); $$ = $2;} 
        | function_declarator {if(debug)printf("function_declarator\n");}
        | array_declarator {if(debug)printf("array_declarator\n");}
        ;

simple_declarator
        : IDENT {   $$ = ast_newnode(AST_VAR);
                    strcpy($$->attributes.identifier, yylval.yystring);
                    $$->attributes.ln_effective = line_number;
                    insert_ident(current_scope, yylval.yystring, $$, NAMESPACE_OTHER);}
        ;

pointer_declarator
        : pointer direct_declarator {   $$ = ast_push_back($1,$2);ast_print_tree($1); } 
        ;

type_qualifier_list
        : type_qualifier
        | type_qualifier_list type_qualifier
        ;

array_declarator
        : direct_declarator '[' ']'    {   $$ = ast_newnode(AST_ARRAY);
                                                $$->next = $1;
                                                $$->attributes.size = -1;  } 
        | direct_declarator '[' constant_expression ']'     {   if ($3->type != AST_NUM){
                                                                    ast_print_syntax_error(filename, line_number);
                                                                } else {
                                                                    $$ = ast_newnode(AST_ARRAY);
                                                                    $$->next = $1;
                                                                    $$->attributes.size = $3->attributes.num; } }
        | direct_declarator '[' array_qualifier_list ']'     /*{   $$ = ast_newnode(AST_ARRAY);
                                                                    $$->prev = $1;  }*/
        | direct_declarator '[' array_size_expression ']'     /*{   $$ = ast_newnode(AST_ARRAY);
                                                                    $$->prev = $1;
                                                                    $$->attributes.size = $3;  }*/
        | direct_declarator '[' array_qualifier_list array_size_expression ']'  /*{   $$ = ast_newnode(AST_ARRAY);
                                                                                        $$->prev = $1;
                                                                                        $$->attributes.size = $4;  }*/
        | direct_declarator '[' array_qualifier_list '*' ']'    /*{   $$ = ast_newnode(AST_ARRAY);
                                                                        $$->prev = $1;
                                                                        $$->attributes.size = -1;  }*/
        ;

array_qualifier_list
        : array_qualifier
        | array_qualifier_list array_qualifier
        ;

array_qualifier
        : STATIC
        | RESTRICT
        | CONST
        | VOLATILE
        ;

array_size_expression
        : assignment_expression
        | '*'
        ;

initializer
        : assignment_expression
        | '{' initializer_list '}'
        | '{' initializer_list ',' '}'
        ;

initializer_list
        : initializer
        | initializer_list ',' initializer
        | designation initializer
        | initializer_list ',' designation initializer
        ;

designation
        : designator_list '='
        ;

designator_list
        : designator
        | designator_list designator
        ;

designator
        : '[' constant_expression ']'
        | '.' IDENT
        ;

integer_type_specifier
        : signed_type_specifier { $$ = ast_newnode(AST_SCALAR); 
                                    $$->attributes.num_signed = SIZE_SIGNED;
                                    $$->attributes.scalar_type = SCALAR_INT; }
        | unsigned_type_specifier { $$ = ast_newnode(AST_SCALAR); 
                                        $$->attributes.num_signed = SIZE_UNSIGNED;
                                        $$->attributes.scalar_type = SCALAR_INT; }
        | character_type_specifier
        | bool_type_specifier { $$ = ast_newnode(AST_SCALAR); 
                                        $$->attributes.num_signed = SIZE_SIGNED;
                                        $$->attributes.scalar_type = SCALAR_INT; }
        ;

signed_type_specifier
        : SHORT
        | SHORT INT
        | SIGNED SHORT
        | SIGNED SHORT INT
        | INT               
        | SIGNED INT
        | SIGNED
        | LONG
        | LONG INT
        | SIGNED LONG
        | SIGNED LONG INT
        | LONG LONG
        | LONG LONG INT
        | SIGNED LONG LONG
        | SIGNED LONG LONG INT
        ;

unsigned_type_specifier
        : UNSIGNED SHORT
        | UNSIGNED SHORT INT
        | UNSIGNED
        | UNSIGNED INT
        | UNSIGNED LONG
        | UNSIGNED LONG INT
        | UNSIGNED LONG LONG
        | UNSIGNED LONG LONG INT
        ;

character_type_specifier
        : CHAR { $$ = ast_newnode(AST_SCALAR); 
                                        $$->attributes.num_signed = SIZE_SIGNED;
                                        $$->attributes.scalar_type = SCALAR_CHAR; }
        | SIGNED CHAR { $$ = ast_newnode(AST_SCALAR); 
                                        $$->attributes.num_signed = SIZE_SIGNED;
                                        $$->attributes.scalar_type = SCALAR_CHAR; }
        | UNSIGNED CHAR { $$ = ast_newnode(AST_SCALAR); 
                                        $$->attributes.num_signed = SIZE_UNSIGNED;
                                        $$->attributes.scalar_type = SCALAR_CHAR; }
        ;

floating_point_specifier
        : FLOAT
        | DOUBLE
        | LONG DOUBLE
        | complex_type_specifier
        ;

complex_type_specifier
        : FLOAT _COMPLEX
        | DOUBLE _COMPLEX
        | LONG DOUBLE _COMPLEX
        ;

bool_type_specifier
        : _BOOL
        ;

enumeration_type_specifier
        : enumeration_type_definition
        | enumeration_type_reference
        ;

enumeration_type_definition
        : ENUM '{' enumeration_definition_list '}'
        | ENUM enumeration_tag '{' enumeration_definition_list '}'
        | ENUM '{' enumeration_definition_list ',' '}'
        | ENUM enumeration_tag '{' enumeration_definition_list ',' '}'
        ;

enumeration_type_reference
        : ENUM enumeration_tag
        ;

enumeration_tag
        : IDENT
        ;

enumeration_definition_list
        : enumeration_constant_definition
        | enumeration_definition_list ',' enumeration_constant_definition
        ;

enumeration_constant_definition
        : enumeration_constant
        | enumeration_constant '=' expression
        ;

enumeration_constant
        : IDENT
        ;

structure_type_specifier
        : structure_type_definition
        | structure_type_reference
        ;

structure_type_definition
        : STRUCT '{' field_list '}'
        | STRUCT structure_tag '{' field_list '}'
        ;

structure_type_reference
        : STRUCT structure_tag
        ;

structure_tag
        : IDENT
        ;

field_list
        : component_declaration
        | field_list component_declaration
        ;

component_declaration
        : type_specifier component_declaration_list ';'
        ;

component_declaration_list
        : component_declarator
        | component_declaration_list ',' component_declarator
        ;

component_declarator
        : simple_component
        | bit_field
        ;

simple_component
        : declarator
        ;

bit_field
        : ':' width
        | declarator ':' width
        ;

width
        : constant_expression
        ;

union_type_specifier
        : union_type_definition
        | union_type_reference
        ;

union_type_definition
        : UNION '{' field_list '}'
        | UNION union_tag '{' field_list '}'
        ;

union_type_reference
        : UNION union_tag
        ;

union_tag
        : IDENT
        ;

void_type_specifier
        : VOID
        ;

typedef_name
        : TYPEDEF_NAME
        ;

type_name
        : declaration_specifiers
        | declaration_specifiers abstract_declarator
        ;

abstract_declarator
        : pointer
        | direct_abstract_declarator
        | pointer direct_abstract_declarator
        ;

pointer
        : '*' { $$ = ast_newnode(AST_PTR); }
        | '*' type_qualifier_list { $$ = ast_newnode(AST_PTR); }
        | '*' type_qualifier_list pointer { $$ = ast_newnode(AST_PTR); $$->next = $3; }
        | '*' pointer { $$ = ast_newnode(AST_PTR); $$->next = $2; }
        ;

direct_abstract_declarator
        : '(' abstract_declarator ')'
        | '[' ']'
        | direct_abstract_declarator '[' ']'
        | direct_abstract_declarator '[' constant_expression ']'
        | '[' constant_expression ']'
        | '[' expression ']'
        |  direct_abstract_declarator '[' expression ']'
        | '[' '*' ']'
        | direct_abstract_declarator '[' '*' ']'
        | '(' ')'
        | direct_abstract_declarator '(' ')'
        | direct_abstract_declarator '(' parameter_type_list ')'
        | '(' parameter_type_list ')'
        ;

primary_expression
        : IDENT
        | NUMBER { $$ = ast_newnode(AST_NUM); $$->attributes.num = yylval.yyint; }
        | CHARLIT { $$ = ast_newnode(AST_CHAR); $$->attributes.num = (int)(yylval.yychar); }
        | STRING { $$ = ast_newnode(AST_STR); strcpy($$->attributes.str, yylval.yystring); }
        | parenthesized_expression
        ;

parenthesized_expression
        : '(' expression ')' { $$ = $2; }
        ;

postfix_expression
        : primary_expression
        | subscript_expression
        | component_selection_expression
        | function_call
        | postincrement_expression
        | postdecrement_expression
        | compound_literal
        ;

subscript_expression
        : postfix_expression '[' expression ']'
        ;

component_selection_expression
        : direct_component_selection
        | indirect_component_selection
        ;

direct_component_selection
        : postfix_expression '.' IDENT
        ;

indirect_component_selection
        : postfix_expression INDSEL IDENT
        ;

function_call
        : postfix_expression '(' ')'
        | postfix_expression '(' expression_list ')'
        ;

expression_list
        : assignment_expression
        | expression_list ',' assignment_expression
        ;

postincrement_expression
        : postfix_expression PLUSPLUS { $$ = ast_newnode(AST_UNOP); $$->attributes.op = PLUSPLUS; }
        ;

postdecrement_expression
        : postfix_expression MINUSMINUS { $$ = ast_newnode(AST_UNOP); $$->attributes.op = MINUSMINUS; }
        ;

compound_literal
        : '(' type_name ')' '{' initializer_list '}'
        | '(' type_name ')' '{' initializer_list ',' '}'
        ;

cast_expression
        : unary_expression
        | '(' type_name ')' cast_expression
        ;

unary_expression
        : postfix_expression
        | sizeof_expression
        | unary_minus_expression
        | unary_plus_expression
        | logical_negation_expression
        | bitwise_negation_expression
        | address_expression
        | indirection_expression
        | preincrement_expression
        | predecrement_expression
        ;

sizeof_expression
        : SIZEOF '(' type_name ')'
        | SIZEOF unary_expression
        ;

unary_minus_expression
        : '-' cast_expression { $$ = ast_newnode(AST_UNOP); $$->attributes.op = '-'; }
        ;

unary_plus_expression
        : '+' cast_expression  { $$ = ast_newnode(AST_UNOP); $$->attributes.op = '+'; }
        ;

logical_negation_expression
        : '!' cast_expression  { $$ = ast_newnode(AST_UNOP); $$->attributes.op = '!'; }
        ;

bitwise_negation_expression
        : '~' cast_expression { $$ = ast_newnode(AST_UNOP); $$->attributes.op = '~'; } 
        ;

address_expression
        : '&' cast_expression { $$ = ast_newnode(AST_UNOP); $$->attributes.op = '&'; }
        ;

indirection_expression
        : '*' cast_expression { $$ = ast_newnode(AST_UNOP); $$->attributes.op = '*'; }
        ;

preincrement_expression
        : PLUSPLUS unary_expression
        ;

predecrement_expression
        : MINUSMINUS unary_expression
        ;

multiplicative_expression
        : cast_expression
        | multiplicative_expression '*' cast_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '*'; 
                                                            $$->left=$1; $$->right=$3; }
        | multiplicative_expression '/' cast_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '/'; 
                                                            $$->left=$1; $$->right=$3; } 
        | multiplicative_expression '%' cast_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '%'; 
                                                            $$->left=$1; $$->right=$3; } 
        ;

additive_expression
        : multiplicative_expression
        | additive_expression '+' multiplicative_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '+'; 
                                                            $$->left=$1; $$->right=$3; } 
        | additive_expression '-' multiplicative_expression  { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '-'; 
                                                            $$->left=$1; $$->right=$3; }
        ;

shift_expression
        : additive_expression
        | shift_expression SHL additive_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = SHL; 
                                                            $$->left=$1; $$->right=$3; }
        | shift_expression SHR additive_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = SHR; 
                                                            $$->left=$1; $$->right=$3; }
        ;

relational_expression
        : shift_expression
        | relational_expression '<' shift_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '<'; 
                                                            $$->left=$1; $$->right=$3; }
        | relational_expression '>' shift_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '>'; 
                                                            $$->left=$1; $$->right=$3; }
        | relational_expression LTEQ shift_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = LTEQ; 
                                                            $$->left=$1; $$->right=$3; }
        | relational_expression GTEQ shift_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = GTEQ; 
                                                            $$->left=$1; $$->right=$3; }
        ;

equality_expression
        : relational_expression
        | equality_expression EQEQ relational_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = EQEQ; 
                                                            $$->left=$1; $$->right=$3; }
        | equality_expression NOTEQ relational_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = NOTEQ; 
                                                            $$->left=$1; $$->right=$3; }
        ;

and_expression
        : equality_expression
        | and_expression '&' equality_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '&'; 
                                                            $$->left=$1; $$->right=$3; }
        ;

exclusive_or_expression
        : and_expression
        | exclusive_or_expression '^' and_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '^'; 
                                                            $$->left=$1; $$->right=$3; }
        ;

inclusive_or_expression
        : exclusive_or_expression
        | inclusive_or_expression '|' exclusive_or_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = '|'; 
                                                            $$->left=$1; $$->right=$3; }
        ;

logical_and_expression
        : inclusive_or_expression
        | logical_and_expression LOGAND inclusive_or_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = LOGAND; 
                                                            $$->left=$1; $$->right=$3; }
        ;

logical_or_expression
        : logical_and_expression
        | logical_or_expression LOGOR logical_and_expression { $$ = ast_newnode(AST_BINOP); 
                                                            $$->attributes.op = LOGOR; 
                                                            $$->left=$1; $$->right=$3; }
        ;

conditional_expression
        : logical_or_expression
        | logical_or_expression '?' expression ':' conditional_expression { ast_print_syntax_error(filename, line_number); }
        ;

constant_expression
        : conditional_expression
        ;

/*constant_expression*/
        /*: constant_expression '?' expression ':' constant_expression*/
        /*| constant_expression LOGOR constant_expression*/
        /*| constant_expression LOGAND constant_expression*/
        /*| constant_expression '|' constant_expression*/
        /*| constant_expression '^' constant_expression*/
        /*| constant_expression '&' constant_expression*/
        /*| constant_expression EQEQ constant_expression*/
        /*| constant_expression NOTEQ constant_expression*/
        /*| constant_expression '<' constant_expression*/
        /*| constant_expression '>' constant_expression*/
        /*| constant_expression LTEQ constant_expression*/
        /*| constant_expression GTEQ constant_expression*/
        /*| constant_expression SHL constant_expression*/
        /*| constant_expression SHR constant_expression*/
        /*| constant_expression '+' constant_expression*/
        /*| constant_expression '-' constant_expression*/
        /*| constant_expression '*' constant_expression*/
        /*| constant_expression '/' constant_expression*/
        /*| constant_expression '%' constant_expression*/
        /*| cast_expression*/
        /*;*/


assignment_expression
        : constant_expression
        | unary_expression assignment_operator assignment_expression    {{ if (debug){fprintf(stderr, "assignment expression\n");} }}
        ;

assignment_operator
        : '='
        | TIMESEQ
        | DIVEQ
        | MODEQ
        | PLUSEQ
        | MINUSEQ
        | SHLEQ
        | SHREQ
        | ANDEQ
        | OREQ
        | XOREQ
        ;

expression
        : assignment_expression
        | expression ',' assignment_expression
        ;

statement
        : expression_statement    {{ if (debug){fprintf(stderr, "expression statement\n");} }}
        | labeled_statement    {{ if (debug){fprintf(stderr, "labeled statement\n");} }}
        | compound_statement    {   struct sym_table *new_scope = sym_table_new(filename, BLOCK_SCOPE, line_number, current_scope); 
                                        current_scope = new_scope;
                                        if (debug){fprintf(stderr, "compound statement\n");}}
        | conditional_statement    {{ if (debug){fprintf(stderr, "conditional statement\n");} }}
        | iterative_statement    {{ if (debug){fprintf(stderr, "iterative statement\n");} }}
        | switch_statement    {{ if (debug){fprintf(stderr, "switch statement\n");} }}
        | break_statement    {{ if (debug){fprintf(stderr, "break statement\n");} }}
        | continue_statement    {{ if (debug){fprintf(stderr, "continue statement\n");} }}
        | return_statement    {{ if (debug){fprintf(stderr, "return statement\n");} }}
        | goto_statement    {{ if (debug){fprintf(stderr, "goto statement\n");} }}
        | null_statement    {{ if (debug){fprintf(stderr, "null statement\n");} }}
        ;

expression_statement
        : expression ';'
        ;

labeled_statement
        : label ':' statement
        ;

label
        : named_label
        | case_label
        | default_label
        ;

compound_statement
        : '{' '}'
        | '{' { current_scope = sym_table_new(filename, BLOCK_SCOPE, line_number, current_scope); } 
            declaration_or_statement_list '}' { current_scope = sym_table_pop(current_scope); }
        ;

declaration_or_statement_list
        : declaration_or_statement
        | declaration_or_statement_list declaration_or_statement
        ;

declaration_or_statement
        : declaration    {{ if (debug){fprintf(stderr, "declaration\n");} }}
        | statement    {{ if (debug){fprintf(stderr, "statement\n");} }}
        ;

conditional_statement
        : if_statement
        | if_else_statement
        ;

if_statement
        : IF '(' expression ')'
        ;

if_else_statement
        : IF '(' expression ')' ELSE statement
        ;

iterative_statement
        : do_statement
        | while_statement
        | for_statement
        ;

do_statement
        : DO statement WHILE '(' expression ')' ';'
        ;

while_statement
        : WHILE '(' expression ')' statement
        ;

for_statement
        : FOR for_expressions statement
        ;

for_expressions
        : '(' ';' ';' ')'
        | '(' initial_clause ';' ';' ')'
        | '(' ';' expression ';' ')'
        | '(' ';' ';' expression ')'
        | '(' initial_clause ';' expression ';' ')'
        | '(' ';' expression ';' expression ')'
        | '(' initial_clause ';' expression ';' expression ')'
        ;

initial_clause
        : expression
        | declaration
        ;

switch_statement
        : SWITCH '(' expression ')' statement
        ;

case_label
        : CASE constant_expression
        ;

default_label
        : DEFAULT
        ;

break_statement
        : BREAK ';'
        ;
    
continue_statement
        : CONTINUE ';'
        ;

return_statement
        : RETURN ';'
        | RETURN expression ';'
        ;

goto_statement
        : GOTO named_label ';'
        ;

named_label
        : IDENT {insert_ident(current_scope, yylval.yystring, NULL, NAMESPACE_LABELS);}
        ;

null_statement
        : ';'
        ;

translation_unit
        : top_level_declaration    {{ if (debug){fprintf(stderr, "top_level_declaration\n");} }}
        | translation_unit top_level_declaration
        ;

top_level_declaration
        : declaration {{ if(debug){puts("declaration");}}}
        | function_definition {{ if(debug){puts("function_definition");}}}
        ;

function_definition
        : function_def_specifier '{' { current_scope = sym_table_new(filename, FUNCTION_SCOPE, line_number, current_scope); } 
            declaration_or_statement_list '}' { current_scope = sym_table_pop(current_scope); }
        ;

function_def_specifier
        : declarator
        | declaration_specifiers declarator
        | declarator declaration_list
        | declaration_specifiers declarator declaration_specifiers
        ;

declaration_list
        : declaration
        | declaration_list declaration
        ;

function_declarator
        : direct_declarator '(' parameter_type_list ')' { fprintf(stderr, "Warning: This compiler doesn't support function prototypes - %s: %d\n",
                                                                 filename, line_number); }
        | direct_declarator '(' ')' { ast_print_tree($1); $$ = ast_newnode(AST_FN); ast_push_back($$,$1); }
        | direct_declarator '(' identifier_list ')' { fprintf(stderr, "Warning: This compiler doesn't support function arguments - %s: %d\n",
                                                                filename, line_number); }
        ;

parameter_type_list
        : parameter_list
        | parameter_list ',' ELLIPSIS
        ;

parameter_list
        : parameter_declaration
        | parameter_list ',' parameter_declaration
        ;

parameter_declaration
        : declaration_specifiers declarator
        | declaration_specifiers
        | declaration_specifiers abstract_declarator
        ;

identifier_list
        : IDENT
        | identifier_list ',' IDENT
        ;

%%

int main(int argc, char** argv){
    char *infile;
    int c;
    
    while ((c=getopt(argc, argv, "da")) != -1){
        switch(c){
            case 'd':
                debug = 1;
                break;
            case 'a':
                print_ast = 1;
                break;
            default:
                fprintf(stderr, "invalid argument: %c\n", c);
                break;
        }

    }
    if (optind != argc){
        infile = argv[optind];
        yyin = fopen(argv[optind], "r");
    } else {
        strcpy(filename, "stdin");
        line_number=1;
        infile = "stdin";
        yyin = stdin;
    }
    current_scope = sym_table_new(infile, FILE_SCOPE, 1, NULL);
    yyparse();
    return 0;
}
