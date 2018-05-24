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
#line 1 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:339  */

    #include "../inc/Lexer.h"
    #include "../inc/asm/Asm.h"
    #include "../inc/asm/ASM_VARS.h"
    #include "../inc/helpers/Singleton.h"
    #include "../inc/helpers/WriteAdapter.h"
    #include "../inc/helpers/StringGenerator.h"
    #include "../inc/HashTable/HashTable.h"

    extern FILE *yyin;
    extern int yylineno;
    extern int ch;
    extern char *yytext;
    extern void yyerror(const char *);
    extern void yyerror(const char *, const char *);
    extern HashTable* hash_table;
    extern int yylex();
    AST::Ast* ast;
    bool valid = true;

#line 87 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_HOME_DIRENOL_CLIONPROJECTS_EASYCOMPILE_INC_PARSER_H_INCLUDED
# define YY_YY_HOME_DIRENOL_CLIONPROJECTS_EASYCOMPILE_INC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    VOID = 259,
    STRING = 260,
    FUNCTION = 261,
    FOR = 262,
    IF = 263,
    ELSE = 264,
    LEX_ERROR = 265,
    ID = 266,
    CONST_INT = 267,
    CONST_DOUBLE = 268,
    JUMP = 269,
    MARK_TOK = 270,
    RETURN = 271,
    OPME = 272,
    DEC = 273,
    INC = 274,
    EQ = 275,
    LEQ = 276,
    GEQ = 277,
    NEQ = 278,
    AND = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:355  */

    int type;
    char* str;
    AST::BaseAST* expr;
    // TODO Fix unary priority

#line 159 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_DIRENOL_CLIONPROJECTS_EASYCOMPILE_INC_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 176 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   192

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    42,    33,     2,
      26,    27,    40,    38,    28,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    25,
      36,    29,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    34,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,    35,    32,    43,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    46,    49,    53,    54,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    69,    72,    73,
      76,    79,    82,    83,    86,    87,    92,    95,    98,   101,
     102,   103,   106,   107,   110,   113,   116,   117,   120,   121,
     124,   127,   130,   131,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   148,   149,   150,   153,   154,   155,
     156,   157,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   173,   174,   177,   180,   183
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "VOID", "STRING", "FUNCTION",
  "FOR", "IF", "ELSE", "LEX_ERROR", "ID", "CONST_INT", "CONST_DOUBLE",
  "JUMP", "MARK_TOK", "RETURN", "OPME", "DEC", "INC", "EQ", "LEQ", "GEQ",
  "NEQ", "AND", "';'", "'('", "')'", "','", "'='", "':'", "'{'", "'}'",
  "'&'", "'^'", "'|'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'~'", "'!'", "$accept", "START", "BODY", "ATOMLLIST", "ATOM", "PROTO",
  "FUNC_T", "RET", "CALL", "ARGS", "ARG", "DEFVAR", "UNDEFVAR", "ANYVAR",
  "LEVAL", "MARK", "GOTO", "OPERS", "IFELSE", "ELSEIF", "LOOP", "EVAL",
  "EXPR", "EXPR0", "EXPR1", "EXPR2", "VAR", "ID_REC", "ID_LOC", "CONST", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    59,    40,    41,    44,    61,
      58,   123,   125,    38,    94,   124,    60,    62,    43,    45,
      42,    47,    37,   126,    33
};
# endif

