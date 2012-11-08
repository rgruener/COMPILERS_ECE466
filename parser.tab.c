/* A Bison parser, made by GNU Bison 2.6.2.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.6.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 336 of yacc.c  */
#line 5 "parser.y"

#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include "hash.h"
#include "tokens.h"

extern int yylex();
extern int yyleng;
extern FILE *yyin;
int yyerror(const char *p) {fprintf(stderr, "ERROR: unrecognized syntax: %s\n", p);}

int debug=0;

/* Line 336 of yacc.c  */
#line 83 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_PARSER_TAB_H
# define YY_PARSER_TAB_H
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
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

extern YYSTYPE yylval;

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

#endif /* !YY_PARSER_TAB_H  */

/* Copy the second part of user declarations.  */

/* Line 353 of yacc.c  */
#line 214 "parser.tab.c"

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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  102
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1814

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  131
/* YYNRULES -- Number of rules.  */
#define YYNRULES  332
/* YYNRULES -- Number of states.  */
#define YYNSTATES  499

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
     792,   795,   799,   801,   803,   805,   808,   812,   814,   817,
     819,   821,   823,   825,   830,   837,   839,   841,   843,   851,
     857,   861,   866,   872,   878,   884,   891,   898,   906,   908,
     910,   916,   919,   921,   924,   927,   930,   934,   938,   940,
     942,   944,   947,   949,   951,   954,   956,   959,   962,   966,
     968,   971,   976,   980,   985,   987,   991,   993,   997,  1000,
    1002,  1005,  1007
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     212,     0,    -1,    93,    95,    67,    -1,    97,    -1,    97,
      93,    -1,    98,    -1,    98,    93,    -1,    99,    -1,    99,
      93,    -1,    94,    -1,    94,    93,    -1,    45,    -1,    96,
      -1,    95,    68,    96,    -1,   100,    -1,   100,    69,   109,
      -1,    29,    -1,    40,    -1,    48,    -1,    54,    -1,    57,
      -1,   121,    -1,   118,    -1,   114,    -1,   128,    -1,   144,
      -1,   139,    -1,   143,    -1,    33,    -1,    62,    -1,    49,
      -1,   103,    -1,   101,    -1,   102,    -1,    70,   100,    71,
      -1,   217,    -1,   105,    -1,     3,    -1,   147,   101,    -1,
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
      -1,   148,    70,    71,    -1,   148,    70,   218,    71,    -1,
      70,   218,    71,    -1,     3,    -1,     6,    -1,     4,    -1,
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
     188,    -1,   189,    -1,   191,    -1,   194,    -1,   197,    -1,
     203,    -1,   206,    -1,   207,    -1,   208,    -1,   209,    -1,
     211,    -1,   186,    67,    -1,   190,    78,   187,    -1,   210,
      -1,   204,    -1,   205,    -1,    75,    76,    -1,    75,   192,
      76,    -1,   193,    -1,   192,   193,    -1,    92,    -1,   187,
      -1,   195,    -1,   196,    -1,    44,    70,   186,    71,    -1,
      44,    70,   186,    71,    38,   187,    -1,   198,    -1,   199,
      -1,   200,    -1,    36,   187,    63,    70,   186,    71,    67,
      -1,    63,    70,   186,    71,   187,    -1,    42,   201,   187,
      -1,    70,    67,    67,    71,    -1,    70,   202,    67,    67,
      71,    -1,    70,    67,   186,    67,    71,    -1,    70,    67,
      67,   186,    71,    -1,    70,   202,    67,   186,    67,    71,
      -1,    70,    67,   186,    67,   186,    71,    -1,    70,   202,
      67,   186,    67,   186,    71,    -1,   186,    -1,    92,    -1,
      56,    70,   186,    71,   187,    -1,    31,   183,    -1,    35,
      -1,    30,    67,    -1,    34,    67,    -1,    50,    67,    -1,
      50,   186,    67,    -1,    43,   210,    67,    -1,     3,    -1,
      67,    -1,   213,    -1,   212,   213,    -1,    92,    -1,   214,
      -1,   215,   191,    -1,   100,    -1,    93,   100,    -1,   100,
     216,    -1,    93,   100,    93,    -1,    92,    -1,   216,    92,
      -1,   101,    70,   218,    71,    -1,   101,    70,    71,    -1,
     101,    70,   221,    71,    -1,   219,    -1,   219,    68,    18,
      -1,   220,    -1,   219,    68,   220,    -1,    93,   100,    -1,
      93,    -1,    93,   146,    -1,     3,    -1,   221,    68,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    68,    68,    72,    73,    74,    75,    76,    77,    78,
      79,    83,    87,    88,    92,    93,    97,    98,    99,   100,
     101,   105,   106,   107,   108,   109,   110,   111,   115,   116,
     117,   121,   122,   126,   127,   128,   129,   133,   137,   141,
     142,   146,   147,   148,   149,   150,   152,   156,   157,   161,
     162,   163,   164,   168,   169,   173,   174,   175,   179,   180,
     181,   182,   186,   190,   191,   195,   196,   200,   201,   202,
     203,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   225,   226,   227,   228,
     229,   230,   231,   232,   236,   237,   238,   242,   243,   244,
     245,   249,   250,   251,   255,   259,   260,   264,   265,   266,
     267,   271,   275,   279,   280,   284,   285,   289,   293,   294,
     298,   299,   303,   307,   311,   312,   316,   320,   321,   325,
     326,   330,   334,   335,   339,   343,   344,   348,   349,   353,
     357,   361,   365,   369,   370,   374,   375,   376,   380,   381,
     382,   383,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   403,   404,   405,   406,   407,
     411,   415,   416,   417,   418,   419,   420,   421,   425,   429,
     430,   434,   438,   442,   443,   447,   448,   452,   456,   460,
     461,   465,   466,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   483,   484,   488,   492,   496,   500,   504,
     508,   512,   516,   520,   521,   522,   523,   527,   528,   529,
     533,   534,   535,   539,   540,   541,   542,   543,   547,   548,
     549,   553,   554,   558,   559,   563,   564,   568,   569,   573,
     574,   578,   579,   583,   611,   612,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   630,   631,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     649,   653,   657,   658,   659,   663,   664,   668,   669,   673,
     674,   678,   679,   683,   687,   691,   692,   693,   697,   701,
     705,   709,   710,   711,   712,   713,   714,   715,   719,   720,
     724,   728,   732,   736,   740,   744,   745,   749,   753,   757,
     761,   762,   766,   767,   771,   775,   776,   777,   778,   782,
     783,   787,   788,   789,   793,   794,   798,   799,   803,   804,
     805,   809,   810
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "compound_statement", "declaration_or_statement_list",
  "declaration_or_statement", "conditional_statement", "if_statement",
  "if_else_statement", "iterative_statement", "do_statement",
  "while_statement", "for_statement", "for_expressions", "initial_clause",
  "switch_statement", "case_label", "default_label", "break_statement",
  "continue_statement", "return_statement", "goto_statement",
  "named_label", "null_statement", "translation_unit",
  "top_level_declaration", "function_definition", "function_def_specifier",
  "declaration_list", "function_declarator", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list", YY_NULL
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
     188,   189,   190,   190,   190,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   196,   197,   197,   197,   198,   199,
     200,   201,   201,   201,   201,   201,   201,   201,   202,   202,
     203,   204,   205,   206,   207,   208,   208,   209,   210,   211,
     212,   212,   213,   213,   214,   215,   215,   215,   215,   216,
     216,   217,   217,   217,   218,   218,   219,   219,   220,   220,
     220,   221,   221
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
       2,     3,     1,     1,     1,     2,     3,     1,     2,     1,
       1,     1,     1,     4,     6,     1,     1,     1,     7,     5,
       3,     4,     5,     5,     5,     6,     6,     7,     1,     1,
       5,     2,     1,     2,     2,     2,     3,     3,     1,     1,
       1,     2,     1,     1,     2,     1,     2,     2,     3,     1,
       2,     4,     3,     4,     1,     3,     1,     3,     2,     1,
       2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    37,    16,    94,    28,    98,     0,    17,    97,    11,
      75,    78,    18,    30,    71,    77,    19,     0,    20,   142,
       0,    88,   141,    29,   104,     0,   148,   312,     0,     9,
       3,     5,     7,   315,    32,    33,    31,    36,    23,    67,
      68,    69,    22,   100,    70,    21,   105,   106,    24,   118,
     119,    26,   135,   136,    27,    25,     0,     0,   310,   313,
       0,    35,   102,   112,     0,   111,   101,    99,    79,    82,
      72,    95,    76,    80,    73,   123,     0,   122,   140,     0,
     139,    96,    89,    90,    86,     0,    39,   149,   151,     0,
      12,    14,    10,     4,     6,     8,   319,     0,   317,     0,
       0,    38,     1,   311,     0,   314,   117,     0,   113,   115,
       0,   103,    83,    81,    84,    74,     0,     0,   124,     0,
       0,     0,    91,    92,    87,    34,    40,   150,     2,     0,
       0,   318,    14,   320,   331,   322,   329,     0,   324,   326,
       0,   165,   167,   168,   166,     0,     0,    51,    50,     0,
      49,    52,     0,    41,    54,     0,     0,     0,     0,     0,
       0,    47,     0,   171,   169,   193,   172,   173,   179,   180,
     174,   175,   176,   177,   213,   191,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   217,   220,   223,   228,   231,
     233,   235,   237,   239,   241,   243,     0,    53,   165,     0,
       0,     0,   302,     0,     0,     0,     0,     0,     0,     0,
     309,     0,   275,   279,   244,   257,     0,   280,   259,   260,
       0,   261,     0,   277,   262,   281,   282,   263,   285,   286,
     287,   264,   273,   274,   265,   266,   267,   268,   272,   269,
       0,   107,     0,     0,    85,     0,   131,     0,   127,   129,
     130,   120,   125,     0,   137,     0,    93,    13,     0,    15,
      55,     0,     0,   328,   330,   145,   146,   321,     0,     0,
     323,     0,   211,   212,     0,   204,   143,     0,     0,   210,
     191,   205,   206,   207,   208,   209,    43,     0,    48,     0,
      44,     0,   187,   188,     0,     0,     0,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,   303,
     301,   304,     0,     0,     0,   308,     0,     0,   305,     0,
       0,     0,   270,     0,     0,   276,   278,   109,   114,   116,
       0,   108,   132,   134,     0,   126,     0,   121,   138,     0,
       0,    58,     0,     0,     0,    63,   161,     0,     0,   153,
       0,   244,     0,   147,     0,     0,   325,   327,   332,     0,
       0,     0,   144,   145,     0,   170,    46,    45,   182,   183,
       0,   185,     0,   181,   245,   214,   215,   216,   219,   218,
     221,   222,   226,   227,   224,   225,   229,   230,   232,   234,
     236,   238,   240,     0,     0,     0,   299,   298,     0,   290,
     307,     0,   306,     0,     0,   258,   271,   110,   133,   128,
       0,    66,     0,    56,    60,    62,    64,   152,   164,   159,
     156,   157,   162,     0,   154,     0,   244,     0,     0,   203,
       0,   192,     0,   184,   178,     0,     0,     0,     0,     0,
     283,     0,     0,    65,    57,    59,     0,   163,   160,   155,
     158,     0,   186,   242,     0,   291,     0,     0,     0,     0,
       0,   300,   289,    61,     0,   189,     0,   294,   293,     0,
     292,     0,   284,   190,   288,   296,   295,     0,   297
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    97,    29,    89,    90,    30,    31,    32,    33,
      34,    35,    36,    87,    37,   160,   161,   162,   361,   362,
     363,   364,   365,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    65,   107,   108,   109,    48,    49,    50,
      77,   117,   118,   247,   248,   249,   250,   352,    51,    52,
      53,    80,    54,    55,   277,   367,    56,   266,   163,   164,
     165,   166,   167,   168,   169,   170,   390,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   214,   215,   308,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     334,   418,   231,   232,   233,   234,   235,   236,   237,   238,
     239,    57,    58,    59,    60,    98,    61,   368,   138,   139,
     140
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -402
static const yytype_int16 yypact[] =
{
    1398,  -402,  -402,  -402,  -402,   -12,    29,  -402,    -6,  -402,
    -402,   155,  -402,  -402,   138,    88,  -402,    40,  -402,  -402,
      53,   106,  -402,  -402,  -402,    38,   137,  -402,    38,  1750,
    1750,  1750,  1750,  1750,   217,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,    20,  1312,  -402,  -402,
     113,  -402,  -402,  -402,    68,   125,  -402,    23,  -402,   160,
    -402,  -402,  -402,    -8,   164,  -402,   166,   140,  -402,   166,
     177,  -402,  -402,    96,   220,   227,  -402,   137,  -402,    97,
    -402,  1473,  -402,  -402,  -402,  -402,  -402,    38,  1750,  1437,
      43,   217,  -402,  -402,   456,  -402,  -402,   -11,  -402,   223,
      68,  -402,  -402,  -402,   260,  -402,    63,  1588,  -402,   166,
    1619,   166,  -402,   265,  -402,  -402,  -402,  -402,  -402,    38,
     555,  -402,   245,  -402,  -402,  -402,    74,   254,   252,  -402,
      61,  -402,  -402,  -402,  -402,  1194,  1194,  -402,  -402,  1218,
    -402,  -402,   699,  -402,  1257,  1257,  1257,  1257,  1257,  1257,
     318,  -402,   262,  -402,  -402,    77,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,   154,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,   -30,   181,   230,    13,   280,
     253,   250,   248,   323,     3,  -402,   267,  -402,   264,   276,
    1257,   278,  -402,   762,   279,   343,   283,   861,   284,   285,
    -402,  1257,  -402,  -402,  -402,  -402,   229,  -402,  -402,  -402,
     270,  -402,   537,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
      25,  -402,  1257,    11,  -402,  1257,   282,   233,  -402,  -402,
    -402,  -402,  -402,  1650,  -402,  1681,  -402,  -402,   805,  -402,
    -402,  1351,   886,  -402,  -402,    19,   218,  -402,  1518,   354,
    -402,   699,  -402,  -402,   699,  -402,    -2,   287,   151,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,   900,  -402,   288,
    -402,   359,  -402,  -402,   918,  1257,   360,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  1257,  1257,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  -402,  -402,
    -402,  -402,   301,   618,   762,  -402,   298,  1257,  -402,   237,
    1257,  1257,  -402,  1257,   762,  -402,  -402,  -402,  -402,   300,
      26,  -402,  -402,  -402,  1257,  -402,    63,  -402,  -402,  1257,
     366,  -402,   119,   555,   -27,  -402,  -402,   299,   302,  -402,
     942,   303,    98,   218,  1714,   999,  -402,  -402,  -402,   304,
     306,  1552,  -402,   221,  1023,  -402,  -402,  -402,  -402,  -402,
     178,  -402,   117,  -402,  -402,  -402,  -402,  -402,   -30,   -30,
     181,   181,   230,   230,   230,   230,    13,    13,   280,   253,
     250,   248,   323,    -4,   309,  1041,  -402,   300,   307,  -402,
    -402,   179,  -402,   191,   202,  -402,  -402,  -402,  -402,  -402,
     308,  -402,   640,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,   311,  -402,  1056,   310,   136,   312,   312,
     805,  -402,  1257,  -402,  -402,  1257,  1257,  1080,   241,  1137,
     351,   762,   762,  -402,  -402,  -402,   555,  -402,  -402,  -402,
    -402,   161,  -402,  -402,   206,  -402,   208,  1161,   319,   249,
     762,  -402,  -402,  -402,   780,  -402,   326,  -402,  -402,   212,
    -402,  1175,  -402,  -402,  -402,  -402,  -402,   213,  -402
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -402,   -31,     4,  -402,  -402,   266,  -402,   -39,    32,   -22,
     -45,  -402,  -402,  -402,  -402,  -402,   234,   236,  -125,   -48,
    -401,  -402,    39,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,   294,  -219,  -402,  -402,  -402,  -402,
    -402,    42,   -93,  -402,    49,  -402,  -402,    52,  -402,  -402,
    -402,  -402,  -402,  -402,  -165,  -117,   -25,  -247,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -142,    99,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,     6,    14,   -84,    10,    85,   103,   104,   102,   105,
    -402,   -26,   -90,  -100,  -402,  -144,  -194,  -402,  -402,  -402,
     370,  -402,   210,  -402,  -402,  -402,  -402,  -402,  -402,  -402,
    -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,  -402,   228,
    -402,  -402,   377,  -402,  -402,  -402,  -402,   -92,  -402,   167,
    -402
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -317
static const yytype_int16 yytable[] =
{
     197,    88,    96,    85,    28,   259,    91,   137,   278,   332,
     196,   101,   279,   281,   282,   283,   284,   285,   373,   264,
     326,   348,     1,     1,   252,   316,   317,   252,   106,   106,
     260,   466,    63,    92,    93,    94,    95,   116,   113,   114,
     116,     1,   435,    75,   309,   359,   141,   142,   143,   144,
     360,   145,   146,    62,   310,   311,    78,   240,    86,    66,
     197,    28,   127,   339,   343,   241,     1,   133,   381,   279,
     262,   106,    26,   213,   455,   132,   147,     1,   116,   350,
     116,   116,   116,   466,   291,   292,   293,   351,   111,   261,
      25,   262,   148,   327,   246,   131,   149,   150,   349,   318,
     319,   347,   427,   136,    64,   151,   379,   132,    25,   380,
     330,   265,    26,   152,   263,    76,   153,   154,   372,   126,
      71,   120,   155,   156,   157,   158,   159,   278,    79,   269,
     278,   348,   270,    25,    72,    73,   373,    26,    81,    74,
     419,   245,   122,   123,   261,   279,   262,   294,    26,   295,
     426,   392,    82,    83,   296,   353,   276,    84,   260,   382,
     252,   253,   252,   255,   128,   129,   343,   395,   396,   397,
       4,   441,   371,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   413,    70,   343,    13,   432,   104,   417,
     454,   213,    67,   421,   391,   433,   423,   424,     3,    23,
     110,    68,    69,     5,   343,     6,   112,     8,   394,   470,
     115,    26,    10,    11,   116,   119,   116,    14,    15,   343,
     101,    17,   385,   307,    19,    20,    21,    22,   279,   484,
      24,   447,   402,   403,   404,   405,   265,   485,   434,    85,
     314,   315,   451,   425,   272,   273,   452,   343,   275,   453,
     460,   383,   121,   280,   280,   280,   280,   280,   280,   343,
     312,   313,   461,   260,   353,   136,   124,   481,   482,   430,
     343,   458,   136,   462,   343,   276,   343,   486,   276,   487,
     343,   343,   443,   495,   498,   446,   492,    99,   374,   100,
     375,   381,   242,   262,   320,   321,   342,   343,   125,   280,
     355,   356,   416,   279,   422,   343,   244,   465,   477,   343,
     280,   256,   474,   476,   130,   479,   491,   343,   398,   399,
     268,   141,   142,   143,   144,   267,   145,   146,   400,   401,
     406,   407,   260,   489,   246,   290,   322,   324,   323,   325,
     328,   483,  -308,   329,   280,   331,   335,   497,   344,   333,
     260,   147,   472,   337,   340,   341,   383,   378,   384,   465,
     354,   387,   388,   393,   414,   420,   260,   148,   343,   431,
     437,   149,   150,   438,   459,   448,   440,   449,   136,   456,
     151,   463,   467,   469,   260,   136,   280,   450,   152,   480,
     490,   286,   287,   494,   288,   257,   289,   155,   156,   157,
     158,   159,   471,   436,   243,   429,   428,   408,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   409,   411,   410,   473,
     105,   412,   346,   336,   103,   377,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     0,     0,     0,   280,   198,
     142,   143,   144,     0,   145,   146,     0,     0,     0,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,     0,     2,   199,   200,     3,     4,
     201,   202,   203,     5,     0,     6,     7,     8,   204,   205,
     206,     9,    10,    11,    12,    13,   207,    14,    15,   149,
      16,    17,   208,    18,    19,    20,    21,    22,    23,   209,
      24,     0,     0,   210,     0,     0,   152,     0,     0,     0,
     211,   104,   212,     0,     0,   155,   156,   157,   158,   159,
     198,   142,   143,   144,   280,   145,   146,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,   141,   142,
     143,   144,     0,   145,   146,     0,     2,   199,   200,     3,
       4,   201,   202,   203,     5,     0,     6,     7,     8,   204,
     205,   206,     9,    10,    11,    12,    13,   207,    14,    15,
     149,    16,    17,   208,    18,    19,    20,    21,    22,    23,
     209,    24,     0,     0,   210,     0,     0,   152,   149,     0,
       0,   211,   104,   345,     0,     0,   155,   156,   157,   158,
     159,   141,   142,   143,   144,   152,   145,   146,     0,   211,
     258,     0,     0,     0,   155,   156,   157,   158,   159,     0,
       0,     0,     0,   141,   142,   143,   144,     2,   145,   146,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,   149,    16,    17,     0,    18,    19,    20,    21,    22,
      23,     0,    24,     0,     0,   415,     0,     0,   152,     0,
       0,     0,   211,   149,     0,     0,     0,   155,   156,   157,
     158,   159,   141,   142,   143,   144,     0,   145,   146,     0,
     152,     0,   359,     0,   211,   258,   464,   360,     0,   155,
     156,   157,   158,   159,     0,     0,     0,     0,     2,     0,
       0,     3,     4,     0,     0,     0,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,   149,    16,    17,     0,    18,    19,    20,    21,
      22,    23,     0,    24,     0,   198,   142,   143,   144,   152,
     145,   146,     0,   211,     0,     0,     0,     0,   155,   156,
     157,   158,   159,   141,   142,   143,   144,     0,   145,   146,
       0,     0,   199,   200,     0,     0,   201,   202,   203,     0,
       0,     0,     0,     0,   204,   205,   206,     0,   141,   142,
     143,   144,   207,   145,   146,   149,     0,     0,   208,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,   210,
       0,     0,   152,   149,     0,     0,   211,   104,     0,     0,
       0,   155,   156,   157,   158,   159,     0,     0,     0,     0,
     152,     0,   359,     0,   211,   258,   493,   360,   149,   155,
     156,   157,   158,   159,   141,   142,   143,   144,     0,   145,
     146,     0,     0,     0,     0,   152,     0,   359,     0,   211,
     258,     0,   360,     0,   155,   156,   157,   158,   159,   141,
     142,   143,   144,     0,   145,   146,     0,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,     0,   145,   146,
       0,     0,     0,     0,   149,     0,     0,     0,     0,     0,
       0,   141,   142,   143,   144,     0,   145,   146,   338,     0,
       0,   152,     0,     0,     0,   211,     0,     0,     0,   149,
     155,   156,   157,   158,   159,   141,   142,   143,   144,     0,
     145,   146,     0,   149,     0,     0,   152,     0,     0,   369,
     370,     0,     0,     0,     0,   155,   156,   157,   158,   159,
     152,   149,     0,   386,   211,     0,     0,     0,     0,   155,
     156,   157,   158,   159,     0,     0,     0,     0,   152,   389,
       0,     0,   211,     0,     0,   149,     0,   155,   156,   157,
     158,   159,   141,   142,   143,   144,     0,   145,   146,     0,
       0,     0,   152,     0,     0,   439,   211,     0,     0,     0,
       0,   155,   156,   157,   158,   159,   141,   142,   143,   144,
       0,   145,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   141,   142,   143,   144,     0,   145,
     146,     0,   149,     0,     0,     0,     0,     0,     0,   141,
     142,   143,   144,     0,   145,   146,     0,     0,     0,   152,
       0,     0,   444,   445,     0,     0,   149,     0,   155,   156,
     157,   158,   159,   141,   142,   143,   144,     0,   145,   146,
       0,     0,     0,   152,   149,     0,     0,   211,   450,     0,
       0,     0,   155,   156,   157,   158,   159,     0,   457,   149,
       0,   152,     0,     0,     0,   211,     0,     0,     0,     0,
     155,   156,   157,   158,   159,     0,   152,     0,     0,   468,
     211,     0,     0,   149,     0,   155,   156,   157,   158,   159,
     141,   142,   143,   144,     0,   145,   146,     0,     0,     0,
     152,   475,     0,     0,   211,     0,     0,     0,     0,   155,
     156,   157,   158,   159,   141,   142,   143,   144,     0,   145,
     146,     0,     0,     0,     0,     0,     0,     0,   141,   142,
     143,   144,     0,   145,   146,     0,     0,     0,     0,     0,
     149,     0,     0,     0,     0,     0,     0,   141,   142,   143,
     144,     0,   145,   146,   478,     0,     0,   152,     0,     0,
       0,   211,     0,     0,   149,     0,   155,   156,   157,   158,
     159,   141,   142,   143,   144,     0,   145,   146,   149,     0,
       0,   152,   488,     0,     0,   211,     0,     0,     0,     0,
     155,   156,   157,   158,   159,   152,   496,   149,     0,   211,
       0,     0,     0,     0,   155,   156,   157,   158,   159,     0,
     141,   142,   143,   144,   271,   145,   146,     0,   211,     0,
       0,   149,     0,   155,   156,   157,   158,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   274,     0,
       0,     0,   211,     0,     0,     0,     0,   155,   156,   157,
     158,   159,     0,     0,     0,     0,     0,     0,     0,     0,
     149,     0,   102,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,     0,     0,
       0,   211,     0,     0,     0,     0,   155,   156,   157,   158,
     159,     2,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     1,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,     0,    16,    17,     0,    18,
      19,    20,    21,    22,    23,     0,    24,     0,     0,     0,
       2,     0,    25,     3,     4,     0,    26,     0,     5,     0,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     1,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,     0,
       0,   261,   366,   262,     0,    26,     0,     2,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
     134,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
      23,     0,    24,     0,     0,     0,     2,     0,    25,     3,
       4,     0,    26,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
       0,    16,    17,     0,    18,    19,    20,    21,    22,    23,
       0,    24,     2,     0,     0,     3,     4,     0,   135,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,    23,   376,    24,     0,     0,
       0,     0,   130,     0,     0,     0,     0,     2,  -316,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
      23,     2,    24,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,     0,    16,    17,     0,    18,
      19,    20,    21,    22,    23,     0,    24,     0,     0,     0,
       3,     0,   381,   366,   262,     5,    26,     6,     0,     8,
       0,     0,     0,     0,    10,    11,     0,     0,     0,    14,
      15,     0,     0,    17,     0,     0,    19,    20,    21,    22,
       0,     3,    24,     0,     0,     0,     5,     0,     6,     0,
       8,     0,     0,     0,   251,    10,    11,     0,     0,     0,
      14,    15,     0,     0,    17,     0,     0,    19,    20,    21,
      22,     0,     3,    24,     0,     0,     0,     5,     0,     6,
       0,     8,     0,     0,     0,   254,    10,    11,     0,     0,
       0,    14,    15,     0,     0,    17,     0,     0,    19,    20,
      21,    22,     0,     3,    24,     0,     0,     0,     5,     0,
       6,     0,     8,     0,     0,     0,   357,    10,    11,     0,
       0,     0,    14,    15,     0,     0,    17,     0,     0,    19,
      20,    21,    22,     2,     0,    24,     3,     4,     0,     0,
       0,     5,     0,     6,     7,     8,     0,   358,     0,     9,
      10,    11,    12,    13,     0,    14,    15,     0,    16,    17,
       0,    18,    19,    20,    21,    22,    23,     0,    24,     2,
       0,     0,     3,     4,     0,   442,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,     0,    16,    17,     0,    18,    19,    20,
      21,    22,    23,     0,    24
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-402))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     100,    26,    33,    25,     0,   130,    28,    99,   152,   203,
     100,    56,   154,   155,   156,   157,   158,   159,   265,   136,
      17,   240,     3,     3,   117,    12,    13,   120,     3,     3,
     130,   432,     3,    29,    30,    31,    32,    76,    46,    47,
      79,     3,    69,     3,    74,    72,     3,     4,     5,     6,
      77,     8,     9,    65,    84,    85,     3,    68,    26,    65,
     160,    57,    87,   207,    68,    76,     3,    98,    70,   211,
      72,     3,    74,   104,    78,    97,    33,     3,   117,    68,
     119,   120,   121,   484,     7,     8,     9,    76,    65,    70,
      70,    72,    49,    90,   116,    91,    53,    54,   242,    86,
      87,    76,    76,    99,    75,    62,   271,   129,    70,   274,
     200,   136,    74,    70,   136,    75,    73,    74,   262,    87,
      32,    79,    79,    80,    81,    82,    83,   271,    75,    68,
     274,   350,    71,    70,    46,    47,   383,    74,    32,    51,
     334,    78,    46,    47,    70,   287,    72,    70,    74,    72,
     344,   295,    46,    47,    77,   245,   152,    51,   258,   276,
     253,   119,   255,   121,    67,    68,    68,   309,   310,   311,
      33,    73,   262,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   327,    46,    68,    49,    68,    75,   333,
      73,   222,    37,   337,   294,    76,   340,   341,    32,    62,
      75,    46,    47,    37,    68,    39,    46,    41,   308,    73,
      46,    74,    46,    47,   253,    75,   255,    51,    52,    68,
     265,    55,    71,    69,    58,    59,    60,    61,   370,    68,
      64,   375,   316,   317,   318,   319,   261,    76,   363,   261,
      10,    11,   384,   343,   145,   146,    68,    68,   149,    71,
      71,   276,    75,   154,   155,   156,   157,   158,   159,    68,
      79,    80,    71,   363,   354,   261,    46,   461,   462,   359,
      68,   415,   268,    71,    68,   271,    68,    71,   274,    71,
      68,    68,   374,    71,    71,   375,   480,    70,    70,    72,
      72,    70,    69,    72,    14,    15,    67,    68,    71,   200,
      67,    68,   333,   445,    67,    68,    46,   432,    67,    68,
     211,    46,   456,   457,    69,   459,    67,    68,   312,   313,
      68,     3,     4,     5,     6,    71,     8,     9,   314,   315,
     320,   321,   432,   477,   356,    73,    83,    89,    88,    16,
      73,   466,    78,    67,   245,    67,     3,   491,    78,    70,
     450,    33,   452,    70,    70,    70,   381,     3,    71,   484,
      78,    73,     3,     3,    63,    67,   466,    49,    68,     3,
      71,    53,    54,    71,    67,    71,    73,    71,   374,    70,
      62,    73,    71,    73,   484,   381,   287,    75,    70,    38,
      71,    73,    74,    67,   160,   129,   160,    79,    80,    81,
      82,    83,   450,   364,   110,   356,   354,   322,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   323,   325,   324,   455,
      60,   326,   222,   205,    57,   268,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,   359,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,   370,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   384,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    67,    -1,    -1,    70,    -1,    -1,    -1,
      74,    75,    76,    -1,    -1,    79,    80,    81,    82,    83,
       3,     4,     5,     6,   445,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    67,    -1,    -1,    70,    53,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    81,    82,
      83,     3,     4,     5,     6,    70,     8,     9,    -1,    74,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    29,     8,     9,
      32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    -1,    -1,    67,    -1,    -1,    70,    -1,
      -1,    -1,    74,    53,    -1,    -1,    -1,    79,    80,    81,
      82,    83,     3,     4,     5,     6,    -1,     8,     9,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    77,    -1,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    64,    -1,     3,     4,     5,     6,    70,
       8,     9,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    30,    31,    -1,    -1,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    -1,     3,     4,
       5,     6,    50,     8,     9,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    70,    53,    -1,    -1,    74,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    77,    53,    79,
      80,    81,    82,    83,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    67,    -1,
      -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    53,
      79,    80,    81,    82,    83,     3,     4,     5,     6,    -1,
       8,     9,    -1,    53,    -1,    -1,    70,    -1,    -1,    73,
      74,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      70,    53,    -1,    73,    74,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    74,    -1,    -1,    53,    -1,    79,    80,    81,
      82,    83,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    70,
      -1,    -1,    73,    74,    -1,    -1,    53,    -1,    79,    80,
      81,    82,    83,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    70,    53,    -1,    -1,    74,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    -1,    67,    53,
      -1,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    -1,    70,    -1,    -1,    73,
      74,    -1,    -1,    53,    -1,    79,    80,    81,    82,    83,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    67,    -1,    -1,    70,    -1,    -1,
      -1,    74,    -1,    -1,    53,    -1,    79,    80,    81,    82,
      83,     3,     4,     5,     6,    -1,     8,     9,    53,    -1,
      -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    70,    71,    53,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,    -1,
       3,     4,     5,     6,    70,     8,     9,    -1,    74,    -1,
      -1,    53,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,     0,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
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
      60,    61,    62,    -1,    64
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
     130,   139,   140,   141,   143,   144,   147,   212,   213,   214,
     215,   217,    65,     3,    75,   124,    65,    37,    46,    47,
      46,    32,    46,    47,    51,     3,    75,   131,     3,    75,
     142,    32,    46,    47,    51,   100,    99,   104,   147,    95,
      96,   100,    93,    93,    93,    93,    92,    93,   216,    70,
      72,   101,     0,   213,    75,   191,     3,   125,   126,   127,
      75,    65,    46,    46,    47,    46,    98,   132,   133,    75,
     132,    75,    46,    47,    46,    71,    99,   147,    67,    68,
      69,    93,   100,    92,     3,    71,    93,   218,   219,   220,
     221,     3,     4,     5,     6,     8,     9,    33,    49,    53,
      54,    62,    70,    73,    74,    79,    80,    81,    82,    83,
     106,   107,   108,   149,   150,   151,   152,   153,   154,   155,
     156,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,     3,    30,
      31,    34,    35,    36,    42,    43,    44,    50,    56,    63,
      67,    74,    76,    92,   183,   184,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   203,   204,   205,   206,   207,   208,   209,   210,   211,
      68,    76,    69,   125,    46,    78,   100,   134,   135,   136,
     137,    76,   133,   132,    76,   132,    46,    96,    75,   109,
     184,    70,    72,   100,   146,   147,   148,    71,    68,    68,
      71,    70,   162,   162,    70,   162,    93,   145,   186,   161,
     162,   161,   161,   161,   161,   161,    73,    74,   107,   108,
      73,     7,     8,     9,    70,    72,    77,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    69,   185,    74,
      84,    85,    79,    80,    10,    11,    12,    13,    86,    87,
      14,    15,    83,    88,    89,    16,    17,    90,    73,    67,
     183,    67,   187,    70,   201,     3,   210,    70,    67,   186,
      70,    70,    67,    68,    78,    76,   193,    76,   126,   186,
      68,    76,   138,   183,    78,    67,    68,    76,    76,    72,
      77,   109,   110,   111,   112,   113,    71,   146,   218,    73,
      74,   183,   186,   148,    70,    72,    18,   220,     3,   145,
     145,    70,   146,   147,    71,    71,    73,    73,     3,    71,
     157,   184,   186,     3,   184,   161,   161,   161,   172,   172,
     173,   173,   174,   174,   174,   174,   175,   175,   176,   177,
     178,   179,   180,   186,    63,    67,    92,   186,   202,   187,
      67,   186,    67,   186,   186,   184,   187,    76,   138,   135,
     183,     3,    68,    76,   109,    69,   113,    71,    71,    73,
      73,    73,    71,   218,    73,    74,   183,   186,    71,    71,
      75,   161,    68,    71,    73,    78,    70,    67,   186,    67,
      71,    71,    71,    73,    76,   109,   111,    71,    73,    73,
      73,   110,   184,   182,   186,    71,   186,    67,    67,   186,
      38,   187,   187,   109,    68,    76,    71,    71,    71,   186,
      71,    67,   187,    76,    67,    71,    71,   186,    71
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

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])



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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
        case 245:
