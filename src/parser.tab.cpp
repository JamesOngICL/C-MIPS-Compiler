/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "src/parser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.hpp".  */
#ifndef YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 4 "src/parser.y" /* yacc.c:355  */

	#include "ast.hpp"
	extern const Node *basis; 
	int yylex(void);
	void yyerror(const char *);


#line 105 "src/parser.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DEF_OP_PAREN = 258,
    DEF_CLO_PAREN = 259,
    DEF_SWT = 260,
    DEF_F_VAL = 261,
    DEF_F_OP = 262,
    DEF_ARR_L = 263,
    DEF_ARR_R = 264,
    DEF_COL = 265,
    DEF_END_LINE = 266,
    DEF_COMM = 267,
    DEF_FLT = 268,
    DEF_INT = 269,
    DEF_TWO_AND = 270,
    DEF_TWO_OR = 271,
    DEF_LSR = 272,
    DEF_LSL = 273,
    DEF_TIMES = 274,
    DEF_ADD = 275,
    DEF_FRACT = 276,
    DEF_SUB = 277,
    DEF_EQ = 278,
    DEF_NUMBER = 279,
    DEF_LETTER = 280,
    DEF_UNS = 281,
    DEF_PEQL = 282,
    DEF_PLUS_PLUS = 283,
    DEF_MEQL = 284,
    DEF_AND = 285,
    DEF_ENUMERATOR = 286,
    DEF_OR = 287,
    DEF_XOR = 288,
    DEF_I_EL = 289,
    DEF_D_EL = 290,
    DEF_U_EL = 291,
    DEF_CH_EL = 292,
    DEF_OP_FUNC = 293,
    DEF_IF = 294,
    DEF_ELS = 295,
    DEF_WH_OP = 296,
    DEF_CNT = 297,
    DEF_B = 298,
    DEF_R_OP = 299,
    DEF_NORM = 300,
    DEF_SEL_STATE = 301,
    DEF_CLO_FUNC = 302,
    DEF_LARGER = 303,
    DEF_GEQ = 304,
    DEF_SMALLER = 305,
    DEF_IDENT = 306,
    DEF_SZ = 307,
    DEF_EMPTY = 308,
    DEF_LEQ = 309,
    DEF_DOUB_EQ = 310,
    DEF_NE = 311,
    DEF_MIN_MIN = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "src/parser.y" /* yacc.c:355  */

	double intval;
	std::vector<exprr*>* alv;
	std::vector<statement_c*>* slv;
	std::vector<exprr*>* ilst;
	std::vector<declarator*>* vld;
	std::vector<declare*>* dlv;
	std::string *string;
	declarator 	*idecn;
	statement_c *sn;
	exprr *exprn;
	const Node *node;
	declare *decn;
	type_def *tnode;
	double fval;
	double uval;
	double dubval;


