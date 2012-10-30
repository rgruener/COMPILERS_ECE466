/* Robert Gruener */
/* ECE466 Compilers */
/* parser.y */

%{
#include <math.h>
#include <stdio.h>
#include "tokens.h"
#include "hash.h"

extern int yylex();
extern int yyleng;
int yyerror(const char *p) {fprintf(stderr, "ERROR");}
%}

%token <str> IDENT
%token <character> CHARLIT
%token <str> STRING
%token<integer> NUMBER
%token <str> INDSEL PLUSPLUS MINUSMINUS SHL SHR LTEQ GTEQ EQEQ NOTEQ LOGAND LOGOR ELLIPSIS TIMESEQ 
%token <str> DIVEQ MODEQ PLUSEQ MINUSEQ SHLEQ SHREQ ANDEQ OREQ XOREQ AUTO BREAK CASE CHAR CONST
%token <str> CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INLINE INT LONG REGISTER
%token <str> RESTRICT RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED
%token <str> VOID VOLATILE WHILE _BOOL _COMPLEX _IMAGINARY

/*%type <integer> exp*/

%left INLINE
%left SIGNED UNSIGNED
%left LONG SHORT
%left INT DOUBLE FLOAT CHAR
%left CONST RESTRICT VOLATILE

%left ','
%right '=' PLUSEQ MINUSEQ TIMESEQ DIVEQ MODEQ SHLEQ SHREQ ANDEQ XOREQ OREQ
%right '?' ':'
%left LOGOR
%left LOGAND
%left '|'
%left '^'
%left '&'
%left EQEQ NOTEQ
%left '<' '>' LTEQ GTEQ
%left SHL SHR
%left '+' '-'
%left '*' '/' '%'
%left INDSEL
%left '.'
%nonassoc IDENT NUMBER STRING CHARLIT


%% /* Grammar rules and actions follow */


declaration
        : declaration_specifiers initialized_declarator_list ';'
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
        : declarator
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
        : pointer_declarator
        | direct_declarator
        ;

direct_declarator
        : simple_declarator
        | '(' declarator ')'
        | function_declarator
        | array_declarator
        ;

simple_declarator
        : IDENT
        ;

pointer_declarator
        : pointer direct_declarator
        ;

pointer
        : '*'
        | '*' type_qualifier_list
        | '*' type_qualifier_list pointer
        | '*' pointer
        ;

type_qualifier_list
        : type_qualifier
        | type_qualifier_list type_qualifier
        ;

array_declarator
        : direct_declarator '[' ']'
        | direct_declarator '[' constant_expression ']'
        | direct_declarator '[' array_qualifier_list ']'
        | direct_declarator '[' array_size_expression ']'
        | direct_declarator '[' array_qualifier_list array_size_expression ']'
        | direct_declarator '[' '*' ']'
        | direct_declarator '[' array_qualifier_list '*' ']'
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
        : signed_type_specifier
        | unsigned_type_specifier
        | character_type_specifier
        | bool_type_specifier
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
        : CHAR
        | SIGNED CHAR
        | UNSIGNED CHAR
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
        : IDENT
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
        : '*'
        | type_qualifier_list
        | '*' pointer
        | '*' type_qualifier_list pointer
        ;

type_qualifier_list
        : type_qualifier
        | type_qualifier_list type_qualifier
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
        | NUMBER
        | STRING
        | parenthesized_expression
        ;

parenthesized_expression
        : '(' expression ')'
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
        : postfix_expression PLUSPLUS
        ;

postdecrement_expression
        : postfix_expression MINUSMINUS
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
        : '-' cast_expression
        ;

unary_plus_expression
        : '+' cast_expression
        ;

logical_negation_expression
        : '!' cast_expression
        ;

bitwise_negation_expression
        : '~' cast_expression
        ;

address_expression
        : '&' cast_expression
        ;

indirection_expression
        : '*' cast_expression
        ;

preincrement_expression
        : PLUSPLUS unary_expression
        ;

predecrement_expression
        : MINUSMINUS unary_expression
        ;

multiplicative_expression
        : cast_expression
        | multiplicative_expression '*' cast_expression
        | multiplicative_expression '/' cast_expression
        | multiplicative_expression '%' cast_expression
        ;

additive_expression
        : multiplicative_expression
        | additive_expression '+' multiplicative_expression
        | additive_expression '-' multiplicative_expression
        ;

shift_expression
        : additive_expression
        | shift_expression SHL additive_expression
        | shift_expression SHR additive_expression
        ;

relational_expression
        : shift_expression
        | relational_expression '<' shift_expression
        | relational_expression '>' shift_expression
        | relational_expression LTEQ shift_expression
        | relational_expression GTEQ shift_expression
        ;

equality_expression
        : relational_expression
        | equality_expression EQEQ relational_expression
        | equality_expression NOTEQ relational_expression
        ;

and_expression
        : equality_expression
        | and_expression '&' equality_expression
        ;

exclusive_or_expression
        : and_expression
        | exclusive_or_expression '^' and_expression
        ;

inclusive_or_expression
        : exclusive_or_expression
        | inclusive_or_expression '|' exclusive_or_expression
        ;

logical_and_expression
        : inclusive_or_expression
        | logical_and_expression LOGAND inclusive_or_expression
        ;

logical_or_expression
        : logical_and_expression
        | logical_or_expression LOGOR logical_and_expression
        ;

conditional_expression
        : logical_or_expression
        | logical_or_expression '?' expression ':' conditional_expression
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
        /*| */
        /*;*/


assignment_expression
        : conditional_expression
        | unary_expression assignment_operator assignment_expression
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
        : expression_statement
        | labeled_statement
        | compound_statement
        | conditional_statement
        | iterative_statement
        | switch_statement
        | break_statement
        | continue_statement
        | return_statement
        | goto_statement
        | null_statement
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
        | '{' declatation_or_statement_list '}'
        ;

declatation_or_statement_list
        : declaration_or_statement
        | declatation_or_statement_list declaration_or_statement
        ;

declaration_or_statement
        : declaration
        | statement
        ;

conditional_statement
        : if_statement
        | if_else_statement
        ;

if_statement
        : IF '(' expression ')' statement
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
        : IDENT
        ;

null_statement
        : ';'
        ;

translation_unit
        : top_level_declaration
        | translation_unit top_level_declaration
        ;

top_level_declaration
        : declaration
        | function_definition
        ;

function_definition
        : function_def_specifier compound_statement
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
        : direct_declarator '(' parameter_type_list ')'
        | direct_declarator '(' ')'
        | direct_declarator '(' identifier_list ')'
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

/*
input: 
     | input line
     ;

line: '\n'
    | exp '\n'  {printf("end: %lld\n",$1);}
    ;

exp: '(' exp ')'  {$$ = $2;}
    |   NUMBER  {$$ = $1;}
    | exp '+' exp { $$ = $1 + $3; printf("end: %lld\n",$$);}
    | exp '-' exp { $$ = $1 - $3; }
    | exp '*' exp { $$ = $1 * $3; }
    | exp '/' exp { $$ = $1 / $3; }
    ;
*/

%%

int main(){
    yyparse();
    return 0;
}