#define YYPACT_NINF -50

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-50)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     139,    20,    22,    11,    16,   -50,   -50,    37,    28,    28,
      28,   148,    28,   148,   148,   148,    94,   -50,    26,    50,
      59,    68,    79,   -50,    82,   -50,   -50,   -50,    84,    96,
      44,     7,    -7,    77,    -6,   -50,   -50,    74,   -50,   -50,
      20,     2,   148,   -50,   -50,   -50,   -50,   -50,   -50,    92,
      97,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     -50,   -50,   148,    10,   148,   -50,   148,   -50,    20,   -50,
     -50,   100,   -50,   -11,    95,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   103,   104,   -50,   -50,    21,   -50,   -50,
      74,   148,   105,   -50,    10,   110,   139,   -50,   148,   107,
     -50,   139,   121,   -50,   -50,   140,   -50,   123,   125,   -50,
     139,   139,   120,   129,   -50,   -50
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    75,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
      72,     0,     0,    10,     0,    11,    36,    37,     0,     0,
      44,    54,    57,    62,    74,    73,    76,    28,    18,    19,
       0,     0,     0,    35,    20,    74,    71,    69,    72,     0,
      74,    67,    65,    64,    66,     1,     3,    15,    14,    13,
       7,     8,     9,    12,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    68,     0,     0,     0,    34,     0,    17,     0,    31,
      29,     0,    30,     0,     0,    63,    52,    49,    50,    53,
      45,    46,    47,    48,    51,    55,    56,    61,    58,    59,
      60,    43,    25,     0,    22,    26,    24,    74,    42,    27,
       0,     0,     0,    21,     0,     0,     0,    23,     0,     0,
       4,     5,     0,    32,    33,    38,     6,     0,     0,    39,
       0,     0,     0,     0,    41,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -50,   -50,   -49,   -50,    14,   -50,   -50,   -50,     3,    38,
     -50,   122,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -39,   -10,    24,    -8,   102,    78,     0,   -36,   -50
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,   129,   130,   131,    18,    40,    19,    48,   113,
     114,    21,    22,    91,   132,    23,    24,    25,    26,   139,
      27,    28,    29,    30,    31,    32,    33,    50,    37,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    49,    92,    20,    87,    88,    82,    43,    45,    45,
      45,    82,    45,     5,    17,   112,    34,    76,    84,    20,
      83,     5,     6,    84,    85,    38,    39,    89,     9,    10,
      56,    36,    94,    77,    78,    79,    11,    41,    82,     5,
       6,    93,    42,    12,   115,    74,    75,    83,     5,    13,
      84,    57,   120,    14,    15,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    65,    66,    67,    68,   107,   108,
     109,   110,   111,   116,   118,    58,   119,    69,    70,    71,
      72,    73,   136,   117,    59,   115,    44,    46,    47,   133,
      51,   142,   143,    60,    55,    80,    81,     1,   105,   106,
       2,     3,     4,    86,    61,     5,     6,    62,     7,    63,
       8,   125,     9,    10,   116,    52,    53,    54,   134,    95,
      11,    64,   122,    83,   117,   121,    34,    12,   117,    20,
     123,    34,   124,    13,    20,   128,   126,    14,    15,   135,
      34,    34,     1,    20,    20,     2,     3,     4,   137,   138,
       5,     6,   144,     7,   140,     8,   141,     9,    10,     5,
       6,   145,   127,    90,     0,    11,     9,    10,     0,     0,
       0,     0,    12,     0,    11,     0,     0,     0,    13,     0,
       0,    12,    14,    15,     0,     0,     0,    13,     0,     0,
       0,    14,    15
};

