/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "song.y"

	#define YYSTYPE_IS_DECLARED 1
	#define YYSTYPE long long
	
    #include "type.h"
	#include "song.h"
	#include <stdio.h>
	#include <stdlib.h>
	
	extern int line_no, syntax_err;
	extern A_NODE *root;
	extern A_ID *current_id;
	extern int current_level;
	extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;
	
    int yyerror(char *s);
    int yylex();

#line 89 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    TYPE_IDENTIFIER = 259,
    FLOAT_CONSTANT = 260,
    INTEGER_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    STRING_LITERAL = 263,
    PLUS = 264,
    MINUS = 265,
    PLUSPLUS = 266,
    MINUSMINUS = 267,
    BAR = 268,
    AMP = 269,
    BARBAR = 270,
    AMPAMP = 271,
    ARROW = 272,
    SEMICOLON = 273,
    LSS = 274,
    GTR = 275,
    LEQ = 276,
    GEQ = 277,
    EQL = 278,
    NEQ = 279,
    DOTDOTDOT = 280,
    LP = 281,
    RP = 282,
    LB = 283,
    RB = 284,
    LR = 285,
    RR = 286,
    PERIOD = 287,
    COMMA = 288,
    EXCL = 289,
    STAR = 290,
    SLASH = 291,
    PERCENT = 292,
    ASSIGN = 293,
    COLON = 294,
    AUTO_SYM = 295,
    STATIC_SYM = 296,
    TYPEDEF_SYM = 297,
    STRUCT_SYM = 298,
    ENUM_SYM = 299,
    SIZEOF_SYM = 300,
    UNION_SYM = 301,
    IF_SYM = 302,
    ELSE_SYM = 303,
    WHILE_SYM = 304,
    DO_SYM = 305,
    FOR_SYM = 306,
    CONTINUE_SYM = 307,
    BREAK_SYM = 308,
    RETURN_SYM = 309,
    SWITCH_SYM = 310,
    CASE_SYM = 311,
    DEFAULT_SYM = 312
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define PLUS 264
#define MINUS 265
#define PLUSPLUS 266
#define MINUSMINUS 267
#define BAR 268
#define AMP 269
#define BARBAR 270
#define AMPAMP 271
#define ARROW 272
#define SEMICOLON 273
#define LSS 274
#define GTR 275
#define LEQ 276
#define GEQ 277
#define EQL 278
#define NEQ 279
#define DOTDOTDOT 280
#define LP 281
#define RP 282
#define LB 283
#define RB 284
#define LR 285
#define RR 286
#define PERIOD 287
#define COMMA 288
#define EXCL 289
#define STAR 290
#define SLASH 291
#define PERCENT 292
#define ASSIGN 293
#define COLON 294
#define AUTO_SYM 295
#define STATIC_SYM 296
#define TYPEDEF_SYM 297
#define STRUCT_SYM 298
#define ENUM_SYM 299
#define SIZEOF_SYM 300
#define UNION_SYM 301
#define IF_SYM 302
#define ELSE_SYM 303
#define WHILE_SYM 304
#define DO_SYM 305
#define FOR_SYM 306
#define CONTINUE_SYM 307
#define BREAK_SYM 308
#define RETURN_SYM 309
#define SWITCH_SYM 310
#define CASE_SYM 311
#define DEFAULT_SYM 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   417

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

