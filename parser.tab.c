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
#include "tokens.h"
#include "hash.h"

extern int yylex();
extern int yyleng;
int yyerror(const char *p) {fprintf(stderr, "ERROR");}


/* Line 268 of yacc.c  */
#line 83 "parser.tab.c"

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
     UNION = 313,
     UNSIGNED = 314,
     VOID = 315,
     VOLATILE = 316,
     WHILE = 317,
     _BOOL = 318,
     _COMPLEX = 319,
     _IMAGINARY = 320
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 189 "parser.tab.c"

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNRULES -- Number of states.  */
#define YYNSTATES  389

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,    79,    72,     2,
      82,    83,    77,    75,    66,    76,    80,    78,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    81,
      73,    67,    74,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    71,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    70,    87,    89,     2,     2,     2,
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
      65
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
      92,    95,    99,   102,   104,   107,   111,   116,   121,   126,
     132,   137,   143,   145,   148,   150,   152,   154,   156,   158,
     160,   162,   166,   171,   173,   177,   180,   185,   188,   190,
     193,   197,   200,   202,   204,   206,   208,   210,   213,   216,
     220,   222,   225,   227,   229,   232,   235,   239,   242,   246,
     250,   255,   258,   262,   264,   267,   270,   274,   278,   283,
     285,   288,   291,   293,   295,   298,   300,   303,   306,   310,
     312,   314,   316,   321,   327,   333,   340,   343,   345,   347,
     351,   353,   357,   359,   361,   363,   368,   374,   377,   379,
     381,   384,   388,   390,   394,   396,   398,   400,   403,   407,
     409,   411,   413,   418,   424,   427,   429,   431,   433,   435,
     438,   440,   442,   445,   447,   449,   452,   456,   458,   461,
     465,   468,   472,   477,   481,   485,   490,   494,   499,   502,
     506,   511,   515,   517,   519,   521,   523,   527,   529,   531,
     533,   535,   537,   539,   541,   546,   548,   550,   554,   558,
     562,   567,   569,   573,   576,   579,   586,   594,   596,   601,
     603,   605,   607,   609,   611,   613,   615,   617,   619,   621,
     626,   629,   632,   635,   638,   641,   644,   647,   650,   653,
     655,   659,   663,   667,   669,   673,   677,   679,   683,   687,
     689,   693,   697,   701,   705,   707,   711,   715,   717,   721,
     723,   727,   729,   733,   735,   739,   741,   745,   747,   753,
     755,   757,   761,   763,   765,   767,   769,   771,   773,   775,
     777,   779,   781,   783,   785,   789,   794,   798,   803,   805,
     809,   811,   815,   818,   820,   823,   825
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    94,    81,    -1,    96,    -1,    96,
      92,    -1,    97,    -1,    97,    92,    -1,    98,    -1,    98,
      92,    -1,    93,    -1,    93,    92,    -1,    45,    -1,    95,
      -1,    94,    66,    95,    -1,    99,    -1,    99,    67,   109,
      -1,    29,    -1,    40,    -1,    48,    -1,    54,    -1,    57,
      -1,   121,    -1,   118,    -1,   114,    -1,   128,    -1,   144,
      -1,   139,    -1,   143,    -1,    33,    -1,    61,    -1,    49,
      -1,   102,    -1,   100,    -1,   101,    -1,    82,    99,    83,
      -1,   186,    -1,   105,    -1,     3,    -1,   103,   100,    -1,
      77,    -1,    77,   104,    -1,    77,   104,   103,    -1,    77,
     103,    -1,    98,    -1,   104,    98,    -1,   100,    84,    85,
      -1,   100,    84,   182,    85,    -1,   100,    84,   106,    85,
      -1,   100,    84,   108,    85,    -1,   100,    84,   106,   108,
      85,    -1,   100,    84,    77,    85,    -1,   100,    84,   106,
      77,    85,    -1,   107,    -1,   106,   107,    -1,    54,    -1,
      49,    -1,    33,    -1,    61,    -1,   183,    -1,    77,    -1,
     183,    -1,    86,   110,    87,    -1,    86,   110,    66,    87,
      -1,   109,    -1,   110,    66,   109,    -1,   111,   109,    -1,
     110,    66,   111,   109,    -1,   112,    67,    -1,   113,    -1,
     112,   113,    -1,    84,   182,    85,    -1,    80,     3,    -1,
     115,    -1,   116,    -1,   117,    -1,   120,    -1,    51,    -1,
      51,    46,    -1,    52,    51,    -1,    52,    51,    46,    -1,
      46,    -1,    52,    46,    -1,    52,    -1,    47,    -1,    47,
      46,    -1,    52,    47,    -1,    52,    47,    46,    -1,    47,
      47,    -1,    47,    47,    46,    -1,    52,    47,    47,    -1,
      52,    47,    47,    46,    -1,    59,    51,    -1,    59,    51,
      46,    -1,    59,    -1,    59,    46,    -1,    59,    47,    -1,
      59,    47,    46,    -1,    59,    47,    47,    -1,    59,    47,
      47,    46,    -1,    32,    -1,    52,    32,    -1,    59,    32,
      -1,    41,    -1,    37,    -1,    47,    37,    -1,   119,    -1,
      41,    64,    -1,    37,    64,    -1,    47,    37,    64,    -1,
      63,    -1,   122,    -1,   123,    -1,    39,    86,   125,    87,
      -1,    39,   124,    86,   125,    87,    -1,    39,    86,   125,
      66,    87,    -1,    39,   124,    86,   125,    66,    87,    -1,
      39,   124,    -1,     3,    -1,   126,    -1,   125,    66,   126,
      -1,   127,    -1,   127,    67,   185,    -1,     3,    -1,   129,
      -1,   130,    -1,    55,    86,   132,    87,    -1,    55,   131,
      86,   132,    87,    -1,    55,   131,    -1,     3,    -1,   133,
      -1,   132,   133,    -1,    97,   134,    81,    -1,   135,    -1,
     134,    66,   135,    -1,   136,    -1,   137,    -1,    99,    -1,
      69,   138,    -1,    99,    69,   138,    -1,   182,    -1,   140,
      -1,   141,    -1,    58,    86,   132,    87,    -1,    58,   142,
      86,   132,    87,    -1,    58,   142,    -1,     3,    -1,    60,
      -1,     3,    -1,    92,    -1,    92,   146,    -1,   103,    -1,
     147,    -1,   103,   147,    -1,    77,    -1,   104,    -1,    77,
     103,    -1,    77,   104,   103,    -1,    98,    -1,   104,    98,
      -1,    82,   146,    83,    -1,    84,    85,    -1,   147,    84,
      85,    -1,   147,    84,   182,    85,    -1,    84,   182,    85,
      -1,    84,   185,    85,    -1,   147,    84,   185,    85,    -1,
      84,    77,    85,    -1,   147,    84,    77,    85,    -1,    82,
      83,    -1,   147,    82,    83,    -1,   147,    82,   187,    83,
      -1,    82,   187,    83,    -1,     3,    -1,     6,    -1,     5,
      -1,   149,    -1,    82,   185,    83,    -1,   148,    -1,   151,
      -1,   152,    -1,   155,    -1,   157,    -1,   158,    -1,   159,
      -1,   150,    84,   185,    85,    -1,   153,    -1,   154,    -1,
     150,    80,     3,    -1,   150,     7,     3,    -1,   150,    82,
      83,    -1,   150,    82,   156,    83,    -1,   183,    -1,   156,
      66,   183,    -1,   150,     8,    -1,   150,     9,    -1,    82,
     145,    83,    86,   110,    87,    -1,    82,   145,    83,    86,
     110,    66,    87,    -1,   161,    -1,    82,   145,    83,   160,
      -1,   150,    -1,   162,    -1,   163,    -1,   164,    -1,   165,
      -1,   166,    -1,   167,    -1,   168,    -1,   169,    -1,   170,
      -1,    53,    82,   145,    83,    -1,    53,   161,    -1,    76,
     160,    -1,    75,   160,    -1,    88,   160,    -1,    89,   160,
      -1,    72,   160,    -1,    77,   160,    -1,     8,   161,    -1,
       9,   161,    -1,   160,    -1,   171,    77,   160,    -1,   171,
      78,   160,    -1,   171,    79,   160,    -1,   171,    -1,   172,
      75,   171,    -1,   172,    76,   171,    -1,   172,    -1,   173,
      10,   172,    -1,   173,    11,   172,    -1,   173,    -1,   174,
      73,   173,    -1,   174,    74,   173,    -1,   174,    12,   173,
      -1,   174,    13,   173,    -1,   174,    -1,   175,    14,   174,
      -1,   175,    15,   174,    -1,   175,    -1,   176,    72,   175,
      -1,   176,    -1,   177,    71,   176,    -1,   177,    -1,   178,
      70,   177,    -1,   178,    -1,   179,    16,   178,    -1,   179,
      -1,   180,    17,   179,    -1,   180,    -1,   180,    68,   185,
      69,   181,    -1,   181,    -1,   181,    -1,   161,   184,   183,
      -1,    67,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,   183,    -1,   185,    66,   183,    -1,   100,
      82,   187,    83,    -1,   100,    82,    83,    -1,   100,    82,
     190,    83,    -1,   188,    -1,   188,    66,    18,    -1,   189,
      -1,   188,    66,   189,    -1,    92,    99,    -1,    92,    -1,
      92,   146,    -1,     3,    -1,   190,    66,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    60,    61,    62,    63,    64,    65,    66,
      67,    71,    75,    76,    80,    81,    85,    86,    87,    88,
      89,    93,    94,    95,    96,    97,    98,    99,   103,   104,
     105,   109,   110,   114,   115,   116,   117,   121,   125,   129,
     130,   131,   132,   136,   137,   141,   142,   143,   144,   145,
     146,   147,   151,   152,   156,   157,   158,   159,   163,   164,
     168,   169,   170,   174,   175,   176,   177,   181,   185,   186,
     190,   191,   195,   196,   197,   198,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   220,   221,   222,   223,   224,   225,   226,   227,   231,
     232,   233,   237,   238,   239,   240,   244,   245,   246,   250,
     254,   255,   259,   260,   261,   262,   266,   270,   274,   275,
     279,   280,   284,   288,   289,   293,   294,   298,   302,   306,
     307,   311,   315,   316,   320,   321,   325,   329,   330,   334,
     338,   339,   343,   344,   348,   352,   356,   360,   364,   365,
     369,   370,   371,   375,   376,   377,   378,   382,   383,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   403,   404,   405,   406,   410,   414,   415,   416,
     417,   418,   419,   420,   424,   428,   429,   433,   437,   441,
     442,   446,   447,   451,   455,   459,   460,   464,   465,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   482,
     483,   487,   491,   495,   499,   503,   507,   511,   515,   519,
     520,   521,   522,   526,   527,   528,   532,   533,   534,   538,
     539,   540,   541,   542,   546,   547,   548,   552,   553,   557,
     558,   562,   563,   567,   568,   572,   573,   577,   578,   582,
     610,   611,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   629,   630,   785,   786,   787,   791,   792,
     796,   797,   801,   802,   803,   807,   808
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
  "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID",
  "VOLATILE", "WHILE", "_BOOL", "_COMPLEX", "_IMAGINARY", "','", "'='",
  "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'.'", "';'", "'('", "')'", "'['", "']'", "'{'", "'}'",
  "'!'", "'~'", "$accept", "declaration", "declaration_specifiers",
  "function_specifier", "initialized_declarator_list",
  "initialized_declarator", "storage_class_specifier", "type_specifier",
  "type_qualifier", "declarator", "direct_declarator", "simple_declarator",
  "pointer_declarator", "pointer", "type_qualifier_list",
  "array_declarator", "array_qualifier_list", "array_qualifier",
  "array_size_expression", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "integer_type_specifier",
  "signed_type_specifier", "unsigned_type_specifier",
  "character_type_specifier", "floating_point_specifier",
  "complex_type_specifier", "bool_type_specifier",
  "enumeration_type_specifier", "enumeration_type_definition",
  "enumeration_type_reference", "enumeration_tag",
  "enumeration_definition_list", "enumeration_constant_definition",
  "enumeration_constant", "structure_type_specifier",
  "structure_type_definition", "structure_type_reference", "structure_tag",
  "field_list", "component_declaration", "component_declaration_list",
  "component_declarator", "simple_component", "bit_field", "width",
  "union_type_specifier", "union_type_definition", "union_type_reference",
  "union_tag", "void_type_specifier", "typedef_name", "type_name",
  "abstract_declarator", "direct_abstract_declarator",
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
  "function_declarator", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", 0
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
     315,   316,   317,   318,   319,   320,    44,    61,    63,    58,
     124,    94,    38,    60,    62,    43,    45,    42,    47,    37,
      46,    59,    40,    41,    91,    93,   123,   125,    33,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    99,    99,   100,   100,   100,   100,   101,   102,   103,
     103,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   107,   107,   108,   108,
     109,   109,   109,   110,   110,   110,   110,   111,   112,   112,
     113,   113,   114,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   118,   118,   118,   118,   119,   119,   119,   120,
     121,   121,   122,   122,   122,   122,   123,   124,   125,   125,
     126,   126,   127,   128,   128,   129,   129,   130,   131,   132,
     132,   133,   134,   134,   135,   135,   136,   137,   137,   138,
     139,   139,   140,   140,   141,   142,   143,   144,   145,   145,
     146,   146,   146,   103,   103,   103,   103,   104,   104,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   148,   148,   148,   148,   149,   150,   150,   150,
     150,   150,   150,   150,   151,   152,   152,   153,   154,   155,
     155,   156,   156,   157,   158,   159,   159,   160,   160,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   162,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     171,   171,   171,   172,   172,   172,   173,   173,   173,   174,
     174,   174,   174,   174,   175,   175,   175,   176,   176,   177,
     177,   178,   178,   179,   179,   180,   180,   181,   181,   182,
     183,   183,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   185,   185,   186,   186,   186,   187,   187,
     188,   188,   189,   189,   189,   190,   190
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     1,
       2,     3,     2,     1,     2,     3,     4,     4,     4,     5,
       4,     5,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     2,     4,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     2,     1,     1,     2,     2,     3,     2,     3,     3,
       4,     2,     3,     1,     2,     2,     3,     3,     4,     1,
       2,     2,     1,     1,     2,     1,     2,     2,     3,     1,
       1,     1,     4,     5,     5,     6,     2,     1,     1,     3,
       1,     3,     1,     1,     1,     4,     5,     2,     1,     1,
       2,     3,     1,     3,     1,     1,     1,     2,     3,     1,
       1,     1,     4,     5,     2,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     2,     3,     1,     2,     3,
       2,     3,     4,     3,     3,     4,     3,     4,     2,     3,
       4,     3,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     3,     3,     3,
       4,     1,     3,     2,     2,     6,     7,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     4,     1,     3,
       1,     3,     2,     1,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   147,    16,    99,    28,   103,     0,    17,   102,    11,
      80,    83,    18,    30,    76,    82,    19,     0,    20,     0,
      93,   146,    29,   109,     0,     0,     9,     3,     5,     7,
      23,    72,    73,    74,    22,   105,    75,    21,   110,   111,
      24,   123,   124,    26,   140,   141,    27,    25,   107,   117,
       0,   116,   106,   104,    84,    77,   100,    81,    85,    78,
     128,     0,   127,   145,     0,   144,   101,    94,    95,    91,
       1,    37,    39,     0,     0,    12,    43,    14,    32,    33,
      31,     0,   154,    36,    35,    10,     4,     6,     8,   122,
       0,   118,   120,     0,   108,    86,    79,     0,     0,   129,
       0,     0,     0,    96,    92,    42,    40,     0,     0,     2,
       0,     0,     0,    38,    44,     0,   112,     0,     0,     0,
     136,     0,   132,   134,   135,   125,   130,     0,   142,     0,
      43,    41,    34,    13,   172,   174,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,   177,
     175,   199,   178,   179,   185,   186,   180,   181,   182,   183,
     219,   197,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   223,   226,   229,   234,   237,   239,   241,   243,   245,
     247,   250,    60,   147,   266,   273,     0,   268,   270,     0,
      56,    55,    54,    57,     0,    45,     0,    52,     0,   249,
       0,    58,   114,   119,   263,   121,     0,   113,   137,   197,
     249,   139,     0,     0,   131,   126,   143,     0,   217,   218,
       0,   210,   215,   212,   211,   216,   172,   148,     0,     0,
       0,     0,    63,     0,     0,     0,    68,   213,   214,     0,
     193,   194,     0,     0,     0,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   252,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   272,   150,
     274,   151,   265,     0,     0,   267,    50,     0,    47,    53,
       0,    48,    46,     0,   115,   138,   133,     0,     0,     0,
     150,   149,     0,   176,    71,     0,     0,    61,    65,    67,
      69,   188,   187,   189,     0,   191,     0,   251,   220,   221,
     222,   224,   225,   227,   228,   232,   233,   230,   231,   235,
     236,   238,   240,   242,   244,   246,     0,   147,   168,     7,
       0,     0,     0,   160,     0,     0,   152,     0,     0,   269,
     271,   276,    51,    49,   264,     0,   209,     0,   198,    70,
      62,    64,     0,     0,   190,   184,     0,   159,   171,   166,
     163,   164,   169,     0,     0,   161,     0,     0,     0,    66,
     192,   248,   170,   167,   162,   165,     0,   195,   196
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,   185,    26,    74,    75,    27,    28,    29,    77,
      78,    79,    80,    81,    82,    83,   196,   197,   198,   232,
     233,   234,   235,   236,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    51,    90,    91,    92,    40,    41,
      42,    62,    98,    99,   121,   122,   123,   124,   208,    43,
      44,    45,    65,    46,    47,   228,   340,   281,   149,   150,
     151,   152,   153,   154,   155,   156,   314,   157,   158,   159,
     160,   209,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   211,   204,   256,   229,    84,   341,   187,   188,
     189
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -284
static const yytype_int16 yypact[] =
{
    1209,  -284,  -284,  -284,  -284,   -14,    15,  -284,    -6,  -284,
    -284,   139,  -284,  -284,    32,   141,  -284,    16,  -284,    18,
     180,  -284,  -284,  -284,    82,   129,  1209,  1209,  1209,  1209,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     138,    59,  -284,    90,  -284,  -284,  -284,  -284,   131,   137,
    -284,  1241,   123,  -284,  1241,   143,  -284,  -284,   148,   169,
    -284,  -284,     6,   129,    28,  -284,  -284,   158,   -16,  -284,
    -284,    30,     2,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     -23,  -284,   176,   138,  -284,  -284,  -284,   372,   788,  -284,
    1241,   818,  1241,  -284,  -284,  -284,     6,   153,   129,  -284,
     414,  1090,   318,   -16,  -284,     1,  -284,   712,   -22,   712,
     183,   115,  -284,  -284,  -284,  -284,  -284,   851,  -284,   876,
     172,  -284,  -284,  -284,  -284,  -284,  -284,   727,   727,   742,
     712,   712,   712,   712,   259,   393,   712,   712,  -284,  -284,
    -284,   286,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   958,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   155,    41,   112,    12,   189,   185,   195,   200,   255,
      19,  -284,  -284,  -284,  -284,    58,   190,   211,  -284,    48,
    -284,  -284,  -284,  -284,   489,  -284,   355,  -284,   196,   221,
     204,  -284,  -284,  -284,  -284,  -284,    10,  -284,  -284,  -284,
    -284,  -284,   712,   372,  -284,  -284,  -284,   259,  -284,  -284,
     259,  -284,  -284,  -284,  -284,  -284,   913,   146,   207,    84,
     294,   712,  -284,    24,   414,   117,  -284,  -284,  -284,   299,
    -284,  -284,   306,   504,   712,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   972,   519,  -284,    14,
    -284,   134,  -284,  1176,   312,  -284,  -284,   544,  -284,  -284,
     240,  -284,  -284,   712,  -284,  -284,  -284,   245,   246,  1031,
     162,  -284,   597,  -284,  -284,   247,    71,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,   108,  -284,   -10,  -284,  -284,  -284,
    -284,   155,   155,    41,    41,   112,   112,   112,   112,    12,
      12,   189,   185,   195,   200,   255,    52,   201,  -284,  1209,
     250,   254,   622,  -284,   253,    -4,   134,  1123,   637,  -284,
    -284,  -284,  -284,  -284,  -284,   244,   244,   393,  -284,  -284,
    -284,  -284,   414,   712,  -284,  -284,   712,  -284,  -284,  -284,
    -284,  -284,  -284,   257,   652,  -284,   261,    40,    42,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,   375,  -284,  -284
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -284,  -284,     0,  -284,  -284,   241,  -284,   174,   -13,   -57,
     -74,  -284,  -284,   -52,   278,  -284,  -284,   156,   157,  -108,
      -3,  -283,  -284,   120,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,   263,  -101,  -284,  -284,  -284,
    -284,  -284,   -30,   -56,  -284,   144,  -284,  -284,   147,  -284,
    -284,  -284,  -284,  -284,  -284,    -7,  -128,  -118,  -284,  -284,
    -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     -94,  -107,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
    -284,   -39,    -2,    78,   -29,    92,    94,    97,   100,   102,
    -284,   -97,  -111,  -104,  -284,  -106,  -284,  -102,  -284,    91,
    -284
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -251
static const yytype_int16 yytable[] =
{
      25,   200,   148,   161,    89,   161,   182,   113,   201,   186,
     161,   205,    76,    89,   203,   199,   107,    71,    49,    60,
     105,    63,   210,   362,   264,   265,    85,    86,    87,    88,
     218,   219,   221,    71,   101,     4,   274,   161,   161,     4,
     120,   182,   126,   115,   206,   126,   222,   223,   224,   225,
      48,    13,   237,   238,   131,    13,   293,   280,    52,    76,
      76,    71,   293,    22,   116,   207,   111,    22,   112,   114,
     127,   126,   129,   126,   134,   365,   135,   136,    55,   137,
     138,   371,    70,    72,    76,   266,   267,   275,   202,   161,
     306,     4,   201,   130,   108,    76,   276,   294,   277,   301,
     225,    50,    61,   362,    64,   203,   293,    13,   386,   109,
     161,   307,    73,   161,   284,   210,   260,   261,   293,    22,
     305,   366,   262,   263,   139,   385,   308,   161,   278,   387,
     182,   285,    71,   279,   210,    72,   161,   161,   316,   315,
     276,    89,   277,   140,   227,    93,   141,   142,   143,   161,
     293,   230,   317,   144,    94,   231,   120,   145,   360,   146,
     147,   346,     4,   318,   319,   320,   344,   303,   161,   336,
     161,   345,    76,    56,   363,   300,    53,    95,    13,     4,
     199,   213,   346,    96,   309,    54,   161,    57,    58,   354,
      22,   364,    59,   225,   103,    13,   214,   230,   361,   161,
      76,   231,   182,   268,   269,   113,    72,    22,   358,   100,
     297,    73,    66,   298,    76,   104,   347,   227,   348,   107,
     227,   321,   322,    72,   279,   110,    67,    68,   299,   102,
     277,    69,   257,   258,   259,    97,   132,   376,    97,   329,
     330,   161,   377,   117,   299,   373,   277,   300,   225,   -44,
     161,   199,   212,   182,   379,   161,   161,   270,   182,   380,
     323,   324,   226,   339,   135,   136,   271,   137,   138,   381,
     272,   273,    97,   282,    97,    97,    97,   283,   361,   161,
     225,   291,   182,   -37,   -37,   -37,   339,  -250,     2,   292,
     302,     3,     4,   239,   240,   241,     5,   304,     6,     7,
       8,    97,   311,    97,     9,    10,    11,    12,    13,   312,
      14,    15,   139,    16,    17,   351,    18,    19,    20,    21,
      22,   134,    23,   135,   136,   353,   137,   138,   355,   356,
     357,   140,   359,   367,   141,   142,   143,   368,   370,    88,
     382,   144,   325,   326,   327,   328,   384,   146,   147,   133,
     106,   190,   289,   290,   378,   310,   118,   296,   134,   295,
     135,   136,   331,   137,   138,   332,   242,   191,   243,   333,
     244,   139,   192,   334,   350,    71,   335,     0,   134,   193,
     135,   136,     0,   137,   138,     0,     0,     0,   190,     0,
     140,     0,     0,   141,   142,   194,   134,     0,   135,   136,
     144,   137,   138,   195,   191,     4,   146,   147,   139,   192,
       0,     0,     0,     0,     0,     0,   193,   134,     0,   135,
     136,    13,   137,   138,     0,     0,     0,   140,   139,     0,
     141,   142,   287,    22,     0,     0,     0,   144,     0,     0,
     288,   119,     0,   146,   147,     0,   139,   140,     0,    72,
     141,   142,   143,     0,    73,   230,     0,   144,     0,   231,
       0,   145,   388,   146,   147,   140,     0,   139,   141,   142,
     143,     0,     0,   230,     0,   144,     0,   231,     0,   145,
       0,   146,   147,     0,     0,     0,   140,     0,     0,   141,
     142,   143,   134,     0,   135,   136,   144,   137,   138,     0,
     145,     0,   146,   147,     0,     0,     0,   134,     0,   135,
     136,     0,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,   134,     0,   135,   136,     0,   137,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,     0,     0,     0,     0,   134,     0,   135,
     136,     0,   137,   138,     0,     0,     0,   139,     0,     0,
       0,   140,     0,     0,   141,   142,   143,     0,     0,     0,
       0,   144,   139,     0,   286,     0,   140,   146,   147,   141,
     142,   143,     0,     0,     0,     0,   144,   313,     0,     0,
       0,   140,   146,   147,   141,   142,   342,   139,     0,     0,
     134,   144,   135,   136,   343,   137,   138,   146,   147,     0,
       0,     0,     0,     0,     0,     0,   140,     0,     0,   141,
     142,   143,     0,     0,     0,   134,   144,   135,   136,   352,
     137,   138,   146,   147,     0,     0,     0,     0,     0,     0,
     134,     0,   135,   136,     0,   137,   138,     0,     0,     0,
     139,     0,     0,     0,     0,   134,     0,   135,   136,     0,
     137,   138,     0,     0,     0,     0,     0,     0,     0,   140,
       0,     0,   141,   142,   143,   139,     0,     0,     0,   144,
       0,     0,     0,   357,     0,   146,   147,     0,     0,     0,
     139,     0,     0,     0,   140,     0,     0,   141,   142,   143,
       0,     0,     0,     0,   144,   139,     0,   369,     0,   140,
     146,   147,   141,   142,   374,   134,     0,   135,   136,   144,
     137,   138,   375,     0,   140,   146,   147,   141,   142,   143,
     134,     0,   135,   136,   144,   137,   138,   383,     0,     0,
     146,   147,     0,     0,     0,   134,     0,   135,   136,     0,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,     0,     0,   140,     0,     0,   141,   142,   143,
       0,     1,     0,     0,   144,   139,     0,     0,     0,   140,
     146,   147,   141,   142,   143,     0,     0,     0,     0,   217,
       0,     0,     0,     0,   140,   146,   147,   141,   142,   143,
       3,     1,     0,     0,   220,     5,     0,     6,     0,     8,
     146,   147,     0,     0,    10,    11,     0,     0,     0,    14,
      15,     0,     0,    17,     0,     0,    19,    20,    21,     0,
       3,    23,     0,     0,     1,     5,     0,     6,     0,     8,
       0,     0,     0,     0,    10,    11,     0,     0,     0,    14,
      15,     0,     0,    17,     0,   125,    19,    20,    21,     1,
       0,    23,     0,     3,     0,     0,     0,     0,     5,     0,
       6,     0,     8,     0,     0,     0,     0,    10,    11,     0,
       0,     0,    14,    15,     0,   128,    17,     0,     3,    19,
      20,    21,     0,     5,    23,     6,  -147,     8,     0,     0,
       0,     0,    10,    11,     0,     0,     0,    14,    15,     0,
       0,    17,     0,     0,    19,    20,    21,     0,   215,    23,
       0,     0,  -147,     0,     0,  -147,  -147,     0,     0,     0,
    -147,     0,  -147,  -147,  -147,     0,     0,     0,  -147,  -147,
    -147,  -147,  -147,   216,  -147,  -147,     0,  -147,  -147,     0,
    -147,  -147,  -147,  -147,  -147,   337,  -147,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,     0,     0,     0,
    -147,     0,     0,     0,     0,  -147,  -147,  -147,     0,     0,
       0,     2,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,   255,    16,    17,     0,    18,
      19,    20,    21,    22,     1,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,   276,   338,   277,     0,     0,     0,
       2,     0,     0,     3,     4,     0,     0,     0,     5,     0,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,   183,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,   299,   338,   277,     0,     0,     0,     2,
       0,     0,     3,     4,     0,     0,     1,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,     0,    16,    17,     0,    18,    19,    20,
      21,    22,     2,    23,     0,     3,     4,     0,     0,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,   184,    14,    15,     0,    16,    17,     1,
      18,    19,    20,    21,    22,     0,    23,     0,     0,     0,
       0,     0,     0,     0,   349,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,   372,     0,     3,     4,
       0,     0,     1,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,     0,
      16,    17,     0,    18,    19,    20,    21,    22,     2,    23,
       0,     3,     4,     0,     1,     0,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,     3,     0,     0,     0,     0,     5,     0,
       6,     0,     8,     0,     0,     0,     0,    10,    11,     0,
       0,     0,    14,    15,     0,     0,    17,     0,     0,    19,
      20,    21,     0,     0,    23
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-284))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,   112,   110,   110,     3,   112,   110,    81,   112,   111,
     117,   117,    25,     3,   115,   112,    73,     3,     3,     3,
      72,     3,   119,   306,    12,    13,    26,    27,    28,    29,
     137,   138,   139,     3,    64,    33,    17,   144,   145,    33,
      97,   145,    98,    66,    66,   101,   140,   141,   142,   143,
      64,    49,   146,   147,   106,    49,    66,   185,    64,    72,
      73,     3,    66,    61,    87,    87,    82,    61,    84,    82,
     100,   127,   102,   129,     3,    85,     5,     6,    46,     8,
       9,    85,     0,    77,    97,    73,    74,    68,    87,   196,
      66,    33,   196,   106,    66,   108,    82,    87,    84,   227,
     194,    86,    86,   386,    86,   206,    66,    49,    66,    81,
     217,    87,    82,   220,    66,   212,    75,    76,    66,    61,
     231,    69,    10,    11,    53,    85,   234,   234,   185,    87,
     234,    83,     3,   185,   231,    77,   243,   244,   244,   243,
      82,     3,    84,    72,   144,    86,    75,    76,    77,   256,
      66,    80,   256,    82,    64,    84,   213,    86,    87,    88,
      89,   279,    33,   257,   258,   259,   277,    83,   275,   275,
     277,   277,   185,    32,    66,   227,    37,    46,    49,    33,
     277,    66,   300,    46,    67,    46,   293,    46,    47,   293,
      61,    83,    51,   287,    46,    49,    81,    80,   306,   306,
     213,    84,   306,    14,    15,   279,    77,    61,   302,    86,
     217,    82,    32,   220,   227,    46,    82,   217,    84,   276,
     220,   260,   261,    77,   276,    67,    46,    47,    82,    86,
      84,    51,    77,    78,    79,    61,    83,   348,    64,   268,
     269,   348,   348,    67,    82,   347,    84,   299,   342,    77,
     357,   348,    69,   357,   362,   362,   363,    72,   362,   363,
     262,   263,     3,   276,     5,     6,    71,     8,     9,   366,
      70,    16,    98,    83,   100,   101,   102,    66,   386,   386,
     374,    85,   386,    82,    83,    84,   299,    66,    29,    85,
      83,    32,    33,     7,     8,     9,    37,     3,    39,    40,
      41,   127,     3,   129,    45,    46,    47,    48,    49,     3,
      51,    52,    53,    54,    55,     3,    57,    58,    59,    60,
      61,     3,    63,     5,     6,    85,     8,     9,    83,    83,
      86,    72,    85,    83,    75,    76,    77,    83,    85,   339,
      83,    82,   264,   265,   266,   267,    85,    88,    89,   108,
      72,    33,   196,   196,   357,   235,    93,   213,     3,   212,
       5,     6,   270,     8,     9,   271,    80,    49,    82,   272,
      84,    53,    54,   273,   283,     3,   274,    -1,     3,    61,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    33,    -1,
      72,    -1,    -1,    75,    76,    77,     3,    -1,     5,     6,
      82,     8,     9,    85,    49,    33,    88,    89,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,     3,    -1,     5,
       6,    49,     8,     9,    -1,    -1,    -1,    72,    53,    -1,
      75,    76,    77,    61,    -1,    -1,    -1,    82,    -1,    -1,
      85,    69,    -1,    88,    89,    -1,    53,    72,    -1,    77,
      75,    76,    77,    -1,    82,    80,    -1,    82,    -1,    84,
      -1,    86,    87,    88,    89,    72,    -1,    53,    75,    76,
      77,    -1,    -1,    80,    -1,    82,    -1,    84,    -1,    86,
      -1,    88,    89,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,     3,    -1,     5,     6,    82,     8,     9,    -1,
      86,    -1,    88,    89,    -1,    -1,    -1,     3,    -1,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,     3,    -1,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    72,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    82,    53,    -1,    85,    -1,    72,    88,    89,    75,
      76,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    72,    88,    89,    75,    76,    77,    53,    -1,    -1,
       3,    82,     5,     6,    85,     8,     9,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,     3,    82,     5,     6,    85,
       8,     9,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    76,    77,    53,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    88,    89,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    -1,    82,    53,    -1,    85,    -1,    72,
      88,    89,    75,    76,    77,     3,    -1,     5,     6,    82,
       8,     9,    85,    -1,    72,    88,    89,    75,    76,    77,
       3,    -1,     5,     6,    82,     8,     9,    85,    -1,    -1,
      88,    89,    -1,    -1,    -1,     3,    -1,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,
      -1,     3,    -1,    -1,    82,    53,    -1,    -1,    -1,    72,
      88,    89,    75,    76,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    72,    88,    89,    75,    76,    77,
      32,     3,    -1,    -1,    82,    37,    -1,    39,    -1,    41,
      88,    89,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    -1,    -1,    58,    59,    60,    -1,
      32,    63,    -1,    -1,     3,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    -1,    87,    58,    59,    60,     3,
      -1,    63,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    51,    52,    -1,    87,    55,    -1,    32,    58,
      59,    60,    -1,    37,    63,    39,     3,    41,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    51,    52,    -1,
      -1,    55,    -1,    -1,    58,    59,    60,    -1,    87,    63,
      -1,    -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    87,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,     3,    63,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,
      -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    -1,    51,    52,    67,    54,    55,    -1,    57,
      58,    59,    60,    61,     3,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,
      29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    -1,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,     3,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,    -1,    -1,     3,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    29,    63,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    83,    51,    52,    -1,    54,    55,     3,
      57,    58,    59,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    83,    -1,    32,    33,
      -1,    -1,     3,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    29,    63,
      -1,    32,    33,    -1,     3,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    32,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      59,    60,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    29,    32,    33,    37,    39,    40,    41,    45,
      46,    47,    48,    49,    51,    52,    54,    55,    57,    58,
      59,    60,    61,    63,    91,    92,    93,    96,    97,    98,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     128,   129,   130,   139,   140,   141,   143,   144,    64,     3,
      86,   124,    64,    37,    46,    46,    32,    46,    47,    51,
       3,    86,   131,     3,    86,   142,    32,    46,    47,    51,
       0,     3,    77,    82,    94,    95,    98,    99,   100,   101,
     102,   103,   104,   105,   186,    92,    92,    92,    92,     3,
     125,   126,   127,    86,    64,    46,    46,    97,   132,   133,
      86,   132,    86,    46,    46,   103,   104,    99,    66,    81,
      67,    82,    84,   100,    98,    66,    87,    67,   125,    69,
      99,   134,   135,   136,   137,    87,   133,   132,    87,   132,
      98,   103,    83,    95,     3,     5,     6,     8,     9,    53,
      72,    75,    76,    77,    82,    86,    88,    89,   109,   148,
     149,   150,   151,   152,   153,   154,   155,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   183,     3,    83,    92,   187,   188,   189,   190,
      33,    49,    54,    61,    77,    85,   106,   107,   108,   181,
     182,   183,    87,   126,   183,   185,    66,    87,   138,   161,
     181,   182,    69,    66,    81,    87,    87,    82,   161,   161,
      82,   161,   160,   160,   160,   160,     3,    92,   145,   185,
      80,    84,   109,   110,   111,   112,   113,   160,   160,     7,
       8,     9,    80,    82,    84,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    67,   184,    77,    78,    79,
      75,    76,    10,    11,    12,    13,    73,    74,    14,    15,
      72,    71,    70,    16,    17,    68,    82,    84,    99,   103,
     146,   147,    83,    66,    66,    83,    85,    77,    85,   107,
     108,    85,    85,    66,    87,   138,   135,   145,   145,    82,
     103,   146,    83,    83,     3,   182,    66,    87,   109,    67,
     113,     3,     3,    83,   156,   183,   185,   183,   160,   160,
     160,   171,   171,   172,   172,   173,   173,   173,   173,   174,
     174,   175,   176,   177,   178,   179,   185,     3,    83,    98,
     146,   187,    77,    85,   182,   185,   147,    82,    84,    18,
     189,     3,    85,    85,   183,    83,    83,    86,   160,    85,
      87,   109,   111,    66,    83,    85,    69,    83,    83,    85,
      85,    85,    83,   187,    77,    85,   182,   185,   110,   109,
     183,   181,    83,    85,    85,    85,    66,    87,    87
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
      

/* Line 1806 of yacc.c  */
#line 2044 "parser.tab.c"
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
#line 829 "parser.y"


int main(){
    yyparse();
    return 0;
}