static const yytype_int16 yycheck[] =
{
       0,    11,    41,     0,    40,     3,    17,     7,     8,     9,
      10,    17,    12,    11,     0,     5,    16,    24,    29,    16,
      26,    11,    12,    29,    30,     3,     4,    25,    18,    19,
      16,    11,    42,    40,    41,    42,    26,    26,    17,    11,
      12,    41,    26,    33,    83,    38,    39,    26,    11,    39,
      29,    25,    88,    43,    44,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    20,    21,    22,    23,    76,    77,
      78,    79,    82,    83,    84,    25,    86,    33,    34,    35,
      36,    37,   131,    83,    25,   124,     8,     9,    10,   128,
      12,   140,   141,    25,     0,    18,    19,     3,    74,    75,
       6,     7,     8,    29,    25,    11,    12,    25,    14,    25,
      16,   121,    18,    19,   124,    13,    14,    15,   128,    27,
      26,    25,    27,    26,   124,    25,   126,    33,   128,   126,
      27,   131,    28,    39,   131,    25,    31,    43,    44,    32,
     140,   141,     3,   140,   141,     6,     7,     8,    27,     9,
      11,    12,    32,    14,    31,    16,    31,    18,    19,    11,
      12,    32,   124,    41,    -1,    26,    18,    19,    -1,    -1,
      -1,    -1,    33,    -1,    26,    -1,    -1,    -1,    39,    -1,
      -1,    33,    43,    44,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,    11,    12,    14,    16,    18,
      19,    26,    33,    39,    43,    44,    46,    49,    50,    52,
      53,    56,    57,    60,    61,    62,    63,    65,    66,    67,
      68,    69,    70,    71,    72,    74,    11,    73,     3,     4,
      51,    26,    26,    72,    71,    72,    71,    71,    53,    67,
      72,    71,    70,    70,    70,     0,    49,    25,    25,    25,
      25,    25,    25,    25,    25,    20,    21,    22,    23,    33,
      34,    35,    36,    37,    38,    39,    24,    40,    41,    42,
      18,    19,    17,    26,    29,    30,    29,    73,     3,    25,
      56,    58,    66,    72,    67,    27,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    69,
      69,    67,     5,    54,    55,    66,    67,    72,    67,    67,
      73,    25,    27,    27,    28,    67,    31,    54,    25,    47,
      48,    49,    59,    66,    67,    32,    47,    27,     9,    64,
      31,    31,    47,    47,    32,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    47,    48,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    50,    51,    51,
      52,    53,    54,    54,    55,    55,    55,    56,    57,    58,
      58,    58,    59,    59,    60,    61,    62,    62,    63,    63,
      64,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    69,    69,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    72,    73,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       1,     1,     2,     2,     2,     2,     2,     3,     1,     1,
       2,     4,     1,     3,     1,     1,     1,     4,     2,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     7,     8,
       4,    11,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1
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
#line 45 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { ast->AddToLink((yyvsp[0].expr)); }
#line 1359 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { ast->AddToLink((yyvsp[0].expr)); }
#line 1365 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BodyAST>((yyvsp[0].expr)); }
#line 1371 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 53 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BodyLListAST>(nullptr, (yyvsp[0].expr)); }
#line 1377 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 54 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BodyLListAST>((yyvsp[0].expr), (yyvsp[-1].expr)); }
#line 1383 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 57 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1389 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 58 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1395 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 59 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1401 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 60 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1407 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1413 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1419 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1425 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1431 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1437 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1443 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[0].str)) { hash_table->CreateEntry((yyvsp[-1].type), std::string((yyvsp[0].str))); (yyval.expr) = ast->Getter<AST::PrototypeFuncAST>((yyvsp[-1].type), std::string((yyvsp[0].str))); } else (yyval.expr) = nullptr; free((yyvsp[0].str)); }
#line 1449 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 1455 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.type) = (yyvsp[0].type); }
#line 1461 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 76 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::ReturnAST>((yyvsp[0].expr)); }
#line 1467 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 79 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[-3].str)) (yyval.expr) = ast->Getter<AST::CallFuncAST>(std::string((yyvsp[-3].str)), ast->Getter<AST::ArgsAST>((yyvsp[-1].expr))); else (yyval.expr) = nullptr; free((yyvsp[-3].str)); }
#line 1473 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::ArgListAST>(nullptr, (yyvsp[0].expr)); }
#line 1479 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::ArgListAST>((yyvsp[0].expr), (yyvsp[-2].expr)); }
#line 1485 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1491 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 87 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    {      std::string str_name = Singleton<StringGenerator>::getInstance()->Generate();
                        Singleton<FormatAcum>::getInstance()->Add(str_name, std::string((yyvsp[0].str)));
                        (yyval.expr) = ast->Getter<AST::StringAST>(str_name, std::string((yyvsp[0].str)));
                        free((yyvsp[0].str));
                 }