/* Line 1787 of yacc.c  */
#line 612 "parser.y"
    {{ if (debug){fprintf(stderr, "assignment expression\n");} }}
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 635 "parser.y"
    {{ if (debug){fprintf(stderr, "expression statement\n");} }}
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 636 "parser.y"
    {{ if (debug){fprintf(stderr, "labeled statement\n");} }}
    break;

  case 261:
/* Line 1787 of yacc.c  */
#line 637 "parser.y"
    {{ if (debug){fprintf(stderr, "compound statement\n");} }}
    break;

  case 262:
/* Line 1787 of yacc.c  */
#line 638 "parser.y"
    {{ if (debug){fprintf(stderr, "conditional statement\n");} }}
    break;

  case 263:
/* Line 1787 of yacc.c  */
#line 639 "parser.y"
    {{ if (debug){fprintf(stderr, "iterative statement\n");} }}
    break;

  case 264:
/* Line 1787 of yacc.c  */
#line 640 "parser.y"
    {{ if (debug){fprintf(stderr, "switch statement\n");} }}
    break;

  case 265:
/* Line 1787 of yacc.c  */
#line 641 "parser.y"
    {{ if (debug){fprintf(stderr, "break statement\n");} }}
    break;

  case 266:
/* Line 1787 of yacc.c  */
#line 642 "parser.y"
    {{ if (debug){fprintf(stderr, "continue statement\n");} }}
    break;

  case 267:
/* Line 1787 of yacc.c  */
#line 643 "parser.y"
    {{ if (debug){fprintf(stderr, "return statement\n");} }}
    break;

  case 268:
/* Line 1787 of yacc.c  */
#line 644 "parser.y"
    {{ if (debug){fprintf(stderr, "goto statement\n");} }}
    break;

  case 269:
/* Line 1787 of yacc.c  */
#line 645 "parser.y"
    {{ if (debug){fprintf(stderr, "null statement\n");} }}
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 673 "parser.y"
    {{ if (debug){fprintf(stderr, "declaration\n");} }}
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 674 "parser.y"
    {{ if (debug){fprintf(stderr, "statement\n");} }}
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 761 "parser.y"
    {{ if (debug){fprintf(stderr, "top_level_declaration\n");} }}
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 766 "parser.y"
    {{ if(debug){puts("declaration");}}}
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 767 "parser.y"
    {{ if(debug){puts("function_definition");}}}
    break;


/* Line 1787 of yacc.c  */
#line 2355 "parser.tab.c"
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

#if !defined yyoverflow || YYERROR_VERBOSE
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


/* Line 2048 of yacc.c  */
#line 813 "parser.y"


int main(int argc, char** argv){
    char *infile;
    int c;
    
    while ((c=getopt(argc, argv, "d")) != -1){
        switch(c){
            case 'd':
                debug = 1;
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
        infile = "stdin";
        yyin = stdin;
    }
    yyparse();
    return 0;
}
