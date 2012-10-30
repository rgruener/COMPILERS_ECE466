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
#include "hash.h"

extern int yylex();
extern int yyleng;
int yyerror(const char *p) {fprintf(stderr, "ERROR");}


/* Line 268 of yacc.c  */
#line 82 "parser.tab.c"

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
#line 188 "parser.tab.c"

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
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  269
/* YYNRULES -- Number of states.  */
#define YYNSTATES  381

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
       2,     2,     2,    88,     2,     2,     2,    81,    74,     2,
      84,    85,    79,    77,    66,    78,    82,    80,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    83,
      75,    67,    76,    70,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    69,    73,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    72,    87,    89,     2,     2,     2,
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
      69,    71,    73,    75,    79,    81,    83,    85,    88,    90,
      93,    97,   102,   107,   112,   118,   123,   129,   131,   134,
     136,   138,   140,   142,   144,   146,   148,   152,   157,   159,
     163,   166,   171,   174,   176,   179,   183,   186,   188,   190,
     192,   194,   196,   199,   202,   206,   208,   211,   213,   215,
     218,   221,   225,   228,   232,   236,   241,   244,   248,   250,
     253,   256,   260,   264,   269,   271,   274,   277,   279,   281,
     284,   286,   289,   292,   296,   298,   300,   302,   307,   313,
     319,   326,   329,   331,   333,   337,   339,   343,   345,   347,
     349,   354,   360,   363,   365,   367,   370,   374,   376,   380,
     382,   384,   386,   389,   393,   395,   397,   399,   404,   410,
     413,   415,   417,   419,   422,   424,   426,   429,   431,   434,
     438,   441,   445,   448,   452,   457,   461,   465,   470,   474,
     479,   482,   486,   491,   495,   497,   499,   501,   503,   505,
     509,   511,   513,   515,   517,   519,   521,   523,   528,   530,
     532,   536,   540,   544,   549,   551,   555,   558,   561,   568,
     576,   578,   583,   585,   587,   589,   591,   593,   595,   597,
     599,   601,   603,   608,   611,   614,   617,   620,   623,   626,
     629,   632,   635,   637,   641,   645,   649,   651,   655,   659,
     661,   665,   669,   671,   675,   679,   683,   687,   689,   693,
     697,   699,   703,   705,   709,   711,   715,   717,   721,   723,
     727,   729,   735,   737,   739,   743,   745,   747,   749,   751,
     753,   755,   757,   759,   761,   763,   765,   767,   771,   776,
     780,   785,   787,   791,   793,   797,   800,   802,   805,   807
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    94,    83,    -1,    96,    -1,    96,
      92,    -1,    97,    -1,    97,    92,    -1,    98,    -1,    98,
      92,    -1,    93,    -1,    93,    92,    -1,    45,    -1,    95,
      -1,    94,    66,    95,    -1,    99,    -1,    99,    67,   108,
      -1,    29,    -1,    40,    -1,    48,    -1,    54,    -1,    57,
      -1,   120,    -1,   117,    -1,   113,    -1,   127,    -1,   138,
      -1,   142,    -1,    33,    -1,    61,    -1,    49,    -1,   102,
      -1,   100,    -1,   101,    -1,    84,    99,    85,    -1,   185,
      -1,   104,    -1,     3,    -1,   145,   100,    -1,    98,    -1,
     103,    98,    -1,   100,    68,    69,    -1,   100,    68,   181,
      69,    -1,   100,    68,   105,    69,    -1,   100,    68,   107,
      69,    -1,   100,    68,   105,   107,    69,    -1,   100,    68,
      79,    69,    -1,   100,    68,   105,    79,    69,    -1,   106,
      -1,   105,   106,    -1,    54,    -1,    49,    -1,    33,    -1,
      61,    -1,   182,    -1,    79,    -1,   182,    -1,    86,   109,
      87,    -1,    86,   109,    66,    87,    -1,   108,    -1,   109,
      66,   108,    -1,   110,   108,    -1,   109,    66,   110,   108,
      -1,   111,    67,    -1,   112,    -1,   111,   112,    -1,    68,
     181,    69,    -1,    82,     3,    -1,   114,    -1,   115,    -1,
     116,    -1,   119,    -1,    51,    -1,    51,    46,    -1,    52,
      51,    -1,    52,    51,    46,    -1,    46,    -1,    52,    46,
      -1,    52,    -1,    47,    -1,    47,    46,    -1,    52,    47,
      -1,    52,    47,    46,    -1,    47,    47,    -1,    47,    47,
      46,    -1,    52,    47,    47,    -1,    52,    47,    47,    46,
      -1,    59,    51,    -1,    59,    51,    46,    -1,    59,    -1,
      59,    46,    -1,    59,    47,    -1,    59,    47,    46,    -1,
      59,    47,    47,    -1,    59,    47,    47,    46,    -1,    32,
      -1,    52,    32,    -1,    59,    32,    -1,    41,    -1,    37,
      -1,    47,    37,    -1,   118,    -1,    41,    64,    -1,    37,
      64,    -1,    47,    37,    64,    -1,    63,    -1,   121,    -1,
     122,    -1,    39,    86,   124,    87,    -1,    39,   123,    86,
     124,    87,    -1,    39,    86,   124,    66,    87,    -1,    39,
     123,    86,   124,    66,    87,    -1,    39,   123,    -1,     3,
      -1,   125,    -1,   124,    66,   125,    -1,   126,    -1,   126,
      67,   184,    -1,     3,    -1,   128,    -1,   129,    -1,    55,
      86,   131,    87,    -1,    55,   130,    86,   131,    87,    -1,
      55,   130,    -1,     3,    -1,   132,    -1,   131,   132,    -1,
      97,   133,    83,    -1,   134,    -1,   133,    66,   134,    -1,
     135,    -1,   136,    -1,    99,    -1,    71,   137,    -1,    99,
      71,   137,    -1,   181,    -1,   139,    -1,   140,    -1,    58,
      86,   131,    87,    -1,    58,   141,    86,   131,    87,    -1,
      58,   141,    -1,     3,    -1,    60,    -1,    92,    -1,    92,
     144,    -1,   145,    -1,   146,    -1,   145,   146,    -1,    79,
      -1,    79,   103,    -1,    79,   103,   145,    -1,    79,   145,
      -1,    84,   144,    85,    -1,    68,    69,    -1,   146,    68,
      69,    -1,   146,    68,   181,    69,    -1,    68,   181,    69,
      -1,    68,   184,    69,    -1,   146,    68,   184,    69,    -1,
      68,    79,    69,    -1,   146,    68,    79,    69,    -1,    84,
      85,    -1,   146,    84,    85,    -1,   146,    84,   186,    85,
      -1,    84,   186,    85,    -1,     3,    -1,     6,    -1,     4,
      -1,     5,    -1,   148,    -1,    84,   184,    85,    -1,   147,
      -1,   150,    -1,   151,    -1,   154,    -1,   156,    -1,   157,
      -1,   158,    -1,   149,    68,   184,    69,    -1,   152,    -1,
     153,    -1,   149,    82,     3,    -1,   149,     7,     3,    -1,
     149,    84,    85,    -1,   149,    84,   155,    85,    -1,   182,
      -1,   155,    66,   182,    -1,   149,     8,    -1,   149,     9,
      -1,    84,   143,    85,    86,   109,    87,    -1,    84,   143,
      85,    86,   109,    66,    87,    -1,   160,    -1,    84,   143,
      85,   159,    -1,   149,    -1,   161,    -1,   162,    -1,   163,
      -1,   164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,
      -1,   169,    -1,    53,    84,   143,    85,    -1,    53,   160,
      -1,    78,   159,    -1,    77,   159,    -1,    88,   159,    -1,
      89,   159,    -1,    74,   159,    -1,    79,   159,    -1,     8,
     160,    -1,     9,   160,    -1,   159,    -1,   170,    79,   159,
      -1,   170,    80,   159,    -1,   170,    81,   159,    -1,   170,
      -1,   171,    77,   170,    -1,   171,    78,   170,    -1,   171,
      -1,   172,    10,   171,    -1,   172,    11,   171,    -1,   172,
      -1,   173,    75,   172,    -1,   173,    76,   172,    -1,   173,
      12,   172,    -1,   173,    13,   172,    -1,   173,    -1,   174,
      14,   173,    -1,   174,    15,   173,    -1,   174,    -1,   175,
      74,   174,    -1,   175,    -1,   176,    73,   175,    -1,   176,
      -1,   177,    72,   176,    -1,   177,    -1,   178,    16,   177,
      -1,   178,    -1,   179,    17,   178,    -1,   179,    -1,   179,
      70,   184,    71,   180,    -1,   180,    -1,   180,    -1,   160,
     183,   182,    -1,    67,    -1,    19,    -1,    20,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    28,    -1,   182,    -1,   184,    66,   182,
      -1,   100,    84,   186,    85,    -1,   100,    84,    85,    -1,
     100,    84,   189,    85,    -1,   187,    -1,   187,    66,    18,
      -1,   188,    -1,   187,    66,   188,    -1,    92,    99,    -1,
      92,    -1,    92,   144,    -1,     3,    -1,   189,    66,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    64,    65,    66,    67,    68,    69,    70,
      71,    75,    79,    80,    84,    85,    89,    90,    91,    92,
      93,    97,    98,    99,   100,   102,   103,   107,   108,   109,
     113,   114,   118,   119,   120,   121,   125,   129,   133,   134,
     138,   139,   140,   141,   142,   143,   144,   148,   149,   153,
     154,   155,   156,   160,   161,   165,   166,   167,   171,   172,
     173,   174,   178,   182,   183,   187,   188,   192,   193,   194,
     195,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   217,   218,   219,   220,
     221,   222,   223,   224,   228,   229,   230,   234,   235,   236,
     237,   241,   242,   243,   247,   251,   252,   256,   257,   258,
     259,   263,   267,   271,   272,   276,   277,   281,   285,   286,
     290,   291,   295,   299,   303,   304,   308,   312,   313,   317,
     318,   322,   326,   327,   331,   335,   336,   340,   341,   345,
     349,   353,   361,   362,   366,   367,   368,   372,   373,   374,
     375,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   395,   396,   397,   398,   399,   403,
     407,   408,   409,   410,   411,   412,   413,   417,   421,   422,
     426,   430,   434,   435,   439,   440,   444,   448,   452,   453,
     457,   458,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   475,   476,   480,   484,   488,   492,   496,   500,
     504,   508,   512,   513,   514,   515,   519,   520,   521,   525,
     526,   527,   531,   532,   533,   534,   535,   539,   540,   541,
     545,   546,   550,   551,   555,   556,   560,   561,   565,   566,
     570,   571,   575,   603,   604,   608,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   622,   623,   778,   779,
     780,   784,   785,   789,   790,   794,   795,   796,   800,   801
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
  "'['", "']'", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'.'", "';'", "'('", "')'", "'{'", "'}'",
  "'!'", "'~'", "$accept", "declaration", "declaration_specifiers",
  "function_specifier", "initialized_declarator_list",
  "initialized_declarator", "storage_class_specifier", "type_specifier",
  "type_qualifier", "declarator", "direct_declarator", "simple_declarator",
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
  "union_tag", "void_type_specifier", "type_name", "abstract_declarator",
  "pointer", "direct_abstract_declarator", "primary_expression",
  "parenthesized_expression", "postfix_expression", "subscript_expression",
  "component_selection_expression", "direct_component_selection",
  "indirect_component_selection", "function_call", "expression_list",
  "postincrement_expression", "postdecrement_expression",
  "compound_literal", "cast_expression", "unary_expression",
  "sizeof_expression", "unary_minus_expression", "unary_plus_expression",
  "logical_negation_expression", "bitwise_negation_expression",
  "address_expression", "indirection_expression",
  "preincrement_expression", "predecrement_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "constant_expression", "assignment_expression",
  "assignment_operator", "expression", "function_declarator",
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
     315,   316,   317,   318,   319,   320,    44,    61,    91,    93,
      63,    58,   124,    94,    38,    60,    62,    43,    45,    42,
      47,    37,    46,    59,    40,    41,   123,   125,    33,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      99,    99,   100,   100,   100,   100,   101,   102,   103,   103,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   106,
     106,   106,   106,   107,   107,   108,   108,   108,   109,   109,
     109,   109,   110,   111,   111,   112,   112,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   117,   117,   117,
     117,   118,   118,   118,   119,   120,   120,   121,   121,   121,
     121,   122,   123,   124,   124,   125,   125,   126,   127,   127,
     128,   128,   129,   130,   131,   131,   132,   133,   133,   134,
     134,   135,   136,   136,   137,   138,   138,   139,   139,   140,
     141,   142,   143,   143,   144,   144,   144,   145,   145,   145,
     145,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   147,   147,   147,   147,   147,   148,
     149,   149,   149,   149,   149,   149,   149,   150,   151,   151,
     152,   153,   154,   154,   155,   155,   156,   157,   158,   158,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   161,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   170,   170,   170,   171,   171,   171,   172,
     172,   172,   173,   173,   173,   173,   173,   174,   174,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   182,   182,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   184,   184,   185,   185,
     185,   186,   186,   187,   187,   188,   188,   188,   189,   189
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     2,     1,     2,
       3,     4,     4,     4,     5,     4,     5,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     1,     3,
       2,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     2,     1,     1,     2,
       2,     3,     2,     3,     3,     4,     2,     3,     1,     2,
       2,     3,     3,     4,     1,     2,     2,     1,     1,     2,
       1,     2,     2,     3,     1,     1,     1,     4,     5,     5,
       6,     2,     1,     1,     3,     1,     3,     1,     1,     1,
       4,     5,     2,     1,     1,     2,     3,     1,     3,     1,
       1,     1,     2,     3,     1,     1,     1,     4,     5,     2,
       1,     1,     1,     2,     1,     1,     2,     1,     2,     3,
       2,     3,     2,     3,     4,     3,     3,     4,     3,     4,
       2,     3,     4,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       3,     3,     3,     4,     1,     3,     2,     2,     6,     7,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       4,     1,     3,     1,     3,     2,     1,     2,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    16,    94,    27,    98,     0,    17,    97,    11,    75,
      78,    18,    29,    71,    77,    19,     0,    20,     0,    88,
     141,    28,   104,     0,     0,     9,     3,     5,     7,    23,
      67,    68,    69,    22,   100,    70,    21,   105,   106,    24,
     118,   119,    25,   135,   136,    26,   102,   112,     0,   111,
     101,    99,    79,    72,    95,    76,    80,    73,   123,     0,
     122,   140,     0,   139,    96,    89,    90,    86,     1,    36,
     147,     0,     0,    12,    14,    31,    32,    30,    35,     0,
      34,    10,     4,     6,     8,   117,     0,   113,   115,     0,
     103,    81,    74,     0,     0,   124,     0,     0,     0,    91,
      87,    38,   148,   150,     0,     0,     2,     0,     0,     0,
      37,     0,   107,     0,     0,     0,   131,     0,   127,   129,
     130,   120,   125,     0,   137,     0,    39,   149,    33,    13,
     164,   166,   167,   165,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,   170,   168,   192,   171,
     172,   178,   179,   173,   174,   175,   176,   212,   190,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   216,   219,
     222,   227,   230,   232,   234,   236,   238,   240,   243,    55,
      51,    50,    49,    52,    40,    54,     0,    47,     0,   242,
       0,    53,   268,   259,   266,     0,   261,   263,     0,   109,
     114,   256,   116,     0,   108,   132,   190,   242,   134,     0,
       0,   126,   121,   138,     0,   210,   211,     0,   203,   208,
     205,   204,   209,   142,     0,     0,     0,     0,    58,     0,
       0,     0,    63,   206,   207,     0,   186,   187,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    54,    48,     0,    43,    41,     0,     0,
     265,   267,   144,   145,   258,     0,     0,   260,     0,   110,
     133,   128,     0,     0,     0,   143,   144,     0,   169,     0,
      66,     0,    56,    60,    62,    64,   181,     0,   180,   182,
       0,   184,   244,   213,   214,   215,   217,   218,   220,   221,
     225,   226,   223,   224,   228,   229,   231,   233,   235,   237,
     239,     0,    44,   152,     0,     0,     0,   160,     0,     0,
     146,     0,     0,   262,   264,   269,   257,     0,   202,     0,
     191,    65,    57,    59,     0,   177,     0,   183,     0,   158,
     155,   156,   151,   163,   153,     0,     0,     0,   161,     0,
       0,    61,   185,   241,   159,   154,   157,   162,     0,   188,
     189
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,   194,    25,    72,    73,    26,    27,    28,    74,
      75,    76,    77,   102,    78,   186,   187,   188,   228,   229,
     230,   231,   232,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    49,    86,    87,    88,    39,    40,    41,
      60,    94,    95,   117,   118,   119,   120,   205,    42,    43,
      44,    63,    45,   224,   338,    79,   283,   146,   147,   148,
     149,   150,   151,   152,   153,   310,   154,   155,   156,   157,
     206,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   208,   201,   252,   225,    80,   339,   196,   197,   198
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -288
static const yytype_int16 yypact[] =
{
    1053,  -288,  -288,  -288,   -25,    10,  -288,    -7,  -288,  -288,
     162,  -288,  -288,    29,   142,  -288,    19,  -288,    20,   159,
    -288,  -288,  -288,    90,    50,  1053,  1053,  1053,  1053,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,   111,    36,
    -288,    60,  -288,  -288,  -288,  -288,   149,   157,  -288,  1083,
      79,  -288,  1083,   101,  -288,  -288,   163,   192,  -288,  -288,
     137,    50,   113,  -288,    92,   -23,  -288,  -288,  -288,    51,
    -288,  -288,  -288,  -288,  -288,  -288,    -4,  -288,   177,   111,
    -288,  -288,  -288,    48,   894,  -288,  1083,   919,  1083,  -288,
    -288,  -288,   137,  -288,   161,    50,  -288,    89,   314,   786,
     -23,    15,  -288,   636,    73,   636,   206,   141,  -288,  -288,
    -288,  -288,  -288,   952,  -288,   977,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,   673,   673,   691,   636,   636,   636,
     636,   253,   435,   636,   636,  -288,  -288,  -288,    69,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,    46,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,   184,   150,
     256,    68,   255,   181,   207,   209,   263,    -6,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,   636,   346,  -288,   218,   222,
     220,  -288,  -288,  -288,    33,   210,   225,  -288,    23,  -288,
    -288,  -288,  -288,    16,  -288,  -288,  -288,  -288,  -288,   636,
      48,  -288,  -288,  -288,   253,  -288,  -288,   253,  -288,  -288,
    -288,  -288,  -288,   134,   211,   119,   636,   294,  -288,    75,
      89,   147,  -288,  -288,  -288,   300,  -288,  -288,   636,   306,
     457,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,  -288,   636,  -288,   246,  -288,  -288,   496,   745,
    -288,  -288,    41,    31,  -288,  1020,   318,  -288,   636,  -288,
    -288,  -288,   239,   240,   821,  -288,    32,   524,  -288,   257,
    -288,   368,  -288,  -288,  -288,  -288,  -288,    86,  -288,  -288,
     126,  -288,  -288,  -288,  -288,  -288,   184,   184,   150,   150,
     256,   256,   256,   256,    68,    68,   255,   181,   207,   209,
     263,   155,  -288,  -288,   547,   259,   151,  -288,   244,   248,
      31,   584,   862,  -288,  -288,  -288,  -288,   249,   249,   435,
    -288,  -288,  -288,  -288,    89,  -288,   636,  -288,   636,  -288,
    -288,  -288,  -288,  -288,  -288,   614,   265,   170,  -288,   251,
      95,  -288,  -288,  -288,  -288,  -288,  -288,  -288,   405,  -288,
    -288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -288,  -288,     5,  -288,  -288,   233,  -288,   -38,   -50,   -56,
     -70,  -288,  -288,  -288,  -288,  -288,   153,   154,  -100,    -5,
    -287,  -288,   112,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,   264,   -99,  -288,  -288,  -288,  -288,
    -288,   -12,    24,  -288,   135,  -288,  -288,   139,  -288,  -288,
    -288,  -288,  -288,    34,  -168,   -54,  -233,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,   -97,
    -107,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,  -288,
      27,    14,   -30,    11,    80,    91,    88,    93,    87,  -288,
     -98,  -106,  -104,  -288,   -88,  -288,  -101,  -288,    74,  -288
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -244
static const yytype_int16 yytable[] =
{
     158,   158,   190,   179,   191,    24,   158,   145,   195,   110,
     189,   270,   200,    47,   354,   104,   103,   207,    85,    85,
     101,    93,    58,    61,    93,   202,   281,   215,   216,   218,
      81,    82,    83,    84,   158,   158,    69,   116,   179,    46,
     219,   220,   221,   222,    69,   108,   233,   234,   127,   340,
      97,    69,   126,    69,    69,   295,    93,    50,    93,    93,
      93,   109,   111,   340,   271,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,    53,   235,   236,   237,   158,
     260,   261,   191,   112,   123,    93,   125,    93,   222,   286,
      68,   354,   130,   131,   132,   133,    48,   134,   135,   341,
     278,   278,   199,   289,   200,    59,    62,   158,   287,   278,
     158,   207,    70,   251,    85,   342,   294,   279,   122,   115,
     299,   122,    89,   158,    90,   279,   179,    70,   207,    70,
     303,   158,    71,   158,    71,    71,   311,   238,   280,   203,
     282,   301,   136,   262,   263,   158,   223,   122,   312,   122,
     307,   239,   288,   240,   116,   355,   313,   314,   315,   107,
     204,   378,   302,   137,   158,    96,   138,   139,   140,   296,
       3,   158,   335,   141,    54,   142,   222,   143,   144,   105,
     189,   158,   379,   331,   346,   288,    12,    98,    55,    56,
     336,    64,   356,    57,   158,    91,   106,   179,    21,    51,
     350,   353,   278,    92,   298,    65,    66,   210,    52,    99,
      67,   357,   110,    70,   304,   226,    70,   288,   294,   223,
     361,   288,   223,   104,   211,   282,   358,   256,   257,   227,
     320,   321,   322,   323,   158,   366,   288,   222,   100,   376,
     296,   369,   158,   189,   113,   179,   128,   158,   292,   158,
     179,   293,   372,   367,   371,   266,   130,   131,   132,   133,
     373,   134,   135,   253,   254,   255,   258,   259,   222,   264,
     265,   158,   318,   319,   179,   324,   325,   209,   353,   269,
     267,   268,     1,   316,   317,     2,     3,   276,  -243,   277,
       4,   285,     5,     6,     7,   284,   297,   300,     8,     9,
      10,    11,    12,   306,    13,    14,   136,    15,    16,   308,
      17,    18,    19,    20,    21,   332,    22,   130,   131,   132,
     133,   345,   134,   135,   347,   348,   351,   137,   360,   362,
     138,   139,   140,   363,   375,   349,   377,   141,   129,   274,
     275,   143,   144,   305,   370,   291,   326,   180,   290,   130,
     131,   132,   133,   114,   134,   135,   328,   330,   327,   344,
       0,     0,   329,   181,     0,     0,     0,   136,   182,     0,
       0,   130,   131,   132,   133,   183,   134,   135,     0,   180,
       0,     0,     0,   184,     0,     0,     0,     0,   137,     0,
       0,   138,   139,   185,     0,   181,     0,     0,   141,   136,
     182,     0,   143,   144,     0,     0,     0,   183,   130,   131,
     132,   133,     0,   134,   135,   272,     0,     0,     0,     0,
     137,   136,     0,   138,   139,   273,     0,     0,     0,     0,
     141,     0,     0,     0,   143,   144,   226,     0,   130,   131,
     132,   133,   137,   134,   135,   138,   139,   140,     0,     0,
     227,     0,   141,     0,   142,   352,   143,   144,   136,     0,
     130,   131,   132,   133,     0,   134,   135,     0,     0,     0,
       0,     0,     0,   226,     0,     0,     0,     0,     0,   137,
       0,     0,   138,   139,   140,     0,     0,   227,   136,   141,
       0,   142,   380,   143,   144,     0,     0,     0,     0,   130,
     131,   132,   133,   226,   134,   135,     0,     0,     0,   137,
     136,     0,   138,   139,   140,     0,     0,   227,     0,   141,
       0,   142,     0,   143,   144,     0,     0,   130,   131,   132,
     133,   137,   134,   135,   138,   139,   140,     0,     0,     0,
       0,   141,   309,     0,     0,   143,   144,     0,     0,   136,
     130,   131,   132,   133,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,     0,   333,     0,     0,     0,     0,
     137,     0,     0,   138,   139,   334,     0,   136,     0,     0,
     141,     0,     0,     0,   143,   144,     0,   130,   131,   132,
     133,     0,   134,   135,     0,     0,     0,     0,   137,     0,
     136,   138,   139,   140,     0,     0,     0,     0,   141,     0,
     349,     0,   143,   144,     0,     0,   359,   130,   131,   132,
     133,   137,   134,   135,   138,   139,   140,     0,     0,     0,
       0,   141,     0,     0,     0,   143,   144,   136,     0,   130,
     131,   132,   133,     0,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   364,     0,     0,     0,     0,   137,     0,
       0,   138,   139,   365,     0,     0,     0,   136,   141,     0,
       0,     0,   143,   144,     0,     0,   130,   131,   132,   133,
       0,   134,   135,   374,     0,     0,     0,     0,   137,   136,
       0,   138,   139,   140,   130,   131,   132,   133,   141,   134,
     135,     0,   143,   144,     0,     0,     0,     0,     0,     0,
     137,     0,     0,   138,   139,   140,     0,     0,     0,     0,
     141,     0,     0,     0,   143,   144,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,     0,     0,   137,    69,     0,
     138,   139,   140,     0,     0,     0,     0,   214,     0,     0,
       0,   143,   144,     0,     0,   137,     0,     0,   138,   139,
     140,     0,     0,     0,     1,   217,     0,     2,     3,   143,
     144,     0,     4,     0,     5,     6,     7,     0,     0,   192,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,    22,     0,
       0,     0,     0,   278,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,    70,     5,     6,     7,     0,   279,
     337,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,     0,    22,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,   193,    13,    14,     0,    15,    16,     0,    17,    18,
      19,    20,    21,     0,    22,     0,     0,     0,     0,   278,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
      70,     5,     6,     7,     0,   294,   337,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,    17,
      18,    19,    20,    21,     0,    22,     2,     0,     0,     0,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     0,
       9,    10,     0,     0,     0,    13,    14,   368,     0,    16,
       0,     2,    18,    19,    20,     0,     4,    22,     5,     0,
       7,     0,     0,     0,     0,     9,    10,     0,     0,     0,
      13,    14,     0,     0,    16,     0,     0,    18,    19,    20,
       0,   121,    22,     0,     2,     0,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     0,     9,    10,
       0,     0,     0,    13,    14,     0,   124,    16,     0,     2,
      18,    19,    20,     0,     4,    22,     5,     0,     7,     0,
       0,     0,     0,     9,    10,     0,     0,     0,    13,    14,
       0,     0,    16,     0,     0,    18,    19,    20,   343,   212,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,   213,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,    16,     0,    17,    18,    19,
      20,    21,     1,    22,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     2,    22,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,     0,     0,    13,    14,     0,     0,    16,     0,
       0,    18,    19,    20,     0,     0,    22
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-288))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     107,   108,   108,   107,   108,     0,   113,   107,   109,    79,
     108,    17,   111,     3,   301,    71,    70,   115,     3,     3,
      70,    59,     3,     3,    62,   113,   194,   134,   135,   136,
      25,    26,    27,    28,   141,   142,     3,    93,   142,    64,
     137,   138,   139,   140,     3,    68,   143,   144,   102,   282,
      62,     3,   102,     3,     3,   223,    94,    64,    96,    97,
      98,    84,    66,   296,    70,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    46,     7,     8,     9,   186,
      12,    13,   186,    87,    96,   123,    98,   125,   185,    66,
       0,   378,     3,     4,     5,     6,    86,     8,     9,    68,
      68,    68,    87,    87,   203,    86,    86,   214,    85,    68,
     217,   209,    79,    67,     3,    84,    84,    84,    94,    71,
     226,    97,    86,   230,    64,    84,   230,    79,   226,    79,
     230,   238,    84,   240,    84,    84,   240,    68,   194,    66,
     194,    66,    53,    75,    76,   252,   141,   123,   252,   125,
     238,    82,    66,    84,   210,    69,   253,   254,   255,    67,
      87,    66,    87,    74,   271,    86,    77,    78,    79,   223,
      33,   278,   278,    84,    32,    86,   273,    88,    89,    66,
     278,   288,    87,   271,   288,    66,    49,    86,    46,    47,
     278,    32,    66,    51,   301,    46,    83,   301,    61,    37,
     297,   301,    68,    46,    85,    46,    47,    66,    46,    46,
      51,    85,   282,    79,    67,    68,    79,    66,    84,   214,
      69,    66,   217,   279,    83,   279,    71,    77,    78,    82,
     260,   261,   262,   263,   341,   341,    66,   334,    46,    69,
     294,   342,   349,   341,    67,   349,    85,   354,   214,   356,
     354,   217,   356,   341,   354,    74,     3,     4,     5,     6,
     358,     8,     9,    79,    80,    81,    10,    11,   365,    14,
      15,   378,   258,   259,   378,   264,   265,    71,   378,    16,
      73,    72,    29,   256,   257,    32,    33,    69,    66,    69,
      37,    66,    39,    40,    41,    85,    85,     3,    45,    46,
      47,    48,    49,     3,    51,    52,    53,    54,    55,     3,
      57,    58,    59,    60,    61,    69,    63,     3,     4,     5,
       6,     3,     8,     9,    85,    85,    69,    74,    69,    85,
      77,    78,    79,    85,    69,    86,    85,    84,   105,   186,
     186,    88,    89,   231,   349,   210,   266,    33,   209,     3,
       4,     5,     6,    89,     8,     9,   268,   270,   267,   285,
      -1,    -1,   269,    49,    -1,    -1,    -1,    53,    54,    -1,
      -1,     3,     4,     5,     6,    61,     8,     9,    -1,    33,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    78,    79,    -1,    49,    -1,    -1,    84,    53,
      54,    -1,    88,    89,    -1,    -1,    -1,    61,     3,     4,
       5,     6,    -1,     8,     9,    69,    -1,    -1,    -1,    -1,
      74,    53,    -1,    77,    78,    79,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    68,    -1,     3,     4,
       5,     6,    74,     8,     9,    77,    78,    79,    -1,    -1,
      82,    -1,    84,    -1,    86,    87,    88,    89,    53,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    77,    78,    79,    -1,    -1,    82,    53,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    68,     8,     9,    -1,    -1,    -1,    74,
      53,    -1,    77,    78,    79,    -1,    -1,    82,    -1,    84,
      -1,    86,    -1,    88,    89,    -1,    -1,     3,     4,     5,
       6,    74,     8,     9,    77,    78,    79,    -1,    -1,    -1,
      -1,    84,    85,    -1,    -1,    88,    89,    -1,    -1,    53,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    77,    78,    79,    -1,    53,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    74,    -1,
      53,    77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,
      86,    -1,    88,    89,    -1,    -1,    69,     3,     4,     5,
       6,    74,     8,     9,    77,    78,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    53,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    78,    79,    -1,    -1,    -1,    53,    84,    -1,
      -1,    -1,    88,    89,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    69,    -1,    -1,    -1,    -1,    74,    53,
      -1,    77,    78,    79,     3,     4,     5,     6,    84,     8,
       9,    -1,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    74,     3,    -1,
      77,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    89,    -1,    -1,    74,    -1,    -1,    77,    78,
      79,    -1,    -1,    -1,    29,    84,    -1,    32,    33,    88,
      89,    -1,    37,    -1,    39,    40,    41,    -1,    -1,     3,
      45,    46,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    63,    -1,
      -1,    -1,    -1,    68,    -1,    29,    -1,    -1,    32,    33,
      -1,    -1,    -1,    37,    79,    39,    40,    41,    -1,    84,
      85,    45,    46,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    85,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,    68,
      -1,    29,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,
      79,    39,    40,    41,    -1,    84,    85,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    32,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    51,    52,    85,    -1,    55,
      -1,    32,    58,    59,    60,    -1,    37,    63,    39,    -1,
      41,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,    60,
      -1,    87,    63,    -1,    32,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,    52,    -1,    87,    55,    -1,    32,
      58,    59,    60,    -1,    37,    63,    39,    -1,    41,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,    52,
      -1,    -1,    55,    -1,    -1,    58,    59,    60,    18,    87,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    87,    45,    46,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    29,    63,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    32,    63,    -1,    -1,    -1,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    51,    52,    -1,    -1,    55,    -1,
      -1,    58,    59,    60,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    32,    33,    37,    39,    40,    41,    45,    46,
      47,    48,    49,    51,    52,    54,    55,    57,    58,    59,
      60,    61,    63,    91,    92,    93,    96,    97,    98,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   127,
     128,   129,   138,   139,   140,   142,    64,     3,    86,   123,
      64,    37,    46,    46,    32,    46,    47,    51,     3,    86,
     130,     3,    86,   141,    32,    46,    47,    51,     0,     3,
      79,    84,    94,    95,    99,   100,   101,   102,   104,   145,
     185,    92,    92,    92,    92,     3,   124,   125,   126,    86,
      64,    46,    46,    97,   131,   132,    86,   131,    86,    46,
      46,    98,   103,   145,    99,    66,    83,    67,    68,    84,
     100,    66,    87,    67,   124,    71,    99,   133,   134,   135,
     136,    87,   132,   131,    87,   131,    98,   145,    85,    95,
       3,     4,     5,     6,     8,     9,    53,    74,    77,    78,
      79,    84,    86,    88,    89,   108,   147,   148,   149,   150,
     151,   152,   153,   154,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   182,
      33,    49,    54,    61,    69,    79,   105,   106,   107,   180,
     181,   182,     3,    85,    92,   186,   187,   188,   189,    87,
     125,   182,   184,    66,    87,   137,   160,   180,   181,    71,
      66,    83,    87,    87,    84,   160,   160,    84,   160,   159,
     159,   159,   159,    92,   143,   184,    68,    82,   108,   109,
     110,   111,   112,   159,   159,     7,     8,     9,    68,    82,
      84,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    67,   183,    79,    80,    81,    77,    78,    10,    11,
      12,    13,    75,    76,    14,    15,    74,    73,    72,    16,
      17,    70,    69,    79,   106,   107,    69,    69,    68,    84,
      99,   144,   145,   146,    85,    66,    66,    85,    66,    87,
     137,   134,   143,   143,    84,   144,   145,    85,    85,   181,
       3,    66,    87,   108,    67,   112,     3,   184,     3,    85,
     155,   182,   182,   159,   159,   159,   170,   170,   171,   171,
     172,   172,   172,   172,   173,   173,   174,   175,   176,   177,
     178,   184,    69,    69,    79,   181,   184,    85,   144,   186,
     146,    68,    84,    18,   188,     3,   182,    85,    85,    86,
     159,    69,    87,   108,   110,    69,    66,    85,    71,    69,
      69,    69,    85,    85,    69,    79,   181,   184,    85,   186,
     109,   108,   182,   180,    69,    69,    69,    85,    66,    87,
      87
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
#line 2004 "parser.tab.c"
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
#line 822 "parser.y"


int main(){
    yyparse();
    return 0;
}