#line 1501 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 92 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { reinterpret_cast<AST::EvalAST*>((yyvsp[0].expr))->SetNeed(); (yyval.expr) = (yyvsp[0].expr); }
#line 1507 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].str)) { hash_table->CreateEntry((yyvsp[-3].type), std::string((yyvsp[-2].str))); (yyval.expr) = ast->Getter<AST::VariableDefAST>((yyvsp[-3].type), std::string((yyvsp[-2].str)), (yyvsp[0].expr)); } else (yyval.expr) = nullptr; free((yyvsp[-2].str)); }
#line 1513 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[0].str)) { hash_table->CreateEntry((yyvsp[-1].type), std::string((yyvsp[0].str))); (yyval.expr) = ast->Getter<AST::VariableUndefAST>((yyvsp[-1].type), std::string((yyvsp[0].str))); } else (yyval.expr) = nullptr; free((yyvsp[0].str)); }
#line 1519 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 101 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1525 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1531 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 1537 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 106 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1543 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 107 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1549 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 110 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].str)) { hash_table->CreateEntry(MARK_TOK, std::string((yyvsp[-1].str))); (yyval.expr) = ast->Getter<AST::MarkAST>(std::string((yyvsp[-1].str))); } else (yyval.expr) = nullptr; free((yyvsp[-1].str)); }
#line 1555 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 113 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[0].str)) { (yyval.expr) = ast->Getter<AST::JumpAST>(std::string((yyvsp[0].str))); } else { (yyval.expr) = nullptr; } free((yyvsp[0].str)); }
#line 1561 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 116 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1567 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 117 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1573 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 120 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::IfAST>((yyvsp[-4].expr), (yyvsp[-1].expr), nullptr); }
#line 1579 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 121 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::IfAST>((yyvsp[-5].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1585 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 124 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::ElseAST>((yyvsp[-1].expr)); }
#line 1591 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 127 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::LoopAST>((yyvsp[-8].expr), (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-1].expr)); }
#line 1597 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 130 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].str)) (yyval.expr) = ast->Getter<AST::EvalAST>((yyvsp[-2].str), (yyvsp[0].expr)); else (yyval.expr) = nullptr; free((yyvsp[-2].str)); }
#line 1603 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 131 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[-2].str)) (yyval.expr) = ast->Getter<AST::EvalAST>(std::string((yyvsp[-2].str)),
                ast->Getter<AST::BinaryExprAST>((yyvsp[-1].type), ast->Getter<AST::VariableExprAST>(std::string((yyvsp[-2].str))), (yyvsp[0].expr)));
            else (yyval.expr) = nullptr; free((yyvsp[-2].str)); }