#define YYUNDEFTOK  2
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    37,    38,    42,    43,    47,    47,    49,
      49,    54,    55,    59,    60,    64,    68,    69,    70,    71,
      75,    76,    77,    81,    82,    86,    87,    91,    92,    96,
      97,   101,   102,   106,   107,   108,   112,   113,   112,   115,
     115,   115,   118,   123,   124,   128,   129,   133,   138,   139,
     143,   147,   147,   149,   149,   151,   155,   156,   160,   161,
     161,   166,   167,   171,   172,   176,   177,   178,   179,   179,
     186,   187,   191,   192,   197,   198,   203,   205,   211,   212,
     216,   217,   218,   223,   224,   226,   228,   230,   235,   236,
     240,   242,   246,   247,   248,   249,   250,   251,   255,   257,
     262,   262,   269,   270,   274,   276,   278,   283,   285,   287,
     292,   297,   298,   302,   304,   306,   311,   312,   316,   318,
     323,   324,   328,   332,   336,   340,   341,   346,   350,   351,
     356,   357,   362,   366,   370,   374,   375,   377,   382,   383,
     385,   387,   389,   394,   398,   399,   401,   406,   407,   409,
     411,   416,   417,   422,   423,   425,   427,   428,   429,   430,
     431,   432,   434,   439,   440,   442,   444,   446,   448,   450,
     455,   457,   458,   459,   460,   461,   465
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "PLUS", "MINUS", "PLUSPLUS", "MINUSMINUS", "BAR",
  "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON", "LSS", "GTR", "LEQ",
  "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR",
  "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "ASSIGN", "COLON",
  "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM", "ENUM_SYM",
  "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM", "DO_SYM",
  "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM", "SWITCH_SYM",
  "CASE_SYM", "DEFAULT_SYM", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF (-220)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     137,  -220,  -220,    25,    27,  -220,  -220,  -220,  -220,    72,
    -220,   105,   137,  -220,  -220,  -220,    25,    45,    45,  -220,
     108,  -220,  -220,    24,    71,    89,  -220,    91,    94,  -220,
    -220,   124,   125,  -220,    62,  -220,  -220,   121,   136,   152,
      71,  -220,    29,  -220,   155,   183,  -220,    25,   359,   152,
     168,  -220,  -220,  -220,    45,  -220,  -220,  -220,  -220,  -220,
      29,    29,   204,   204,    29,   315,    29,    29,   372,   177,
    -220,  -220,  -220,  -220,  -220,   202,   203,  -220,  -220,  -220,
      55,   222,  -220,   118,    -6,  -220,   187,   270,  -220,   183,
     190,   102,  -220,  -220,   191,   359,  -220,  -220,  -220,  -220,
     189,    45,    41,   200,  -220,   198,  -220,  -220,  -220,  -220,
      29,  -220,  -220,  -220,    97,   210,   218,  -220,  -220,   315,
    -220,  -220,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,  -220,  -220,   243,    29,
      29,   245,   126,   226,  -220,   183,  -220,   131,   189,    25,
      50,  -220,   260,    45,  -220,    25,   103,    29,  -220,    19,
    -220,  -220,   171,  -220,   180,   302,   176,  -220,  -220,    29,
     246,   203,  -220,   222,   222,  -220,  -220,  -220,  -220,    -6,
      -6,  -220,  -220,  -220,  -220,  -220,   248,   244,  -220,   247,
    -220,  -220,    29,  -220,  -220,   359,   130,    47,  -220,  -220,
    -220,  -220,  -220,   253,   254,   260,   257,   266,   267,    29,
     262,    29,   250,   261,   260,  -220,  -220,  -220,  -220,  -220,
    -220,  -220,   273,  -220,   272,   274,   264,   171,    45,    29,
    -220,  -220,  -220,  -220,  -220,    29,  -220,  -220,  -220,  -220,
    -220,    25,    29,    29,   251,    29,  -220,  -220,   285,  -220,
      29,   265,   260,  -220,  -220,  -220,  -220,  -220,  -220,   281,
     306,  -220,  -220,   309,   311,   313,   320,   322,  -220,   324,
     260,  -220,  -220,  -220,   260,   260,    29,   260,    29,   260,
    -220,   304,  -220,   326,  -220,   336,  -220,   260,   345,    29,
    -220,  -220,  -220
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   160,   151,   159,
       0,   154,   155,   156,    78,     0,     0,   158,   157,     0,
     161,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,   116,
       0,     0,     0,     0,    54,     0,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,    70,    81,   176,   175,     0,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,     0,   117,   118,     0,
     166,    52,     0,    57,    30,     0,     0,     0,    48,    50,
      41,    46,   102,     0,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   152,   162,   165,     0,   164,    60,    32,    38,
      47,     0,     0,     0,     0,   111,   114,   115,     0,   112,
       0,     0,     0,   101,    91,   103,    86,    83,    84,     0,
       0,   119,    49,     0,     0,     0,     0,     0,   113,     0,
       0,    99,    87,    85,     0,     0,     0,     0,   111,     0,
      98,   104,   107,     0,   109,     0,   106,     0,     0,   111,
     105,   108,   110
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -220,  -220,  -220,   360,  -220,  -220,  -220,  -220,  -220,   -80,
       7,  -220,  -220,  -220,   327,   -83,  -220,   -92,  -220,  -220,
    -220,  -220,  -220,  -220,   228,  -130,  -220,   146,  -220,  -220,
    -220,   299,   252,  -220,    -1,     0,   -20,  -220,   -53,  -220,
    -220,   227,   276,  -123,   -56,  -220,  -220,  -157,  -220,    22,
    -220,  -220,  -220,  -220,  -220,  -219,  -220,  -220,  -220,  -139,
     -43,   -42,  -220,  -126,  -220,  -220,   277,   269,  -220,  -220,
    -220,    12,   205,  -220,    40,   -50,   128,  -220,  -220,   282
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    44,
      28,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   266,   248,   221,   186,   187,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   103,    25,    40,    26,    97,    71,    16,   149,   184,
     107,   109,   146,   188,   113,    34,   117,   118,   226,    16,
     201,   154,     1,   115,    35,    36,   267,     1,     1,   132,
     133,   134,    55,   225,    56,    57,    58,    59,    60,    61,
      62,    63,   225,    64,     1,   156,    94,   157,   244,     2,
       3,     3,    97,    71,     2,    65,   149,   254,   149,   285,
       4,    53,     4,    66,    67,   240,   201,   156,   115,   157,
     292,    98,   114,   223,    68,    27,     4,   115,   124,   125,
     241,   200,   181,   182,   183,     5,     6,     7,     8,     9,
     260,    10,    -7,     8,     9,   271,    10,    41,   189,    42,
      48,   158,   159,   227,   149,    29,     1,     2,   155,   261,
     227,    37,   238,   280,   166,    71,    43,   281,   282,   232,
     284,   -51,   286,   165,    45,   157,   114,   130,   131,   156,
     290,   157,     4,   144,     2,   145,   173,   174,     4,    40,
       1,     2,    46,     5,     6,     7,     8,     9,   199,    10,
     237,   -36,    97,    71,    94,    25,   159,   191,    47,   145,
     155,   239,   194,     3,   195,   166,    51,   249,   251,    71,
     179,   180,     4,     8,     9,   259,    10,     5,     6,     7,
       8,     9,    52,    10,     2,    89,    90,    71,   108,   108,
     111,   112,   108,     2,   108,   108,   120,   228,    99,   229,
     263,   264,   165,   249,   157,   230,   121,    55,   269,    56,
      57,    58,    59,    60,    61,    62,    63,   122,    64,   123,
       5,     6,     7,     8,     9,   135,    10,   163,   -59,    48,
     110,   164,     8,     9,   283,    10,   249,   168,    66,    67,
     199,   126,   127,   128,   129,   169,   185,   249,   190,    68,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,    55,   192,    56,    57,    58,    59,    60,
      61,    62,    63,   233,    64,   234,   236,   235,   202,   242,
     243,   136,   137,   245,   246,   247,    65,   138,   250,   252,
      52,   255,   253,   258,    66,    67,   139,   108,   140,   256,
     265,   257,   141,   268,   270,    68,     2,   203,   272,   204,
     205,   206,   207,   208,   209,   210,   211,   212,    55,     2,
      56,    57,    58,    59,    60,    61,    62,    63,   165,    64,
     157,   175,   176,   177,   178,   273,   274,     4,   275,   276,
     278,    65,     5,     6,     7,     8,     9,   277,    10,    66,
      67,   279,   287,   288,   289,     5,     6,     7,     8,     9,
      68,    10,    55,   291,    56,    57,    58,    59,    60,    61,
      62,    63,    30,    64,    93,    55,   196,    56,    57,    58,
      59,    60,    61,    62,    63,    65,    64,   262,   142,    95,
     167,   231,   172,    66,    67,     0,     0,   193,   119,   171,
       0,   170,     0,     0,    68,     0,    66,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     3,    23,     4,    48,    48,     0,   100,   135,
      60,    61,    95,   139,    64,    16,    66,    67,   157,    12,
     150,   101,     3,    65,    17,    18,   245,     3,     3,    35,
      36,    37,     3,   156,     5,     6,     7,     8,     9,    10,
      11,    12,   165,    14,     3,    26,    47,    28,   205,     4,
      26,    26,    95,    95,     4,    26,   148,   214,   150,   278,
      35,    39,    35,    34,    35,    18,   196,    26,   110,    28,
     289,    49,    65,   153,    45,     3,    35,   119,    23,    24,
      33,    31,   132,   133,   134,    40,    41,    42,    43,    44,
     229,    46,    30,    43,    44,   252,    46,    26,   140,    28,
      38,   102,   102,   159,   196,     0,     3,     4,   101,   235,
     166,     3,   195,   270,   114,   157,    27,   274,   275,   169,
     277,    30,   279,    26,    30,    28,   119,     9,    10,    26,
     287,    28,    35,    31,     4,    33,   124,   125,    35,   159,
       3,     4,    18,    40,    41,    42,    43,    44,   149,    46,
     192,    30,   195,   195,   155,   156,   156,    31,    33,    33,
     153,    31,    31,    26,    33,   165,    30,   209,   211,   211,
     130,   131,    35,    43,    44,   228,    46,    40,    41,    42,
      43,    44,    30,    46,     4,    30,     3,   229,    60,    61,
      62,    63,    64,     4,    66,    67,    68,    26,    30,    28,
     242,   243,    26,   245,    28,    25,    29,     3,   250,     5,
       6,     7,     8,     9,    10,    11,    12,    15,    14,    16,
      40,    41,    42,    43,    44,    38,    46,    27,    38,    38,
      26,    33,    43,    44,   276,    46,   278,    27,    34,    35,
     241,    19,    20,    21,    22,    27,     3,   289,     3,    45,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     3,    38,     5,     6,     7,     8,     9,
      10,    11,    12,    27,    14,    27,    29,    33,    18,    26,
      26,    11,    12,    26,    18,    18,    26,    17,    26,    39,
      30,    18,    31,    29,    34,    35,    26,   169,    28,    27,
      49,    27,    32,    18,    39,    45,     4,    47,    27,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    26,    14,
      28,   126,   127,   128,   129,    29,    27,    35,    27,    26,
      18,    26,    40,    41,    42,    43,    44,    27,    46,    34,
      35,    27,    48,    27,    18,    40,    41,    42,    43,    44,
      45,    46,     3,    18,     5,     6,     7,     8,     9,    10,
      11,    12,    12,    14,    47,     3,   148,     5,     6,     7,
       8,     9,    10,    11,    12,    26,    14,   241,    89,    30,
     114,   164,   123,    34,    35,    -1,    -1,   145,    26,   122,
      -1,   119,    -1,    -1,    45,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    26,    35,    40,    41,    42,    43,    44,
      46,    59,    60,    61,    62,    67,    68,    69,    75,    76,
      81,    86,    92,    93,    94,    92,    93,     3,    88,     0,
      61,    70,    71,    72,    92,    68,    68,     3,    79,    64,
      94,    26,    28,    27,    87,    30,    18,    33,    38,    63,
      77,    30,    30,   107,    95,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    14,    26,    34,    35,    45,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    30,
       3,    89,    90,    72,    92,    30,    73,   118,   107,    30,
      80,   108,    68,    96,    97,    98,    99,   133,   134,   133,
      26,   134,   134,   133,    68,   119,   137,   133,   133,    26,
     134,    29,    15,    16,    23,    24,    19,    20,    21,    22,
       9,    10,    35,    36,    37,    38,    11,    12,    17,    26,
      28,    32,    89,    91,    31,    33,    73,    74,    78,    75,
      82,    83,    65,    66,    67,    68,    26,    28,    92,    93,
     100,   101,   102,    27,    33,    26,    93,   100,    27,    27,
     137,   124,   125,   129,   129,   130,   130,   130,   130,   132,
     132,   133,   133,   133,   121,     3,   115,   116,   121,   119,
       3,    31,    38,    90,    31,    33,    82,    84,    85,    92,
      31,    83,    18,    47,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   103,   104,   105,   106,   107,   109,   110,
     111,   114,   119,    67,    96,   101,   117,   102,    26,    28,
      25,    99,   133,    27,    27,    33,    29,   119,    73,    31,
      18,    33,    26,    26,   105,    26,    18,    18,   113,   119,
      26,   118,    39,    31,   105,    18,    27,    27,    29,    96,
     117,   121,    85,   119,   119,    49,   112,   113,    18,   119,
      39,   105,    27,    29,    27,    27,    26,    27,    18,    27,
     105,   105,   105,   119,   105,   113,   105,    48,    27,    18,
     105,    18,   113
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      62,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    77,    78,    76,    79,
      80,    76,    76,    81,    81,    82,    82,    83,    84,    84,
      85,    87,    86,    88,    86,    86,    89,    89,    90,    91,
      90,    92,    92,    93,    93,    94,    94,    94,    95,    94,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     108,   107,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   126,   127,   128,   128,   128,   129,   129,
     129,   129,   129,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   137
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 33 "song.y"
        {root=makeNode(N_PROGRAM,NIL,yyvsp[0],NIL); checkForwardReference();}