#line 195 "src/parser.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "src/parser.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   559

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    56,    57,    58,    60,    61,    62,    63,
      64,    65,    67,    69,    70,    72,    73,    75,    76,    78,
      80,    81,    82,    84,    85,    86,    87,    89,    90,    91,
      92,    94,    95,    97,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   109,   110,   112,   113,   115,   117,   118,
     119,   120,   121,   122,   124,   125,   126,   128,   129,   130,
     132,   133,   134,   136,   137,   138,   139,   140,   142,   143,
     144,   146,   147,   148,   149,   151,   152,   153,   155,   156,
     157,   158,   160,   161,   163,   164,   166,   167,   168,   169,
     170,   172,   173,   174,   175,   177,   178,   179,   180,   182,
     183,   185,   186,   188,   189,   190,   191,   192,   194,   195,
     197,   198,   199,   200,   201,   202,   203,   204,   205
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEF_OP_PAREN", "DEF_CLO_PAREN",
  "DEF_SWT", "DEF_F_VAL", "DEF_F_OP", "DEF_ARR_L", "DEF_ARR_R", "DEF_COL",
  "DEF_END_LINE", "DEF_COMM", "DEF_FLT", "DEF_INT", "DEF_TWO_AND",
  "DEF_TWO_OR", "DEF_LSR", "DEF_LSL", "DEF_TIMES", "DEF_ADD", "DEF_FRACT",
  "DEF_SUB", "DEF_EQ", "DEF_NUMBER", "DEF_LETTER", "DEF_UNS", "DEF_PEQL",
  "DEF_PLUS_PLUS", "DEF_MEQL", "DEF_AND", "DEF_ENUMERATOR", "DEF_OR",
  "DEF_XOR", "DEF_I_EL", "DEF_D_EL", "DEF_U_EL", "DEF_CH_EL",
  "DEF_OP_FUNC", "DEF_IF", "DEF_ELS", "DEF_WH_OP", "DEF_CNT", "DEF_B",
  "DEF_R_OP", "DEF_NORM", "DEF_SEL_STATE", "DEF_CLO_FUNC", "DEF_LARGER",
  "DEF_GEQ", "DEF_SMALLER", "DEF_IDENT", "DEF_SZ", "DEF_EMPTY", "DEF_LEQ",
  "DEF_DOUB_EQ", "DEF_NE", "DEF_MIN_MIN", "$accept", "ROOT",
  "global_declaration", "postfix_expression", "function_definition",
  "declaration", "declaration_list", "initialisation_list",
  "parameter_declaration", "parameter_list", "declarator", "specify_decl",
  "start_dec_list", "enumerator", "primary_expression", "enumerator_list",
  "enumerator_initialisation", "enumerator_declarator", "unary_expression",
  "multiply_expression", "add_expression", "bitwise_shift_expression",
  "compare_expression", "equal_expression", "log_bitwise", "parse_l_ANDOR",
  "assignment_expression", "statement_list", "argument_list", "statement",
  "jump_statement", "compound_statement", "begin_comp",
  "expression_statement", "control_flow_logic", "labeled_statement",
  "TYPE", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     261,  -140,  -140,  -140,  -140,    -1,  -140,  -140,    22,  -140,
    -140,  -140,  -140,   261,    10,  -140,  -140,  -140,  -140,  -140,
      33,     2,  -140,    86,   261,   357,    -2,   383,  -140,     3,
    -140,    38,    -3,   471,  -140,  -140,   471,   471,   471,   471,
    -140,  -140,  -140,  -140,  -140,    42,   471,     7,  -140,   -18,
      95,   103,   137,    46,   107,    89,   155,    56,  -140,    -9,
    -140,    49,   409,  -140,    20,  -140,    31,   261,  -140,   104,
    -140,  -140,  -140,  -140,    -7,  -140,   445,   471,  -140,  -140,
     471,   471,   471,   471,   507,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
    -140,    -2,   109,   471,  -140,    27,  -140,   261,   154,  -140,
    -140,  -140,   124,     8,  -140,  -140,    55,   127,  -140,  -140,
    -140,  -140,     7,  -140,    95,    95,   103,   103,   137,   137,
     137,   137,    46,    46,   107,   107,   107,    89,    89,  -140,
    -140,  -140,   471,  -140,    64,   141,   143,  -140,   153,   161,
     158,   163,   481,   156,   471,  -140,  -140,   207,   166,    96,
    -140,  -140,  -140,  -140,  -140,  -140,    15,  -140,  -140,  -140,
     471,  -140,  -140,  -140,   471,   471,   471,   471,  -140,  -140,
    -140,   170,   313,   162,  -140,  -140,   260,  -140,  -140,  -140,
    -140,   190,   193,   213,   215,  -140,  -140,   313,  -140,   313,
     471,   313,   313,  -140,  -140,   211,   183,  -140,   471,   313,
     220,  -140,   313,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   117,   110,   115,   114,   118,   113,   111,     0,    99,
       4,     5,     3,     2,     0,   112,     1,   100,    13,   116,
      23,    27,    31,     0,    22,     0,     0,     0,    14,     0,
      20,     0,     0,     0,    35,    24,     0,     0,     0,     0,
      34,    37,    38,    36,    39,     0,     0,    48,     6,    54,
      57,    60,    63,    68,    71,    75,    78,     0,    47,     0,
      43,    46,     0,    30,    23,    32,    26,     0,    19,     0,
      49,    50,    52,    51,     0,    53,     0,     0,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,    28,     0,    17,    22,     0,    12,
      21,    40,     0,     0,    11,    84,     0,     0,    79,    80,
      81,    55,    56,    54,    58,    59,    62,    61,    66,    67,
      64,    65,    69,    70,    72,    74,    73,    76,    77,    44,
      33,    45,     0,    29,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,    95,    15,     0,     0,     0,
      82,    86,    87,    88,    89,    90,     0,    42,    41,     9,
       0,    10,    18,    26,     0,     0,     0,     0,    93,    92,
      91,     0,     0,     0,    97,    16,     0,   101,    96,    83,
      85,     0,     0,     0,     0,    94,   109,     0,    98,     0,
       0,     0,     0,   108,   105,     0,   103,   106,     0,     0,
       0,   104,     0,   107
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,   212,   144,  -140,  -104,  -140,  -140,   160,   123,
     202,   210,  -140,  -140,  -140,  -140,   135,  -140,    -6,   101,
     115,    21,   122,     9,   110,  -140,   -25,    83,  -140,  -139,
    -140,   181,  -140,  -140,  -140,  -140,     1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    47,    10,    11,   157,   105,    30,    31,
      21,    22,    23,    12,    48,    59,    60,    61,    49,    50,
      51,    52,    53,    54,    55,    56,   158,   159,   116,   160,
     161,   162,    13,   163,   164,   165,    32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      57,    14,    63,   101,   156,    80,     1,     2,    69,    81,
      76,    82,   168,    15,    14,    77,    19,     3,     4,     5,
     189,    18,    16,   107,     6,    27,    18,    19,    25,    19,
      70,    71,    72,    73,    19,    78,    24,   106,   102,   142,
      75,    25,    66,   196,   112,    74,     7,   189,    64,    58,
      67,   115,   117,   185,    64,   118,   119,   120,   203,   169,
     204,    20,   206,   207,    79,   100,    64,   170,   173,   108,
     211,    26,   103,   213,   143,   113,    67,   121,   141,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,    89,    90,    91,    28,    29,    33,
      92,   145,    34,   146,   134,   135,   136,   147,   111,   166,
     128,   129,   130,   131,    83,    36,    84,   172,    37,    95,
     140,    96,    97,    85,    38,    86,    39,   181,   167,   183,
      40,    41,    42,    43,   108,   148,   171,   149,   150,   151,
     152,   153,   154,   188,   174,   190,   175,    44,    45,   191,
     192,   193,   194,    46,    87,    88,   176,    33,   166,   145,
      34,   146,    93,    94,   177,   147,   182,     1,     2,   178,
      98,    99,   197,    36,   179,   205,    37,   187,     3,     4,
       5,   195,    38,   210,    39,     6,   124,   125,    40,    41,
      42,    43,   108,   148,   199,   149,   150,   151,   152,   153,
     154,   155,   126,   127,   200,    44,    45,     7,   137,   138,
      33,    46,   145,    34,   146,   132,   133,   201,   147,   202,
       1,     2,   208,   209,   212,    17,    36,   110,   122,    37,
     144,     3,     4,     5,    68,    38,   139,    39,     6,    65,
     186,    40,    41,    42,    43,   108,   148,   109,   149,   150,
     151,   152,   153,   154,   184,     0,     0,     0,    44,    45,
       7,     0,     0,    33,    46,   145,    34,   146,     0,     0,
       0,   147,     0,     0,     1,     2,     0,     0,     0,    36,
       0,     0,    37,     0,     0,     3,     4,     5,    38,     0,
      39,     0,     6,     0,    40,    41,    42,    43,   108,   148,
       0,   149,   150,   151,   152,   153,   154,   198,     0,     0,
       0,    44,    45,     0,     7,     0,    33,    46,   145,    34,
     146,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,    37,     0,     0,     0,     0,
       0,    38,     0,    39,     0,     0,     0,    40,    41,    42,
      43,   108,   148,     0,   149,   150,   151,   152,   153,   154,
      33,     0,     0,    34,    44,    45,    35,     0,     0,     0,
      46,     0,     0,     0,     0,     0,    36,     0,     0,    37,
       0,     0,     0,     0,     0,    38,    33,    39,     0,    34,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,    37,     0,     0,    44,    45,
       0,    38,    33,    39,    46,    34,     0,    40,    41,    42,
      43,    62,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    37,     0,     0,    44,    45,     0,    38,     0,    39,
      46,     0,     0,    40,    41,    42,    43,     0,    33,   114,
       0,    34,     0,     0,     0,     0,   104,     0,     0,     0,
      44,    45,     0,     0,    36,     0,    46,    37,     0,     0,
       0,     0,     0,    38,    33,    39,     0,    34,     0,    40,
      41,    42,    43,     0,    33,     0,     0,    34,     0,     0,
      36,     0,   180,    37,     0,     0,    44,    45,     0,    38,
      36,    39,    46,    37,     0,    40,    41,    42,    43,    38,
      33,    39,     0,    34,     0,    40,    41,    42,    43,     0,
       0,     0,    44,    45,     0,     0,     0,     0,    46,     0,
       0,     0,    44,    45,     0,     0,     0,     0,    46,     0,
       0,    40,    41,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45
};