#line 1611 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 136 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1617 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 137 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BinaryExprAST>('&', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1623 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 138 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BinaryExprAST>('^', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1629 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 139 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BinaryExprAST>('|', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1635 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 140 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::LogicExprAST>('<', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1641 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 141 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::LogicExprAST>(oLEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1647 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 142 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::LogicExprAST>(oGEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1653 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 143 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::LogicExprAST>('>', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1659 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 144 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::LogicExprAST>('=', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1665 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 145 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::LogicExprAST>('!', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1671 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 148 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1677 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 149 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BinaryExprAST>('+', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1683 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 150 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BinaryExprAST>('-', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1689 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 153 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1695 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 154 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BinaryExprAST>('*', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1701 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 155 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BinaryExprAST>('/', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1707 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 156 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::BinaryExprAST>('%', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1713 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 157 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::LogicExprAST>('&', (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1719 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 160 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1725 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 161 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr);}
#line 1731 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 162 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::UnaryAST>('~', (yyvsp[0].expr)); }
#line 1737 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 163 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::UnaryAST>('-', (yyvsp[0].expr)); }
#line 1743 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 164 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::UnaryAST>('!', (yyvsp[0].expr)); }
#line 1749 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 165 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { reinterpret_cast<AST::VariableExprAST*>((yyvsp[0].expr))->setAddr(); (yyval.expr) = (yyvsp[0].expr); }
#line 1755 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 166 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { reinterpret_cast<AST::VariableExprAST*>((yyvsp[-1].expr))->setAddr(); (yyval.expr) = ast->Getter<AST::UnaryAST>(oINC,  (yyvsp[-1].expr)); }
#line 1761 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 167 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { reinterpret_cast<AST::VariableExprAST*>((yyvsp[0].expr))->setAddr(); (yyval.expr) = ast->Getter<AST::UnaryAST>(oIINC,  (yyvsp[0].expr)); }
#line 1767 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 168 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { reinterpret_cast<AST::VariableExprAST*>((yyvsp[-1].expr))->setAddr(); (yyval.expr) = ast->Getter<AST::UnaryAST>(oDEC, (yyvsp[-1].expr)); }
#line 1773 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 169 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { reinterpret_cast<AST::VariableExprAST*>((yyvsp[0].expr))->setAddr(); (yyval.expr) = ast->Getter<AST::UnaryAST>(oIDEC, (yyvsp[0].expr)); }
#line 1779 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 170 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1785 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 173 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1791 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 174 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if ((yyvsp[0].str)) (yyval.expr) = ast->Getter<AST::VariableExprAST>(std::string((yyvsp[0].str))); else (yyval.expr) = nullptr; free((yyvsp[0].str)); }
#line 1797 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 177 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if (hash_table->LookupEntry((yyvsp[0].str)) != nullptr) { (yyval.str) = (yyvsp[0].str); } else { yyerror("Var not declaration", (yyvsp[0].str)); (yyval.str) = nullptr; free((yyvsp[0].str)); } }
#line 1803 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 180 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { if (hash_table->LookupEntryNotRecur((yyvsp[0].str)) == nullptr) { (yyval.str) = (yyvsp[0].str); } else { yyerror("Var already has definition", (yyvsp[0].str)); (yyval.str) = nullptr; free((yyvsp[0].str)); } }
#line 1809 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 183 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1646  */
    { (yyval.expr) = ast->Getter<AST::IntNumberExprAST>(atoi((yyvsp[0].str))); free((yyvsp[0].str)); }
#line 1815 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
    break;


#line 1819 "/home/direnol/CLionProjects/EasyCompile/src/parser.cpp" /* yacc.c:1646  */
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
#line 185 "/home/direnol/CLionProjects/EasyCompile/codeGen/bison.y" /* yacc.c:1906  */


void yyerror(const char *errmsg)
{
    fprintf(stderr, "Position (%d, %d): [%s] %s\n", yylineno, ch, yytext, errmsg);
    valid = false;
}

void yyerror(const char *errmsg, const char *msg)
{
    fprintf(stderr, ">Position (%d, %d): [%s] %s\n", yylineno, ch, msg, errmsg);
    valid = false;
}

int main(int argc, char** argv)
{
    if(argc < 3) {
        fprintf(stderr, "\nNot enough arguments. Please specify filename.\n");
        return EXIT_FAILURE;
    }
    if((yyin = fopen(argv[1], "r")) == nullptr) {
        fprintf(stderr, "\nCannot open file %s.\n", argv[1]);
        return EXIT_FAILURE;
    }
    if(argv[2] == nullptr) {
        fprintf(stderr, "Specify the output file\n");
        return EXIT_FAILURE;
    }
    ast = new AST::Ast();
    AsmVars* asmVars = Singleton<AsmVars>::getInstance();
    asmVars->setIntType(INT);
    yylineno = 1;

    yyparse();

    ASM_GEN* AsmGen = new ASM_GEN(argv[2], ast);
    if (valid)
        AsmGen->Generate();

    fclose(yyin);
    delete hash_table;
    delete ast;
    delete AsmGen;
    WriteAdapter* writeAdapter = Singleton<WriteAdapter>::getInstance();
    delete writeAdapter;

    return EXIT_SUCCESS;
}