#line 1690 "y.tab.c"
    break;

  case 3:
#line 37 "song.y"
                               {yyval=yyvsp[0];}
#line 1696 "y.tab.c"
    break;

  case 4:
#line 38 "song.y"
                                                {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1702 "y.tab.c"
    break;

  case 5:
#line 42 "song.y"
                              {yyval=yyvsp[0];}
#line 1708 "y.tab.c"
    break;

  case 6:
#line 43 "song.y"
                      {yyval=yyvsp[0];}
#line 1714 "y.tab.c"
    break;

  case 7:
#line 47 "song.y"
                                            {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 1720 "y.tab.c"
    break;

  case 8:
#line 48 "song.y"
                          {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);current_id=yyvsp[-2];}
#line 1726 "y.tab.c"
    break;

  case 9:
#line 49 "song.y"
                     {yyval=setFunctionDeclaratorSpecifier(yyvsp[0],makeSpecifier(int_type,0));}
#line 1732 "y.tab.c"
    break;

  case 10:
#line 50 "song.y"
                          {yyval=setFunctionDeclaratorBody(yyvsp[-1],yyvsp[0]);current_id=yyvsp[-2];}
#line 1738 "y.tab.c"
    break;

  case 11:
#line 54 "song.y"
          {yyval=NIL;}
#line 1744 "y.tab.c"
    break;

  case 12:
#line 55 "song.y"
                           {yyval=yyvsp[0];}
#line 1750 "y.tab.c"
    break;

  case 13:
#line 59 "song.y"
                      {yyval=yyvsp[0];}
#line 1756 "y.tab.c"
    break;

  case 14:
#line 60 "song.y"
                                       {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1762 "y.tab.c"
    break;

  case 15:
#line 64 "song.y"
                                                                    {yyval=setDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1768 "y.tab.c"
    break;

  case 16:
#line 68 "song.y"
                         {yyval=makeSpecifier(yyvsp[0],0);}
#line 1774 "y.tab.c"
    break;

  case 17:
#line 69 "song.y"
                                  {yyval=makeSpecifier(0,yyvsp[0]);}
#line 1780 "y.tab.c"
    break;

  case 18:
#line 70 "song.y"
                                                {yyval=updateSpecifier(yyvsp[0],yyvsp[-1],0);}
#line 1786 "y.tab.c"
    break;

  case 19:
#line 71 "song.y"
                                                         {yyval=updateSpecifier(yyvsp[0],0,yyvsp[-1]);}
#line 1792 "y.tab.c"
    break;

  case 20:
#line 75 "song.y"
                   {yyval=S_AUTO;}
#line 1798 "y.tab.c"
    break;

  case 21:
#line 76 "song.y"
                     {yyval=S_STATIC;}
#line 1804 "y.tab.c"
    break;

  case 22:
#line 77 "song.y"
                      {yyval=S_TYPEDEF;}
#line 1810 "y.tab.c"
    break;

  case 23:
#line 81 "song.y"
          {yyval=makeDummyIdentifier();}
#line 1816 "y.tab.c"
    break;

  case 24:
#line 82 "song.y"
                               {yyval=yyvsp[0];}
#line 1822 "y.tab.c"
    break;

  case 25:
#line 86 "song.y"
                          {yyval=yyvsp[0];}
#line 1828 "y.tab.c"
    break;

  case 26:
#line 87 "song.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1834 "y.tab.c"
    break;

  case 27:
#line 91 "song.y"
                     {yyval=yyvsp[0];}
#line 1840 "y.tab.c"
    break;

  case 28:
#line 92 "song.y"
                                        {yyval=setDeclaratorInit((A_ID*)yyvsp[-2],(A_NODE*)yyvsp[0]);}
#line 1846 "y.tab.c"
    break;

  case 29:
#line 96 "song.y"
                              {yyval=(A_NODE*)makeNode(N_INIT_LIST_ONE,NIL,yyvsp[0],NIL);}
#line 1852 "y.tab.c"
    break;

  case 30:
#line 97 "song.y"
                                 {yyval=yyvsp[-1];}
#line 1858 "y.tab.c"
    break;

  case 31:
#line 101 "song.y"
                      {yyval=makeNode(N_INIT_LIST,yyvsp[0],NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1864 "y.tab.c"
    break;

  case 32:
#line 102 "song.y"
                                             {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 1870 "y.tab.c"
    break;

  case 33:
#line 106 "song.y"
                                {yyval = yyvsp[0];}
#line 1876 "y.tab.c"
    break;

  case 34:
#line 107 "song.y"
                              {yyval = yyvsp[0];}
#line 1882 "y.tab.c"
    break;

  case 35:
#line 108 "song.y"
                          {yyval = yyvsp[0];}
#line 1888 "y.tab.c"
    break;

  case 36:
#line 112 "song.y"
                                     {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1894 "y.tab.c"
    break;

  case 37:
#line 113 "song.y"
           { yyval=current_id;current_level++;}
#line 1900 "y.tab.c"
    break;

  case 38:
#line 114 "song.y"
                                   {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);current_level--; current_id=yyvsp[-2];}
#line 1906 "y.tab.c"
    break;

  case 39:
#line 115 "song.y"
                          {yyval=makeType(yyvsp[0]);}
#line 1912 "y.tab.c"
    break;

  case 40:
#line 115 "song.y"
                                                {yyval=current_id;current_level++;}
#line 1918 "y.tab.c"
    break;

  case 41:
#line 116 "song.y"
                                   {checkForwardReference();yyval=setTypeField(yyvsp[-4],yyvsp[-1]);
	current_level--;current_id=yyvsp[-2];}
#line 1925 "y.tab.c"
    break;

  case 42:
#line 119 "song.y"
        {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1],yyvsp[0],ID_STRUCT);}
#line 1931 "y.tab.c"
    break;

  case 43:
#line 123 "song.y"
                     {yyval=T_STRUCT;}
#line 1937 "y.tab.c"
    break;

  case 44:
#line 124 "song.y"
                    {yyval=T_UNION;}
#line 1943 "y.tab.c"
    break;

  case 45:
#line 128 "song.y"
                             {yyval=yyvsp[0];}
#line 1949 "y.tab.c"
    break;

  case 46:
#line 129 "song.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-1],yyvsp[0]);}
#line 1955 "y.tab.c"
    break;

  case 47:
#line 134 "song.y"
        {yyval=setStructDeclaratorListSpecifier(yyvsp[-1],yyvsp[-2]);}
#line 1961 "y.tab.c"
    break;

  case 48:
#line 138 "song.y"
                            {yyval=yyvsp[0];}
#line 1967 "y.tab.c"
    break;

  case 49:
#line 139 "song.y"
                                                         {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 1973 "y.tab.c"
    break;

  case 50:
#line 143 "song.y"
                     {yyval=yyvsp[0];}
#line 1979 "y.tab.c"
    break;

  case 51:
#line 147 "song.y"
                              {yyval=setTypeStructOrEnumIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 1985 "y.tab.c"
    break;

  case 52:
#line 148 "song.y"
                              {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 1991 "y.tab.c"
    break;

  case 53:
#line 149 "song.y"
                   {yyval=makeType(T_ENUM);}
#line 1997 "y.tab.c"
    break;

  case 54:
#line 150 "song.y"
                              {yyval=setTypeField(yyvsp[-3],yyvsp[-1]);}
#line 2003 "y.tab.c"
    break;

  case 55:
#line 151 "song.y"
                              {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM,yyvsp[0],ID_ENUM);}
#line 2009 "y.tab.c"
    break;

  case 56:
#line 155 "song.y"
                     {yyval=yyvsp[0];}
#line 2015 "y.tab.c"
    break;

  case 57:
#line 156 "song.y"
                                           {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 2021 "y.tab.c"
    break;

  case 58:
#line 160 "song.y"
                     {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 2027 "y.tab.c"
    break;

  case 59:
#line 161 "song.y"
                     {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]),ID_ENUM_LITERAL);}
#line 2033 "y.tab.c"
    break;

  case 60:
#line 162 "song.y"
                          {yyval=setDeclaratorInit(yyvsp[-2],yyvsp[0]);}
#line 2039 "y.tab.c"
    break;

  case 61:
#line 166 "song.y"
                                    {yyval=setDeclaratorElementType(yyvsp[0],yyvsp[-1]);}
#line 2045 "y.tab.c"
    break;

  case 62:
#line 167 "song.y"
                            {yyval=yyvsp[0];}
#line 2051 "y.tab.c"
    break;

  case 63:
#line 171 "song.y"
               {yyval=makeType(T_POINTER);}
#line 2057 "y.tab.c"
    break;

  case 64:
#line 172 "song.y"
                       {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2063 "y.tab.c"
    break;

  case 65:
#line 176 "song.y"
                     {yyval=makeIdentifier(yyvsp[0]);}
#line 2069 "y.tab.c"
    break;

  case 66:
#line 177 "song.y"
                           {yyval=yyvsp[-1];}
#line 2075 "y.tab.c"
    break;

  case 67:
#line 178 "song.y"
                                                          {yyval=setDeclaratorElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2081 "y.tab.c"
    break;

  case 68:
#line 179 "song.y"
                               {yyval=current_id;current_level++;}
#line 2087 "y.tab.c"
    break;

  case 69:
#line 181 "song.y"
        {checkForwardReference();current_id=yyvsp[-2];current_level--;
	yyval=setDeclaratorElementType(yyvsp[-4],setTypeField(makeType(T_FUNC),yyvsp[-1]));}
#line 2094 "y.tab.c"
    break;

  case 70:
#line 186 "song.y"
          {yyval=NIL;}
#line 2100 "y.tab.c"
    break;

  case 71:
#line 187 "song.y"
                              {yyval=yyvsp[0];}
#line 2106 "y.tab.c"
    break;

  case 72:
#line 191 "song.y"
                         {yyval=yyvsp[0];}
#line 2112 "y.tab.c"
    break;

  case 73:
#line 192 "song.y"
                                         {yyval=linkDeclaratorList(
	yyvsp[-2],setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2119 "y.tab.c"
    break;

  case 74:
#line 197 "song.y"
                                {yyval=yyvsp[0];}
#line 2125 "y.tab.c"
    break;

  case 75:
#line 199 "song.y"
        {yyval=linkDeclaratorList(yyvsp[-2],yyvsp[0]);}
#line 2131 "y.tab.c"
    break;

  case 76:
#line 204 "song.y"
        {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2137 "y.tab.c"
    break;

  case 77:
#line 206 "song.y"
        {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(
	makeDummyIdentifier(),yyvsp[0]),yyvsp[-1]);}
#line 2144 "y.tab.c"
    break;

  case 78:
#line 211 "song.y"
          {yyval=NIL;}
#line 2150 "y.tab.c"
    break;

  case 79:
#line 212 "song.y"
                              {yyval=yyvsp[0];}
#line 2156 "y.tab.c"
    break;

  case 80:
#line 216 "song.y"
                                     {yyval=yyvsp[0];}
#line 2162 "y.tab.c"
    break;

  case 81:
#line 217 "song.y"
                  {yyval=yyvsp[0];}
#line 2168 "y.tab.c"
    break;

  case 82:
#line 219 "song.y"
        {yyval=setTypeElementType(yyvsp[0],makeType(T_POINTER));}
#line 2174 "y.tab.c"
    break;

  case 83:
#line 223 "song.y"
                                    {yyval=yyvsp[-1];}
#line 2180 "y.tab.c"
    break;

  case 84:
#line 225 "song.y"
        {yyval=setTypeExpr(makeType(T_ARRAY),yyvsp[-1]);}
#line 2186 "y.tab.c"
    break;

  case 85:
#line 227 "song.y"
        {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_ARRAY),yyvsp[-1]));}
#line 2192 "y.tab.c"
    break;

  case 86:
#line 229 "song.y"
        {yyval=setTypeExpr(makeType(T_FUNC),yyvsp[-1]);}
#line 2198 "y.tab.c"
    break;

  case 87:
#line 231 "song.y"
        {yyval=setTypeElementType(yyvsp[-3],setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 2204 "y.tab.c"
    break;

  case 88:
#line 235 "song.y"
          {yyval=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2210 "y.tab.c"
    break;

  case 89:
#line 236 "song.y"
                         {yyval=yyvsp[0];}
#line 2216 "y.tab.c"
    break;

  case 90:
#line 240 "song.y"
                    {yyval=makeNode(N_STMT_LIST,yyvsp[0],NIL,
	makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2223 "y.tab.c"
    break;

  case 91:
#line 242 "song.y"
                                   {yyval=makeNodeList(N_STMT_LIST,yyvsp[-1],yyvsp[0]);}
#line 2229 "y.tab.c"
    break;

  case 92:
#line 246 "song.y"
                            {yyval=yyvsp[0];}
#line 2235 "y.tab.c"
    break;

  case 93:
#line 247 "song.y"
                             {yyval=yyvsp[0];}
#line 2241 "y.tab.c"
    break;

  case 94:
#line 248 "song.y"
                               {yyval=yyvsp[0];}
#line 2247 "y.tab.c"
    break;

  case 95:
#line 249 "song.y"
                              {yyval=yyvsp[0];}
#line 2253 "y.tab.c"
    break;

  case 96:
#line 250 "song.y"
                              {yyval=yyvsp[0];}
#line 2259 "y.tab.c"
    break;

  case 97:
#line 251 "song.y"
                         {yyval=yyvsp[0];}
#line 2265 "y.tab.c"
    break;

  case 98:
#line 256 "song.y"
        {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2],NIL,yyvsp[0]);}
#line 2271 "y.tab.c"
    break;

  case 99:
#line 258 "song.y"
        {yyval=makeNode(N_STMT_LABEL_DEFAULT,NIL,yyvsp[0],NIL);}
#line 2277 "y.tab.c"
    break;

  case 100:
#line 262 "song.y"
             {yyval=current_id;current_level++;}
#line 2283 "y.tab.c"
    break;

  case 101:
#line 263 "song.y"
                              {checkForwardReference();
	yyval=makeNode(N_STMT_COMPOUND,yyvsp[-2],NIL,yyvsp[-1]); current_id=yyvsp[-3];
	current_level--;}
#line 2291 "y.tab.c"
    break;

  case 102:
#line 269 "song.y"
                    {yyval=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2297 "y.tab.c"
    break;

  case 103:
#line 270 "song.y"
                               {yyval=makeNode(N_STMT_EXPRESSION,NIL,yyvsp[-1],NIL);}
#line 2303 "y.tab.c"
    break;

  case 104:
#line 275 "song.y"
        {yyval=makeNode(N_STMT_IF,yyvsp[-2],NIL,yyvsp[0]);}
#line 2309 "y.tab.c"
    break;

  case 105:
#line 277 "song.y"
        {yyval=makeNode(N_STMT_IF_ELSE,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2315 "y.tab.c"
    break;

  case 106:
#line 279 "song.y"
        {yyval=makeNode(N_STMT_SWITCH,yyvsp[-2],NIL,yyvsp[0]);}
#line 2321 "y.tab.c"
    break;

  case 107:
#line 284 "song.y"
        {yyval=makeNode(N_STMT_WHILE,yyvsp[-2],NIL,yyvsp[0]);}
#line 2327 "y.tab.c"
    break;

  case 108:
#line 286 "song.y"
        {yyval=makeNode(N_STMT_DO,yyvsp[-5],NIL,yyvsp[-2]);}
#line 2333 "y.tab.c"
    break;

  case 109:
#line 288 "song.y"
        {yyval=makeNode(N_STMT_FOR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2339 "y.tab.c"
    break;

  case 110:
#line 293 "song.y"
        {yyval=makeNode(N_FOR_EXP,yyvsp[-4],yyvsp[-2],yyvsp[0]);}
#line 2345 "y.tab.c"
    break;

  case 111:
#line 297 "song.y"
          {yyval=NIL;}
#line 2351 "y.tab.c"
    break;

  case 112:
#line 298 "song.y"
                     {yyval=yyvsp[0];}
#line 2357 "y.tab.c"
    break;

  case 113:
#line 303 "song.y"
        {yyval=makeNode(N_STMT_RETURN,NIL,yyvsp[-1],NIL);}
#line 2363 "y.tab.c"
    break;

  case 114:
#line 305 "song.y"
        {yyval=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2369 "y.tab.c"
    break;

  case 115:
#line 307 "song.y"
        {yyval=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2375 "y.tab.c"
    break;

  case 116:
#line 311 "song.y"
          {yyval=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2381 "y.tab.c"
    break;

  case 117:
#line 312 "song.y"
                              {yyval=yyvsp[0];}
#line 2387 "y.tab.c"
    break;

  case 118:
#line 317 "song.y"
        {yyval=makeNode(N_ARG_LIST,yyvsp[0],NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2393 "y.tab.c"
    break;

  case 119:
#line 319 "song.y"
        {yyval=makeNodeList(N_ARG_LIST,yyvsp[-2],yyvsp[0]);}
#line 2399 "y.tab.c"
    break;

  case 120:
#line 323 "song.y"
          {yyval=NIL;}
#line 2405 "y.tab.c"
    break;

  case 121:
#line 324 "song.y"
                              {yyval=yyvsp[0];}
#line 2411 "y.tab.c"
    break;

  case 122:
#line 328 "song.y"
                     {yyval=yyvsp[0];}
#line 2417 "y.tab.c"
    break;

  case 123:
#line 332 "song.y"
                           {yyval=yyvsp[0];}
#line 2423 "y.tab.c"
    break;

  case 124:
#line 336 "song.y"
                                {yyval=yyvsp[0];}
#line 2429 "y.tab.c"
    break;

  case 125:
#line 340 "song.y"
                                 {yyval=yyvsp[0];}
#line 2435 "y.tab.c"
    break;

  case 126:
#line 342 "song.y"
        {yyval=makeNode(N_EXP_ASSIGN,yyvsp[-2],NIL,yyvsp[0]);}
#line 2441 "y.tab.c"
    break;

  case 127:
#line 346 "song.y"
                                {yyval=yyvsp[0];}
#line 2447 "y.tab.c"
    break;

  case 128:
#line 350 "song.y"
                                 {yyval=yyvsp[0];}
#line 2453 "y.tab.c"
    break;

  case 129:
#line 352 "song.y"
        {yyval=makeNode(N_EXP_OR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2459 "y.tab.c"
    break;

  case 130:
#line 356 "song.y"
                                {yyval=yyvsp[0];}
#line 2465 "y.tab.c"
    break;

  case 131:
#line 358 "song.y"
        {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL,yyvsp[0]);}
#line 2471 "y.tab.c"
    break;

  case 132:
#line 362 "song.y"
                                 {yyval=yyvsp[0];}
#line 2477 "y.tab.c"
    break;

  case 133:
#line 366 "song.y"
                                 {yyval=yyvsp[0];}
#line 2483 "y.tab.c"
    break;

  case 134:
#line 370 "song.y"
                              {yyval=yyvsp[0];}
#line 2489 "y.tab.c"
    break;

  case 135:
#line 374 "song.y"
                                {yyval=yyvsp[0];}
#line 2495 "y.tab.c"
    break;

  case 136:
#line 376 "song.y"
        {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2501 "y.tab.c"
    break;

  case 137:
#line 378 "song.y"
        {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2507 "y.tab.c"
    break;

  case 138:
#line 382 "song.y"
                           {yyval=yyvsp[0];}
#line 2513 "y.tab.c"
    break;

  case 139:
#line 384 "song.y"
        {yyval=makeNode(N_EXP_LSS,yyvsp[-2],NIL,yyvsp[0]);}
#line 2519 "y.tab.c"
    break;

  case 140:
#line 386 "song.y"
        {yyval=makeNode(N_EXP_GTR,yyvsp[-2],NIL,yyvsp[0]);}
#line 2525 "y.tab.c"
    break;

  case 141:
#line 388 "song.y"
        {yyval=makeNode(N_EXP_LEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2531 "y.tab.c"
    break;

  case 142:
#line 390 "song.y"
        {yyval=makeNode(N_EXP_GEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2537 "y.tab.c"
    break;

  case 143:
#line 394 "song.y"
                              {yyval=yyvsp[0];}
#line 2543 "y.tab.c"
    break;

  case 144:
#line 398 "song.y"
                                    {yyval=yyvsp[0];}
#line 2549 "y.tab.c"
    break;

  case 145:
#line 400 "song.y"
        {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2555 "y.tab.c"
    break;

  case 146:
#line 402 "song.y"
        {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2561 "y.tab.c"
    break;

  case 147:
#line 406 "song.y"
                          {yyval=yyvsp[0];}
#line 2567 "y.tab.c"
    break;

  case 148:
#line 408 "song.y"
        {yyval=makeNode(N_EXP_MUL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2573 "y.tab.c"
    break;

  case 149:
#line 410 "song.y"
        {yyval= makeNode(N_EXP_DIV,yyvsp[-2],NIL,yyvsp[0]);}
#line 2579 "y.tab.c"
    break;

  case 150:
#line 412 "song.y"
        {yyval= makeNode(N_EXP_MOD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2585 "y.tab.c"
    break;

  case 151:
#line 416 "song.y"
                           {yyval=yyvsp[0];}
#line 2591 "y.tab.c"
    break;

  case 152:
#line 418 "song.y"
        {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL,yyvsp[0]);}
#line 2597 "y.tab.c"
    break;

  case 153:
#line 422 "song.y"
                             {yyval=yyvsp[0];}
#line 2603 "y.tab.c"
    break;

  case 154:
#line 424 "song.y"
        {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2609 "y.tab.c"
    break;

  case 155:
#line 426 "song.y"
        {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2615 "y.tab.c"
    break;

  case 156:
#line 427 "song.y"
                              {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2621 "y.tab.c"
    break;

  case 157:
#line 428 "song.y"
                               {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2627 "y.tab.c"
    break;

  case 158:
#line 429 "song.y"
                               {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2633 "y.tab.c"
    break;

  case 159:
#line 430 "song.y"
                                {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2639 "y.tab.c"
    break;

  case 160:
#line 431 "song.y"
                               {yyval=makeNode(N_EXP_PLUS,NIL,yyvsp[0],NIL);}
#line 2645 "y.tab.c"
    break;

  case 161:
#line 433 "song.y"
        {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2651 "y.tab.c"
    break;

  case 162:
#line 435 "song.y"
        {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2657 "y.tab.c"
    break;

  case 163:
#line 439 "song.y"
                             {yyval=yyvsp[0];}
#line 2663 "y.tab.c"
    break;

  case 164:
#line 441 "song.y"
        {yyval=makeNode(N_EXP_ARRAY,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2669 "y.tab.c"
    break;

  case 165:
#line 443 "song.y"
        {yyval=makeNode(N_EXP_FUNCTION_CALL,yyvsp[-3],NIL,yyvsp[-1]);}
#line 2675 "y.tab.c"
    break;

  case 166:
#line 445 "song.y"
        {yyval=makeNode(N_EXP_STRUCT,yyvsp[-2],NIL,yyvsp[0]);}
#line 2681 "y.tab.c"
    break;

  case 167:
#line 447 "song.y"
        {yyval=makeNode(N_EXP_ARROW,yyvsp[-2],NIL,yyvsp[0]);}
#line 2687 "y.tab.c"
    break;

  case 168:
#line 449 "song.y"
        {yyval=makeNode(N_EXP_POST_INC,NIL,yyvsp[-1],NIL);}
#line 2693 "y.tab.c"
    break;

  case 169:
#line 451 "song.y"
        {yyval=makeNode(N_EXP_POST_DEC,NIL,yyvsp[-1],NIL);}
#line 2699 "y.tab.c"
    break;

  case 170:
#line 456 "song.y"
        {yyval=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared(yyvsp[0]),NIL);}
#line 2705 "y.tab.c"
    break;

  case 171:
#line 457 "song.y"
                           {yyval=makeNode(N_EXP_INT_CONST,NIL,yyvsp[0],NIL);}
#line 2711 "y.tab.c"
    break;

  case 172:
#line 458 "song.y"
                         {yyval=makeNode(N_EXP_FLOAT_CONST,NIL,yyvsp[0],NIL);}
#line 2717 "y.tab.c"
    break;

  case 173:
#line 459 "song.y"
                            {yyval=makeNode(N_EXP_CHAR_CONST,NIL,yyvsp[0],NIL);}
#line 2723 "y.tab.c"
    break;

  case 174:
#line 460 "song.y"
                         {yyval=makeNode(N_EXP_STRING_LITERAL,NIL,yyvsp[0],NIL);}
#line 2729 "y.tab.c"
    break;

  case 175:
#line 461 "song.y"
                           {yyval=yyvsp[-1];}
#line 2735 "y.tab.c"
    break;

  case 176:
#line 466 "song.y"
        {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2741 "y.tab.c"
    break;


#line 2745 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 468 "song.y"


extern char *yytext;

int yyerror(char *s) 
{
	syntax_err++;
    printf("line %d: %s near %s \n", line_no, s, yytext);
}

int yywrap()
{
	return(1);
}