static const yytype_int16 yycheck[] =
{
      25,     0,    27,    12,   108,    23,    13,    14,    33,    27,
       3,    29,     4,    14,    13,     8,    19,    24,    25,    26,
     159,    11,     0,     3,    31,    23,    11,    19,     8,    19,
      36,    37,    38,    39,    19,    28,     3,    62,    47,    12,
      46,     8,     4,   182,    51,     3,    53,   186,    51,    51,
      12,    76,    77,   157,    51,    80,    81,    82,   197,     4,
     199,    51,   201,   202,    57,     9,    51,    12,     4,    38,
     209,    38,    23,   212,    47,    74,    12,    83,   103,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    48,    49,    50,    11,    12,     3,
      54,     5,     6,     7,    95,    96,    97,    11,     4,   108,
      89,    90,    91,    92,    19,    19,    21,   142,    22,    30,
      11,    32,    33,    20,    28,    22,    30,   152,     4,   154,
      34,    35,    36,    37,    38,    39,     9,    41,    42,    43,
      44,    45,    46,    47,     3,   170,     3,    51,    52,   174,
     175,   176,   177,    57,    17,    18,     3,     3,   157,     5,
       6,     7,    55,    56,     3,    11,    10,    13,    14,    11,
      15,    16,    10,    19,    11,   200,    22,    11,    24,    25,
      26,    11,    28,   208,    30,    31,    85,    86,    34,    35,
      36,    37,    38,    39,     4,    41,    42,    43,    44,    45,
      46,    47,    87,    88,    11,    51,    52,    53,    98,    99,
       3,    57,     5,     6,     7,    93,    94,     4,    11,     4,
      13,    14,    11,    40,     4,    13,    19,    67,    84,    22,
     107,    24,    25,    26,    32,    28,   101,    30,    31,    29,
     157,    34,    35,    36,    37,    38,    39,    66,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    51,    52,
      53,    -1,    -1,     3,    57,     5,     6,     7,    -1,    -1,
      -1,    11,    -1,    -1,    13,    14,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    -1,    24,    25,    26,    28,    -1,
      30,    -1,    31,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    51,    52,    -1,    53,    -1,     3,    57,     5,     6,
       7,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
       3,    -1,    -1,     6,    51,    52,     9,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    28,     3,    30,    -1,     6,
      -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    51,    52,
      -1,    28,     3,    30,    57,     6,    -1,    34,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    51,    52,    -1,    28,    -1,    30,
      57,    -1,    -1,    34,    35,    36,    37,    -1,     3,     4,
      -1,     6,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      51,    52,    -1,    -1,    19,    -1,    57,    22,    -1,    -1,
      -1,    -1,    -1,    28,     3,    30,    -1,     6,    -1,    34,
      35,    36,    37,    -1,     3,    -1,    -1,     6,    -1,    -1,
      19,    -1,    11,    22,    -1,    -1,    51,    52,    -1,    28,
      19,    30,    57,    22,    -1,    34,    35,    36,    37,    28,
       3,    30,    -1,     6,    -1,    34,    35,    36,    37,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    14,    24,    25,    26,    31,    53,    59,    60,
      62,    63,    71,    90,    94,    14,     0,    60,    11,    19,
      51,    68,    69,    70,     3,     8,    38,    23,    11,    12,
      66,    67,    94,     3,     6,     9,    19,    22,    28,    30,
      34,    35,    36,    37,    51,    52,    57,    61,    72,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    51,    73,
      74,    75,    38,    84,    51,    69,     4,    12,    68,    84,
      76,    76,    76,    76,     3,    76,     3,     8,    28,    57,
      23,    27,    29,    19,    21,    20,    22,    17,    18,    48,
      49,    50,    54,    55,    56,    30,    32,    33,    15,    16,
       9,    12,    47,    23,    47,    65,    84,     3,    38,    89,
      66,     4,    51,    94,     4,    84,    86,    84,    84,    84,
      84,    76,    61,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    80,    80,    81,    81,    81,    82,    82,    74,
      11,    84,    12,    47,    67,     5,     7,    11,    39,    41,
      42,    43,    44,    45,    46,    47,    63,    64,    84,    85,
      87,    88,    89,    91,    92,    93,    94,     4,     4,     4,
      12,     9,    84,     4,     3,     3,     3,     3,    11,    11,
      11,    84,    10,    84,    47,    63,    85,    11,    47,    87,
      84,    84,    84,    84,    84,    11,    87,    10,    47,     4,
      11,     4,     4,    87,    87,    84,    87,    87,    11,    40,
      84,    87,     4,    87
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    60,    61,    61,    61,    61,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    67,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    74,    74,    75,    76,    76,
      76,    76,    76,    76,    77,    77,    77,    78,    78,    78,
      79,    79,    79,    80,    80,    80,    80,    80,    81,    81,
      81,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    87,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     2,     4,
       4,     3,     6,     2,     3,     1,     2,     1,     3,     2,
       1,     3,     0,     1,     3,     4,     4,     1,     4,     5,
       3,     1,     3,     6,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     1,     3,     3,     1,     1,     1,     2,
       2,     2,     2,     2,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     2,     2,     2,     3,     2,     3,     3,     4,     1,
       2,     2,     1,     5,     7,     5,     5,     9,     4,     3,
       1,     1,     2,     1,     1,     1,     2,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 54 "src/parser.y" /* yacc.c:1646  */
    {basis = (yyvsp[0].node);}
#line 1520 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 56 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].idecn);}
#line 1526 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 57 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1532 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "src/parser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].idecn);}
#line 1538 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 61 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new directa((yyvsp[-1].exprn), new Arithmetic_Operation_Expressions((yyvsp[-1].exprn), new integer(1),"add"));}
#line 1544 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 62 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new directa((yyvsp[-1].exprn), new Arithmetic_Operation_Expressions((yyvsp[-1].exprn), new integer(1),"sub"));}
#line 1550 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 63 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new returnfuncval((yyvsp[-3].exprn), (yyvsp[-1].alv));}
#line 1556 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 64 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new array_indexing((yyvsp[-3].exprn), (yyvsp[-1].exprn));}
#line 1562 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 65 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new returnfuncval((yyvsp[-2].exprn));}
#line 1568 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 67 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = new definefunction((yyvsp[-5].tnode), *(yyvsp[-4].string), (yyvsp[-2].vld), (yyvsp[0].sn));delete (yyvsp[-4].string);}
#line 1574 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 69 "src/parser.y" /* yacc.c:1646  */
    { (yyval.idecn) = new declarator(*(yyvsp[-1].tnode)); delete (yyvsp[-1].tnode); }
#line 1580 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 70 "src/parser.y" /* yacc.c:1646  */
    { (yyval.idecn) = new declarator(*(yyvsp[-2].tnode), (yyvsp[-1].dlv)); delete (yyvsp[-2].tnode); }
#line 1586 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 72 "src/parser.y" /* yacc.c:1646  */
    { (yyval.vld) = new std::vector<declarator*>(1, (yyvsp[0].idecn));}
#line 1592 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].vld)->push_back((yyvsp[0].idecn)); (yyval.vld) = (yyvsp[-1].vld); }
#line 1598 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 75 "src/parser.y" /* yacc.c:1646  */
    { (yyval.ilst) = new std::vector<exprr*>(1, (yyvsp[0].exprn));	}
#line 1604 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 76 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].ilst)->push_back((yyvsp[0].exprn)); (yyval.ilst)=(yyvsp[-2].ilst); }
#line 1610 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 78 "src/parser.y" /* yacc.c:1646  */
    { (yyval.idecn) = new declarator(*(yyvsp[-1].tnode), new std::vector<declare*>(1, (yyvsp[0].decn))); delete (yyvsp[-1].tnode);}
#line 1616 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "src/parser.y" /* yacc.c:1646  */
    { (yyval.vld) = new std::vector<declarator*>(1, (yyvsp[0].idecn)); }
#line 1622 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 81 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].vld)->push_back((yyvsp[0].idecn)); (yyval.vld) = (yyvsp[-2].vld); }
#line 1628 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "src/parser.y" /* yacc.c:1646  */
    { (yyval.vld) = nullptr; }
#line 1634 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 84 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new decvar(*(yyvsp[0].string), 0); delete (yyvsp[0].string);}
#line 1640 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 85 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new decarray(*(yyvsp[-2].string), nullptr); delete (yyvsp[-2].string); }
#line 1646 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 86 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new decarray(*(yyvsp[-3].string), (yyvsp[-1].exprn));delete (yyvsp[-3].string); }
#line 1652 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new declarefunction(*(yyvsp[-3].string), (yyvsp[-1].vld));delete (yyvsp[-3].string); }
#line 1658 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 89 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = (yyvsp[0].decn); }
#line 1664 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 90 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new array_declaration((yyvsp[-3].decn), new std::vector<exprr*>); }
#line 1670 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 91 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new array_declaration((yyvsp[-4].decn), (yyvsp[-1].ilst)); }
#line 1676 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 92 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new variable_initialization((yyvsp[-2].decn), (yyvsp[0].exprn)); }
#line 1682 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 94 "src/parser.y" /* yacc.c:1646  */
    { (yyval.dlv) = new std::vector<declare*>(1, (yyvsp[0].decn));	}
#line 1688 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 95 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].dlv)->push_back((yyvsp[0].decn)); (yyval.dlv) = (yyvsp[-2].dlv); }
#line 1694 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 97 "src/parser.y" /* yacc.c:1646  */
    { (yyval.idecn) = new declarator(*(yyvsp[-5].tnode), (yyvsp[-2].dlv));delete (yyvsp[-5].tnode); }
#line 1700 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 99 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new integer((yyvsp[0].intval)); }
#line 1706 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new floatv((yyvsp[0].fval)); }
#line 1712 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new character(*(yyvsp[0].string)); delete (yyvsp[0].string);}
#line 1718 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new doublev((yyvsp[0].dubval)); }
#line 1724 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 103 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new unsignedint((yyvsp[0].uval)); }
#line 1730 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 104 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new identf(*(yyvsp[0].string));	delete (yyvsp[0].string);}
#line 1736 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = (yyvsp[-1].exprn); }
#line 1742 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 106 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new typesize(*(yyvsp[-1].tnode)); delete (yyvsp[-1].tnode);}
#line 1748 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 107 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new varsize(*(yyvsp[-1].string)); delete (yyvsp[-1].string);}
#line 1754 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 109 "src/parser.y" /* yacc.c:1646  */
    { (yyval.dlv) = new std::vector<declare*>(1, (yyvsp[0].decn)); }
#line 1760 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 110 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].dlv)->push_back((yyvsp[0].decn)); (yyval.dlv) = (yyvsp[-2].dlv); }
#line 1766 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 112 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new declareenum((yyvsp[-2].decn), (yyvsp[0].exprn)); }
#line 1772 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 113 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new declareenum((yyvsp[0].decn)); }
#line 1778 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 115 "src/parser.y" /* yacc.c:1646  */
    { (yyval.decn) = new decvar(*(yyvsp[0].string), 0); delete (yyvsp[0].string);}
#line 1784 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 118 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new unref((yyvsp[0].exprn)); }
#line 1790 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 119 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new negexpr((yyvsp[0].exprn)); }
#line 1796 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 120 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new ref((yyvsp[0].exprn)); }
#line 1802 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 121 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new directa((yyvsp[0].exprn), new Arithmetic_Operation_Expressions((yyvsp[0].exprn), new integer(1),"add")); }
#line 1808 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 122 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new directa((yyvsp[0].exprn), new Arithmetic_Operation_Expressions((yyvsp[0].exprn), new integer(1),"sub")); }
#line 1814 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = (yyvsp[0].exprn); }
#line 1820 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 125 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Arithmetic_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn),"mul"); }
#line 1826 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 126 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Arithmetic_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn),"div"); }
#line 1832 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 128 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = (yyvsp[0].exprn); }
#line 1838 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 129 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Arithmetic_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "add"); }
#line 1844 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 130 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Arithmetic_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "sub"); }
#line 1850 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 133 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Shift_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "left"); }
#line 1856 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 134 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Shift_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "right"); }
#line 1862 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 137 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Comparison_Operators((yyvsp[-2].exprn), (yyvsp[0].exprn), "less_than"); }
#line 1868 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 138 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Comparison_Operators((yyvsp[-2].exprn), (yyvsp[0].exprn), "less_than_equal"); }
#line 1874 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 139 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Comparison_Operators((yyvsp[-2].exprn), (yyvsp[0].exprn), "more_than"); }
#line 1880 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 140 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Comparison_Operators((yyvsp[-2].exprn), (yyvsp[0].exprn), "more_than_equal"); }
#line 1886 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 143 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Comparison_Operators((yyvsp[-2].exprn), (yyvsp[0].exprn), "equal"); }
#line 1892 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 144 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Comparison_Operators((yyvsp[-2].exprn), (yyvsp[0].exprn), "not_equal"); }
#line 1898 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 146 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprn) = (yyvsp[0].exprn); }
#line 1904 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 147 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Bitwise_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "bit_and"); }
#line 1910 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 148 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Bitwise_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "bit_xor"); }
#line 1916 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 149 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Bitwise_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "b_or"); }
#line 1922 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 151 "src/parser.y" /* yacc.c:1646  */
    {(yyval.exprn) = (yyvsp[0].exprn); }
#line 1928 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 152 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Logical_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "log_and"); }
#line 1934 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 153 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new Logical_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "log_or"); }
#line 1940 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 156 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new directa((yyvsp[-2].exprn), (yyvsp[0].exprn)); }
#line 1946 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 157 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new directa((yyvsp[-2].exprn), new Arithmetic_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "add")); }
#line 1952 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 158 "src/parser.y" /* yacc.c:1646  */
    { (yyval.exprn) = new directa((yyvsp[-2].exprn), new Arithmetic_Operation_Expressions((yyvsp[-2].exprn), (yyvsp[0].exprn), "sub")); }
#line 1958 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 160 "src/parser.y" /* yacc.c:1646  */
    { (yyval.slv) = new std::vector<statement_c*>(1, (yyvsp[0].sn)); }
#line 1964 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 161 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].slv)->push_back((yyvsp[0].sn)); (yyval.slv) = (yyvsp[-1].slv); }
#line 1970 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 163 "src/parser.y" /* yacc.c:1646  */
    { (yyval.alv) = new std::vector<exprr*>(1, (yyvsp[0].exprn)); }
#line 1976 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 164 "src/parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].alv)->push_back((yyvsp[0].exprn)); (yyval.alv) = (yyvsp[-2].alv); }
#line 1982 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 166 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = (yyvsp[0].sn); }
#line 1988 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 167 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = (yyvsp[0].sn); }
#line 1994 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 168 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = (yyvsp[0].sn); }
#line 2000 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 169 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = (yyvsp[0].sn); }
#line 2006 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 170 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = (yyvsp[0].sn); }
#line 2012 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 172 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new jump(); }
#line 2018 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 173 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new Break_Statement(1); }
#line 2024 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 174 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new Break_Statement(0); }
#line 2030 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 175 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new jump((yyvsp[-1].exprn)); }
#line 2036 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 177 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new comps(); }
#line 2042 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 178 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new comps(NULL, (yyvsp[-1].slv)); }
#line 2048 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 179 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new comps((yyvsp[-1].vld), NULL); }
#line 2054 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 180 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new comps((yyvsp[-2].vld), (yyvsp[-1].slv)); }
#line 2060 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 182 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2066 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 183 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = new misc((yyvsp[-1].node),(yyvsp[0].node)); }
#line 2072 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 185 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new expression((yyvsp[-1].exprn)); }
#line 2078 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 186 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new expression(); }
#line 2084 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 188 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new if_s((yyvsp[-2].exprn),(yyvsp[0].sn),(yyvsp[0].sn),0); }
#line 2090 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 189 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new if_s((yyvsp[-4].exprn),(yyvsp[-2].sn),(yyvsp[0].sn),1); }
#line 2096 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 190 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new switch_s((yyvsp[-2].exprn),(yyvsp[0].sn)); }
#line 2102 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 191 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new forloop((yyvsp[-2].exprn),(yyvsp[-2].exprn),(yyvsp[-2].exprn),(yyvsp[0].sn),1); }
#line 2108 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 192 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new forloop((yyvsp[-6].exprn),(yyvsp[-4].exprn),(yyvsp[-2].exprn),(yyvsp[0].sn),0); }
#line 2114 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 194 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new case_s((yyvsp[-2].exprn), (yyvsp[0].sn)); }
#line 2120 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 195 "src/parser.y" /* yacc.c:1646  */
    { (yyval.sn) = new default_s((yyvsp[0].sn)); }
#line 2126 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 197 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def(INT); }
#line 2132 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 198 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def(VOID); }
#line 2138 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 199 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def(UNSIGNED_INT); }
#line 2144 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 200 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def(INT); }
#line 2150 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 201 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def(CHAR); }
#line 2156 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 202 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def(DOUBLE); }
#line 2162 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 203 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def("POINTER", *(yyvsp[-1].tnode)); delete (yyvsp[-1].tnode);}
#line 2168 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 204 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def(FLOAT); }
#line 2174 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 205 "src/parser.y" /* yacc.c:1646  */
    { (yyval.tnode) = new type_def(UNSIGNED_INT); }
#line 2180 "src/parser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2184 "src/parser.tab.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 207 "src/parser.y" /* yacc.c:1906  */


const Node *basis; 

const Node* parseAST()
{
	basis = 0;
	yyparse ();
	return basis;
}
