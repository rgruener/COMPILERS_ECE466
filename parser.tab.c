/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 5 "parser.y"

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


/* Line 268 of yacc.c  */
#line 94 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     CHARLIT = 259,
     STRING = 260,
     NUMBER = 261,
     INDSEL = 262,
     PLUSPLUS = 263,
     MINUSMINUS = 264,
     SHL = 265,
     SHR = 266,
     LTEQ = 267,
     GTEQ = 268,
     EQEQ = 269,
     NOTEQ = 270,
     LOGAND = 271,
     LOGOR = 272,
     ELLIPSIS = 273,
     TIMESEQ = 274,
     DIVEQ = 275,
     MODEQ = 276,
     PLUSEQ = 277,
     MINUSEQ = 278,
     SHLEQ = 279,
     SHREQ = 280,
     ANDEQ = 281,
     OREQ = 282,
     XOREQ = 283,
     AUTO = 284,
     BREAK = 285,
     CASE = 286,
     CHAR = 287,
     CONST = 288,
     CONTINUE = 289,
     DEFAULT = 290,
     DO = 291,
     DOUBLE = 292,
     ELSE = 293,
     ENUM = 294,
     EXTERN = 295,
     FLOAT = 296,
     FOR = 297,
     GOTO = 298,
     IF = 299,
     INLINE = 300,
     INT = 301,
     LONG = 302,
     REGISTER = 303,
     RESTRICT = 304,
     RETURN = 305,
     SHORT = 306,
     SIGNED = 307,
     SIZEOF = 308,
     STATIC = 309,
     STRUCT = 310,
     SWITCH = 311,
     TYPEDEF = 312,
     TYPEDEF_NAME = 313,
     UNION = 314,
     UNSIGNED = 315,
     VOID = 316,
     VOLATILE = 317,
     WHILE = 318,
     _BOOL = 319,
     _COMPLEX = 320,
     _IMAGINARY = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 201 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  102
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1855

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  133
/* YYNRULES -- Number of rules.  */
#define YYNRULES  334
/* YYNRULES -- Number of states.  */
#define YYNSTATES  503

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,     2,     2,    85,    83,     2,
      70,    71,    74,    80,    68,    79,    77,    84,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    67,
      86,    69,    87,    90,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    89,    76,    82,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    14,    17,    19,    22,
      24,    27,    29,    31,    35,    37,    41,    43,    45,    47,
      49,    51,    53,    55,    57,    59,    61,    63,    65,    67,
      69,    71,    73,    75,    77,    81,    83,    85,    87,    90,
      92,    95,    99,   104,   109,   114,   120,   126,   128,   131,
     133,   135,   137,   139,   141,   143,   145,   149,   154,   156,
     160,   163,   168,   171,   173,   176,   180,   183,   185,   187,
     189,   191,   193,   196,   199,   203,   205,   208,   210,   212,
     215,   218,   222,   225,   229,   233,   238,   241,   245,   247,
     250,   253,   257,   261,   266,   268,   271,   274,   276,   278,
     281,   283,   286,   289,   293,   295,   297,   299,   304,   310,
     316,   323,   326,   328,   330,   334,   336,   340,   342,   344,
     346,   351,   357,   360,   362,   364,   367,   371,   373,   377,
     379,   381,   383,   386,   390,   392,   394,   396,   401,   407,
     410,   412,   414,   416,   418,   421,   423,   425,   428,   430,
     433,   437,   440,   444,   447,   451,   456,   460,   464,   469,
     473,   478,   481,   485,   490,   494,   496,   498,   500,   502,
     504,   508,   510,   512,   514,   516,   518,   520,   522,   527,
     529,   531,   535,   539,   543,   548,   550,   554,   557,   560,
     567,   575,   577,   582,   584,   586,   588,   590,   592,   594,
     596,   598,   600,   602,   607,   610,   613,   616,   619,   622,
     625,   628,   631,   634,   636,   640,   644,   648,   650,   654,
     658,   660,   664,   668,   670,   674,   678,   682,   686,   688,
     692,   696,   698,   702,   704,   708,   710,   714,   716,   720,
     722,   726,   728,   734,   736,   738,   742,   744,   746,   748,
     750,   752,   754,   756,   758,   760,   762,   764,   766,   770,
     772,   774,   776,   778,   780,   782,   784,   786,   788,   790,
     792,   795,   799,   801,   803,   805,   808,   809,   814,   816,
     819,   821,   823,   825,   827,   832,   839,   841,   843,   845,
     853,   859,   863,   868,   874,   880,   886,   893,   900,   908,
     910,   912,   918,   921,   923,   926,   929,   932,   936,   940,
     942,   944,   946,   949,   951,   953,   954,   960,   962,   965,
     968,   972,   974,   977,   982,   986,   991,   993,   997,   999,
    1003,  1006,  1008,  1011,  1013
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     213,     0,    -1,    93,    95,    67,    -1,    97,    -1,    97,
      93,    -1,    98,    -1,    98,    93,    -1,    99,    -1,    99,
      93,    -1,    94,    -1,    94,    93,    -1,    45,    -1,    96,
      -1,    95,    68,    96,    -1,   100,    -1,   100,    69,   109,
      -1,    29,    -1,    40,    -1,    48,    -1,    54,    -1,    57,
      -1,   121,    -1,   118,    -1,   114,    -1,   128,    -1,   144,
      -1,   139,    -1,   143,    -1,    33,    -1,    62,    -1,    49,
      -1,   103,    -1,   101,    -1,   102,    -1,    70,   100,    71,
      -1,   219,    -1,   105,    -1,     3,    -1,   147,   101,    -1,
      99,    -1,   104,    99,    -1,   101,    72,    73,    -1,   101,
      72,   183,    73,    -1,   101,    72,   106,    73,    -1,   101,
      72,   108,    73,    -1,   101,    72,   106,   108,    73,    -1,
     101,    72,   106,    74,    73,    -1,   107,    -1,   106,   107,
      -1,    54,    -1,    49,    -1,    33,    -1,    62,    -1,   184,
      -1,    74,    -1,   184,    -1,    75,   110,    76,    -1,    75,
     110,    68,    76,    -1,   109,    -1,   110,    68,   109,    -1,
     111,   109,    -1,   110,    68,   111,   109,    -1,   112,    69,
      -1,   113,    -1,   112,   113,    -1,    72,   183,    73,    -1,
      77,     3,    -1,   115,    -1,   116,    -1,   117,    -1,   120,
      -1,    51,    -1,    51,    46,    -1,    52,    51,    -1,    52,
      51,    46,    -1,    46,    -1,    52,    46,    -1,    52,    -1,
      47,    -1,    47,    46,    -1,    52,    47,    -1,    52,    47,
      46,    -1,    47,    47,    -1,    47,    47,    46,    -1,    52,
      47,    47,    -1,    52,    47,    47,    46,    -1,    60,    51,
      -1,    60,    51,    46,    -1,    60,    -1,    60,    46,    -1,
      60,    47,    -1,    60,    47,    46,    -1,    60,    47,    47,
      -1,    60,    47,    47,    46,    -1,    32,    -1,    52,    32,
      -1,    60,    32,    -1,    41,    -1,    37,    -1,    47,    37,
      -1,   119,    -1,    41,    65,    -1,    37,    65,    -1,    47,
      37,    65,    -1,    64,    -1,   122,    -1,   123,    -1,    39,
      75,   125,    76,    -1,    39,   124,    75,   125,    76,    -1,
      39,    75,   125,    68,    76,    -1,    39,   124,    75,   125,
      68,    76,    -1,    39,   124,    -1,     3,    -1,   126,    -1,
     125,    68,   126,    -1,   127,    -1,   127,    69,   186,    -1,
       3,    -1,   129,    -1,   130,    -1,    55,    75,   132,    76,
      -1,    55,   131,    75,   132,    76,    -1,    55,   131,    -1,
       3,    -1,   133,    -1,   132,   133,    -1,    98,   134,    67,
      -1,   135,    -1,   134,    68,   135,    -1,   136,    -1,   137,
      -1,   100,    -1,    78,   138,    -1,   100,    78,   138,    -1,
     183,    -1,   140,    -1,   141,    -1,    59,    75,   132,    76,
      -1,    59,   142,    75,   132,    76,    -1,    59,   142,    -1,
       3,    -1,    61,    -1,    58,    -1,    93,    -1,    93,   146,
      -1,   147,    -1,   148,    -1,   147,   148,    -1,    74,    -1,
      74,   104,    -1,    74,   104,   147,    -1,    74,   147,    -1,
      70,   146,    71,    -1,    72,    73,    -1,   148,    72,    73,
      -1,   148,    72,   183,    73,    -1,    72,   183,    73,    -1,
      72,   186,    73,    -1,   148,    72,   186,    73,    -1,    72,
      74,    73,    -1,   148,    72,    74,    73,    -1,    70,    71,
      -1,   148,    70,    71,    -1,   148,    70,   220,    71,    -1,
      70,   220,    71,    -1,     3,    -1,     6,    -1,     4,    -1,
       5,    -1,   150,    -1,    70,   186,    71,    -1,   149,    -1,
     152,    -1,   153,    -1,   156,    -1,   158,    -1,   159,    -1,
     160,    -1,   151,    72,   186,    73,    -1,   154,    -1,   155,
      -1,   151,    77,     3,    -1,   151,     7,     3,    -1,   151,
      70,    71,    -1,   151,    70,   157,    71,    -1,   184,    -1,
     157,    68,   184,    -1,   151,     8,    -1,   151,     9,    -1,
      70,   145,    71,    75,   110,    76,    -1,    70,   145,    71,
      75,   110,    68,    76,    -1,   162,    -1,    70,   145,    71,
     161,    -1,   151,    -1,   163,    -1,   164,    -1,   165,    -1,
     166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,    -1,
     171,    -1,    53,    70,   145,    71,    -1,    53,   162,    -1,
      79,   161,    -1,    80,   161,    -1,    81,   161,    -1,    82,
     161,    -1,    83,   161,    -1,    74,   161,    -1,     8,   162,
      -1,     9,   162,    -1,   161,    -1,   172,    74,   161,    -1,
     172,    84,   161,    -1,   172,    85,   161,    -1,   172,    -1,
     173,    80,   172,    -1,   173,    79,   172,    -1,   173,    -1,
     174,    10,   173,    -1,   174,    11,   173,    -1,   174,    -1,
     175,    86,   174,    -1,   175,    87,   174,    -1,   175,    12,
     174,    -1,   175,    13,   174,    -1,   175,    -1,   176,    14,
     175,    -1,   176,    15,   175,    -1,   176,    -1,   177,    83,
     176,    -1,   177,    -1,   178,    88,   177,    -1,   178,    -1,
     179,    89,   178,    -1,   179,    -1,   180,    16,   179,    -1,
     180,    -1,   181,    17,   180,    -1,   181,    -1,   181,    90,
     186,    78,   182,    -1,   182,    -1,   183,    -1,   162,   185,
     184,    -1,    69,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,   184,    -1,   186,    68,   184,    -1,
     188,    -1,   189,    -1,   191,    -1,   195,    -1,   198,    -1,
     204,    -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,
     212,    -1,   186,    67,    -1,   190,    78,   187,    -1,   211,
      -1,   205,    -1,   206,    -1,    75,    76,    -1,    -1,    75,
     192,   193,    76,    -1,   194,    -1,   193,   194,    -1,    92,
      -1,   187,    -1,   196,    -1,   197,    -1,    44,    70,   186,
      71,    -1,    44,    70,   186,    71,    38,   187,    -1,   199,
      -1,   200,    -1,   201,    -1,    36,   187,    63,    70,   186,
      71,    67,    -1,    63,    70,   186,    71,   187,    -1,    42,
     202,   187,    -1,    70,    67,    67,    71,    -1,    70,   203,
      67,    67,    71,    -1,    70,    67,   186,    67,    71,    -1,
      70,    67,    67,   186,    71,    -1,    70,   203,    67,   186,
      67,    71,    -1,    70,    67,   186,    67,   186,    71,    -1,
      70,   203,    67,   186,    67,   186,    71,    -1,   186,    -1,
      92,    -1,    56,    70,   186,    71,   187,    -1,    31,   183,
      -1,    35,    -1,    30,    67,    -1,    34,    67,    -1,    50,
      67,    -1,    50,   186,    67,    -1,    43,   211,    67,    -1,
       3,    -1,    67,    -1,   214,    -1,   213,   214,    -1,    92,
      -1,   215,    -1,    -1,   217,    75,   216,   193,    76,    -1,
     100,    -1,    93,   100,    -1,   100,   218,    -1,    93,   100,
      93,    -1,    92,    -1,   218,    92,    -1,   101,    70,   220,
      71,    -1,   101,    70,    71,    -1,   101,    70,   223,    71,
      -1,   221,    -1,   221,    68,    18,    -1,   222,    -1,   221,
      68,   222,    -1,    93,   100,    -1,    93,    -1,    93,   146,
      -1,     3,    -1,   223,    68,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    59,    60,    61,    62,    63,    64,    65,
      66,    70,    74,    75,    79,    80,    84,    85,    86,    87,
      88,    92,    93,    94,    95,    96,    97,    98,   102,   103,
     104,   108,   109,   113,   114,   115,   116,   120,   127,   131,
     132,   136,   139,   145,   147,   150,   153,   159,   160,   164,
     165,   166,   167,   171,   172,   176,   177,   178,   182,   183,
     184,   185,   189,   193,   194,   198,   199,   203,   206,   209,
     210,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   234,   235,   236,   237,
     238,   239,   240,   241,   245,   248,   251,   257,   258,   259,
     260,   264,   265,   266,   270,   274,   275,   279,   280,   281,
     282,   286,   290,   294,   295,   299,   300,   304,   308,   309,
     313,   314,   318,   322,   326,   327,   331,   335,   336,   340,
     341,   345,   349,   350,   354,   358,   359,   363,   364,   368,
     372,   376,   380,   384,   385,   389,   390,   391,   395,   396,
     397,   398,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   418,   419,   420,   421,   422,
     426,   430,   431,   432,   433,   434,   435,   436,   440,   444,
     445,   449,   453,   457,   458,   462,   463,   467,   471,   475,
     476,   480,   481,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   498,   499,   503,   507,   511,   515,   519,
     523,   527,   531,   535,   536,   539,   542,   548,   549,   552,
     558,   559,   562,   568,   569,   572,   575,   578,   584,   585,
     588,   594,   595,   601,   602,   608,   609,   615,   616,   622,
     623,   629,   630,   634,   662,   663,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   681,   682,   686,
     687,   688,   691,   692,   693,   694,   695,   696,   697,   698,
     702,   706,   710,   711,   712,   716,   717,   717,   722,   723,
     727,   728,   732,   733,   737,   741,   745,   746,   747,   751,
     755,   759,   763,   764,   765,   766,   767,   768,   769,   773,
     774,   778,   782,   786,   790,   794,   798,   799,   803,   807,
     811,   815,   816,   820,   821,   825,   825,   830,   831,   832,
     833,   837,   838,   842,   844,   845,   850,   851,   855,   856,
     860,   861,   862,   866,   867
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "CHARLIT", "STRING", "NUMBER",
  "INDSEL", "PLUSPLUS", "MINUSMINUS", "SHL", "SHR", "LTEQ", "GTEQ", "EQEQ",
  "NOTEQ", "LOGAND", "LOGOR", "ELLIPSIS", "TIMESEQ", "DIVEQ", "MODEQ",
  "PLUSEQ", "MINUSEQ", "SHLEQ", "SHREQ", "ANDEQ", "OREQ", "XOREQ", "AUTO",
  "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE",
  "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT",
  "LONG", "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF",
  "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "TYPEDEF_NAME", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL", "_COMPLEX",
  "_IMAGINARY", "';'", "','", "'='", "'('", "')'", "'['", "']'", "'*'",
  "'{'", "'}'", "'.'", "':'", "'-'", "'+'", "'!'", "'~'", "'&'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "$accept", "declaration",
  "declaration_specifiers", "function_specifier",
  "initialized_declarator_list", "initialized_declarator",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "declarator", "direct_declarator", "simple_declarator",
  "pointer_declarator", "type_qualifier_list", "array_declarator",
  "array_qualifier_list", "array_qualifier", "array_size_expression",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "integer_type_specifier", "signed_type_specifier",
  "unsigned_type_specifier", "character_type_specifier",
  "floating_point_specifier", "complex_type_specifier",
  "bool_type_specifier", "enumeration_type_specifier",
  "enumeration_type_definition", "enumeration_type_reference",
  "enumeration_tag", "enumeration_definition_list",
  "enumeration_constant_definition", "enumeration_constant",
  "structure_type_specifier", "structure_type_definition",
  "structure_type_reference", "structure_tag", "field_list",
  "component_declaration", "component_declaration_list",
  "component_declarator", "simple_component", "bit_field", "width",
  "union_type_specifier", "union_type_definition", "union_type_reference",
  "union_tag", "void_type_specifier", "typedef_name", "type_name",
  "abstract_declarator", "pointer", "direct_abstract_declarator",
  "primary_expression", "parenthesized_expression", "postfix_expression",
  "subscript_expression", "component_selection_expression",
  "direct_component_selection", "indirect_component_selection",
  "function_call", "expression_list", "postincrement_expression",
  "postdecrement_expression", "compound_literal", "cast_expression",
  "unary_expression", "sizeof_expression", "unary_minus_expression",
  "unary_plus_expression", "logical_negation_expression",
  "bitwise_negation_expression", "address_expression",
  "indirection_expression", "preincrement_expression",
  "predecrement_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression", "constant_expression",
  "assignment_expression", "assignment_operator", "expression",
  "statement", "expression_statement", "labeled_statement", "label",
  "compound_statement", "$@1", "declaration_or_statement_list",
  "declaration_or_statement", "conditional_statement", "if_statement",
  "if_else_statement", "iterative_statement", "do_statement",
  "while_statement", "for_statement", "for_expressions", "initial_clause",
  "switch_statement", "case_label", "default_label", "break_statement",
  "continue_statement", "return_statement", "goto_statement",
  "named_label", "null_statement", "translation_unit",
  "top_level_declaration", "function_definition", "$@2",
  "function_def_specifier", "declaration_list", "function_declarator",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    59,    44,    61,
      40,    41,    91,    93,    42,   123,   125,    46,    58,    45,
      43,    33,   126,    38,    47,    37,    60,    62,    94,   124,
      63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   102,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   106,   106,   107,
     107,   107,   107,   108,   108,   109,   109,   109,   110,   110,
     110,   110,   111,   112,   112,   113,   113,   114,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   117,   117,   117,   118,   118,   118,
     118,   119,   119,   119,   120,   121,   121,   122,   122,   122,
     122,   123,   124,   125,   125,   126,   126,   127,   128,   128,
     129,   129,   130,   131,   132,   132,   133,   134,   134,   135,
     135,   136,   137,   137,   138,   139,   139,   140,   140,   141,
     142,   143,   144,   145,   145,   146,   146,   146,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   149,   149,   149,   149,   149,
     150,   151,   151,   151,   151,   151,   151,   151,   152,   153,
     153,   154,   155,   156,   156,   157,   157,   158,   159,   160,
     160,   161,   161,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   163,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   172,   172,   172,   173,   173,   173,
     174,   174,   174,   175,   175,   175,   175,   175,   176,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   183,   184,   184,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   186,   186,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     188,   189,   190,   190,   190,   191,   192,   191,   193,   193,
     194,   194,   195,   195,   196,   197,   198,   198,   198,   199,
     200,   201,   202,   202,   202,   202,   202,   202,   202,   203,
     203,   204,   205,   206,   207,   208,   209,   209,   210,   211,
     212,   213,   213,   214,   214,   216,   215,   217,   217,   217,
     217,   218,   218,   219,   219,   219,   220,   220,   221,   221,
     222,   222,   222,   223,   223
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     1,
       2,     3,     4,     4,     4,     5,     5,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     1,     3,
       2,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     2,     1,     1,     2,
       2,     3,     2,     3,     3,     4,     2,     3,     1,     2,
       2,     3,     3,     4,     1,     2,     2,     1,     1,     2,
       1,     2,     2,     3,     1,     1,     1,     4,     5,     5,
       6,     2,     1,     1,     3,     1,     3,     1,     1,     1,
       4,     5,     2,     1,     1,     2,     3,     1,     3,     1,
       1,     1,     2,     3,     1,     1,     1,     4,     5,     2,
       1,     1,     1,     1,     2,     1,     1,     2,     1,     2,
       3,     2,     3,     2,     3,     4,     3,     3,     4,     3,
       4,     2,     3,     4,     3,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     3,     3,     3,     4,     1,     3,     2,     2,     6,
       7,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     2,     0,     4,     1,     2,
       1,     1,     1,     1,     4,     6,     1,     1,     1,     7,
       5,     3,     4,     5,     5,     5,     6,     6,     7,     1,
       1,     5,     2,     1,     2,     2,     2,     3,     3,     1,
       1,     1,     2,     1,     1,     0,     5,     1,     2,     2,
       3,     1,     2,     4,     3,     4,     1,     3,     1,     3,
       2,     1,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    37,    16,    94,    28,    98,     0,    17,    97,    11,
      75,    78,    18,    30,    71,    77,    19,     0,    20,   142,
       0,    88,   141,    29,   104,     0,   148,   313,     0,     9,
       3,     5,     7,   317,    32,    33,    31,    36,    23,    67,
      68,    69,    22,   100,    70,    21,   105,   106,    24,   118,
     119,    26,   135,   136,    27,    25,     0,     0,   311,   314,
       0,    35,   102,   112,     0,   111,   101,    99,    79,    82,
      72,    95,    76,    80,    73,   123,     0,   122,   140,     0,
     139,    96,    89,    90,    86,     0,    39,   149,   151,     0,
      12,    14,    10,     4,     6,     8,   321,     0,   319,     0,
       0,    38,     1,   312,   315,   117,     0,   113,   115,     0,
     103,    83,    81,    84,    74,     0,     0,   124,     0,     0,
       0,    91,    92,    87,    34,    40,   150,     2,     0,     0,
     320,    14,   322,   333,   324,   331,     0,   326,   328,     0,
     165,   167,   168,   166,     0,     0,    51,    50,     0,    49,
      52,     0,    41,    54,     0,     0,     0,     0,     0,     0,
      47,     0,   171,   169,   193,   172,   173,   179,   180,   174,
     175,   176,   177,   213,   191,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   217,   220,   223,   228,   231,   233,
     235,   237,   239,   241,   243,     0,    53,     0,     0,   107,
       0,     0,    85,     0,   131,     0,   127,   129,   130,   120,
     125,     0,   137,     0,    93,    13,     0,     0,    15,   244,
      55,     0,     0,   330,   332,   145,   146,   323,     0,     0,
     325,     0,   211,   212,     0,   204,   143,     0,   257,     0,
     210,   191,   205,   206,   207,   208,   209,    43,     0,    48,
       0,    44,     0,   187,   188,     0,     0,     0,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
     165,     0,     0,     0,   303,     0,     0,     0,     0,     0,
       0,     0,   310,   276,   280,     0,   281,   259,   260,     0,
     261,     0,   278,   262,   282,   283,   263,   286,   287,   288,
     264,   273,   274,   265,   266,   267,   268,   272,   269,   109,
     114,   116,     0,   108,   132,   134,     0,   126,     0,   121,
     138,     0,     0,    58,     0,     0,     0,    63,   161,     0,
       0,   153,     0,   244,     0,   147,     0,     0,   327,   329,
     334,     0,     0,     0,   144,   145,     0,     0,   170,    46,
      45,   182,   183,     0,   185,     0,   181,   245,   214,   215,
     216,   219,   218,   221,   222,   226,   227,   224,   225,   229,
     230,   232,   234,   236,   238,   240,     0,   304,   302,   305,
       0,     0,     0,   309,     0,     0,   306,     0,     0,     0,
     275,     0,   270,     0,   316,   279,   110,   133,   128,     0,
      66,     0,    56,    60,    62,    64,   152,   164,   159,   156,
     157,   162,     0,   154,     0,   244,     0,     0,   203,     0,
     192,   258,     0,   184,   178,     0,     0,     0,   300,   299,
       0,   291,   308,     0,   307,     0,     0,     0,   271,    65,
      57,    59,     0,   163,   160,   155,   158,     0,   186,   242,
       0,     0,     0,     0,   284,     0,     0,   277,    61,     0,
     189,     0,   292,     0,     0,     0,     0,     0,   301,   290,
     190,     0,   295,   294,     0,   293,     0,   285,   289,   297,
     296,     0,   298
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   304,    97,    29,    89,    90,    30,    31,    32,    33,
      34,    35,    36,    87,    37,   159,   160,   161,   343,   344,
     345,   346,   347,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    65,   106,   107,   108,    48,    49,    50,
      77,   116,   117,   205,   206,   207,   208,   334,    51,    52,
      53,    80,    54,    55,   237,   349,    56,   226,   162,   163,
     164,   165,   166,   167,   168,   169,   373,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   219,   238,   269,   305,   306,   307,   308,   309,
     310,   411,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   402,   450,   320,   321,   322,   323,   324,   325,   326,
     327,   328,    57,    58,    59,   197,    60,    98,    61,   350,
     137,   138,   139
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -380
static const yytype_int16 yypact[] =
{
    1408,  -380,  -380,  -380,  -380,    -3,    10,  -380,     3,  -380,
    -380,    30,  -380,  -380,    49,    18,  -380,    42,  -380,  -380,
      45,    27,  -380,  -380,  -380,    29,   132,  -380,    29,  1760,
    1760,  1760,  1760,  1760,    24,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,    11,  1322,  -380,  -380,
      50,  -380,  -380,  -380,   128,    70,  -380,    46,  -380,   125,
    -380,  -380,  -380,    -6,   146,  -380,  1791,   122,  -380,  1791,
     166,  -380,  -380,    33,   178,   159,  -380,   132,  -380,    87,
    -380,  1483,  -380,  -380,  -380,  -380,  -380,    29,  1760,  1447,
     803,    24,  -380,  -380,  -380,  -380,    66,  -380,   114,   128,
    -380,  -380,  -380,   190,  -380,    12,  1598,  -380,  1791,  1629,
    1791,  -380,   201,  -380,  -380,  -380,  -380,  -380,    29,   391,
    -380,   194,  -380,  -380,  -380,    58,   186,   191,  -380,   101,
    -380,  -380,  -380,  -380,  1221,  1221,  -380,  -380,  1253,  -380,
    -380,   697,  -380,  1267,  1267,  1267,  1267,  1267,  1267,   841,
    -380,   220,  -380,  -380,    63,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,   284,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,    62,   108,   234,    15,   235,   219,
     179,   224,   298,    14,  -380,   242,  -380,   535,    31,  -380,
    1267,    98,  -380,  1267,   238,   184,  -380,  -380,  -380,  -380,
    -380,  1660,  -380,  1691,  -380,  -380,  1267,   893,  -380,  -380,
    -380,  1361,   472,  -380,  -380,    52,   126,  -380,  1528,   314,
    -380,   697,  -380,  -380,   697,  -380,   121,   247,  -380,   111,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,   553,  -380,
     246,  -380,   317,  -380,  -380,   936,  1267,   318,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  1267,
    1267,  1267,  1267,  1267,  1267,  1267,  1267,  1267,  1267,  1267,
    1267,  1267,  1267,  1267,  1267,  1267,  1267,  1267,  1267,  -380,
     249,   258,  1267,   261,  -380,   760,   260,   328,   262,   974,
     263,   264,  -380,   268,  -380,   188,  -380,  -380,  -380,   267,
    -380,   373,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,   270,    36,  -380,  -380,  -380,  1267,  -380,    12,  -380,
    -380,  1267,   333,  -380,    99,   391,   -26,  -380,  -380,   276,
     277,  -380,   950,   266,    75,   126,  1724,   989,  -380,  -380,
    -380,   279,   280,  1562,  -380,   137,  1031,  1267,  -380,  -380,
    -380,  -380,  -380,   143,  -380,   105,  -380,  -380,  -380,  -380,
    -380,    62,    62,   108,   108,   234,   234,   234,   234,    15,
      15,   235,   219,   179,   224,   298,   -24,  -380,  -380,  -380,
     291,   616,   760,  -380,   288,  1267,  -380,   198,  1267,  1267,
    -380,   535,  -380,   760,  -380,  -380,  -380,  -380,  -380,   283,
    -380,   638,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,   287,  -380,  1070,   286,   112,   285,   285,   893,
    -380,  -380,  1267,  -380,  -380,  1267,   294,  1088,  -380,   270,
     299,  -380,  -380,   145,  -380,   149,   154,   454,  -380,  -380,
    -380,  -380,   391,  -380,  -380,  -380,  -380,   100,  -380,  -380,
    1267,  1112,   202,  1169,   323,   760,   760,  -380,  -380,   855,
    -380,   155,  -380,   160,  1126,   296,   204,   760,  -380,  -380,
    -380,   301,  -380,  -380,   161,  -380,  1207,  -380,  -380,  -380,
    -380,   167,  -380
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -380,     0,     6,  -380,  -380,   237,  -380,   -27,    21,    -9,
     -48,  -380,  -380,  -380,  -380,  -380,   211,   213,  -127,   -66,
    -379,  -380,    28,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,   274,  -188,  -380,  -380,  -380,  -380,
    -380,   -62,   -90,  -380,    37,  -380,  -380,    48,  -380,  -380,
    -380,  -380,  -380,  -380,     8,  -123,   -21,  -214,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -133,     5,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,    22,    -2,   -75,    17,   102,   103,   104,   106,   124,
    -380,   -59,   -93,   -99,  -380,  -147,  -286,  -380,  -380,  -380,
    -380,  -380,   -23,  -293,  -380,  -380,  -380,  -380,  -380,  -380,
    -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,  -380,
      93,  -380,  -380,   334,  -380,  -380,  -380,  -380,  -380,   -96,
    -380,   165,  -380
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -319
static const yytype_int16 yytable[] =
{
      27,   196,   218,   136,   239,    88,    28,   195,   101,   400,
     330,   355,   224,    63,     1,     1,    85,   119,   415,    91,
     240,   242,   243,   244,   245,   246,   210,   277,   278,   210,
     220,   287,     1,    96,   105,    92,    93,    94,    95,   105,
     112,   113,   462,   424,   367,    75,   341,    86,    78,   115,
      71,   342,   115,   331,   445,     1,   211,    27,   213,    81,
     196,     1,    62,    28,    72,    73,   126,    67,    66,    74,
     252,   253,   254,    82,    83,   354,    68,    69,    84,   121,
     122,    25,    25,   240,   239,    64,    26,   239,   131,   115,
     203,   115,   115,   115,    99,    70,   100,   130,   132,    25,
     462,   279,   280,    26,   288,   135,   204,   329,   125,   375,
     335,   110,   416,   364,   225,   240,   451,    76,   220,   131,
      79,   210,   221,   210,   222,   104,   223,   458,   221,   353,
     222,   105,    26,   255,   198,   256,   270,   378,   379,   380,
     257,   396,   199,   367,   330,   109,   271,   272,   430,   232,
     233,   355,   407,   235,   127,   128,   374,   236,   241,   241,
     241,   241,   241,   241,   415,     4,   332,   421,   479,   229,
     377,   111,   230,   367,   333,   422,   480,   101,   444,   367,
     367,    13,   368,   200,   115,   466,   115,   273,   274,   488,
     489,   363,   114,   222,    23,    26,   356,   118,   357,   398,
     225,   497,   385,   386,   387,   388,    26,   363,   241,   222,
     436,   442,    85,   367,   443,   365,   474,   367,   423,   240,
     475,   241,   367,   367,   123,   476,   491,   135,   367,   367,
     124,   492,   499,   440,   135,   367,   202,   236,   502,   361,
     236,   120,   362,   335,   275,   276,   220,   214,   419,   281,
     282,   337,   338,   241,   449,   412,   367,   227,   453,   228,
     432,   455,   456,   129,   435,   454,   367,   284,   441,   484,
     367,   496,   367,   383,   384,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   251,   461,   381,   382,   241,   389,   390,
     472,   240,   283,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   285,   286,   289,   336,   360,   366,   370,
     371,   376,   220,   481,   483,   397,   486,  -309,   399,   204,
     401,   403,   405,   408,   409,   478,   420,   494,   367,   429,
     220,   241,   365,   468,   410,   413,   241,   426,   427,   501,
     437,   438,   461,   268,   446,   452,   459,   241,   463,   465,
     439,   487,   135,   220,   470,   215,   473,   495,   498,   135,
     249,   241,   250,   467,   425,   418,   290,   141,   142,   143,
     220,   144,   145,   201,   417,   391,   469,   392,   457,   393,
     404,   103,   394,   359,   140,   141,   142,   143,     0,   144,
     145,   448,     2,   291,   292,     3,     4,   293,   294,   295,
       5,   395,     6,     7,     8,   296,   297,   298,     9,    10,
      11,    12,    13,   299,    14,    15,   148,    16,    17,   300,
      18,    19,    20,    21,    22,    23,   301,    24,     0,   241,
     302,     0,     0,   151,   148,     0,     0,   216,   303,   414,
     241,     0,   154,   155,   156,   157,   158,   290,   141,   142,
     143,   151,   144,   145,     0,   216,   217,     0,     0,     0,
     154,   155,   156,   157,   158,   140,   141,   142,   143,     0,
     144,   145,     0,     2,   291,   292,     3,     4,   293,   294,
     295,     5,     0,     6,     7,     8,   296,   297,   298,     9,
      10,    11,    12,    13,   299,    14,    15,   148,    16,    17,
     300,    18,    19,    20,    21,    22,    23,   301,    24,     0,
       0,   302,     0,     0,   151,   148,     0,     0,   216,   303,
     477,     0,     0,   154,   155,   156,   157,   158,   290,   141,
     142,   143,   151,   144,   145,   351,   352,     0,     0,     0,
       0,   154,   155,   156,   157,   158,   140,   141,   142,   143,
       0,   144,   145,     0,     2,   291,   292,     3,     4,   293,
     294,   295,     5,     0,     6,     7,     8,   296,   297,   298,
       9,    10,    11,    12,    13,   299,    14,    15,   148,    16,
      17,   300,    18,    19,    20,    21,    22,    23,   301,    24,
       0,     0,   302,     0,     0,   151,   148,     0,     0,   216,
     303,     0,     0,     0,   154,   155,   156,   157,   158,   140,
     141,   142,   143,   151,   144,   145,   369,   216,     0,     0,
       0,     0,   154,   155,   156,   157,   158,     0,     0,     0,
       0,   140,   141,   142,   143,     2,   144,   145,     3,     4,
       0,     0,     0,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,   148,
      16,    17,     0,    18,    19,    20,    21,    22,    23,     0,
      24,     0,     0,   447,     0,     0,   151,     0,     0,     0,
     216,   148,     0,     0,     0,   154,   155,   156,   157,   158,
     140,   141,   142,   143,     0,   144,   145,     0,   151,     0,
     341,     0,   216,   217,   460,   342,     0,   154,   155,   156,
     157,   158,     0,     0,     0,     0,     2,     0,     0,     3,
       4,     0,     0,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
     148,    16,    17,     0,    18,    19,    20,    21,    22,    23,
       0,    24,     0,   290,   141,   142,   143,   151,   144,   145,
       0,   216,     0,     0,     0,     0,   154,   155,   156,   157,
     158,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     291,   292,     0,     0,   293,   294,   295,     0,     0,     0,
       0,     0,   296,   297,   298,     0,   140,   141,   142,   143,
     299,   144,   145,   148,     0,     0,   300,     0,     0,     0,
       0,     0,     0,   301,     0,     0,     0,   302,     0,     0,
     151,     0,     0,     0,   216,   303,   146,     0,     0,   154,
     155,   156,   157,   158,   140,   141,   142,   143,     0,   144,
     145,     0,   147,     0,     0,     0,   148,   149,   140,   141,
     142,   143,     0,   144,   145,   150,     0,     0,     0,     0,
       0,     0,     0,   151,   146,     0,   152,   153,     0,     0,
       0,     0,   154,   155,   156,   157,   158,     0,     0,     0,
     147,     0,     0,     0,   148,   149,   140,   141,   142,   143,
       0,   144,   145,   150,     0,     0,     0,     0,   148,     0,
       0,   151,     0,     0,   247,   248,     0,     0,     0,     0,
     154,   155,   156,   157,   158,   151,     0,   341,     0,   216,
     217,   490,   342,     0,   154,   155,   156,   157,   158,   140,
     141,   142,   143,     0,   144,   145,   148,     0,     0,     0,
       0,     0,     0,   140,   141,   142,   143,     0,   144,   145,
       0,     0,     0,   151,     0,   341,     0,   216,   217,     0,
     342,     0,   154,   155,   156,   157,   158,   140,   141,   142,
     143,     0,   144,   145,     0,     0,     0,     0,     0,   148,
       0,     0,   140,   141,   142,   143,     0,   144,   145,     0,
       0,     0,     0,   148,     0,     0,   151,   372,     0,     0,
     216,     0,     0,     0,     0,   154,   155,   156,   157,   158,
     151,     0,     0,   428,   216,     0,     0,   148,     0,   154,
     155,   156,   157,   158,   140,   141,   142,   143,     0,   144,
     145,   406,   148,     0,   151,     0,     0,     0,   216,     0,
       0,     0,     0,   154,   155,   156,   157,   158,     0,   151,
       0,     0,   433,   434,     0,     0,     0,     0,   154,   155,
     156,   157,   158,   140,   141,   142,   143,     0,   144,   145,
       0,     0,     0,     0,   148,     0,     0,     0,     0,     0,
       0,   140,   141,   142,   143,     0,   144,   145,     0,     0,
       0,   151,     0,     0,     0,   216,   439,     0,     0,     0,
     154,   155,   156,   157,   158,   140,   141,   142,   143,     0,
     144,   145,     0,   148,     0,     0,     0,     0,     0,   140,
     141,   142,   143,     0,   144,   145,     0,     0,     0,     0,
     151,   148,     0,   464,   216,     0,     0,     0,     0,   154,
     155,   156,   157,   158,     0,   471,     0,     0,   151,     0,
       0,     0,   216,     0,     0,   148,     0,   154,   155,   156,
     157,   158,   140,   141,   142,   143,     0,   144,   145,   148,
       0,     0,   151,   482,     0,     0,   216,     0,     0,     0,
       0,   154,   155,   156,   157,   158,   151,   493,     0,     0,
     216,     0,     0,     0,     0,   154,   155,   156,   157,   158,
     140,   141,   142,   143,     0,   144,   145,     0,     0,     0,
       0,     0,   148,     0,   140,   141,   142,   143,     0,   144,
     145,     0,     0,     0,     0,     0,   485,     0,     0,   151,
       0,     0,     0,   216,     0,     0,     0,     0,   154,   155,
     156,   157,   158,     0,     0,     0,   140,   141,   142,   143,
     148,   144,   145,     0,     0,     0,     0,     0,     0,     0,
     140,   141,   142,   143,   148,   144,   145,   151,   500,     0,
       0,   216,     0,     0,     0,     0,   154,   155,   156,   157,
     158,   231,     0,     0,     0,   216,     0,     0,     0,     0,
     154,   155,   156,   157,   158,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,   102,   234,     0,     1,     0,   216,     0,     0,
       0,     0,   154,   155,   156,   157,   158,   151,     0,     0,
       0,   216,     0,     0,     0,     0,   154,   155,   156,   157,
     158,     2,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     1,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,     0,    16,    17,     0,    18,
      19,    20,    21,    22,    23,     0,    24,     0,     0,     0,
       2,     0,    25,     3,     4,     0,    26,     0,     5,     0,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     1,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,     0,
       0,   221,   348,   222,     0,    26,     0,     2,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
     133,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
      23,     0,    24,     0,     0,     0,     2,     0,    25,     3,
       4,     0,    26,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
       0,    16,    17,     0,    18,    19,    20,    21,    22,    23,
       0,    24,     2,     0,     0,     3,     4,     0,   134,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,    23,   358,    24,     0,     0,
       0,     0,   129,     0,     0,     0,     0,     2,  -318,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
      23,     2,    24,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,     0,    16,    17,     0,    18,
      19,    20,    21,    22,    23,     0,    24,     0,     0,     0,
       3,     0,   363,   348,   222,     5,    26,     6,     0,     8,
       0,     0,     0,     0,    10,    11,     0,     0,     0,    14,
      15,     0,     0,    17,     0,     0,    19,    20,    21,    22,
       0,     3,    24,     0,     0,     0,     5,     0,     6,     0,
       8,     0,     0,     0,   209,    10,    11,     0,     0,     0,
      14,    15,     0,     0,    17,     0,     0,    19,    20,    21,
      22,     0,     3,    24,     0,     0,     0,     5,     0,     6,
       0,     8,     0,     0,     0,   212,    10,    11,     0,     0,
       0,    14,    15,     0,     0,    17,     0,     0,    19,    20,
      21,    22,     0,     3,    24,     0,     0,     0,     5,     0,
       6,     0,     8,     0,     0,     0,   339,    10,    11,     0,
       0,     0,    14,    15,     0,     0,    17,     0,     0,    19,
      20,    21,    22,     2,     0,    24,     3,     4,     0,     0,
       0,     5,     0,     6,     7,     8,     0,   340,     0,     9,
      10,    11,    12,    13,     0,    14,    15,     0,    16,    17,
       0,    18,    19,    20,    21,    22,    23,     0,    24,     2,
       0,     0,     3,     4,     0,   431,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,     0,    16,    17,     0,    18,    19,    20,
      21,    22,    23,     3,    24,     0,     0,     0,     5,     0,
       6,     0,     8,     0,     0,     0,     0,    10,    11,     0,
       0,     0,    14,    15,     0,     0,    17,     0,     0,    19,
      20,    21,    22,     0,     0,    24
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-380))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,   100,   129,    99,   151,    26,     0,   100,    56,   295,
     198,   225,   135,     3,     3,     3,    25,    79,   311,    28,
     153,   154,   155,   156,   157,   158,   116,    12,    13,   119,
     129,    17,     3,    33,     3,    29,    30,    31,    32,     3,
      46,    47,   421,    69,    68,     3,    72,    26,     3,    76,
      32,    77,    79,   200,    78,     3,   118,    57,   120,    32,
     159,     3,    65,    57,    46,    47,    87,    37,    65,    51,
       7,     8,     9,    46,    47,   222,    46,    47,    51,    46,
      47,    70,    70,   216,   231,    75,    74,   234,    97,   116,
      78,   118,   119,   120,    70,    46,    72,    91,    98,    70,
     479,    86,    87,    74,    90,    99,   115,    76,    87,   256,
     203,    65,    76,   236,   135,   248,   402,    75,   217,   128,
      75,   211,    70,   213,    72,    75,   135,   413,    70,   222,
      72,     3,    74,    70,    68,    72,    74,   270,   271,   272,
      77,   288,    76,    68,   332,    75,    84,    85,    73,   144,
     145,   365,   299,   148,    67,    68,   255,   151,   153,   154,
     155,   156,   157,   158,   457,    33,    68,    68,    68,    68,
     269,    46,    71,    68,    76,    76,    76,   225,    73,    68,
      68,    49,    71,    69,   211,    73,   213,    79,    80,   475,
     476,    70,    46,    72,    62,    74,    70,    75,    72,   292,
     221,   487,   277,   278,   279,   280,    74,    70,   203,    72,
     357,    68,   221,    68,    71,   236,    71,    68,   345,   352,
      71,   216,    68,    68,    46,    71,    71,   221,    68,    68,
      71,    71,    71,   366,   228,    68,    46,   231,    71,   231,
     234,    75,   234,   336,    10,    11,   345,    46,   341,    14,
      15,    67,    68,   248,   401,    67,    68,    71,   405,    68,
     356,   408,   409,    69,   357,    67,    68,    88,   367,    67,
      68,    67,    68,   275,   276,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    73,   421,   273,   274,   292,   281,   282,
     447,   434,    83,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    89,    16,    73,    78,     3,    71,    73,
       3,     3,   421,   470,   471,    67,   473,    78,    67,   338,
      70,     3,    70,    70,    70,   462,     3,   484,    68,    73,
     439,   336,   363,   442,    76,    78,   341,    71,    71,   496,
      71,    71,   479,    69,    63,    67,    73,   352,    71,    73,
      75,    38,   356,   462,    70,   128,    67,    71,    67,   363,
     159,   366,   159,   439,   346,   338,     3,     4,     5,     6,
     479,     8,     9,   109,   336,   283,   445,   284,   411,   285,
     297,    57,   286,   228,     3,     4,     5,     6,    -1,     8,
       9,   401,    29,    30,    31,    32,    33,    34,    35,    36,
      37,   287,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,   434,
      67,    -1,    -1,    70,    53,    -1,    -1,    74,    75,    76,
     445,    -1,    79,    80,    81,    82,    83,     3,     4,     5,
       6,    70,     8,     9,    -1,    74,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    83,     3,     4,     5,     6,    -1,
       8,     9,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    67,    -1,    -1,    70,    53,    -1,    -1,    74,    75,
      76,    -1,    -1,    79,    80,    81,    82,    83,     3,     4,
       5,     6,    70,     8,     9,    73,    74,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,     3,     4,     5,     6,
      -1,     8,     9,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    67,    -1,    -1,    70,    53,    -1,    -1,    74,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    83,     3,
       4,     5,     6,    70,     8,     9,    73,    74,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    29,     8,     9,    32,    33,
      -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    -1,    -1,    67,    -1,    -1,    70,    -1,    -1,    -1,
      74,    53,    -1,    -1,    -1,    79,    80,    81,    82,    83,
       3,     4,     5,     6,    -1,     8,     9,    -1,    70,    -1,
      72,    -1,    74,    75,    76,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    -1,     3,     4,     5,     6,    70,     8,     9,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    -1,     3,     4,     5,     6,
      50,     8,     9,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      70,    -1,    -1,    -1,    74,    75,    33,    -1,    -1,    79,
      80,    81,    82,    83,     3,     4,     5,     6,    -1,     8,
       9,    -1,    49,    -1,    -1,    -1,    53,    54,     3,     4,
       5,     6,    -1,     8,     9,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    33,    -1,    73,    74,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,     3,     4,     5,     6,
      -1,     8,     9,    62,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    70,    -1,    72,    -1,    74,
      75,    76,    77,    -1,    79,    80,    81,    82,    83,     3,
       4,     5,     6,    -1,     8,     9,    53,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    70,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      70,    -1,    -1,    73,    74,    -1,    -1,    53,    -1,    79,
      80,    81,    82,    83,     3,     4,     5,     6,    -1,     8,
       9,    67,    53,    -1,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,    70,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    83,     3,     4,     5,     6,    -1,
       8,     9,    -1,    53,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      70,    53,    -1,    73,    74,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    -1,    67,    -1,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    53,    -1,    79,    80,    81,
      82,    83,     3,     4,     5,     6,    -1,     8,     9,    53,
      -1,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    70,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    53,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    -1,     3,     4,     5,     6,
      53,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    53,     8,     9,    70,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,     0,    70,    -1,     3,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,     3,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    -1,    -1,    -1,
      29,    -1,    70,    32,    33,    -1,    74,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,     3,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    -1,    74,    -1,    29,    -1,    -1,
      32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
       3,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    -1,    -1,    -1,    29,    -1,    70,    32,
      33,    -1,    74,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    29,    -1,    -1,    32,    33,    -1,    71,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    18,    64,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    29,    75,    -1,
      32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    29,    64,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    -1,    -1,    -1,
      32,    -1,    70,    71,    72,    37,    74,    39,    -1,    41,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    60,    61,
      -1,    32,    64,    -1,    -1,    -1,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    76,    46,    47,    -1,    -1,    -1,
      51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    60,
      61,    -1,    32,    64,    -1,    -1,    -1,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    76,    46,    47,    -1,    -1,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      60,    61,    -1,    32,    64,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    -1,    -1,    -1,    76,    46,    47,    -1,
      -1,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    60,    61,    29,    -1,    64,    32,    33,    -1,    -1,
      -1,    37,    -1,    39,    40,    41,    -1,    76,    -1,    45,
      46,    47,    48,    49,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    29,
      -1,    -1,    32,    33,    -1,    71,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    32,    64,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    29,    32,    33,    37,    39,    40,    41,    45,
      46,    47,    48,    49,    51,    52,    54,    55,    57,    58,
      59,    60,    61,    62,    64,    70,    74,    92,    93,    94,
      97,    98,    99,   100,   101,   102,   103,   105,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   128,   129,
     130,   139,   140,   141,   143,   144,   147,   213,   214,   215,
     217,   219,    65,     3,    75,   124,    65,    37,    46,    47,
      46,    32,    46,    47,    51,     3,    75,   131,     3,    75,
     142,    32,    46,    47,    51,   100,    99,   104,   147,    95,
      96,   100,    93,    93,    93,    93,    92,    93,   218,    70,
      72,   101,     0,   214,    75,     3,   125,   126,   127,    75,
      65,    46,    46,    47,    46,    98,   132,   133,    75,   132,
      75,    46,    47,    46,    71,    99,   147,    67,    68,    69,
      93,   100,    92,     3,    71,    93,   220,   221,   222,   223,
       3,     4,     5,     6,     8,     9,    33,    49,    53,    54,
      62,    70,    73,    74,    79,    80,    81,    82,    83,   106,
     107,   108,   149,   150,   151,   152,   153,   154,   155,   156,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   216,    68,    76,
      69,   125,    46,    78,   100,   134,   135,   136,   137,    76,
     133,   132,    76,   132,    46,    96,    74,    75,   109,   183,
     184,    70,    72,   100,   146,   147,   148,    71,    68,    68,
      71,    70,   162,   162,    70,   162,    93,   145,   184,   186,
     161,   162,   161,   161,   161,   161,   161,    73,    74,   107,
     108,    73,     7,     8,     9,    70,    72,    77,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    69,   185,
      74,    84,    85,    79,    80,    10,    11,    12,    13,    86,
      87,    14,    15,    83,    88,    89,    16,    17,    90,    73,
       3,    30,    31,    34,    35,    36,    42,    43,    44,    50,
      56,    63,    67,    75,    92,   186,   187,   188,   189,   190,
     191,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     204,   205,   206,   207,   208,   209,   210,   211,   212,    76,
     126,   186,    68,    76,   138,   183,    78,    67,    68,    76,
      76,    72,    77,   109,   110,   111,   112,   113,    71,   146,
     220,    73,    74,   183,   186,   148,    70,    72,    18,   222,
       3,   145,   145,    70,   146,   147,    71,    68,    71,    73,
      73,     3,    71,   157,   184,   186,     3,   184,   161,   161,
     161,   172,   172,   173,   173,   174,   174,   174,   174,   175,
     175,   176,   177,   178,   179,   180,   186,    67,   183,    67,
     187,    70,   202,     3,   211,    70,    67,   186,    70,    70,
      76,   192,    67,    78,    76,   194,    76,   138,   135,   183,
       3,    68,    76,   109,    69,   113,    71,    71,    73,    73,
      73,    71,   220,    73,    74,   183,   186,    71,    71,    75,
     161,   184,    68,    71,    73,    78,    63,    67,    92,   186,
     203,   187,    67,   186,    67,   186,   186,   193,   187,    73,
      76,   109,   111,    71,    73,    73,    73,   110,   184,   182,
      70,    67,   186,    67,    71,    71,    71,    76,   109,    68,
      76,   186,    71,   186,    67,    67,   186,    38,   187,   187,
      76,    71,    71,    71,   186,    71,    67,   187,    67,    71,
      71,   186,    71
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 53 "parser.y"
    {  (yyvsp[(1) - (3)].node)->next = (yyvsp[(2) - (3)].node);
                                                                    (yyval.node) = ast_reverse_tree((yyvsp[(1) - (3)].node));
                                                                    if (print_ast){ast_print_tree((yyval.node));} }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 79 "parser.y"
    {if(debug)printf("declarator\n");}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 108 "parser.y"
    {if(debug)printf("pointer_declarator\n");}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 109 "parser.y"
    {if(debug)printf("direct_declarator\n");}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 113 "parser.y"
    {if(debug)printf("simple_declarator\n");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 114 "parser.y"
    {if(debug)printf("parenthasized_declarator\n"); (yyval.node) = (yyvsp[(2) - (3)].node);}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 115 "parser.y"
    {if(debug)printf("function_declarator\n");}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 116 "parser.y"
    {if(debug)printf("array_declarator\n");}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 120 "parser.y"
    {   (yyval.node) = ast_newnode(AST_VAR);
                    strcpy((yyval.node)->attributes.identifier, yylval.yystring);
                    (yyval.node)->attributes.ln_effective = line_number;
                    insert_ident(current_scope, yylval.yystring, (yyval.node), NAMESPACE_OTHER);}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 127 "parser.y"
    {   (yyval.node) = ast_push_back((yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));ast_print_tree((yyvsp[(1) - (2)].node)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 136 "parser.y"
    {   (yyval.node) = ast_newnode(AST_ARRAY);
                                                (yyval.node)->next = (yyvsp[(1) - (3)].node);
                                                (yyval.node)->attributes.size = -1;  }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 139 "parser.y"
    {   if ((yyvsp[(3) - (4)].node)->type != AST_NUM){
                                                                    ast_print_syntax_error(filename, line_number);
                                                                } else {
                                                                    (yyval.node) = ast_newnode(AST_ARRAY);
                                                                    (yyval.node)->next = (yyvsp[(1) - (4)].node);
                                                                    (yyval.node)->attributes.size = (yyvsp[(3) - (4)].node)->attributes.num; } }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 203 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                    (yyval.node)->attributes.num_signed = SIZE_SIGNED;
                                    (yyval.node)->attributes.scalar_type = SCALAR_INT; }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 206 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_UNSIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_INT; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 210 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_SIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_INT; }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 245 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_SIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_CHAR; }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 248 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_SIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_CHAR; }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 251 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_UNSIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_CHAR; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 395 "parser.y"
    { (yyval.node) = ast_newnode(AST_PTR); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 396 "parser.y"
    { (yyval.node) = ast_newnode(AST_PTR); }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 397 "parser.y"
    { (yyval.node) = ast_newnode(AST_PTR); (yyval.node)->next = (yyvsp[(3) - (3)].node); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 398 "parser.y"
    { (yyval.node) = ast_newnode(AST_PTR); (yyval.node)->next = (yyvsp[(2) - (2)].node); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 419 "parser.y"
    { (yyval.node) = ast_newnode(AST_NUM); (yyval.node)->attributes.num = yylval.yyint; }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 420 "parser.y"
    { (yyval.node) = ast_newnode(AST_CHAR); (yyval.node)->attributes.num = (int)(yylval.yychar); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 421 "parser.y"
    { (yyval.node) = ast_newnode(AST_STR); strcpy((yyval.node)->attributes.str, yylval.yystring); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 426 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 467 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = PLUSPLUS; }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 471 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = MINUSMINUS; }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 503 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '-'; }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 507 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '+'; }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 511 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '!'; }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 515 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '~'; }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 519 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '&'; }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 523 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '*'; }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 536 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '*'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 539 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '/'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 542 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '%'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 549 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '+'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 552 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '-'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 559 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = SHL; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 562 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = SHR; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 569 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '<'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 572 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '>'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 575 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = LTEQ; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 578 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = GTEQ; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 585 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = EQEQ; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 588 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = NOTEQ; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 595 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '&'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 602 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '^'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 609 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '|'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 616 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = LOGAND; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 623 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = LOGOR; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 630 "parser.y"
    { ast_print_syntax_error(filename, line_number); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 663 "parser.y"
    {{ if (debug){fprintf(stderr, "assignment expression\n");} }}
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 686 "parser.y"
    {{ if (debug){fprintf(stderr, "expression statement\n");} }}
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 687 "parser.y"
    {{ if (debug){fprintf(stderr, "labeled statement\n");} }}
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 688 "parser.y"
    {   struct sym_table *new_scope = sym_table_new(filename, BLOCK_SCOPE, line_number, current_scope); 
                                        current_scope = new_scope;
                                        if (debug){fprintf(stderr, "compound statement\n");}}
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 691 "parser.y"
    {{ if (debug){fprintf(stderr, "conditional statement\n");} }}
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 692 "parser.y"
    {{ if (debug){fprintf(stderr, "iterative statement\n");} }}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 693 "parser.y"
    {{ if (debug){fprintf(stderr, "switch statement\n");} }}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 694 "parser.y"
    {{ if (debug){fprintf(stderr, "break statement\n");} }}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 695 "parser.y"
    {{ if (debug){fprintf(stderr, "continue statement\n");} }}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 696 "parser.y"
    {{ if (debug){fprintf(stderr, "return statement\n");} }}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 697 "parser.y"
    {{ if (debug){fprintf(stderr, "goto statement\n");} }}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 698 "parser.y"
    {{ if (debug){fprintf(stderr, "null statement\n");} }}
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 717 "parser.y"
    { current_scope = sym_table_new(filename, BLOCK_SCOPE, line_number, current_scope); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 718 "parser.y"
    { current_scope = sym_table_pop(current_scope); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 727 "parser.y"
    {{ if (debug){fprintf(stderr, "declaration\n");} }}
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 728 "parser.y"
    {{ if (debug){fprintf(stderr, "statement\n");} }}
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 807 "parser.y"
    {insert_ident(current_scope, yylval.yystring, NULL, NAMESPACE_LABELS);}
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 815 "parser.y"
    {{ if (debug){fprintf(stderr, "top_level_declaration\n");} }}
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 820 "parser.y"
    {{ if(debug){puts("declaration");}}}
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 821 "parser.y"
    {{ if(debug){puts("function_definition");}}}
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 825 "parser.y"
    { current_scope = sym_table_new(filename, FUNCTION_SCOPE, line_number, current_scope); }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 826 "parser.y"
    { current_scope = sym_table_pop(current_scope); }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 842 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support function prototypes - %s: %d\n",
                                                                 filename, line_number); }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 844 "parser.y"
    { ast_print_tree((yyvsp[(1) - (3)].node)); (yyval.node) = ast_newnode(AST_FN); ast_push_back((yyval.node),(yyvsp[(1) - (3)].node)); }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 845 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support function arguments - %s: %d\n",
                                                                filename, line_number); }
    break;



/* Line 1806 of yacc.c  */
#line 2873 "parser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 870 "parser.y"


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

