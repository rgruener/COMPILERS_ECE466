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
     TIMESEQ = 262,
     DIVEQ = 263,
     MODEQ = 264,
     SHLEQ = 265,
     SHREQ = 266,
     ANDEQ = 267,
     OREQ = 268,
     XOREQ = 269,
     PLUSEQ = 270,
     MINUSEQ = 271,
     INDSEL = 272,
     PLUSPLUS = 273,
     MINUSMINUS = 274,
     SHL = 275,
     SHR = 276,
     LTEQ = 277,
     GTEQ = 278,
     EQEQ = 279,
     NOTEQ = 280,
     LOGAND = 281,
     LOGOR = 282,
     PREINC = 283,
     POSTINC = 284,
     PREDEC = 285,
     POSTDEC = 286,
     AUTO = 287,
     BREAK = 288,
     CASE = 289,
     CHAR = 290,
     CONST = 291,
     ELLIPSIS = 292,
     CONTINUE = 293,
     DEFAULT = 294,
     DO = 295,
     DOUBLE = 296,
     ELSE = 297,
     ENUM = 298,
     EXTERN = 299,
     FLOAT = 300,
     FOR = 301,
     GOTO = 302,
     IF = 303,
     INLINE = 304,
     INT = 305,
     LONG = 306,
     REGISTER = 307,
     RESTRICT = 308,
     RETURN = 309,
     SHORT = 310,
     SIGNED = 311,
     SIZEOF = 312,
     STATIC = 313,
     STRUCT = 314,
     SWITCH = 315,
     TYPEDEF = 316,
     TYPEDEF_NAME = 317,
     UNION = 318,
     UNSIGNED = 319,
     VOID = 320,
     VOLATILE = 321,
     WHILE = 322,
     _BOOL = 323,
     _COMPLEX = 324,
     _IMAGINARY = 325
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 205 "parser.tab.c"

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
#define YYFINAL  104
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2087

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  134
/* YYNRULES -- Number of rules.  */
#define YYNRULES  336
/* YYNRULES -- Number of states.  */
#define YYNSTATES  506

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,     2,     2,    89,    87,     2,
      74,    75,    78,    84,    72,    83,    81,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    71,
      90,    73,    91,    94,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    92,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,    93,    80,    86,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    14,    17,    19,    22,
      24,    27,    29,    32,    34,    36,    40,    42,    46,    48,
      50,    52,    54,    56,    58,    60,    62,    64,    66,    68,
      70,    72,    74,    76,    78,    80,    82,    86,    88,    90,
      92,    95,    97,   100,   104,   109,   114,   119,   125,   131,
     133,   136,   138,   140,   142,   144,   146,   148,   150,   154,
     159,   161,   165,   168,   173,   176,   178,   181,   185,   188,
     190,   192,   194,   196,   198,   201,   204,   208,   210,   213,
     215,   217,   220,   223,   227,   230,   234,   238,   243,   246,
     250,   252,   255,   258,   262,   266,   271,   273,   276,   279,
     281,   283,   286,   288,   291,   294,   298,   300,   302,   304,
     309,   315,   321,   328,   331,   333,   335,   339,   341,   345,
     347,   349,   351,   356,   362,   365,   367,   369,   372,   376,
     378,   382,   384,   386,   388,   391,   395,   397,   399,   401,
     406,   412,   415,   417,   419,   421,   423,   426,   428,   430,
     433,   435,   438,   442,   445,   449,   452,   456,   461,   465,
     469,   474,   478,   483,   486,   490,   495,   499,   501,   503,
     505,   507,   509,   513,   515,   517,   519,   521,   523,   525,
     527,   532,   534,   536,   540,   544,   548,   553,   555,   559,
     562,   565,   572,   580,   582,   587,   589,   591,   593,   595,
     597,   599,   601,   603,   605,   607,   612,   615,   618,   621,
     624,   627,   630,   633,   636,   639,   641,   645,   649,   653,
     655,   659,   663,   665,   669,   673,   675,   679,   683,   687,
     691,   693,   697,   701,   703,   707,   709,   713,   715,   719,
     721,   725,   727,   731,   733,   739,   741,   743,   747,   749,
     751,   753,   755,   757,   759,   761,   763,   765,   767,   769,
     771,   775,   777,   779,   781,   783,   785,   787,   789,   791,
     793,   795,   797,   800,   804,   806,   808,   810,   813,   814,
     819,   821,   824,   826,   828,   830,   832,   838,   846,   848,
     850,   852,   860,   866,   870,   875,   881,   887,   893,   900,
     907,   915,   917,   919,   925,   928,   930,   933,   936,   939,
     943,   947,   949,   951,   953,   956,   958,   960,   961,   967,
     969,   972,   975,   979,   981,   984,   989,   993,   998,  1000,
    1004,  1006,  1010,  1013,  1015,  1018,  1020
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     218,     0,    -1,    97,    99,    71,    -1,   101,    -1,   101,
      97,    -1,   102,    -1,   102,    97,    -1,   103,    -1,   103,
      97,    -1,   104,    -1,   104,    97,    -1,    98,    -1,    98,
      97,    -1,    49,    -1,   100,    -1,    99,    72,   100,    -1,
     105,    -1,   105,    73,   114,    -1,    32,    -1,    44,    -1,
      52,    -1,    58,    -1,    61,    -1,   126,    -1,   123,    -1,
     119,    -1,   133,    -1,   149,    -1,   144,    -1,   148,    -1,
      36,    -1,    66,    -1,    53,    -1,   108,    -1,   106,    -1,
     107,    -1,    74,   105,    75,    -1,   224,    -1,   110,    -1,
       3,    -1,   152,   106,    -1,   104,    -1,   109,   104,    -1,
     106,    76,    77,    -1,   106,    76,   188,    77,    -1,   106,
      76,   111,    77,    -1,   106,    76,   113,    77,    -1,   106,
      76,   111,   113,    77,    -1,   106,    76,   111,    78,    77,
      -1,   112,    -1,   111,   112,    -1,    58,    -1,    53,    -1,
      36,    -1,    66,    -1,   189,    -1,    78,    -1,   189,    -1,
      79,   115,    80,    -1,    79,   115,    72,    80,    -1,   114,
      -1,   115,    72,   114,    -1,   116,   114,    -1,   115,    72,
     116,   114,    -1,   117,    73,    -1,   118,    -1,   117,   118,
      -1,    76,   188,    77,    -1,    81,     3,    -1,   120,    -1,
     121,    -1,   122,    -1,   125,    -1,    55,    -1,    55,    50,
      -1,    56,    55,    -1,    56,    55,    50,    -1,    50,    -1,
      56,    50,    -1,    56,    -1,    51,    -1,    51,    50,    -1,
      56,    51,    -1,    56,    51,    50,    -1,    51,    51,    -1,
      51,    51,    50,    -1,    56,    51,    51,    -1,    56,    51,
      51,    50,    -1,    64,    55,    -1,    64,    55,    50,    -1,
      64,    -1,    64,    50,    -1,    64,    51,    -1,    64,    51,
      50,    -1,    64,    51,    51,    -1,    64,    51,    51,    50,
      -1,    35,    -1,    56,    35,    -1,    64,    35,    -1,    45,
      -1,    41,    -1,    51,    41,    -1,   124,    -1,    45,    69,
      -1,    41,    69,    -1,    51,    41,    69,    -1,    68,    -1,
     127,    -1,   128,    -1,    43,    79,   130,    80,    -1,    43,
     129,    79,   130,    80,    -1,    43,    79,   130,    72,    80,
      -1,    43,   129,    79,   130,    72,    80,    -1,    43,   129,
      -1,     3,    -1,   131,    -1,   130,    72,   131,    -1,   132,
      -1,   132,    73,   191,    -1,     3,    -1,   134,    -1,   135,
      -1,    59,    79,   137,    80,    -1,    59,   136,    79,   137,
      80,    -1,    59,   136,    -1,     3,    -1,   138,    -1,   137,
     138,    -1,   103,   139,    71,    -1,   140,    -1,   139,    72,
     140,    -1,   141,    -1,   142,    -1,   105,    -1,    82,   143,
      -1,   105,    82,   143,    -1,   188,    -1,   145,    -1,   146,
      -1,    63,    79,   137,    80,    -1,    63,   147,    79,   137,
      80,    -1,    63,   147,    -1,     3,    -1,    65,    -1,    62,
      -1,    97,    -1,    97,   151,    -1,   152,    -1,   153,    -1,
     152,   153,    -1,    78,    -1,    78,   109,    -1,    78,   109,
     152,    -1,    78,   152,    -1,    74,   151,    75,    -1,    76,
      77,    -1,   153,    76,    77,    -1,   153,    76,   188,    77,
      -1,    76,   188,    77,    -1,    76,   191,    77,    -1,   153,
      76,   191,    77,    -1,    76,    78,    77,    -1,   153,    76,
      78,    77,    -1,    74,    75,    -1,   153,    74,    75,    -1,
     153,    74,   225,    75,    -1,    74,   225,    75,    -1,     3,
      -1,     6,    -1,     4,    -1,     5,    -1,   155,    -1,    74,
     191,    75,    -1,   154,    -1,   157,    -1,   158,    -1,   161,
      -1,   163,    -1,   164,    -1,   165,    -1,   156,    76,   191,
      77,    -1,   159,    -1,   160,    -1,   156,    81,     3,    -1,
     156,    17,     3,    -1,   156,    74,    75,    -1,   156,    74,
     162,    75,    -1,   189,    -1,   162,    72,   189,    -1,   156,
      18,    -1,   156,    19,    -1,    74,   150,    75,    79,   115,
      80,    -1,    74,   150,    75,    79,   115,    72,    80,    -1,
     167,    -1,    74,   150,    75,   166,    -1,   156,    -1,   168,
      -1,   169,    -1,   170,    -1,   171,    -1,   172,    -1,   173,
      -1,   174,    -1,   175,    -1,   176,    -1,    57,    74,   150,
      75,    -1,    57,   167,    -1,    83,   166,    -1,    84,   166,
      -1,    85,   166,    -1,    86,   166,    -1,    87,   166,    -1,
      78,   166,    -1,    18,   167,    -1,    19,   167,    -1,   166,
      -1,   177,    78,   166,    -1,   177,    88,   166,    -1,   177,
      89,   166,    -1,   177,    -1,   178,    84,   177,    -1,   178,
      83,   177,    -1,   178,    -1,   179,    20,   178,    -1,   179,
      21,   178,    -1,   179,    -1,   180,    90,   179,    -1,   180,
      91,   179,    -1,   180,    22,   179,    -1,   180,    23,   179,
      -1,   180,    -1,   181,    24,   180,    -1,   181,    25,   180,
      -1,   181,    -1,   182,    87,   181,    -1,   182,    -1,   183,
      92,   182,    -1,   183,    -1,   184,    93,   183,    -1,   184,
      -1,   185,    26,   184,    -1,   185,    -1,   186,    27,   185,
      -1,   186,    -1,   186,    94,   191,    82,   187,    -1,   187,
      -1,   188,    -1,   167,   190,   189,    -1,    73,    -1,     7,
      -1,     8,    -1,     9,    -1,    15,    -1,    16,    -1,    10,
      -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,   189,
      -1,   191,    72,   189,    -1,   193,    -1,   194,    -1,   196,
      -1,   200,    -1,   203,    -1,   209,    -1,   212,    -1,   213,
      -1,   214,    -1,   215,    -1,   217,    -1,   191,    71,    -1,
     195,    82,   192,    -1,   216,    -1,   210,    -1,   211,    -1,
      79,    80,    -1,    -1,    79,   197,   198,    80,    -1,   199,
      -1,   198,   199,    -1,    96,    -1,   192,    -1,   201,    -1,
     202,    -1,    48,    74,   191,    75,   192,    -1,    48,    74,
     191,    75,   192,    42,   192,    -1,   204,    -1,   205,    -1,
     206,    -1,    40,   192,    67,    74,   191,    75,    71,    -1,
      67,    74,   191,    75,   192,    -1,    46,   207,   192,    -1,
      74,    71,    71,    75,    -1,    74,   208,    71,    71,    75,
      -1,    74,    71,   191,    71,    75,    -1,    74,    71,    71,
     191,    75,    -1,    74,   208,    71,   191,    71,    75,    -1,
      74,    71,   191,    71,   191,    75,    -1,    74,   208,    71,
     191,    71,   191,    75,    -1,   191,    -1,    96,    -1,    60,
      74,   191,    75,   192,    -1,    34,   188,    -1,    39,    -1,
      33,    71,    -1,    38,    71,    -1,    54,    71,    -1,    54,
     191,    71,    -1,    47,   216,    71,    -1,     3,    -1,    71,
      -1,   219,    -1,   218,   219,    -1,    96,    -1,   220,    -1,
      -1,   222,    79,   221,   198,    80,    -1,   105,    -1,    97,
     105,    -1,   105,   223,    -1,    97,   105,    97,    -1,    96,
      -1,   223,    96,    -1,   106,    74,   225,    75,    -1,   106,
      74,    75,    -1,   106,    74,   228,    75,    -1,   226,    -1,
     226,    72,    37,    -1,   227,    -1,   226,    72,   227,    -1,
      97,   105,    -1,    97,    -1,    97,   151,    -1,     3,    -1,
     228,    72,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,   100,   104,   105,   109,   110,   114,   115,
     116,   117,   121,   125,   126,   127,   128,   129,   130,   131,
     135,   136,   137,   141,   142,   146,   147,   148,   149,   153,
     168,   172,   173,   177,   180,   186,   188,   191,   194,   200,
     201,   205,   206,   207,   208,   212,   213,   217,   218,   219,
     223,   224,   225,   226,   230,   234,   235,   239,   240,   244,
     247,   250,   251,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   275,   276,
     277,   278,   279,   280,   281,   282,   286,   289,   292,   298,
     300,   302,   304,   309,   310,   311,   315,   319,   321,   326,
     327,   328,   329,   333,   337,   341,   342,   346,   347,   351,
     355,   357,   362,   363,   367,   371,   375,   376,   380,   384,
     385,   389,   390,   394,   398,   399,   403,   407,   409,   414,
     415,   419,   423,   427,   431,   445,   446,   450,   451,   452,
     456,   457,   458,   459,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   479,   486,   487,
     488,   489,   493,   497,   498,   499,   500,   501,   502,   503,
     507,   527,   528,   532,   536,   540,   541,   545,   546,   550,
     554,   558,   559,   563,   564,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   581,   582,   586,   590,   594,
     598,   602,   606,   610,   614,   618,   619,   622,   625,   631,
     632,   635,   641,   642,   645,   651,   652,   655,   658,   661,
     667,   668,   671,   677,   678,   684,   685,   691,   692,   698,
     699,   705,   706,   712,   713,   717,   721,   722,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   786,
     787,   791,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   805,   809,   813,   814,   815,   819,   820,   820,
     825,   826,   830,   831,   835,   836,   840,   849,   859,   860,
     861,   865,   874,   883,   887,   888,   889,   890,   891,   892,
     893,   897,   898,   902,   911,   915,   919,   923,   927,   928,
     932,   936,   940,   944,   945,   949,   950,   954,   954,   959,
     960,   961,   962,   966,   967,   971,   973,   974,   979,   980,
     984,   985,   989,   990,   991,   995,   996
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "CHARLIT", "STRING", "NUMBER",
  "TIMESEQ", "DIVEQ", "MODEQ", "SHLEQ", "SHREQ", "ANDEQ", "OREQ", "XOREQ",
  "PLUSEQ", "MINUSEQ", "INDSEL", "PLUSPLUS", "MINUSMINUS", "SHL", "SHR",
  "LTEQ", "GTEQ", "EQEQ", "NOTEQ", "LOGAND", "LOGOR", "PREINC", "POSTINC",
  "PREDEC", "POSTDEC", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "ELLIPSIS", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM",
  "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG",
  "REGISTER", "RESTRICT", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "TYPEDEF_NAME", "UNION", "UNSIGNED",
  "VOID", "VOLATILE", "WHILE", "_BOOL", "_COMPLEX", "_IMAGINARY", "';'",
  "','", "'='", "'('", "')'", "'['", "']'", "'*'", "'{'", "'}'", "'.'",
  "':'", "'-'", "'+'", "'!'", "'~'", "'&'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "$accept", "declaration", "declaration_specifiers",
  "function_specifier", "initialized_declarator_list",
  "initialized_declarator", "storage_class_specifier",
  "typedef_definition", "type_specifier", "type_qualifier", "declarator",
  "direct_declarator", "simple_declarator", "pointer_declarator",
  "type_qualifier_list", "array_declarator", "array_qualifier_list",
  "array_qualifier", "array_size_expression", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "integer_type_specifier", "signed_type_specifier",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    59,    44,    61,    40,    41,    91,    93,    42,   123,
     125,    46,    58,    45,    43,    33,   126,    38,    47,    37,
      60,    62,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    99,    99,   100,   100,   101,   101,
     101,   101,   102,   103,   103,   103,   103,   103,   103,   103,
     104,   104,   104,   105,   105,   106,   106,   106,   106,   107,
     108,   109,   109,   110,   110,   110,   110,   110,   110,   111,
     111,   112,   112,   112,   112,   113,   113,   114,   114,   114,
     115,   115,   115,   115,   116,   117,   117,   118,   118,   119,
     119,   119,   119,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   121,   121,
     121,   121,   121,   121,   121,   121,   122,   122,   122,   123,
     123,   123,   123,   124,   124,   124,   125,   126,   126,   127,
     127,   127,   127,   128,   129,   130,   130,   131,   131,   132,
     133,   133,   134,   134,   135,   136,   137,   137,   138,   139,
     139,   140,   140,   141,   142,   142,   143,   144,   144,   145,
     145,   146,   147,   148,   149,   150,   150,   151,   151,   151,
     152,   152,   152,   152,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   154,
     154,   154,   155,   156,   156,   156,   156,   156,   156,   156,
     157,   158,   158,   159,   160,   161,   161,   162,   162,   163,
     164,   165,   165,   166,   166,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   177,   177,   177,   178,
     178,   178,   179,   179,   179,   180,   180,   180,   180,   180,
     181,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   189,   189,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   191,
     191,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   193,   194,   195,   195,   195,   196,   197,   196,
     198,   198,   199,   199,   200,   200,   201,   202,   203,   203,
     203,   204,   205,   206,   207,   207,   207,   207,   207,   207,
     207,   208,   208,   209,   210,   211,   212,   213,   214,   214,
     215,   216,   217,   218,   218,   219,   219,   221,   220,   222,
     222,   222,   222,   223,   223,   224,   224,   224,   225,   225,
     226,   226,   227,   227,   227,   228,   228
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       2,     1,     2,     3,     4,     4,     4,     5,     5,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       1,     3,     2,     4,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     2,     2,     3,     1,     2,     1,
       1,     2,     2,     3,     2,     3,     3,     4,     2,     3,
       1,     2,     2,     3,     3,     4,     1,     2,     2,     1,
       1,     2,     1,     2,     2,     3,     1,     1,     1,     4,
       5,     5,     6,     2,     1,     1,     3,     1,     3,     1,
       1,     1,     4,     5,     2,     1,     1,     2,     3,     1,
       3,     1,     1,     1,     2,     3,     1,     1,     1,     4,
       5,     2,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     2,     3,     2,     3,     2,     3,     4,     3,     3,
       4,     3,     4,     2,     3,     4,     3,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     3,     3,     3,     4,     1,     3,     2,
       2,     6,     7,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     1,     1,     1,     2,     0,     4,
       1,     2,     1,     1,     1,     1,     5,     7,     1,     1,
       1,     7,     5,     3,     4,     5,     5,     5,     6,     6,
       7,     1,     1,     5,     2,     1,     2,     2,     2,     3,
       3,     1,     1,     1,     2,     1,     1,     0,     5,     1,
       2,     2,     3,     1,     2,     4,     3,     4,     1,     3,
       1,     3,     2,     1,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    39,    18,    96,    30,   100,     0,    19,    99,    13,
      77,    80,    20,    32,    73,    79,    21,     0,    22,   144,
       0,    90,   143,    31,   106,     0,   150,   315,     0,    11,
       3,     5,     7,     9,   319,    34,    35,    33,    38,    25,
      69,    70,    71,    24,   102,    72,    23,   107,   108,    26,
     120,   121,    28,   137,   138,    29,    27,     0,     0,   313,
     316,     0,    37,   104,   114,     0,   113,   103,   101,    81,
      84,    74,    97,    78,    82,    75,   125,     0,   124,   142,
       0,   141,    98,    91,    92,    88,     0,    41,   151,   153,
       0,    14,    16,    12,     4,     6,     8,    10,   323,     0,
     321,     0,     0,    40,     1,   314,   317,   119,     0,   115,
     117,     0,   105,    85,    83,    86,    76,     0,     0,   126,
       0,     0,     0,    93,    94,    89,    36,    42,   152,     2,
       0,     0,   322,    16,   324,   335,   326,   333,     0,   328,
     330,     0,   167,   169,   170,   168,     0,     0,    53,    52,
       0,    51,    54,     0,    43,    56,     0,     0,     0,     0,
       0,     0,    49,     0,   173,   171,   195,   174,   175,   181,
     182,   176,   177,   178,   179,   215,   193,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   219,   222,   225,   230,
     233,   235,   237,   239,   241,   243,   245,     0,    55,     0,
       0,   109,     0,     0,    87,     0,   133,     0,   129,   131,
     132,   122,   127,     0,   139,     0,    95,    15,     0,     0,
      17,   246,    57,     0,     0,   332,   334,   147,   148,   325,
       0,     0,   327,     0,   213,   214,     0,   206,   145,     0,
     259,     0,   212,   193,   207,   208,   209,   210,   211,    45,
       0,    50,     0,    46,     0,   189,   190,     0,     0,     0,
     249,   250,   251,   254,   255,   256,   257,   258,   252,   253,
     248,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,   167,     0,     0,     0,   305,     0,     0,     0,
       0,     0,     0,     0,   312,   278,   282,     0,   283,   261,
     262,     0,   263,     0,   280,   264,   284,   285,   265,   288,
     289,   290,   266,   275,   276,   267,   268,   269,   270,   274,
     271,   111,   116,   118,     0,   110,   134,   136,     0,   128,
       0,   123,   140,     0,     0,    60,     0,     0,     0,    65,
     163,     0,     0,   155,     0,   246,     0,   149,     0,     0,
     329,   331,   336,     0,     0,     0,   146,   147,     0,     0,
     172,    48,    47,   184,   185,     0,   187,     0,   183,   247,
     216,   217,   218,   221,   220,   223,   224,   228,   229,   226,
     227,   231,   232,   234,   236,   238,   240,   242,     0,   306,
     304,   307,     0,     0,     0,   311,     0,     0,   308,     0,
       0,     0,   277,     0,   272,     0,   318,   281,   112,   135,
     130,     0,    68,     0,    58,    62,    64,    66,   154,   166,
     161,   158,   159,   164,     0,   156,     0,   246,     0,     0,
     205,     0,   194,   260,     0,   186,   180,     0,     0,     0,
     302,   301,     0,   293,   310,     0,   309,     0,     0,     0,
     273,    67,    59,    61,     0,   165,   162,   157,   160,     0,
     188,   244,     0,     0,     0,     0,     0,     0,     0,   279,
      63,     0,   191,     0,   294,     0,     0,     0,     0,   286,
     303,   292,   192,     0,   297,   296,     0,   295,     0,     0,
     291,   299,   298,     0,   287,   300
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   306,    99,    29,    90,    91,    30,    31,    32,    33,
      34,    35,    36,    37,    88,    38,   161,   162,   163,   345,
     346,   347,   348,   349,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    66,   108,   109,   110,    49,    50,
      51,    78,   118,   119,   207,   208,   209,   210,   336,    52,
      53,    54,    81,    55,    56,   239,   351,    57,   228,   164,
     165,   166,   167,   168,   169,   170,   171,   375,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   221,   240,   271,   307,   308,   309,   310,
     311,   312,   413,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   404,   452,   322,   323,   324,   325,   326,   327,
     328,   329,   330,    58,    59,    60,   199,    61,   100,    62,
     352,   139,   140,   141
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -379
static const yytype_int16 yypact[] =
{
    1651,  -379,  -379,  -379,  -379,    16,    20,  -379,    27,  -379,
    -379,    92,  -379,  -379,    -7,   114,  -379,    29,  -379,  -379,
      41,   116,  -379,  -379,  -379,    28,    10,  -379,    28,  1987,
    1987,  1987,  1987,  1987,  1987,   -17,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,    51,  1562,  -379,
    -379,    26,  -379,  -379,  -379,    46,    75,  -379,   107,  -379,
     136,  -379,  -379,  -379,   162,   147,  -379,  2019,   152,  -379,
    2019,   166,  -379,  -379,   187,   155,    14,  -379,    10,  -379,
     169,  -379,  1730,  -379,  -379,  -379,  -379,  -379,  -379,    28,
    1987,  1695,   229,   -17,  -379,  -379,  -379,  -379,   -24,  -379,
     176,    46,  -379,  -379,  -379,   213,  -379,    12,  1805,  -379,
    2019,  1831,  2019,  -379,   228,  -379,  -379,  -379,  -379,  -379,
      28,   738,  -379,   180,  -379,  -379,  -379,    48,   206,   227,
    -379,    56,  -379,  -379,  -379,  -379,  1442,  1442,  -379,  -379,
    1473,  -379,  -379,   795,  -379,  1504,  1504,  1504,  1504,  1504,
    1504,   894,  -379,   207,  -379,  -379,    74,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,   212,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,   -11,   160,   230,    39,
     231,   217,   216,   218,   279,    45,  -379,   232,  -379,   634,
      21,  -379,  1504,     2,  -379,  1504,   235,   188,  -379,  -379,
    -379,  -379,  -379,  1857,  -379,  1883,  -379,  -379,  1504,  1002,
    -379,  -379,  -379,  1606,  1020,  -379,  -379,    37,    -3,  -379,
    1952,   307,  -379,   795,  -379,  -379,   795,  -379,    84,   243,
    -379,    72,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    1038,  -379,   242,  -379,   318,  -379,  -379,  1114,  1504,   322,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,
    1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,  1504,
    1504,  -379,   245,   257,  1504,   258,  -379,   871,   256,   328,
     259,  1133,   260,   262,  -379,   252,  -379,   195,  -379,  -379,
    -379,   263,  -379,   459,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,   267,    24,  -379,  -379,  -379,  1504,  -379,
      12,  -379,  -379,  1504,   338,  -379,    60,   738,   -26,  -379,
    -379,   269,   271,  -379,  1151,   270,    96,    -3,  1917,  1175,
    -379,  -379,  -379,   273,   275,  1769,  -379,   111,  1236,  1504,
    -379,  -379,  -379,  -379,  -379,   103,  -379,   100,  -379,  -379,
    -379,  -379,  -379,   -11,   -11,   160,   160,   230,   230,   230,
     230,    39,    39,   231,   217,   216,   218,   279,   -30,  -379,
    -379,  -379,   286,   719,   871,  -379,   283,  1504,  -379,   198,
    1504,  1504,  -379,   634,  -379,   871,  -379,  -379,  -379,  -379,
    -379,   278,  -379,   369,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,   281,  -379,  1260,   280,   102,   282,
     282,  1002,  -379,  -379,  1504,  -379,  -379,  1504,   284,  1278,
    -379,   267,   288,  -379,  -379,   119,  -379,   120,   121,   549,
    -379,  -379,  -379,  -379,   738,  -379,  -379,  -379,  -379,    65,
    -379,  -379,  1504,  1321,   200,  1354,   871,   871,   871,  -379,
    -379,   917,  -379,   126,  -379,   127,  1379,   285,   203,   320,
    -379,  -379,  -379,   294,  -379,  -379,   132,  -379,  1411,   871,
    -379,  -379,  -379,   134,  -379,  -379
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -379,     0,     6,  -379,  -379,   236,  -379,  -379,   -52,     7,
     -20,   -47,  -379,  -379,  -379,  -379,  -379,   208,   209,  -129,
     -74,  -378,  -379,    30,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,   265,  -188,  -379,  -379,  -379,
    -379,  -379,   -39,   -92,  -379,    42,  -379,  -379,    43,  -379,
    -379,  -379,  -379,  -379,  -379,   -19,  -123,   -23,  -214,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -138,   133,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,     1,    19,   -98,    18,    83,    91,    97,    98,
      90,  -379,   -62,   -86,  -101,  -379,  -149,  -288,  -379,  -379,
    -379,  -379,  -379,   -22,  -302,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,    93,  -379,  -379,   331,  -379,  -379,  -379,  -379,  -379,
     -94,  -379,   163,  -379
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -321
static const yytype_int16 yytable[] =
{
      27,   198,   220,    89,   241,    86,    28,   138,    92,   402,
     103,   417,   332,   357,   226,     1,   197,   242,   244,   245,
     246,   247,   248,    64,   107,   117,   212,   107,   117,   212,
     222,     1,    76,    87,    98,    93,    94,    95,    96,    97,
       1,   121,   369,    71,    79,   464,     4,   426,   200,   107,
     343,     1,   447,   333,     1,   344,   201,   101,    27,   102,
     198,   279,   280,    13,    28,   128,   117,   272,   117,   117,
     117,   358,   289,   359,   334,   356,    23,   273,   274,   133,
     242,   213,   335,   215,   241,    63,    25,   241,    26,   126,
      26,   254,   255,   256,   205,   127,    67,   206,   132,    65,
     134,   331,    25,   464,   418,   106,    26,   137,    77,   377,
     133,   223,   242,   224,   227,   366,   453,   225,   222,   337,
      80,   212,   223,   212,   224,    25,    26,   460,   231,   281,
     282,   232,   423,    68,   380,   381,   382,   481,   355,   290,
     424,   398,    69,    70,   369,   482,   332,   370,   257,    72,
     258,    82,   409,   357,   111,   259,   376,   417,   365,   238,
     224,   117,    26,   117,    73,    74,    83,    84,   369,    75,
     379,    85,   369,   432,   369,   444,   112,   446,   445,   468,
     103,   387,   388,   389,   390,   365,   113,   224,   489,   490,
     491,   369,   369,   369,   476,   477,   478,   116,   369,   369,
     227,   493,   494,    86,   369,   125,   369,   501,   400,   505,
     438,   504,   114,   115,   363,   367,   242,   364,   425,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   137,
     442,   120,   142,   143,   144,   145,   137,   123,   124,   238,
     129,   130,   238,   275,   276,   122,   222,   146,   147,   202,
     277,   278,   337,   131,   451,   283,   284,   421,   455,   339,
     340,   457,   458,   204,   434,   148,   414,   369,   443,   456,
     369,   486,   369,   437,   498,   369,   383,   384,   216,   234,
     235,   229,   149,   237,   253,   270,   150,   151,   243,   243,
     243,   243,   243,   243,   463,   152,   385,   386,   242,   230,
     474,   391,   392,   153,   285,   288,   154,   155,   286,   291,
     362,   287,   156,   157,   158,   159,   160,   338,   368,   372,
     206,   373,   222,   483,   485,   378,   488,  -311,   399,   401,
     403,   405,   412,   407,   410,   480,   411,   496,   243,   369,
     222,   422,   367,   470,   428,   415,   429,   431,   439,   503,
     440,   243,   463,   448,   454,   461,   465,   467,   472,   475,
     497,   441,   499,   222,   137,   500,   217,   469,   393,   251,
     252,   137,   142,   143,   144,   145,   203,   394,   427,   397,
     222,   419,   420,   243,   395,   471,   396,   146,   147,   105,
       0,   459,   406,   361,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   450,     0,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,     0,     0,     0,   150,   243,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   153,     0,   343,     0,   218,   219,   462,
     344,     0,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,   292,   143,   144,   145,     0,     0,     0,     0,
       0,   243,     0,     0,     0,     0,   243,   146,   147,     0,
       0,     0,     0,     0,     0,     0,     0,   243,     0,     0,
       0,     2,   293,   294,     3,     4,     0,   295,   296,   297,
       5,   243,     6,     7,     8,   298,   299,   300,     9,    10,
      11,    12,    13,   301,    14,    15,   150,    16,    17,   302,
      18,    19,    20,    21,    22,    23,   303,    24,     0,     0,
     304,     0,     0,   153,     0,     0,     0,   218,   305,   416,
       0,     0,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,   292,   143,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   147,   243,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     243,     2,   293,   294,     3,     4,     0,   295,   296,   297,
       5,     0,     6,     7,     8,   298,   299,   300,     9,    10,
      11,    12,    13,   301,    14,    15,   150,    16,    17,   302,
      18,    19,    20,    21,    22,    23,   303,    24,     0,     0,
     304,     0,     0,   153,     0,     0,     0,   218,   305,   479,
       0,     0,   156,   157,   158,   159,   160,   292,   143,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,   293,   294,     3,
       4,     0,   295,   296,   297,     5,     0,     6,     7,     8,
     298,   299,   300,     9,    10,    11,    12,    13,   301,    14,
      15,   150,    16,    17,   302,    18,    19,    20,    21,    22,
      23,   303,    24,     0,     0,   304,     0,     0,   153,     0,
       0,     0,   218,   305,     0,     0,     0,   156,   157,   158,
     159,   160,   142,   143,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   147,     0,
       0,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     3,     4,   146,   147,     0,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,   150,    16,    17,     0,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
     449,     0,     0,   153,     0,   150,     0,   218,   142,   143,
     144,   145,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,   153,   146,   147,     0,   218,   219,     0,     0,
       0,   156,   157,   158,   159,   160,     0,     2,     0,     0,
       3,     4,     0,     0,     0,     0,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,   150,    16,    17,     0,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,     0,     0,   153,
       0,     0,     0,   218,   292,   143,   144,   145,   156,   157,
     158,   159,   160,     0,     0,     0,     0,     0,     0,   146,
     147,     0,     0,     0,     0,     0,     0,   142,   143,   144,
     145,     0,     0,     0,   293,   294,     0,     0,     0,   295,
     296,   297,   146,   147,     0,     0,     0,   298,   299,   300,
     142,   143,   144,   145,     0,   301,     0,     0,   150,     0,
     148,   302,     0,     0,     0,   146,   147,     0,   303,     0,
       0,     0,   304,     0,     0,   153,     0,   149,     0,   218,
     305,   150,   151,     0,   156,   157,   158,   159,   160,     0,
     152,     0,     0,     0,     0,     0,     0,     0,   153,     0,
       0,   249,   250,     0,   150,     0,     0,   156,   157,   158,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,   343,     0,   218,   219,   492,   344,     0,
     156,   157,   158,   159,   160,   142,   143,   144,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,   147,     0,   142,   143,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,   147,
       0,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   150,   343,     0,
     218,   219,     0,   344,     0,   156,   157,   158,   159,   160,
       0,     0,     0,     0,   153,   150,     0,   353,   354,     0,
       0,     0,     0,   156,   157,   158,   159,   160,     0,     0,
       0,     0,   153,     0,     0,   371,   218,   142,   143,   144,
     145,   156,   157,   158,   159,   160,     0,     0,     0,     0,
       0,     0,   146,   147,     0,     0,   142,   143,   144,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   147,     0,   142,   143,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     147,   150,     0,     0,     0,     0,     0,     0,   142,   143,
     144,   145,     0,     0,     0,     0,     0,     0,   153,   374,
     150,     0,   218,   146,   147,     0,     0,   156,   157,   158,
     159,   160,     0,     0,   408,     0,     0,   153,   150,     0,
       0,   218,     0,     0,     0,     0,   156,   157,   158,   159,
     160,     0,     0,     0,     0,   153,     0,     0,   430,   218,
       0,     0,   150,     0,   156,   157,   158,   159,   160,   142,
     143,   144,   145,     0,     0,     0,     0,     0,     0,   153,
       0,     0,   435,   436,   146,   147,     0,     0,   156,   157,
     158,   159,   160,   142,   143,   144,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   146,   147,
       0,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     0,     0,   150,     0,     0,   146,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,     0,     0,     0,   218,   441,     0,   150,     0,   156,
     157,   158,   159,   160,   142,   143,   144,   145,     0,     0,
       0,     0,     0,     0,   153,   150,     0,   466,   218,   146,
     147,     0,     0,   156,   157,   158,   159,   160,     0,   473,
       0,     0,   153,     0,     0,     0,   218,   142,   143,   144,
     145,   156,   157,   158,   159,   160,     0,     0,     0,     0,
       0,     0,   146,   147,     0,     0,     0,     0,   150,     0,
       0,     0,   142,   143,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,   484,   146,   147,   218,
       0,     0,     0,     0,   156,   157,   158,   159,   160,     0,
       0,   150,     0,     0,   142,   143,   144,   145,     0,     0,
       0,     0,     0,     0,     0,   487,     0,     0,   153,   146,
     147,     0,   218,     0,     0,     0,   150,   156,   157,   158,
     159,   160,     0,     0,     0,   142,   143,   144,   145,     0,
       0,     0,     0,   153,   495,     0,     0,   218,     0,     0,
     146,   147,   156,   157,   158,   159,   160,     0,   150,     0,
       0,     0,     0,     0,     0,     0,   142,   143,   144,   145,
       0,     0,     0,     0,     0,   153,   502,     0,     0,   218,
       0,   146,   147,     0,   156,   157,   158,   159,   160,   150,
       0,     0,     0,     0,     0,     0,     0,   142,   143,   144,
     145,     0,     0,     0,     0,     0,   233,     0,     0,     0,
     218,     0,   146,   147,     0,   156,   157,   158,   159,   160,
     150,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,     0,
       0,   218,     0,     0,     0,     0,   156,   157,   158,   159,
     160,   150,   104,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,     0,
       0,     0,   218,     0,     0,     0,     0,   156,   157,   158,
     159,   160,     0,     0,     2,     0,     0,     3,     4,     0,
       0,     0,     0,     5,     0,     6,     7,     8,     0,     1,
       0,     9,    10,    11,    12,    13,     0,    14,    15,     0,
      16,    17,     0,    18,    19,    20,    21,    22,    23,     0,
      24,     0,     0,     0,     0,     0,    25,     0,     2,     0,
      26,     3,     4,     0,     0,     0,     0,     5,     0,     6,
       7,     8,     0,     0,     1,     9,    10,    11,    12,    13,
       0,    14,    15,     0,    16,    17,     0,    18,    19,    20,
      21,    22,    23,     0,    24,     0,     0,     0,     0,     0,
     223,   350,   224,     2,    26,     0,     3,     4,     0,     0,
       0,     0,     5,     0,     6,     7,     8,     0,   135,     0,
       9,    10,    11,    12,    13,     0,    14,    15,     0,    16,
      17,     0,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,     0,     0,    25,     0,     2,     0,    26,
       3,     4,     0,     0,     0,     0,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,    23,     2,    24,     0,     3,     4,     0,     0,     0,
     136,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,     0,    16,    17,
       0,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,     2,     0,   131,     3,     4,     0,     0,     0,  -320,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       3,     0,     0,   365,   350,   224,     5,    26,     6,     0,
       8,     0,     0,     0,     0,    10,    11,     0,     0,     0,
      14,    15,     0,     0,    17,     0,     3,    19,    20,    21,
      22,     0,     5,    24,     6,     0,     8,     0,     0,     0,
       0,    10,    11,     0,     0,   211,    14,    15,     0,     0,
      17,     0,     3,    19,    20,    21,    22,     0,     5,    24,
       6,     0,     8,     0,     0,     0,     0,    10,    11,     0,
       0,   214,    14,    15,     0,     0,    17,     0,     3,    19,
      20,    21,    22,     0,     5,    24,     6,     0,     8,     0,
       0,     0,     0,    10,    11,     0,     0,   341,    14,    15,
       0,     0,    17,     0,     0,    19,    20,    21,    22,     2,
       0,    24,     3,     4,     0,     0,     0,     0,     5,     0,
       6,     7,     8,   342,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,    23,     2,    24,     0,     3,     4,   360,
       0,     0,   433,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,     0,
      16,    17,     0,    18,    19,    20,    21,    22,    23,     2,
      24,     0,     3,     4,     0,     0,     0,     0,     5,     0,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,    23,     3,    24,     0,     0,     0,     0,
       5,     0,     6,     0,     8,     0,     0,     0,     0,    10,
      11,     0,     0,     0,    14,    15,     0,     0,    17,     0,
       0,    19,    20,    21,    22,     0,     0,    24
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-379))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,   102,   131,    26,   153,    25,     0,   101,    28,   297,
      57,   313,   200,   227,   137,     3,   102,   155,   156,   157,
     158,   159,   160,     3,     3,    77,   118,     3,    80,   121,
     131,     3,     3,    26,    34,    29,    30,    31,    32,    33,
       3,    80,    72,    50,     3,   423,    36,    73,    72,     3,
      76,     3,    82,   202,     3,    81,    80,    74,    58,    76,
     161,    22,    23,    53,    58,    88,   118,    78,   120,   121,
     122,    74,    27,    76,    72,   224,    66,    88,    89,    99,
     218,   120,    80,   122,   233,    69,    74,   236,    78,    75,
      78,    17,    18,    19,    82,    88,    69,   117,    92,    79,
     100,    80,    74,   481,    80,    79,    78,   101,    79,   258,
     130,    74,   250,    76,   137,   238,   404,   137,   219,   205,
      79,   213,    74,   215,    76,    74,    78,   415,    72,    90,
      91,    75,    72,    41,   272,   273,   274,    72,   224,    94,
      80,   290,    50,    51,    72,    80,   334,    75,    74,    35,
      76,    35,   301,   367,    79,    81,   257,   459,    74,   153,
      76,   213,    78,   215,    50,    51,    50,    51,    72,    55,
     271,    55,    72,    77,    72,    72,    69,    77,    75,    77,
     227,   279,   280,   281,   282,    74,    50,    76,   476,   477,
     478,    72,    72,    72,    75,    75,    75,    50,    72,    72,
     223,    75,    75,   223,    72,    50,    72,    75,   294,    75,
     359,   499,    50,    51,   233,   238,   354,   236,   347,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   223,
     368,    79,     3,     4,     5,     6,   230,    50,    51,   233,
      71,    72,   236,    83,    84,    79,   347,    18,    19,    73,
      20,    21,   338,    73,   403,    24,    25,   343,   407,    71,
      72,   410,   411,    50,   358,    36,    71,    72,   369,    71,
      72,    71,    72,   359,    71,    72,   275,   276,    50,   146,
     147,    75,    53,   150,    77,    73,    57,    58,   155,   156,
     157,   158,   159,   160,   423,    66,   277,   278,   436,    72,
     449,   283,   284,    74,    87,    26,    77,    78,    92,    77,
       3,    93,    83,    84,    85,    86,    87,    82,    75,    77,
     340,     3,   423,   472,   473,     3,   475,    82,    71,    71,
      74,     3,    80,    74,    74,   464,    74,   486,   205,    72,
     441,     3,   365,   444,    75,    82,    75,    77,    75,   498,
      75,   218,   481,    67,    71,    77,    75,    77,    74,    71,
      75,    79,    42,   464,   358,    71,   130,   441,   285,   161,
     161,   365,     3,     4,     5,     6,   111,   286,   348,   289,
     481,   338,   340,   250,   287,   447,   288,    18,    19,    58,
      -1,   413,   299,   230,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   403,    -1,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,    -1,    -1,    -1,    57,   294,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    78,    79,    80,
      81,    -1,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,   338,    -1,    -1,    -1,    -1,   343,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,   368,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      -1,    -1,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,   436,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     447,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      -1,    -1,    83,    84,    85,    86,    87,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    84,    85,
      86,    87,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    18,    19,    -1,    -1,
      41,    -1,    43,    44,    45,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      71,    -1,    -1,    74,    -1,    57,    -1,    78,     3,     4,
       5,     6,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,    -1,    74,    18,    19,    -1,    78,    79,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,
      45,    -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,     3,     4,     5,     6,    83,    84,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    38,
      39,    40,    18,    19,    -1,    -1,    -1,    46,    47,    48,
       3,     4,     5,     6,    -1,    54,    -1,    -1,    57,    -1,
      36,    60,    -1,    -1,    -1,    18,    19,    -1,    67,    -1,
      -1,    -1,    71,    -1,    -1,    74,    -1,    53,    -1,    78,
      79,    57,    58,    -1,    83,    84,    85,    86,    87,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    78,    -1,    57,    -1,    -1,    83,    84,    85,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    78,    79,    80,    81,    -1,
      83,    84,    85,    86,    87,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    57,    76,    -1,
      78,    79,    -1,    81,    -1,    83,    84,    85,    86,    87,
      -1,    -1,    -1,    -1,    74,    57,    -1,    77,    78,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    77,    78,     3,     4,     5,
       6,    83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    57,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      57,    -1,    78,    18,    19,    -1,    -1,    83,    84,    85,
      86,    87,    -1,    -1,    71,    -1,    -1,    74,    57,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,    78,
      -1,    -1,    57,    -1,    83,    84,    85,    86,    87,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    77,    78,    18,    19,    -1,    -1,    83,    84,
      85,    86,    87,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    79,    -1,    57,    -1,    83,
      84,    85,    86,    87,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    57,    -1,    77,    78,    18,
      19,    -1,    -1,    83,    84,    85,    86,    87,    -1,    71,
      -1,    -1,    74,    -1,    -1,    -1,    78,     3,     4,     5,
       6,    83,    84,    85,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    75,    18,    19,    78,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    -1,
      -1,    57,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    18,
      19,    -1,    78,    -1,    -1,    -1,    57,    83,    84,    85,
      86,    87,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    74,    75,    -1,    -1,    78,    -1,    -1,
      18,    19,    83,    84,    85,    86,    87,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    78,
      -1,    18,    19,    -1,    83,    84,    85,    86,    87,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    18,    19,    -1,    83,    84,    85,    86,    87,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    57,     0,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    41,    -1,    43,    44,    45,    -1,     3,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    -1,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    32,    -1,
      78,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,    43,
      44,    45,    -1,    -1,     3,    49,    50,    51,    52,    53,
      -1,    55,    56,    -1,    58,    59,    -1,    61,    62,    63,
      64,    65,    66,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      74,    75,    76,    32,    78,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    43,    44,    45,    -1,     3,    -1,
      49,    50,    51,    52,    53,    -1,    55,    56,    -1,    58,
      59,    -1,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    32,    -1,    78,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    43,    44,
      45,    -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      55,    56,    -1,    58,    59,    -1,    61,    62,    63,    64,
      65,    66,    32,    68,    -1,    35,    36,    -1,    -1,    -1,
      75,    41,    -1,    43,    44,    45,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    -1,    58,    59,
      -1,    61,    62,    63,    64,    65,    66,    -1,    68,    -1,
      -1,    32,    -1,    73,    35,    36,    -1,    -1,    -1,    79,
      41,    -1,    43,    44,    45,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    -1,    55,    56,    -1,    58,    59,    -1,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      35,    -1,    -1,    74,    75,    76,    41,    78,    43,    -1,
      45,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    35,    62,    63,    64,
      65,    -1,    41,    68,    43,    -1,    45,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    80,    55,    56,    -1,    -1,
      59,    -1,    35,    62,    63,    64,    65,    -1,    41,    68,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    80,    55,    56,    -1,    -1,    59,    -1,    35,    62,
      63,    64,    65,    -1,    41,    68,    43,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    80,    55,    56,
      -1,    -1,    59,    -1,    -1,    62,    63,    64,    65,    32,
      -1,    68,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      43,    44,    45,    80,    -1,    -1,    49,    50,    51,    52,
      53,    -1,    55,    56,    -1,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    32,    68,    -1,    35,    36,    37,
      -1,    -1,    75,    41,    -1,    43,    44,    45,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    -1,
      58,    59,    -1,    61,    62,    63,    64,    65,    66,    32,
      68,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      43,    44,    45,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    -1,    55,    56,    -1,    58,    59,    -1,    61,    62,
      63,    64,    65,    66,    35,    68,    -1,    -1,    -1,    -1,
      41,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    55,    56,    -1,    -1,    59,    -1,
      -1,    62,    63,    64,    65,    -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    32,    35,    36,    41,    43,    44,    45,    49,
      50,    51,    52,    53,    55,    56,    58,    59,    61,    62,
      63,    64,    65,    66,    68,    74,    78,    96,    97,    98,
     101,   102,   103,   104,   105,   106,   107,   108,   110,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   133,
     134,   135,   144,   145,   146,   148,   149,   152,   218,   219,
     220,   222,   224,    69,     3,    79,   129,    69,    41,    50,
      51,    50,    35,    50,    51,    55,     3,    79,   136,     3,
      79,   147,    35,    50,    51,    55,   105,   104,   109,   152,
      99,   100,   105,    97,    97,    97,    97,    97,    96,    97,
     223,    74,    76,   106,     0,   219,    79,     3,   130,   131,
     132,    79,    69,    50,    50,    51,    50,   103,   137,   138,
      79,   137,    79,    50,    51,    50,    75,   104,   152,    71,
      72,    73,    97,   105,    96,     3,    75,    97,   225,   226,
     227,   228,     3,     4,     5,     6,    18,    19,    36,    53,
      57,    58,    66,    74,    77,    78,    83,    84,    85,    86,
      87,   111,   112,   113,   154,   155,   156,   157,   158,   159,
     160,   161,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   221,
      72,    80,    73,   130,    50,    82,   105,   139,   140,   141,
     142,    80,   138,   137,    80,   137,    50,   100,    78,    79,
     114,   188,   189,    74,    76,   105,   151,   152,   153,    75,
      72,    72,    75,    74,   167,   167,    74,   167,    97,   150,
     189,   191,   166,   167,   166,   166,   166,   166,   166,    77,
      78,   112,   113,    77,    17,    18,    19,    74,    76,    81,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      73,   190,    78,    88,    89,    83,    84,    20,    21,    22,
      23,    90,    91,    24,    25,    87,    92,    93,    26,    27,
      94,    77,     3,    33,    34,    38,    39,    40,    46,    47,
      48,    54,    60,    67,    71,    79,    96,   191,   192,   193,
     194,   195,   196,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   209,   210,   211,   212,   213,   214,   215,   216,
     217,    80,   131,   191,    72,    80,   143,   188,    82,    71,
      72,    80,    80,    76,    81,   114,   115,   116,   117,   118,
      75,   151,   225,    77,    78,   188,   191,   153,    74,    76,
      37,   227,     3,   150,   150,    74,   151,   152,    75,    72,
      75,    77,    77,     3,    75,   162,   189,   191,     3,   189,
     166,   166,   166,   177,   177,   178,   178,   179,   179,   179,
     179,   180,   180,   181,   182,   183,   184,   185,   191,    71,
     188,    71,   192,    74,   207,     3,   216,    74,    71,   191,
      74,    74,    80,   197,    71,    82,    80,   199,    80,   143,
     140,   188,     3,    72,    80,   114,    73,   118,    75,    75,
      77,    77,    77,    75,   225,    77,    78,   188,   191,    75,
      75,    79,   166,   189,    72,    75,    77,    82,    67,    71,
      96,   191,   208,   192,    71,   191,    71,   191,   191,   198,
     192,    77,    80,   114,   116,    75,    77,    77,    77,   115,
     189,   187,    74,    71,   191,    71,    75,    75,    75,    80,
     114,    72,    80,   191,    75,   191,    71,    71,   191,   192,
     192,   192,    80,    75,    75,    75,   191,    75,    71,    42,
      71,    75,    75,   191,   192,    75
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
#line 60 "parser.y"
    {
                int i;
                struct ast_node *head = (yyvsp[(2) - (3)].node);
                while ((yyvsp[(2) - (3)].node) != NULL){
                        
                    struct ast_node *var_type = (yyvsp[(1) - (3)].node);
                    while (var_type->type == AST_STORAGE){
                        var_type = var_type->left;
                    }
                    ast_push_back(var_type, (yyvsp[(2) - (3)].node),LEFT);
                    (yyval.node) = ast_reverse_tree(var_type, LEFT);
                    if ((yyvsp[(1) - (3)].node)->type == AST_STORAGE){
                        struct ast_node *tmp = (yyval.node)->left;
                        struct ast_node *this = (yyvsp[(1) - (3)].node);
                        while (this->left->type == AST_STORAGE){
                            this = this->left;
                        }
                        this->left = tmp;
                        (yyval.node)->left = (yyvsp[(1) - (3)].node);
                    }
                    (yyvsp[(2) - (3)].node) = (yyvsp[(2) - (3)].node)->next;
                }
                (yyval.node) = head;
            }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 88 "parser.y"
    { (yyval.node) = ast_push_back((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), LEFT); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 90 "parser.y"
    { (yyval.node) = ast_push_back((yyvsp[(2) - (2)].node), (yyvsp[(1) - (2)].node), LEFT); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 92 "parser.y"
    { (yyval.node) = ast_push_back((yyvsp[(2) - (2)].node), (yyvsp[(1) - (2)].node), LEFT); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 94 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 96 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 100 "parser.y"
    { (yyval.node) = NULL; }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 104 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 105 "parser.y"
    { (yyval.node) = ast_push_back((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),NEXT); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 109 "parser.y"
    {if(debug)printf("declarator\n");}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 114 "parser.y"
    { (yyval.node) = ast_newnode(AST_STORAGE); (yyval.node)->attributes.storage_class = STORE_AUTO; }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 115 "parser.y"
    { (yyval.node) = ast_newnode(AST_STORAGE); (yyval.node)->attributes.storage_class = STORE_EXTERN; }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 116 "parser.y"
    { (yyval.node) = ast_newnode(AST_STORAGE); (yyval.node)->attributes.storage_class = STORE_REGISTER; }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 117 "parser.y"
    { (yyval.node) = ast_newnode(AST_STORAGE); (yyval.node)->attributes.storage_class = STORE_STATIC; }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 121 "parser.y"
    { (yyval.node) = ast_newnode(AST_TYPEDEF);}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 135 "parser.y"
    { (yyval.node) = NULL;}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 136 "parser.y"
    { (yyval.node) = NULL; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 137 "parser.y"
    { (yyval.node) = NULL; }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 141 "parser.y"
    {if(debug)printf("pointer_declarator\n");}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 142 "parser.y"
    {if(debug)printf("direct_declarator\n");}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 146 "parser.y"
    {if(debug)printf("simple_declarator\n");}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 147 "parser.y"
    {if(debug)printf("parenthasized_declarator\n"); (yyval.node) = (yyvsp[(2) - (3)].node);}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 148 "parser.y"
    {if(debug)printf("function_declarator\n");}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 149 "parser.y"
    {if(debug)printf("array_declarator\n");}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 154 "parser.y"
    {
                int ret;
                (yyval.node) = ast_newnode(AST_VAR);
                strcpy((yyval.node)->attributes.identifier, yylval.yystring);
                (yyval.node)->attributes.ln_effective = line_number;
                strcpy((yyval.node)->attributes.file_name, filename);
                ret = insert_ident(current_scope, yylval.yystring, (yyval.node), NAMESPACE_OTHER);
                if (!ret){
                    fprintf(stderr, "Error: Previous Declaration of Identifier %s - %s: %d\n", yylval.yystring, filename, line_number);
                }
            }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 168 "parser.y"
    {   (yyval.node) = ast_push_back((yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node),LEFT); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 177 "parser.y"
    {   (yyval.node) = ast_newnode(AST_ARRAY);
                                                (yyval.node)->left = (yyvsp[(1) - (3)].node);
                                                (yyval.node)->attributes.size = -1;  }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 180 "parser.y"
    {   if ((yyvsp[(3) - (4)].node)->type != AST_NUM){
                                                                    ast_print_syntax_error(filename, line_number);
                                                                } else {
                                                                    (yyval.node) = ast_newnode(AST_ARRAY);
                                                                    (yyval.node)->left = (yyvsp[(1) - (4)].node);
                                                                    (yyval.node)->attributes.size = (yyvsp[(3) - (4)].node)->attributes.num; } }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 244 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                    (yyval.node)->attributes.num_signed = SIZE_SIGNED;
                                    (yyval.node)->attributes.scalar_type = SCALAR_INT; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 247 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_UNSIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_INT; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 251 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_SIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_INT; }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 286 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_SIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_CHAR; }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 289 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_SIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_CHAR; }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 292 "parser.y"
    { (yyval.node) = ast_newnode(AST_SCALAR); 
                                        (yyval.node)->attributes.num_signed = SIZE_UNSIGNED;
                                        (yyval.node)->attributes.scalar_type = SCALAR_CHAR; }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 298 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support floating point types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 300 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support floating point types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 302 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support floating point types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 304 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support floating point types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 315 "parser.y"
    { (yyval.node)=NULL; }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 319 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support enum types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 321 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support enum types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 355 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support struct types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 357 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support struct types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 407 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support union types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 409 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support union types - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = NULL; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 427 "parser.y"
    { (yyval.node)=NULL; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 432 "parser.y"
    {
                struct ast_node *t;
                t = get_ident(current_scope, yylval.yystring, NAMESPACE_OTHER);
                if (t->left != NULL && t->left->type == AST_TYPEDEF && t->left->left != NULL){
                    (yyval.node) = t->left->left;
                } else {
                    fprintf(stderr, "Error: Problem with typedef - %s: %d\n", filename, line_number);
                    (yyval.node) = NULL;
                }
            }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 456 "parser.y"
    { (yyval.node) = ast_newnode(AST_PTR); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 457 "parser.y"
    { (yyval.node) = ast_newnode(AST_PTR); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 458 "parser.y"
    { (yyval.node) = ast_newnode(AST_PTR); (yyval.node)->left = (yyvsp[(3) - (3)].node); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 459 "parser.y"
    { (yyval.node) = ast_newnode(AST_PTR); (yyval.node)->left = (yyvsp[(2) - (2)].node); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 480 "parser.y"
    {
                char *ident = yylval.yystring;
                ident[yylval.yystring_size] = '\0';
                struct ast_node *var = get_ident(current_scope, ident, NAMESPACE_OTHER);
                (yyval.node) = var;
            }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 486 "parser.y"
    { (yyval.node) = ast_newnode(AST_NUM); (yyval.node)->attributes.num = yylval.yyint; (yyval.node)->attributes.ln_effective = line_number;}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 487 "parser.y"
    { (yyval.node) = ast_newnode(AST_CHAR); (yyval.node)->attributes.num = (int)(yylval.yychar); (yyval.node)->attributes.ln_effective = line_number;}
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 488 "parser.y"
    { (yyval.node) = ast_newnode(AST_STR); strcpy((yyval.node)->attributes.str, yylval.yystring); (yyval.node)->attributes.ln_effective = line_number;}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 493 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 508 "parser.y"
    {
                (yyval.node) = ast_newnode(AST_UNOP);
                (yyval.node)->attributes.op = '*';
                struct ast_node *new = ast_newnode(AST_BINOP);
                struct ast_node *mult = ast_newnode(AST_BINOP);
                struct ast_node *size = ast_newnode(AST_UNOP);
                new->attributes.op = '+';
                new->left = (yyvsp[(1) - (4)].node);
                mult->attributes.op = '*';
                mult->left = (yyvsp[(3) - (4)].node);
                size->attributes.op = SIZEOF;
                size->left = (yyvsp[(1) - (4)].node);
                mult->right = size;
                new->right = mult;
                (yyval.node)->left = new;
            }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 527 "parser.y"
    { (yyval.node) = NULL; }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 528 "parser.y"
    { (yyval.node) = NULL; }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 540 "parser.y"
    { (yyval.node) = ast_newnode(AST_FNCALL); (yyval.node)->left = (yyvsp[(1) - (3)].node); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 541 "parser.y"
    { (yyval.node) = ast_newnode(AST_FNCALL); (yyval.node)->left = (yyvsp[(1) - (4)].node); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 550 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = POSTINC; (yyval.node)->left = (yyvsp[(1) - (2)].node); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 554 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = POSTDEC; (yyval.node)->left = (yyvsp[(1) - (2)].node); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 558 "parser.y"
    { (yyval.node) = NULL; }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 559 "parser.y"
    { (yyval.node) = NULL; }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 564 "parser.y"
    { ast_print_syntax_error(filename, line_number); (yyval.node)=NULL; }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 581 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = SIZEOF; (yyval.node)->left=(yyvsp[(3) - (4)].node); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 582 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = SIZEOF; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 586 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '-'; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 590 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '+'; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 594 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '!'; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 598 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '~'; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 602 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '&'; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 606 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = '*'; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 610 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = PREINC; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 614 "parser.y"
    { (yyval.node) = ast_newnode(AST_UNOP); (yyval.node)->attributes.op = PREINC; (yyval.node)->left=(yyvsp[(2) - (2)].node); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 619 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '*'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 622 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '/'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 625 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '%'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 632 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '+'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 635 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '-'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 642 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = SHL; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 645 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = SHR; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 652 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '<'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 655 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '>'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 658 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = LTEQ; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 661 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = GTEQ; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 668 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = EQEQ; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 671 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = NOTEQ; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 678 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '&'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 685 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '^'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 692 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = '|'; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 699 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = LOGAND; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 706 "parser.y"
    { (yyval.node) = ast_newnode(AST_BINOP); 
                                                            (yyval.node)->attributes.op = LOGOR; 
                                                            (yyval.node)->left=(yyvsp[(1) - (3)].node); (yyval.node)->right=(yyvsp[(3) - (3)].node); }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 713 "parser.y"
    { ast_print_syntax_error(filename, line_number); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 723 "parser.y"
    {
                (yyval.node) = ast_newnode(AST_ASSGN);
                (yyval.node)->left = (yyvsp[(1) - (3)].node);
                if ((yyvsp[(2) - (3)].yyint) == '='){
                    (yyval.node)->right = (yyvsp[(3) - (3)].node);
                } else {
                    struct ast_node *right;
                    right = ast_newnode(AST_BINOP);
                    right->left = (yyvsp[(1) - (3)].node);
                    right->right = (yyvsp[(3) - (3)].node);
                    switch ((yyvsp[(2) - (3)].yyint)){
                        case TIMESEQ:
                            right->attributes.op = '*';
                            break;
                        case DIVEQ:
                            right->attributes.op = '/';
                            break;
                        case MODEQ:
                            right->attributes.op = '%';
                            break;
                        case PLUSEQ:
                            right->attributes.op = '+';
                            break;
                        case MINUSEQ:
                            right->attributes.op = '-';
                            break;
                        case SHLEQ:
                            right->attributes.op = SHL;
                            break;
                        case SHREQ:
                            right->attributes.op = SHR;
                            break;
                        case ANDEQ:
                            right->attributes.op = '&';
                            break;
                        case OREQ:
                            right->attributes.op = '|';
                            break;
                        case XOREQ:
                            right->attributes.op = '^';
                            break;

                    }
                (yyval.node)->right = right;
                }
            }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 772 "parser.y"
    { (yyval.yyint) = '='; }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 773 "parser.y"
    { (yyval.yyint) = TIMESEQ; }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 774 "parser.y"
    { (yyval.yyint) = DIVEQ; }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 775 "parser.y"
    { (yyval.yyint) = MODEQ; }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 776 "parser.y"
    { (yyval.yyint) = PLUSEQ; }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 777 "parser.y"
    { (yyval.yyint) = MINUSEQ; }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 778 "parser.y"
    { (yyval.yyint) = SHLEQ; }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 779 "parser.y"
    { (yyval.yyint) = SHREQ; }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 780 "parser.y"
    { (yyval.yyint) = ANDEQ; }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 781 "parser.y"
    { (yyval.yyint) = OREQ; }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 782 "parser.y"
    { (yyval.yyint) = XOREQ; }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 791 "parser.y"
    {{ if (debug){fprintf(stderr, "expression statement\n");} }}
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 792 "parser.y"
    { if (debug){fprintf(stderr, "labeled statement\n");} }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 793 "parser.y"
    {  if (debug){fprintf(stderr, "compound statement\n");}}
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 794 "parser.y"
    {{ if (debug){fprintf(stderr, "conditional statement\n");} }}
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 795 "parser.y"
    {{ if (debug){fprintf(stderr, "iterative statement\n");} }}
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 796 "parser.y"
    {{ if (debug){fprintf(stderr, "switch statement\n");} }}
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 797 "parser.y"
    {{ if (debug){fprintf(stderr, "break statement\n");} }}
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 798 "parser.y"
    {{ if (debug){fprintf(stderr, "continue statement\n");} }}
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 799 "parser.y"
    {{ if (debug){fprintf(stderr, "return statement\n");} }}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 800 "parser.y"
    {{ if (debug){fprintf(stderr, "goto statement\n");} }}
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 801 "parser.y"
    {{ if (debug){fprintf(stderr, "null statement\n");} }}
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 805 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); if (debug){fprintf(stderr, "expression\n");} }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 820 "parser.y"
    { current_scope = sym_table_new(filename, BLOCK_SCOPE, line_number, current_scope); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 821 "parser.y"
    { current_scope = sym_table_pop(current_scope); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 825 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 826 "parser.y"
    { (yyval.node) = ast_push_back((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node), NEXT); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 830 "parser.y"
    { if (print_ast && 0){ ast_print_tree(NULL);} }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 831 "parser.y"
    { if (print_ast && 0){ ast_print_node((yyvsp[(1) - (1)].node), 1);} }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 841 "parser.y"
    {
                (yyval.node) = ast_newnode(AST_IF);
                (yyval.node)->cond = (yyvsp[(3) - (5)].node);
                (yyval.node)->body = (yyvsp[(5) - (5)].node);
            }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 850 "parser.y"
    {
                (yyval.node) = ast_newnode(AST_IF);
                (yyval.node)->cond = (yyvsp[(3) - (7)].node);
                (yyval.node)->body = (yyvsp[(5) - (7)].node);
                (yyval.node)->other = (yyvsp[(7) - (7)].node);
            }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 866 "parser.y"
    {
                (yyval.node) = ast_newnode(AST_DO);
                (yyval.node)->cond = (yyvsp[(5) - (7)].node);
                (yyval.node)->body = (yyvsp[(2) - (7)].node);
            }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 875 "parser.y"
    {
                (yyval.node) = ast_newnode(AST_WHILE);
                (yyval.node)->cond = (yyvsp[(3) - (5)].node);
                (yyval.node)->body = (yyvsp[(5) - (5)].node);
            }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 883 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); (yyval.node)->body = (yyvsp[(3) - (3)].node); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 887 "parser.y"
    { (yyval.node) = ast_newnode(AST_FOR); }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 888 "parser.y"
    { (yyval.node) = ast_newnode(AST_FOR); (yyval.node)->left = (yyvsp[(2) - (5)].node); }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 889 "parser.y"
    { (yyval.node) = ast_newnode(AST_FOR); (yyval.node)->cond = (yyvsp[(3) - (5)].node); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 890 "parser.y"
    { (yyval.node) = ast_newnode(AST_FOR); (yyval.node)->right = (yyvsp[(4) - (5)].node); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 891 "parser.y"
    { (yyval.node) = ast_newnode(AST_FOR); (yyval.node)->left = (yyvsp[(2) - (6)].node); (yyval.node)->cond = (yyvsp[(4) - (6)].node); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 892 "parser.y"
    { (yyval.node) = ast_newnode(AST_FOR); (yyval.node)->cond = (yyvsp[(3) - (6)].node); (yyval.node)->right = (yyvsp[(5) - (6)].node); }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 893 "parser.y"
    { (yyval.node) = ast_newnode(AST_FOR); (yyval.node)->left = (yyvsp[(2) - (7)].node); (yyval.node)->cond = (yyvsp[(4) - (7)].node); (yyval.node)->right = (yyvsp[(6) - (7)].node); }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 903 "parser.y"
    {
                (yyval.node) = ast_newnode(AST_SWITCH);
                (yyval.node)->cond = (yyvsp[(3) - (5)].node);
                (yyval.node)->body = (yyvsp[(5) - (5)].node);
            }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 940 "parser.y"
    { (yyval.node) = NULL; }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 944 "parser.y"
    {{ if (debug){fprintf(stderr, "top_level_declaration\n");} }}
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 949 "parser.y"
    {{ if(debug){puts("declaration");}}}
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 950 "parser.y"
    {{ if(debug){puts("function_definition");}}}
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 954 "parser.y"
    { current_scope = sym_table_new(filename, FUNCTION_SCOPE, line_number, current_scope); }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 955 "parser.y"
    { current_scope = sym_table_pop(current_scope); if (print_ast){ast_dump((yyvsp[(4) - (5)].node));} }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 971 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support function prototypes - %s: %d\n",
                                                                 filename, line_number);(yyval.node) = ast_newnode(AST_FN); ast_push_back((yyval.node),(yyvsp[(1) - (4)].node),LEFT); }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 973 "parser.y"
    { (yyval.node) = ast_newnode(AST_FN); ast_push_back((yyval.node),(yyvsp[(1) - (3)].node),LEFT); }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 974 "parser.y"
    { fprintf(stderr, "Warning: This compiler doesn't support function arguments - %s: %d\n",
                                                                filename, line_number);(yyval.node) = ast_newnode(AST_FN); ast_push_back((yyval.node),(yyvsp[(1) - (4)].node),LEFT); }
    break;



/* Line 1806 of yacc.c  */
#line 3539 "parser.tab.c"
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
#line 999 "parser.y"


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
        strcpy(filename, "<stdin>");
        line_number=1;
        infile = "<stdin>";
        yyin = stdin;
    }
    current_scope = sym_table_new(infile, FILE_SCOPE, 1, NULL);
    yyparse();
    return 0;
}

