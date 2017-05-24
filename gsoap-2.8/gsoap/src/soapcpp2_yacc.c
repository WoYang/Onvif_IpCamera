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
#line 51 "soapcpp2_yacc.y" /* yacc.c:339  */


#include "soapcpp2.h"

#ifdef WIN32
#ifndef __STDC__
#define __STDC__
#endif
#define YYINCLUDED_STDLIB_H
#ifdef WIN32_WITHOUT_SOLARIS_FLEX
extern int soapcpp2lex(void);
#else
extern int yylex(void);
#endif
#else
extern int yylex(void);
#endif

#define MAXNEST 16      /* max. nesting depth of scopes */

typedef struct Scope
{
  Table   *table;
  Entry   *entry;
  Node    node;
  LONG64  val;
  int     offset;
  Bool    grow;   /* true if offset grows with declarations */
  Bool    mask;   /* true if enum is mask */
} Scope;

Scope stack[MAXNEST], /* stack of tables and offsets */
      *sp;            /* current scope stack pointer */

Table *classtable = NULL,
      *enumtable = NULL,
      *typetable = NULL,
      *booltable = NULL,
      *templatetable = NULL;

const char *namespaceid = NULL;

int     transient = 0;
int     permission = 0;
int     custom_header = 1;
int     custom_fault = 1;
Pragma  *pragmas = NULL;
Tnode   *qname = NULL;
Tnode   *xml = NULL;

/* function prototypes for support routine section */
static Entry      *undefined(Symbol*);
static Tnode      *mgtype(Tnode*, Tnode*);
static Node       op(const char*, Node, Node),
                  iop(const char*, Node, Node),
                  relop(const char*, Node, Node);
static void       mkscope(Table*, int),
                  enterscope(Table*, int),
                  exitscope(void);
static int        integer(Tnode*),
                  real(Tnode*),
                  numeric(Tnode*);
static void       add_soap(void),
                  add_XML(void),
                  add_qname(void),
                  add_header(void),
                  add_fault(void),
                  add_response(Entry*, Entry*),
                  add_result(Tnode*),
                  add_request(Symbol*, Scope*);

/* imported from symbol2.c */
extern int        is_string(Tnode*),
                  is_wstring(Tnode*),
                  is_XML(Tnode*),
                  is_smart(Tnode*);
extern char       *c_storage(Storage);
extern const char *c_type(Tnode*);
extern int        is_primitive_or_string(Tnode*),
                  is_stdstr(Tnode*),
                  is_binary(Tnode*),
                  is_external(Tnode*),
                  is_mutable(Entry*);
extern Entry      *unlinklast(Table*);

/* Temporaries used in semantic rules */
int        i;
char       *s, *s1;
const char *s2;
Symbol     *sym;
Entry      *p, *q;
Tnode      *t;
Node       tmp, c;
Pragma     **pp;


#line 163 "soapcpp2_yacc.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_SOAPCPP_YACC_H_INCLUDED
# define YY_YY_SOAPCPP_YACC_H_INCLUDED
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
    PRAGMA = 258,
    AUTO = 259,
    DOUBLE = 260,
    INT = 261,
    STRUCT = 262,
    BREAK = 263,
    ELSE = 264,
    LONG = 265,
    SWITCH = 266,
    CASE = 267,
    ENUM = 268,
    REGISTER = 269,
    TYPEDEF = 270,
    CHAR = 271,
    EXTERN = 272,
    RETURN = 273,
    UNION = 274,
    CONST = 275,
    FLOAT = 276,
    SHORT = 277,
    UNSIGNED = 278,
    CONTINUE = 279,
    FOR = 280,
    SIGNED = 281,
    VOID = 282,
    DEFAULT = 283,
    GOTO = 284,
    SIZEOF = 285,
    VOLATILE = 286,
    DO = 287,
    IF = 288,
    STATIC = 289,
    WHILE = 290,
    CLASS = 291,
    PRIVATE = 292,
    PROTECTED = 293,
    PUBLIC = 294,
    VIRTUAL = 295,
    INLINE = 296,
    OPERATOR = 297,
    LLONG = 298,
    BOOL = 299,
    CFALSE = 300,
    CTRUE = 301,
    WCHAR = 302,
    TIME = 303,
    USING = 304,
    NAMESPACE = 305,
    ULLONG = 306,
    MUSTUNDERSTAND = 307,
    SIZE = 308,
    FRIEND = 309,
    TEMPLATE = 310,
    EXPLICIT = 311,
    TYPENAME = 312,
    MUTABLE = 313,
    FINAL = 314,
    null = 315,
    RESTRICT = 316,
    OVERRIDE = 317,
    UCHAR = 318,
    USHORT = 319,
    UINT = 320,
    ULONG = 321,
    NONE = 322,
    ID = 323,
    LAB = 324,
    TYPE = 325,
    LNG = 326,
    DBL = 327,
    CHR = 328,
    TAG = 329,
    STR = 330,
    PA = 331,
    NA = 332,
    TA = 333,
    DA = 334,
    MA = 335,
    AA = 336,
    XA = 337,
    OA = 338,
    LA = 339,
    RA = 340,
    OR = 341,
    AN = 342,
    EQ = 343,
    NE = 344,
    LE = 345,
    GE = 346,
    LS = 347,
    RS = 348,
    AR = 349,
    PP = 350,
    NN = 351
  };
#endif
/* Tokens.  */
#define PRAGMA 258
#define AUTO 259
#define DOUBLE 260
#define INT 261
#define STRUCT 262
#define BREAK 263
#define ELSE 264
#define LONG 265
#define SWITCH 266
#define CASE 267
#define ENUM 268
#define REGISTER 269
#define TYPEDEF 270
#define CHAR 271
#define EXTERN 272
#define RETURN 273
#define UNION 274
#define CONST 275
#define FLOAT 276
#define SHORT 277
#define UNSIGNED 278
#define CONTINUE 279
#define FOR 280
#define SIGNED 281
#define VOID 282
#define DEFAULT 283
#define GOTO 284
#define SIZEOF 285
#define VOLATILE 286
#define DO 287
#define IF 288
#define STATIC 289
#define WHILE 290
#define CLASS 291
#define PRIVATE 292
#define PROTECTED 293
#define PUBLIC 294
#define VIRTUAL 295
#define INLINE 296
#define OPERATOR 297
#define LLONG 298
#define BOOL 299
#define CFALSE 300
#define CTRUE 301
#define WCHAR 302
#define TIME 303
#define USING 304
#define NAMESPACE 305
#define ULLONG 306
#define MUSTUNDERSTAND 307
#define SIZE 308
#define FRIEND 309
#define TEMPLATE 310
#define EXPLICIT 311
#define TYPENAME 312
#define MUTABLE 313
#define FINAL 314
#define null 315
#define RESTRICT 316
#define OVERRIDE 317
#define UCHAR 318
#define USHORT 319
#define UINT 320
#define ULONG 321
#define NONE 322
#define ID 323
#define LAB 324
#define TYPE 325
#define LNG 326
#define DBL 327
#define CHR 328
#define TAG 329
#define STR 330
#define PA 331
#define NA 332
#define TA 333
#define DA 334
#define MA 335
#define AA 336
#define XA 337
#define OA 338
#define LA 339
#define RA 340
#define OR 341
#define AN 342
#define EQ 343
#define NE 344
#define LE 345
#define GE 346
#define LS 347
#define RS 348
#define AR 349
#define PP 350
#define NN 351

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 153 "soapcpp2_yacc.y" /* yacc.c:355  */

  Symbol  *sym;
  LONG64  i;
  double  r;
  char    c;
  char    *s;
  Tnode   *typ;
  Storage sto;
  Node    rec;
  Entry   *e;

#line 407 "soapcpp2_yacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SOAPCPP_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 424 "soapcpp2_yacc.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1798

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  293
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  450

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   117,     2,     2,   121,   107,    94,     2,
     119,   116,   105,   103,    76,   104,     2,   106,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,   113,
      97,    77,    99,    88,   120,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   114,     2,   115,    93,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,    92,   112,   118,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    90,    91,    95,    96,    98,   100,   101,   102,   108,
     109,   110
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   229,   229,   249,   264,   266,   268,   273,   275,   276,
     277,   278,   279,   289,   304,   308,   310,   312,   314,   316,
     318,   323,   325,   327,   329,   331,   333,   334,   335,   337,
     338,   339,   340,   342,   347,   352,   575,   593,   594,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   631,   632,   633,   645,   656,   684,
     745,   747,   748,   750,   751,   752,   756,   761,   889,   897,
     914,   915,   922,   924,   927,   932,   973,  1025,  1032,  1037,
    1078,  1130,  1131,  1132,  1133,  1134,  1135,  1136,  1137,  1138,
    1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,
    1149,  1159,  1185,  1212,  1236,  1240,  1258,  1285,  1309,  1330,
    1357,  1382,  1403,  1430,  1457,  1466,  1475,  1489,  1503,  1520,
    1538,  1568,  1625,  1631,  1636,  1640,  1646,  1652,  1658,  1665,
    1690,  1717,  1735,  1754,  1776,  1799,  1804,  1810,  1811,  1812,
    1813,  1814,  1815,  1816,  1826,  1830,  1832,  1833,  1835,  1836,
    1837,  1838,  1847,  1849,  1857,  1866,  1873,  1874,  1876,  1885,
    1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,  1895,
    1896,  1897,  1898,  1899,  1904,  1905,  1906,  1908,  1909,  1910,
    1911,  1913,  1914,  1916,  1917,  1919,  1920,  1928,  1933,  1939,
    1940,  1958,  1963,  1978,  1979,  1993,  1994,  2008,  2009,  2011,
    2022,  2035,  2048,  2069,  2086,  2098,  2113,  2136,  2154,  2155,
    2157,  2158,  2160,  2161,  2162,  2163,  2164,  2166,  2167,  2168,
    2169,  2171,  2172,  2173,  2174,  2175,  2177,  2178,  2179,  2188,
    2189,  2192,  2198,  2201,  2204,  2208,  2210,  2213,  2216,  2218,
    2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,  2230,
    2231,  2232,  2233,  2234,  2235,  2236,  2237,  2240,  2246,  2252,
    2265,  2266,  2274,  2279,  2285,  2288,  2289,  2297,  2302,  2307,
    2312,  2317,  2322,  2327
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRAGMA", "AUTO", "DOUBLE", "INT",
  "STRUCT", "BREAK", "ELSE", "LONG", "SWITCH", "CASE", "ENUM", "REGISTER",
  "TYPEDEF", "CHAR", "EXTERN", "RETURN", "UNION", "CONST", "FLOAT",
  "SHORT", "UNSIGNED", "CONTINUE", "FOR", "SIGNED", "VOID", "DEFAULT",
  "GOTO", "SIZEOF", "VOLATILE", "DO", "IF", "STATIC", "WHILE", "CLASS",
  "PRIVATE", "PROTECTED", "PUBLIC", "VIRTUAL", "INLINE", "OPERATOR",
  "LLONG", "BOOL", "CFALSE", "CTRUE", "WCHAR", "TIME", "USING",
  "NAMESPACE", "ULLONG", "MUSTUNDERSTAND", "SIZE", "FRIEND", "TEMPLATE",
  "EXPLICIT", "TYPENAME", "MUTABLE", "FINAL", "null", "RESTRICT",
  "OVERRIDE", "UCHAR", "USHORT", "UINT", "ULONG", "NONE", "ID", "LAB",
  "TYPE", "LNG", "DBL", "CHR", "TAG", "STR", "','", "'='", "PA", "NA",
  "TA", "DA", "MA", "AA", "XA", "OA", "LA", "RA", "'?'", "':'", "OR", "AN",
  "'|'", "'^'", "'&'", "EQ", "NE", "'<'", "LE", "'>'", "GE", "LS", "RS",
  "'+'", "'-'", "'*'", "'/'", "'%'", "AR", "PP", "NN", "'{'", "'}'", "';'",
  "'['", "']'", "')'", "'!'", "'~'", "'('", "'@'", "'$'", "$accept",
  "prog", "s1", "exts", "exts1", "ext", "pragma", "decls", "t1", "t2",
  "t3", "t4", "t5", "dclrs", "dclr", "fdclr", "id", "name", "ctor", "dtor",
  "func", "fname", "fargso", "fargs", "farg", "arg", "texpf", "texp",
  "spec", "tspec", "type", "struct", "class", "enum", "enumsc", "mask",
  "masksc", "sc", "utype", "tname", "base", "s2", "s3", "s4", "s5", "s6",
  "store", "const", "abstract", "virtual", "ptrs", "array", "arrayck",
  "brinit", "init", "tag", "occurs", "bounds", "nullptr", "patt", "cdbl",
  "min", "minmax", "max", "expr", "cexp", "qexp", "oexp", "obex", "aexp",
  "abex", "rexp", "lexp", "pexp", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    44,    61,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,    63,    58,
     341,   342,   124,    94,    38,   343,   344,    60,   345,    62,
     346,   347,   348,    43,    45,    42,    47,    37,   349,   350,
     351,   123,   125,    59,    91,    93,    41,    33,   126,    40,
      64,    36
};
# endif

#define YYPACT_NINF -315

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-315)))

#define YYTABLE_NINF -260

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -315,    67,   -12,  -315,   -27,  -315,   237,   -36,   -28,  -315,
    -315,  -315,  -315,    21,  -315,    30,  -315,  -315,  -315,  -315,
    -315,    26,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
      35,    -5,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,    27,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
     -46,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,   -41,
    -315,  -315,    43,  1193,    22,    12,    47,    50,    57,    63,
    1193,     3,  -315,    17,  -315,  -315,  -315,    71,  -315,  -315,
    -315,    73,    77,   133,   133,     6,  -315,    29,    29,    80,
    -315,    85,   115,  -315,  -315,    86,  1491,  -315,  -315,  -315,
      87,  -315,  -315,  -315,    -8,   -22,  -315,   119,  -315,  -315,
      41,  -315,  -315,  -315,  -315,  -315,  -315,   158,   833,  -315,
    -315,  -315,   594,  -315,  -315,  -315,  -315,   142,   142,  1311,
     144,  -315,  -315,  -315,   594,  -315,  -315,   594,  -315,  -315,
     133,   147,  -315,  -315,   951,  1072,  -315,  -315,  -315,  -315,
     355,   -24,  -315,  -315,  -315,  -315,    16,   594,   177,    41,
      41,    41,  -315,   137,   594,  1311,  1311,  1311,  1311,  -315,
    -315,    46,   160,   172,   173,   157,   712,    23,  1311,  -315,
    -315,   -35,   196,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
     162,   594,   163,   171,  -315,    99,  -315,  -315,  -315,  1420,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,   161,  -315,  -315,   166,  -315,  -315,  1592,  -315,
     212,   175,  -315,  -315,  -315,  -315,  -315,   182,   196,   196,
     196,   196,  -315,  -315,  -315,  -315,  -315,   191,   476,   196,
     200,   205,  -315,   206,  -315,   284,   224,  -315,  -315,    66,
     223,  -315,   265,  -315,  -315,  -315,   103,   225,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  1631,  1631,  1631,  1631,
     224,  1631,  1631,  1631,   228,   117,   146,   254,   257,  1676,
    -315,  -315,  -315,   289,  -315,   594,  -315,   251,   252,   255,
     267,   476,   476,   476,   476,  -315,   268,  -315,  -315,   133,
    -315,  1420,    11,  -315,  -315,  1562,   104,  1491,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,   -55,  -315,   224,  1631,  1631,
    1631,  1631,  1631,  1631,  1631,  1631,  1631,  1631,  1631,  1631,
    1631,  1631,  1631,  1631,  1631,  1631,  1631,  -315,   -57,   291,
     271,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,   269,    25,  -315,  -315,   224,   272,  1631,  -315,  -315,
     308,   298,   254,  1676,  1691,   695,   815,   459,   459,   118,
     118,   118,   118,   230,   230,    42,    42,  -315,  -315,  -315,
    1631,  1631,  -315,  -315,  -315,   243,  -315,  -315,  -315,  -315,
    -315,   319,  -315,    49,  -315,  -315,  1631,  -315,   280,  -315,
    -315,  -315,   296,  -315,   250,   250,   -50,   250,  -315,   305,
     326,   323,  -315,  -315,  -315,  -315,  -315,   482,   194,  -315,
     250,  -315,   330,  -315,  -315,  -315,   600,  -315,  -315,  -315
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     6,     1,     0,     2,     0,     0,     0,    13,
     179,   112,   106,     0,   107,     0,   180,   184,   103,   183,
     192,     0,   186,   111,   105,   114,   113,   101,   195,   181,
       0,   185,   190,   108,   102,   104,   119,   109,   191,   110,
     189,     0,   182,   196,   187,   188,   115,   116,   117,   118,
     140,    21,    22,   193,   194,     7,     9,    10,    11,     0,
      80,    80,   205,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     6,     0,   144,    12,    34,     0,    37,    38,
     173,   128,     0,     0,     0,     0,   173,   138,   139,     0,
     174,   131,     0,   173,   150,     0,     0,   205,     8,    29,
       0,    30,    27,    80,     0,     0,   185,   140,    96,   173,
       0,   173,   173,   173,   175,   175,    95,     0,     0,   142,
     143,   146,     0,   148,   155,   156,   173,   165,   165,     0,
     164,   151,   152,   147,     0,   174,   145,     0,   166,   167,
       0,     0,    90,   205,     0,     0,    31,    80,   178,    28,
       0,   209,   208,   207,   206,    36,     0,     0,     0,     0,
       0,     0,   171,   125,     0,     0,     0,     0,     0,    78,
       4,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     154,     0,   176,   160,   161,   157,   159,   162,   158,   163,
       0,     0,     0,     0,   141,   209,   100,    99,    32,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    73,
      71,    72,     0,    40,    41,     0,    76,   205,     0,   212,
     217,     0,   172,   169,   168,   170,   173,     0,   176,   176,
     176,   176,    20,    23,    24,    25,   126,     0,     0,   176,
     205,     0,   129,     0,   121,     0,   209,   178,    92,     0,
       0,    82,    83,   205,    74,    75,   209,     0,   292,   293,
     288,   286,   287,   289,   290,   291,     0,     0,     0,     0,
     209,     0,     0,     0,     0,   252,     0,   255,     0,   258,
     276,   284,   218,   228,   127,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,   132,   130,     0,
      93,     0,     0,    86,   197,     0,    88,     0,   282,   280,
     279,   281,   211,   277,   278,     0,   250,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   229,   215,   230,
       0,   134,   135,   136,   137,    16,    17,    18,    19,   133,
     120,     0,   201,    84,    89,   209,     0,     0,   285,   210,
     253,     0,   254,   257,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
       0,     0,    35,   213,   231,   224,   123,    91,   198,   199,
     200,     0,    79,   219,   283,   249,     0,   216,     0,   233,
     232,   234,   246,   248,     0,     0,   237,     0,   202,   220,
       0,   215,   251,   214,   247,   235,   236,   238,   240,   225,
       0,   227,   221,   223,    87,   243,   239,   226,   222,   244
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -315,  -315,  -315,  -315,   332,  -315,  -315,  -132,    13,   148,
    -315,  -315,  -315,    10,   350,   353,   -15,  -315,  -315,  -315,
     -38,  -315,    95,    97,  -315,  -315,  -315,  -141,    94,   -88,
     -95,  -315,  -315,  -315,  -315,  -315,  -315,   338,    24,  -315,
      51,   -83,   292,   309,    60,   159,   -92,  -315,  -315,  -315,
    -129,  -184,    53,  -315,    -2,  -315,  -315,  -315,  -315,  -315,
    -225,  -315,  -315,  -315,  -314,  -231,  -315,  -315,  -315,    91,
    -315,  1411,    38,  -315
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,     6,    55,    56,   175,   176,    58,
     311,   312,   313,   177,   146,   147,    81,   155,    60,    61,
      99,   100,   270,   271,   272,   375,   141,   142,    62,   273,
      63,    64,    65,    66,    67,    68,    69,    88,   131,   140,
     163,   122,   134,   167,   261,   199,    70,   372,   412,    71,
     104,   239,   240,   402,   403,   303,   431,   358,   359,   405,
     426,   439,   440,   427,   335,   336,   381,   295,   296,   297,
     298,   299,   300,   301
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,   144,   190,   129,   145,   192,    91,   294,   143,   236,
     137,   268,   119,    83,   195,    94,    59,   119,   119,    57,
     400,   377,    77,   101,   380,   241,   157,    89,   164,   165,
     166,    82,   247,    73,   150,    97,    92,    83,     4,   437,
      73,     7,    84,   178,   257,   408,   156,   438,   158,   144,
     144,    96,   145,   145,   401,   144,   196,   197,   145,   263,
     151,   378,   237,   415,    74,   149,    84,     3,   124,   125,
     127,    74,    98,   -77,    78,    72,    79,    74,   159,   160,
     161,    76,   320,   152,   409,    75,   153,   410,    76,    78,
     238,    79,   268,   -33,    78,   -39,    79,   154,    78,    97,
      79,   110,   411,    78,   144,    79,   332,   145,   276,   198,
     120,   162,   132,  -204,    73,   120,   120,   126,   130,   -26,
     429,   117,   138,   111,    95,   193,   315,   -85,    59,   -33,
     -33,    57,    80,   109,   322,    85,   258,    90,   430,   182,
    -165,    86,   323,   139,   326,    74,    93,   354,   355,   356,
     183,   179,   180,   379,   184,   -26,   -26,   108,   112,   252,
     185,   113,    76,   305,   116,    74,   186,   266,   114,   417,
     418,   266,   374,   360,   115,   248,   249,   250,   251,   365,
     366,   367,   368,   121,  -149,   432,   376,   187,   259,   123,
     152,   188,   133,   153,   152,   152,   135,   153,   153,   435,
     436,    78,   441,    79,   154,  -256,   148,  -256,   154,   154,
     243,   244,   245,   238,   189,   447,    96,   238,   267,   350,
     351,   352,   353,   354,   355,   356,   144,   136,   169,   145,
     144,   130,   144,   145,   338,   145,   339,    -5,     8,   237,
       9,    10,    11,    12,    13,   242,   194,    14,   246,   253,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   254,   255,    26,    27,  -245,  -245,  -245,    28,   256,
     265,    29,   260,    30,   262,   264,   274,    31,    32,   -94,
      33,    34,   275,   446,    35,    36,   302,   304,    37,    38,
      39,    40,    41,    42,   306,    43,    44,  -245,  -245,    45,
      46,    47,    48,    49,   370,   -94,    52,    50,   307,   308,
     309,   310,  -177,   -94,   419,   420,   421,   317,   318,   316,
     319,   419,   420,   421,   328,   329,   330,   331,   -94,   333,
     334,   -94,   422,   352,   353,   354,   355,   356,   238,   324,
     423,   325,   -94,   337,   327,  -259,   424,   425,   340,   357,
     -94,    51,    52,   424,   425,  -203,   105,    53,    54,    10,
      11,    12,    13,   361,   362,    14,   404,   363,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   364,
     369,    26,    27,   406,   377,   407,    28,   416,   414,    29,
     428,    30,   433,   434,   442,   106,    32,   443,    33,    34,
     400,   448,    35,    36,   118,   314,    37,    38,    39,    40,
      41,    42,   102,    43,    44,   103,   371,    45,    46,    47,
      48,    49,   373,   128,   168,   107,   321,   191,   413,   444,
     382,     0,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,     0,     0,     0,   232,
       0,     0,   233,   234,   235,    53,    54,   171,     0,     0,
      10,    11,    12,    13,     0,     0,    14,     0,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,    26,    27,     0,     0,     0,    28,     0,     0,
      29,     0,    30,   172,   173,   174,    31,    32,   -94,    33,
      34,     0,     0,    35,    36,     0,     0,    37,    38,    39,
      40,    41,    42,     0,    43,    44,     0,     0,    45,    46,
      47,    48,    49,     0,   -94,     0,    50,     0,     0,     0,
       0,     0,   -94,  -241,  -241,  -241,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   -94,     0,     0,
     -94,     0,     0,     0,     0,     0,     0,     0,     0,   445,
       0,   -94,     0,     0,     0,  -241,  -241,     0,   -14,   -94,
      51,   -14,     0,     0,  -203,   171,    53,    54,    10,    11,
      12,    13,     0,     0,    14,     0,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
      26,    27,     0,     0,     0,    28,     0,     0,    29,     0,
      30,   172,   173,   174,    31,    32,   -94,    33,    34,     0,
       0,    35,    36,     0,     0,    37,    38,    39,    40,    41,
      42,     0,    43,    44,     0,     0,    45,    46,    47,    48,
      49,     0,   -94,     0,    50,     0,     0,     0,     0,     0,
     -94,  -242,  -242,  -242,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -94,     0,     0,   -94,     0,
       0,     0,     0,     0,     0,     0,     0,   449,     0,   -94,
       0,     0,     0,  -242,  -242,     0,   -14,   -94,    51,     0,
       0,     0,  -203,   171,    53,    54,    10,    11,    12,    13,
       0,     0,    14,     0,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    26,    27,
       0,     0,     0,    28,     0,     0,    29,     0,    30,   172,
     173,   174,    31,    32,   -94,    33,    34,     0,     0,    35,
      36,     0,     0,    37,    38,    39,    40,    41,    42,     0,
      43,    44,     0,     0,    45,    46,    47,    48,    49,     0,
     -94,     0,    50,     0,     0,     0,     0,     0,   -94,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   -94,     0,     0,   -94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -94,     0,     0,
       0,     0,     0,     0,     0,   -94,    51,   -14,     0,     0,
    -203,     0,    53,    54,     8,     0,     9,    10,    11,    12,
      13,     0,     0,    14,     0,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,     0,     0,     0,    28,     0,     0,    29,     0,    30,
       0,     0,     0,    31,    32,   -94,    33,    34,     0,     0,
      35,    36,     0,     0,    37,    38,    39,    40,    41,    42,
       0,    43,    44,     0,     0,    45,    46,    47,    48,    49,
       0,   -94,     0,    50,     0,     0,     0,     0,     0,   -94,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,     0,   -94,     0,     0,   -94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -94,     0,
       0,     0,     0,     0,     0,   170,   -94,    51,    52,     0,
       0,  -203,   105,    53,    54,    10,    11,    12,    13,     0,
       0,    14,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,    26,    27,     0,
       0,     0,    28,     0,     0,    29,     0,    30,     0,     0,
       0,   106,    32,     0,    33,    34,     0,     0,    35,    36,
       0,     0,    37,    38,    39,    40,    41,    42,     0,    43,
      44,     0,     0,    45,    46,    47,    48,    49,     0,   -98,
       0,   107,   -98,     0,     0,     0,     0,   -98,   -98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -98,     0,   -98,     0,     0,   -98,     0,     0,     0,     0,
     -98,     0,     0,     0,     0,     0,   -98,     0,     0,     0,
       0,     0,     0,     0,     0,   -98,     0,   -98,     0,     0,
     -98,    53,    54,   105,     0,     0,    10,    11,    12,    13,
       0,     0,    14,     0,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    26,    27,
       0,     0,     0,    28,     0,     0,    29,     0,    30,     0,
       0,     0,   106,    32,     0,    33,    34,     0,     0,    35,
      36,     0,     0,    37,    38,    39,    40,    41,    42,     0,
      43,    44,     0,     0,    45,    46,    47,    48,    49,     0,
     -97,     0,   107,   -97,     0,     0,     0,     0,   -97,   -97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -97,     0,   -97,     0,     0,   -97,     0,     0,     0,
       0,   -97,     0,     0,     0,     0,     0,   -97,     0,     0,
       0,     0,     0,     0,     0,     0,   -97,     0,   -97,     0,
       0,   -97,    53,    54,   105,     0,     0,    10,    11,    12,
      13,     0,     0,    14,     0,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,     0,     0,     0,    28,     0,     0,    29,     0,    30,
       0,     0,     0,   106,    32,   -94,    33,    34,     0,     0,
      35,    36,     0,     0,    37,    38,    39,    40,    41,    42,
       0,    43,    44,     0,     0,    45,    46,    47,    48,    49,
       0,   -94,     0,   107,     0,     0,     0,     0,     0,   -94,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -94,     0,     0,   -94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -94,     0,
       0,     0,     0,     0,     0,   -94,   -94,     0,     0,     0,
       0,     0,   181,    53,    54,    10,    11,    12,    13,     0,
       0,    14,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,    26,    27,     0,
       0,     0,    28,     0,     0,    29,     0,    30,     0,     0,
       0,    31,    32,   -94,    33,    34,     0,     0,    35,    36,
       0,     0,    37,    38,    39,    40,    41,    42,     0,    43,
      44,     0,     0,    45,    46,    47,    48,    49,     0,   -94,
       0,    50,     0,     0,     0,     0,     0,   -94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -94,     0,     0,   -94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -94,     0,     0,     0,
       0,   269,     0,   -94,    10,    11,    12,    13,     0,  -203,
      14,    53,    54,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,    26,    27,     0,     0,
       0,    28,     0,     0,    29,     0,    30,     0,     0,     0,
     106,    32,     0,    33,    34,     0,     0,    35,    36,     0,
       0,    37,    38,    39,    40,    41,    42,     0,    43,    44,
       0,     0,    45,    46,    47,    48,    49,     0,     0,     0,
     107,     0,   105,     0,     0,    10,    11,    12,    13,     0,
       0,    14,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,    26,    27,     0,
       0,     0,    28,     0,     0,    29,     0,    30,     0,     0,
       0,   106,    32,     0,    33,    34,   -81,     0,    35,    36,
      53,    54,    37,    38,    39,    40,    41,    42,     0,    43,
      44,     0,     0,    45,    46,    47,    48,    49,     0,     0,
       0,   107,     0,   269,     0,     0,    10,    11,    12,    13,
       0,     0,    14,     0,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    26,    27,
       0,     0,     0,    28,     0,     0,    29,     0,    30,     0,
       0,     0,   106,    32,     0,    33,    34,     0,     0,    35,
      36,    53,    54,    37,    38,    39,    40,    41,    42,     0,
      43,    44,   277,     0,    45,    46,    47,    48,    49,     0,
       0,     0,   107,     0,     0,     0,     0,   278,   279,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,     0,     0,     0,     0,     0,     0,     0,
     281,   277,     0,   282,   283,   284,     0,   285,     0,     0,
       0,     0,     0,     0,     0,     0,   278,   279,     0,     0,
       0,     0,    53,    54,     0,     0,   286,     0,     0,     0,
       0,   280,     0,     0,     0,   287,   288,   289,     0,   281,
       0,     0,   282,   283,   284,     0,   285,   290,     0,   291,
     292,   293,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   286,     0,     0,     0,     0,
       0,     0,     0,     0,   287,   288,   289,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   291,   292,
     293,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356
};

static const yytype_int16 yycheck[] =
{
      15,    96,   134,    86,    96,   137,    21,   238,    96,   150,
      93,   195,     1,     7,   143,    30,     6,     1,     1,     6,
      77,    76,     1,    61,   338,   157,   109,     1,   111,   112,
     113,     1,   164,    68,    42,    76,     1,     7,    50,    89,
      68,    68,    36,   126,   176,    20,    68,    97,     7,   144,
     145,    97,   144,   145,   111,   150,   144,   145,   150,   191,
      68,   116,   150,   377,    99,   103,    36,     0,    83,    84,
      85,    99,   113,   119,    68,   111,    70,    99,    37,    38,
      39,   116,   266,    91,    59,   113,    94,    62,   116,    68,
     114,    70,   276,    76,    68,   119,    70,   105,    68,    76,
      70,    89,    77,    68,   199,    70,   290,   199,   237,   147,
      99,    70,    88,   118,    68,    99,    99,   111,    89,    76,
      71,   118,    36,   111,    97,   140,   258,   116,   118,   112,
     113,   118,   111,   111,    68,   105,   113,   111,    89,   129,
     111,   111,    76,    57,   273,    99,   111,   105,   106,   107,
       6,   127,   128,   337,    10,   112,   113,    63,   111,   113,
      16,   111,   116,   246,    70,    99,    22,    68,   111,   400,
     401,    68,    68,   305,   111,   165,   166,   167,   168,   311,
     312,   313,   314,   112,   111,   416,   327,    43,   178,   112,
      91,    47,   112,    94,    91,    91,   111,    94,    94,   424,
     425,    68,   427,    70,   105,    88,   119,    90,   105,   105,
     159,   160,   161,   114,    70,   440,    97,   114,   119,   101,
     102,   103,   104,   105,   106,   107,   321,   112,    70,   321,
     325,    89,   327,   325,    88,   327,    90,     0,     1,   327,
       3,     4,     5,     6,     7,    68,    99,    10,   111,    89,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    89,    89,    26,    27,    71,    72,    73,    31,   112,
      99,    34,    76,    36,   112,   112,   115,    40,    41,    42,
      43,    44,   116,    89,    47,    48,    74,   112,    51,    52,
      53,    54,    55,    56,   112,    58,    59,   103,   104,    62,
      63,    64,    65,    66,   319,    68,   115,    70,   248,   249,
     250,   251,   112,    76,    71,    72,    73,   112,   112,   259,
      36,    71,    72,    73,   286,   287,   288,   289,    91,   291,
     292,    94,    89,   103,   104,   105,   106,   107,   114,   116,
      97,    76,   105,   115,   119,    91,   103,   104,    91,    60,
     113,   114,   115,   103,   104,   118,     1,   120,   121,     4,
       5,     6,     7,   112,   112,    10,    75,   112,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   112,
     112,    26,    27,   112,    76,   116,    31,    89,   116,    34,
      71,    36,   112,    97,    89,    40,    41,    71,    43,    44,
      77,    71,    47,    48,    72,   257,    51,    52,    53,    54,
      55,    56,    62,    58,    59,    62,   321,    62,    63,    64,
      65,    66,   325,    85,   115,    70,   267,   135,   375,   431,
     339,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,   119,   120,   121,     1,    -1,    -1,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    -1,    62,    63,
      64,    65,    66,    -1,    68,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    76,    71,    72,    73,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    91,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,   105,    -1,    -1,    -1,   103,   104,    -1,   112,   113,
     114,   115,    -1,    -1,   118,     1,   120,   121,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    48,    -1,    -1,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    -1,    62,    63,    64,    65,
      66,    -1,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      76,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,   105,
      -1,    -1,    -1,   103,   104,    -1,   112,   113,   114,    -1,
      -1,    -1,   118,     1,   120,   121,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    47,
      48,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    91,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,    -1,    -1,
     118,    -1,   120,   121,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      47,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    91,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,   114,   115,    -1,
      -1,   118,     1,   120,   121,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    -1,    -1,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    -1,    68,
      -1,    70,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,    -1,
     119,   120,   121,     1,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    -1,    -1,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      68,    -1,    70,    71,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,    -1,
      -1,   119,   120,   121,     1,    -1,    -1,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      47,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,     1,   120,   121,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    47,    48,
      -1,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    -1,    68,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,     1,    -1,   112,     4,     5,     6,     7,    -1,   118,
      10,   120,   121,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    -1,    -1,    47,    48,    -1,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      70,    -1,     1,    -1,    -1,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,   116,    -1,    47,    48,
     120,   121,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    70,    -1,     1,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    -1,    -1,    47,
      48,   120,   121,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    30,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    30,    -1,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,   120,   121,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,   103,   104,   105,    -1,    68,
      -1,    -1,    71,    72,    73,    -1,    75,   115,    -1,   117,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
     119,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   123,   124,     0,    50,   125,   126,    68,     1,     3,
       4,     5,     6,     7,    10,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    26,    27,    31,    34,
      36,    40,    41,    43,    44,    47,    48,    51,    52,    53,
      54,    55,    56,    58,    59,    62,    63,    64,    65,    66,
      70,   114,   115,   120,   121,   127,   128,   130,   131,   135,
     140,   141,   150,   152,   153,   154,   155,   156,   157,   158,
     168,   171,   111,    68,    99,   113,   116,     1,    68,    70,
     111,   138,     1,     7,    36,   105,   111,   138,   159,     1,
     111,   138,     1,   111,   138,    97,    97,    76,   113,   142,
     143,   142,   136,   137,   172,     1,    40,    70,   150,   111,
      89,   111,   111,   111,   111,   111,   150,   118,   126,     1,
      99,   112,   163,   112,   138,   138,   111,   138,   159,   163,
      89,   160,   160,   112,   164,   111,   112,   163,    36,    57,
     161,   148,   149,   151,   152,   168,   136,   137,   119,   142,
      42,    68,    91,    94,   105,   139,    68,   163,     7,    37,
      38,    39,    70,   162,   163,   163,   163,   165,   165,    70,
     112,     1,    37,    38,    39,   129,   130,   135,   163,   160,
     160,     1,   135,     6,    10,    16,    22,    43,    47,    70,
     129,   164,   129,   138,    99,   172,   151,   151,   142,   167,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   114,   117,   118,   119,   149,   151,   114,   173,
     174,   129,    68,   162,   162,   162,   111,   129,   135,   135,
     135,   135,   113,    89,    89,    89,   112,   129,   113,   135,
      76,   166,   112,   129,   112,    99,    68,   119,   173,     1,
     144,   145,   146,   151,   115,   116,   172,    30,    45,    46,
      60,    68,    71,    72,    73,    75,    94,   103,   104,   105,
     115,   117,   118,   119,   187,   189,   190,   191,   192,   193,
     194,   195,    74,   177,   112,   163,   112,   166,   166,   166,
     166,   132,   133,   134,   131,   129,   166,   112,   112,    36,
     173,   167,    68,    76,   116,    76,   172,   119,   194,   194,
     194,   194,   173,   194,   194,   186,   187,   115,    88,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    60,   179,   180,
     129,   112,   112,   112,   112,   129,   129,   129,   129,   112,
     138,   144,   169,   145,    68,   147,   149,    76,   116,   173,
     186,   188,   191,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
      77,   111,   175,   176,    75,   181,   112,   116,    20,    59,
      62,    77,   170,   174,   116,   186,    89,   187,   187,    71,
      72,    73,    89,    97,   103,   104,   182,   185,    71,    71,
      89,   178,   187,   112,    97,   182,   182,    89,    97,   183,
     184,   182,    89,    71,   176,    97,    89,   182,    71,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   122,   123,   124,   125,   125,   126,   126,   127,   127,
     127,   127,   127,   128,   129,   129,   129,   129,   129,   129,
     129,   130,   131,   132,   133,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   137,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   141,   142,
     143,   144,   144,   145,   145,   145,   145,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   150,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   153,
     154,   155,   156,   157,   158,   159,   159,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   161,   161,   162,   162,
     162,   162,   162,   163,   164,   165,   166,   166,   167,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   169,   169,
     169,   170,   170,   171,   171,   172,   172,   172,   172,   173,
     173,   173,   174,   175,   175,   176,   176,   177,   177,   178,
     178,   178,   178,   178,   179,   179,   179,   179,   180,   180,
     181,   181,   182,   182,   182,   182,   182,   183,   183,   183,
     183,   184,   184,   184,   184,   184,   185,   185,   185,   186,
     186,   187,   187,   188,   189,   189,   190,   191,   191,   192,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   194,   194,   194,
     194,   194,   194,   194,   194,   195,   195,   195,   195,   195,
     195,   195,   195,   195
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     1,     0,     2,     2,     1,
       1,     1,     2,     1,     0,     3,     4,     4,     4,     4,
       2,     1,     1,     0,     0,     0,     1,     2,     3,     2,
       2,     3,     4,     2,     2,     6,     2,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     2,     1,     3,     7,
       0,     0,     1,     1,     3,     2,     2,     6,     0,     1,
       1,     6,     3,     4,     0,     2,     2,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     5,     5,     7,     1,     3,     5,     5,     2,     5,
       6,     2,     6,     7,     6,     6,     6,     6,     2,     2,
       1,     4,     3,     3,     2,     3,     3,     3,     3,     2,
       2,     3,     3,     4,     4,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     0,     1,     1,     2,     2,
       2,     1,     2,     0,     0,     0,     0,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     2,
       2,     0,     2,     0,     1,     0,     2,     2,     2,     0,
       4,     3,     1,     1,     3,     0,     2,     0,     1,     0,
       1,     2,     3,     2,     2,     4,     5,     4,     0,     1,
       0,     1,     1,     1,     1,     2,     2,     0,     1,     2,
       1,     1,     2,     2,     3,     1,     1,     2,     1,     3,
       1,     5,     1,     1,     3,     1,     1,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       2,     2,     2,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 229 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (lflag)
                          {
                            custom_header = 0;
                            custom_fault = 0;
                          }
                          else
                          {
                            add_header();
                            add_fault();
                          }
                          compile(sp->table);
                          freetable(classtable);
                          freetable(enumtable);
                          freetable(typetable);
                          freetable(booltable);
                          freetable(templatetable);
                          yylineno = 0;
                        }
#line 2142 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 3:
#line 249 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          classtable = mktable(NULL);
                          enumtable = mktable(NULL);
                          typetable = mktable(NULL);
                          booltable = mktable(NULL);
                          templatetable = mktable(NULL);
                          p = enter(booltable, lookup("false"));
                          p->info.typ = mkint();
                          p->info.val.i = 0;
                          p = enter(booltable, lookup("true"));
                          p->info.typ = mkint();
                          p->info.val.i = 1;
                          mkscope(mktable(mktable(NULL)), 0);
                        }
#line 2161 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 4:
#line 265 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { namespaceid = (yyvsp[-3].sym)->name; }
#line 2167 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 5:
#line 266 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2173 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 6:
#line 268 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          add_soap();
                          add_qname();
                          add_XML();
                        }
#line 2183 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 7:
#line 273 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2189 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 8:
#line 275 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2195 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 9:
#line 276 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2201 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 10:
#line 277 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2207 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 11:
#line 278 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2213 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 12:
#line 279 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("input before ; skipped");
                          while (sp > stack)
                          {
                            freetable(sp->table);
                            exitscope();
                          }
                          yyerrok;
                        }
#line 2227 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 13:
#line 289 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          for (pp = &pragmas; *pp; pp = &(*pp)->next)
                            ;
                          *pp = (Pragma*)emalloc(sizeof(Pragma));
                          (*pp)->pragma = (yyvsp[0].s);
                          (*pp)->next = NULL;
                        }
#line 2239 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 14:
#line 304 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          transient &= ~6;
                          permission = 0;
                        }
#line 2248 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 15:
#line 309 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2254 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 16:
#line 311 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2260 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 17:
#line 313 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2266 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 18:
#line 315 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2272 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 19:
#line 317 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2278 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 20:
#line 318 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("declaration expected");
                          yyerrok;
                        }
#line 2287 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 21:
#line 323 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { transient |= 1; }
#line 2293 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 22:
#line 325 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { transient &= ~1; }
#line 2299 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 23:
#line 327 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { permission = Sprivate; }
#line 2305 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 24:
#line 329 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { permission = Sprotected; }
#line 2311 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 25:
#line 331 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { permission = 0; }
#line 2317 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 26:
#line 333 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2323 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 27:
#line 334 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2329 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 28:
#line 336 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2335 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 29:
#line 337 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2341 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 30:
#line 338 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2347 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 31:
#line 339 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2353 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 32:
#line 341 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2359 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 33:
#line 342 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sprintf(errbuf, "undefined type in declaration of '%s'", (yyvsp[0].sym)->name);
                          synerror(errbuf);
                          yyerrok;
                        }
#line 2369 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 34:
#line 347 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("function declaration?");
                          yyerrok;
                        }
#line 2378 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 35:
#line 353 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (((yyvsp[-3].rec).sto & Stypedef) && sp->table->level == GLOBAL)
                          {
                            if (((yyvsp[-3].rec).typ->type != Tstruct &&
                                  (yyvsp[-3].rec).typ->type != Tclass &&
                                  (yyvsp[-3].rec).typ->type != Tunion &&
                                  (yyvsp[-3].rec).typ->type != Tenum &&
                                  (yyvsp[-3].rec).typ->type != Tenumsc) ||
                                ((is_binary((yyvsp[-3].rec).typ) || is_stdstr((yyvsp[-3].rec).typ)) && strcmp((yyvsp[-4].sym)->name, (yyvsp[-3].rec).typ->id->name)) ||
                                strcmp((yyvsp[-4].sym)->name, (yyvsp[-3].rec).typ->id->name))
                            {
                              p = enter(typetable, (yyvsp[-4].sym));
                              p->info.typ = mksymtype((yyvsp[-3].rec).typ, (yyvsp[-4].sym));
                              if ((yyvsp[-3].rec).sto & Sextern)
                              {
                                p->info.typ->transient = -1;
                                p->info.typ->extsym = (yyvsp[-4].sym);
                              }
                              else if (is_external((yyvsp[-3].rec).typ))
                                p->info.typ->transient = -3; /* extern and volatile */
                              else
                                p->info.typ->transient = (yyvsp[-3].rec).typ->transient;
                              if (p->info.typ->width == 0)
                                p->info.typ->width = 8;
                              p->info.sto = (yyvsp[-3].rec).sto;
                              p->info.typ->synonym = (yyvsp[-3].rec).typ->sym;
                              if ((yyvsp[-1].rec).hasmin)
                              {
                                p->info.typ->hasmin = (yyvsp[-1].rec).hasmin;
                                p->info.typ->incmin = (yyvsp[-1].rec).incmin;
                                p->info.typ->min = (yyvsp[-1].rec).min;
                                p->info.typ->synonym = NULL;
                              }
                              else
                              {
                                p->info.typ->hasmin = (yyvsp[-3].rec).typ->hasmin;
                                p->info.typ->incmin = (yyvsp[-3].rec).typ->incmin;
                                p->info.typ->min = (yyvsp[-3].rec).typ->min;
                              }
                              if ((yyvsp[-1].rec).hasmax)
                              {
                                p->info.typ->hasmax = (yyvsp[-1].rec).hasmax;
                                p->info.typ->incmax = (yyvsp[-1].rec).incmax;
                                p->info.typ->max = (yyvsp[-1].rec).max;
                                p->info.typ->synonym = NULL;
                              }
                              else
                              {
                                p->info.typ->hasmax = (yyvsp[-3].rec).typ->hasmax;
                                p->info.typ->incmax = (yyvsp[-3].rec).typ->incmax;
                                p->info.typ->max = (yyvsp[-3].rec).typ->max;
                              }
                              if ((yyvsp[-1].rec).pattern)
                              {
                                p->info.typ->pattern = (yyvsp[-1].rec).pattern;
                                p->info.typ->synonym = NULL;
                              }
                              else
                              {
                                p->info.typ->pattern = (yyvsp[-3].rec).typ->pattern;
                              }
                            }
                            (yyvsp[-4].sym)->token = TYPE;
                          }
                          else
                          {
                            p = enter(sp->table, (yyvsp[-4].sym));
                            p->tag = (yyvsp[-2].s);
                            p->info.typ = (yyvsp[-3].rec).typ;
                            p->info.sto = (Storage)((int)(yyvsp[-3].rec).sto | permission);
                            if ((yyvsp[0].rec).hasval)
                            {
                              p->info.hasval = True;
                              switch ((yyvsp[-3].rec).typ->type)
                              {
                                case Tchar:
                                case Tuchar:
                                case Tshort:
                                case Tushort:
                                case Tint:
                                case Tuint:
                                case Tlong:
                                case Tulong:
                                case Tllong:
                                case Tullong:
                                case Tenum:
                                case Tenumsc:
                                case Ttime:
                                  if ((yyvsp[0].rec).typ->type == Tint ||
                                      (yyvsp[0].rec).typ->type == Tchar ||
                                      (yyvsp[0].rec).typ->type == Tenum ||
                                      (yyvsp[0].rec).typ->type == Tenumsc)
                                  {
                                    sp->val = p->info.val.i = (yyvsp[0].rec).val.i;
                                    if (((yyvsp[-3].rec).typ->hasmin && (yyvsp[-3].rec).typ->min > (double)(yyvsp[0].rec).val.i) ||
                                        ((yyvsp[-3].rec).typ->hasmin && !(yyvsp[-3].rec).typ->incmin && (yyvsp[-3].rec).typ->min == (double)(yyvsp[0].rec).val.i) ||
                                        ((yyvsp[-3].rec).typ->hasmax && (yyvsp[-3].rec).typ->max < (double)(yyvsp[0].rec).val.i) ||
                                        ((yyvsp[-3].rec).typ->hasmax && !(yyvsp[-3].rec).typ->incmax && (yyvsp[-3].rec).typ->max == (double)(yyvsp[0].rec).val.i))
                                      semerror("initialization constant outside value range");
                                  }
                                  else
                                  {
                                    semerror("type error in initialization constant");
                                    p->info.hasval = False;
                                  }
                                  break;
                                case Tfloat:
                                case Tdouble:
                                case Tldouble:
                                  if ((yyvsp[0].rec).typ->type == Tfloat ||
                                      (yyvsp[0].rec).typ->type == Tdouble ||
                                      (yyvsp[0].rec).typ->type == Tldouble)
                                  {
                                    p->info.val.r = (yyvsp[0].rec).val.r;
                                    if (((yyvsp[-3].rec).typ->hasmin && (yyvsp[-3].rec).typ->min > (yyvsp[0].rec).val.r) ||
                                        ((yyvsp[-3].rec).typ->hasmin && !(yyvsp[-3].rec).typ->incmin && (yyvsp[-3].rec).typ->min == (yyvsp[0].rec).val.r) ||
                                        ((yyvsp[-3].rec).typ->hasmax && (yyvsp[-3].rec).typ->max < (yyvsp[0].rec).val.r) ||
                                        ((yyvsp[-3].rec).typ->hasmax && !(yyvsp[-3].rec).typ->incmax && (yyvsp[-3].rec).typ->max == (yyvsp[0].rec).val.r))
                                      semerror("initialization constant outside value range");
                                  }
                                  else if ((yyvsp[0].rec).typ->type == Tint)
                                  {
                                    p->info.val.r = (double)(yyvsp[0].rec).val.i;
                                    if (((yyvsp[-3].rec).typ->hasmin && (yyvsp[-3].rec).typ->min > (double)(yyvsp[0].rec).val.i) ||
                                        ((yyvsp[-3].rec).typ->hasmin && !(yyvsp[-3].rec).typ->incmin && (yyvsp[-3].rec).typ->min == (double)(yyvsp[0].rec).val.i) ||
                                        ((yyvsp[-3].rec).typ->hasmax && (yyvsp[-3].rec).typ->max < (double)(yyvsp[0].rec).val.i) ||
                                        ((yyvsp[-3].rec).typ->hasmax && !(yyvsp[-3].rec).typ->incmax && (yyvsp[-3].rec).typ->max == (double)(yyvsp[0].rec).val.i))
                                      semerror("initialization constant outside value range");
                                  }
                                  else
                                  {
                                    semerror("type error in initialization constant");
                                    p->info.hasval = False;
                                  }
                                  break;
                                default:
                                  if ((yyvsp[-3].rec).typ->type == Tpointer &&
                                      (((Tnode*)(yyvsp[-3].rec).typ->ref)->type == Tchar ||
                                       ((Tnode*)(yyvsp[-3].rec).typ->ref)->type == Twchar) &&
                                      (yyvsp[0].rec).typ->type == Tpointer &&
                                      ((Tnode*)(yyvsp[0].rec).typ->ref)->type == Tchar)
                                    p->info.val.s = (yyvsp[0].rec).val.s;
                                  else if (bflag &&
                                      (yyvsp[-3].rec).typ->type == Tarray &&
                                      ((Tnode*)(yyvsp[-3].rec).typ->ref)->type == Tchar &&
                                      (yyvsp[0].rec).typ->type == Tpointer &&
                                      ((Tnode*)(yyvsp[0].rec).typ->ref)->type == Tchar)
                                  {
                                    if ((yyvsp[-3].rec).typ->width / ((Tnode*)(yyvsp[-3].rec).typ->ref)->width - 1 < (int)strlen((yyvsp[0].rec).val.s))
                                    {
                                      semerror("char[] initialization constant too long");
                                      p->info.val.s = "";
                                    }
                                    else
                                    {
                                      p->info.val.s = (yyvsp[0].rec).val.s;
                                    }

                                  }
                                  else if (((yyvsp[-3].rec).typ->type == Tpointer || is_smart((yyvsp[-3].rec).typ)) &&
                                      (((Tnode*)(yyvsp[-3].rec).typ->ref)->id == lookup("std::string") ||
                                       ((Tnode*)(yyvsp[-3].rec).typ->ref)->id == lookup("std::wstring")))
                                  {
                                    p->info.val.s = (yyvsp[0].rec).val.s;
                                  }
                                  else if ((yyvsp[-3].rec).typ->id == lookup("std::string") ||
                                      (yyvsp[-3].rec).typ->id == lookup("std::wstring"))
                                  {
                                    p->info.val.s = (yyvsp[0].rec).val.s;
                                  }
                                  else if ((yyvsp[-3].rec).typ->type == Tpointer &&
                                      (yyvsp[0].rec).typ->type == Tint &&
                                      (yyvsp[0].rec).val.i == 0)
                                  {
                                    p->info.val.i = 0;
                                  }
                                  else
                                  {
                                    semerror("type error in initialization constant");
                                    p->info.hasval = False;
                                  }
                                  break;
                              }
                            }
                            else
                            {
                              p->info.val.i = sp->val;
                            }
                            if ((yyvsp[-1].rec).minOccurs < 0)
                            {
                              if ((yyvsp[0].rec).hasval ||
                                  ((yyvsp[-3].rec).sto & Sattribute) ||
                                  (yyvsp[-3].rec).typ->type == Tpointer ||
                                  (yyvsp[-3].rec).typ->type == Ttemplate ||
                                  !strncmp((yyvsp[-4].sym)->name, "__size", 6))
                                p->info.minOccurs = 0;
                              else
                                p->info.minOccurs = 1;
                            }
                            else
                            {
                              p->info.minOccurs = (yyvsp[-1].rec).minOccurs;
                            }
                            p->info.maxOccurs = (yyvsp[-1].rec).maxOccurs;
                            p->info.nillable = (yyvsp[-1].rec).nillable;
                            if (sp->mask)
                              sp->val <<= 1;
                            else
                              sp->val++;
                            p->info.offset = sp->offset;
                            if ((yyvsp[-3].rec).sto & Sextern)
                              p->level = GLOBAL;
                            else if ((yyvsp[-3].rec).sto & Stypedef)
                              ;
                            else if (sp->grow)
                              sp->offset += p->info.typ->width;
                            else if (p->info.typ->width > sp->offset)
                              sp->offset = p->info.typ->width;
                          }
                          sp->entry = p;
                        }
#line 2604 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 36:
#line 575 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[-1].rec).sto & Stypedef)
                          {
                            sprintf(errbuf, "invalid typedef qualifier for '%s'", (yyvsp[0].sym)->name);
                            semwarn(errbuf);
                          }
                          p = enter(sp->table, (yyvsp[0].sym));
                          p->info.typ = (yyvsp[-1].rec).typ;
                          p->info.sto = (yyvsp[-1].rec).sto;
                          p->info.hasval = False;
                          p->info.offset = sp->offset;
                          if (sp->grow)
                            sp->offset += p->info.typ->width;
                          else if (p->info.typ->width > sp->offset)
                            sp->offset = p->info.typ->width;
                          sp->entry = p;
                        }
#line 2626 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 37:
#line 593 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 2632 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 38:
#line 594 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 2638 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 39:
#line 596 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = (yyvsp[0].sym); }
#line 2644 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 40:
#line 597 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator!"); }
#line 2650 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 41:
#line 598 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator~"); }
#line 2656 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 42:
#line 599 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator="); }
#line 2662 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 43:
#line 600 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator+="); }
#line 2668 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 44:
#line 601 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator-="); }
#line 2674 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 45:
#line 602 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator*="); }
#line 2680 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 46:
#line 603 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator/="); }
#line 2686 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 47:
#line 604 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator%="); }
#line 2692 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 48:
#line 605 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator&="); }
#line 2698 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 49:
#line 606 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator^="); }
#line 2704 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 50:
#line 607 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator|="); }
#line 2710 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 608 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator<<="); }
#line 2716 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 609 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator>>="); }
#line 2722 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 610 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator||"); }
#line 2728 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 611 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator&&"); }
#line 2734 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 612 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator|"); }
#line 2740 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 613 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator^"); }
#line 2746 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 614 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator&"); }
#line 2752 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 58:
#line 615 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator=="); }
#line 2758 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 59:
#line 616 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator!="); }
#line 2764 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 60:
#line 617 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator<"); }
#line 2770 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 61:
#line 618 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator<="); }
#line 2776 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 62:
#line 619 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator>"); }
#line 2782 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 63:
#line 620 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator>="); }
#line 2788 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 64:
#line 621 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator<<"); }
#line 2794 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 65:
#line 622 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator>>"); }
#line 2800 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 66:
#line 623 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator+"); }
#line 2806 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 67:
#line 624 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator-"); }
#line 2812 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 68:
#line 625 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator*"); }
#line 2818 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 69:
#line 626 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator/"); }
#line 2824 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 70:
#line 627 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator%"); }
#line 2830 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 71:
#line 628 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator++"); }
#line 2836 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 72:
#line 629 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator--"); }
#line 2842 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 73:
#line 630 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator->"); }
#line 2848 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 74:
#line 631 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator[]"); }
#line 2854 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 75:
#line 632 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sym) = lookup("operator()"); }
#line 2860 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 76:
#line 633 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          s1 = c_storage((yyvsp[0].rec).sto);
                          s2 = c_type((yyvsp[0].rec).typ);
                          s = (char*)emalloc(strlen(s1) + strlen(s2) + 10);
                          strcpy(s, "operator ");
                          strcat(s, s1);
                          strcat(s, s2);
                          (yyval.sym) = lookup(s);
                          if (!(yyval.sym))
                            (yyval.sym) = install(s, ID);
                        }
#line 2876 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 77:
#line 645 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (!(p = entry(classtable, (yyvsp[0].sym))))
                            semerror("invalid constructor");
                          sp->entry = enter(sp->table, (yyvsp[0].sym));
                          sp->entry->info.typ = mknone();
                          sp->entry->info.sto = Snone;
                          sp->entry->info.offset = sp->offset;
                          sp->node.typ = mkvoid();
                          sp->node.sto = Snone;
                        }
#line 2891 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 78:
#line 657 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (!(p = entry(classtable, (yyvsp[0].sym))))
                                semerror("invalid destructor");
                          s = (char*)emalloc(strlen((yyvsp[0].sym)->name) + 2);
                          s2 = strrchr((yyvsp[0].sym)->name, ':');
                          if (s2 && *(s2+1) && (s2 == (yyvsp[0].sym)->name || *(s2-1) != ':'))
                          {
                            strncpy(s, (yyvsp[0].sym)->name, s2 - (yyvsp[0].sym)->name + 1);
                            strcat(s, "~");
                            strcat(s, s2 + 1);
                          }
                          else
                          {
                            strcpy(s, "~");
                            strcat(s, (yyvsp[0].sym)->name);
                          }
                          sym = lookup(s);
                          if (!sym)
                            sym = install(s, ID);
                          sp->entry = enter(sp->table, sym);
                          sp->entry->info.typ = mknone();
                          sp->entry->info.sto = (yyvsp[-2].sto);
                          sp->entry->info.offset = sp->offset;
                          sp->node.typ = mkvoid();
                          sp->node.sto = Snone;
                        }
#line 2922 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 79:
#line 685 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[-6].e)->level == GLOBAL)
                          {
                            if (!((yyvsp[-6].e)->info.sto & Sextern) &&
                                sp->entry && sp->entry->info.typ->type == Tpointer &&
                                ((Tnode*)sp->entry->info.typ->ref)->type == Tchar)
                            {
                              sprintf(errbuf, "last output parameter of service operation function prototype '%s' is a pointer to a char which will only return one byte: use char** instead to return a string", (yyvsp[-6].e)->sym->name);
                              semwarn(errbuf);
                            }
                            if ((yyvsp[-6].e)->info.sto & Sextern)
                            {
                              (yyvsp[-6].e)->info.typ = mkmethod((yyvsp[-6].e)->info.typ, sp->table);
                            }
                            else if (sp->entry &&
                                (sp->entry->info.typ->type == Tpointer ||
                                 sp->entry->info.typ->type == Treference ||
                                 sp->entry->info.typ->type == Tarray ||
                                 is_transient(sp->entry->info.typ)))
                            {
                              if ((yyvsp[-6].e)->info.typ->type == Tint)
                              {
                                sp->entry->info.sto = (Storage)((int)sp->entry->info.sto | (int)Sreturn);
                                (yyvsp[-6].e)->info.typ = mkfun(sp->entry);
                                (yyvsp[-6].e)->info.typ->id = (yyvsp[-6].e)->sym;
                                if (!is_transient(sp->entry->info.typ))
                                {
                                  if (!is_response(sp->entry->info.typ))
                                  {
                                    if (!is_XML(sp->entry->info.typ))
                                      add_response((yyvsp[-6].e), sp->entry);
                                  }
                                  else
                                  {
                                    add_result(sp->entry->info.typ);
                                  }
                                }
                                add_request((yyvsp[-6].e)->sym, sp);
                              }
                              else
                              {
                                sprintf(errbuf, "return type of service operation function prototype '%s' must be integer", (yyvsp[-6].e)->sym->name);
                                semerror(errbuf);
                              }
                            }
                            else
                            {
                              sprintf(errbuf, "last output parameter of service operation function prototype '%s' is a return parameter and must be a pointer or reference, or use %s(..., void) for one-way sends", (yyvsp[-6].e)->sym->name, (yyvsp[-6].e)->sym->name);
                              semerror(errbuf);
                            }
                          }
                          else if ((yyvsp[-6].e)->level == INTERNAL)
                          {
                            (yyvsp[-6].e)->info.typ = mkmethod((yyvsp[-6].e)->info.typ, sp->table);
                            (yyvsp[-6].e)->info.sto = (Storage)((int)(yyvsp[-6].e)->info.sto | (int)(yyvsp[-1].sto) | (int)(yyvsp[0].sto));
                            transient &= ~1;
                          }
                          exitscope();
                        }
#line 2986 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 80:
#line 745 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.e) = sp->entry; }
#line 2992 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 81:
#line 747 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 2998 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 82:
#line 748 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 3004 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 83:
#line 750 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 3010 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 84:
#line 751 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 3016 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 85:
#line 752 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sprintf(errbuf, "undefined '%s'", (yyvsp[0].sym)->name);
                          synerror(errbuf);
                        }
#line 3025 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 86:
#line 756 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("formal argument expected");
                          yyerrok;
                        }
#line 3034 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 87:
#line 762 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[-2].rec).sto & Stypedef)
                            semwarn("typedef in function argument");
                          p = enter(sp->table, (yyvsp[-3].sym));
                          p->info.typ = (yyvsp[-2].rec).typ;
                          p->info.sto = (yyvsp[-2].rec).sto;
                          if ((yyvsp[-1].rec).minOccurs < 0)
                          {
                            if ((yyvsp[0].rec).hasval ||
                                ((yyvsp[-2].rec).sto & Sattribute) ||
                                (yyvsp[-2].rec).typ->type == Tpointer)
                              p->info.minOccurs = 0;
                            else
                              p->info.minOccurs = 1;
                          }
                          else
                          {
                            p->info.minOccurs = (yyvsp[-1].rec).minOccurs;
                          }
                          p->info.maxOccurs = (yyvsp[-1].rec).maxOccurs;
                          if ((yyvsp[0].rec).hasval)
                          {
                            p->info.hasval = True;
                            switch ((yyvsp[-2].rec).typ->type)
                            {
                              case Tchar:
                              case Tuchar:
                              case Tshort:
                              case Tushort:
                              case Tint:
                              case Tuint:
                              case Tlong:
                              case Tulong:
                              case Tenum:
                              case Tenumsc:
                              case Ttime:
                                if ((yyvsp[0].rec).typ->type == Tint ||
                                    (yyvsp[0].rec).typ->type == Tchar ||
                                    (yyvsp[0].rec).typ->type == Tenum ||
                                    (yyvsp[0].rec).typ->type == Tenumsc)
                                {
                                  sp->val = p->info.val.i = (yyvsp[0].rec).val.i;
                                  if (((yyvsp[-2].rec).typ->hasmin && (yyvsp[-2].rec).typ->min > (double)(yyvsp[0].rec).val.i) ||
                                      ((yyvsp[-2].rec).typ->hasmin && !(yyvsp[-2].rec).typ->incmin && (yyvsp[-2].rec).typ->min == (double)(yyvsp[0].rec).val.i) ||
                                      ((yyvsp[-2].rec).typ->hasmax && (yyvsp[-2].rec).typ->max < (double)(yyvsp[0].rec).val.i) ||
                                      ((yyvsp[-2].rec).typ->hasmax && !(yyvsp[-2].rec).typ->incmax && (yyvsp[-2].rec).typ->max == (double)(yyvsp[0].rec).val.i))
                                    semerror("initialization constant outside value range");
                                }
                                else
                                {
                                  semerror("type error in initialization constant");
                                  p->info.hasval = False;
                                }
                                break;
                              case Tfloat:
                              case Tdouble:
                              case Tldouble:
                                if ((yyvsp[0].rec).typ->type == Tfloat ||
                                    (yyvsp[0].rec).typ->type == Tdouble ||
                                    (yyvsp[0].rec).typ->type == Tldouble)
                                {
                                  p->info.val.r = (yyvsp[0].rec).val.r;
                                  if (((yyvsp[-2].rec).typ->hasmin && (yyvsp[-2].rec).typ->min > (yyvsp[0].rec).val.r) ||
                                      ((yyvsp[-2].rec).typ->hasmin && !(yyvsp[-2].rec).typ->incmin && (yyvsp[-2].rec).typ->min == (yyvsp[0].rec).val.r) ||
                                      ((yyvsp[-2].rec).typ->hasmax && (yyvsp[-2].rec).typ->max < (yyvsp[0].rec).val.r) ||
                                      ((yyvsp[-2].rec).typ->hasmax && !(yyvsp[-2].rec).typ->incmax && (yyvsp[-2].rec).typ->max == (yyvsp[0].rec).val.r))
                                    semerror("initialization constant outside value range");
                                }
                                else if ((yyvsp[0].rec).typ->type == Tint)
                                {
                                  p->info.val.r = (double)(yyvsp[0].rec).val.i;
                                  if (((yyvsp[-2].rec).typ->hasmin && (yyvsp[-2].rec).typ->min > (double)(yyvsp[0].rec).val.i) ||
                                      ((yyvsp[-2].rec).typ->hasmin && !(yyvsp[-2].rec).typ->incmin && (yyvsp[-2].rec).typ->min == (double)(yyvsp[0].rec).val.i) ||
                                      ((yyvsp[-2].rec).typ->hasmax && (yyvsp[-2].rec).typ->max < (double)(yyvsp[0].rec).val.i) ||
                                      ((yyvsp[-2].rec).typ->hasmax && !(yyvsp[-2].rec).typ->incmax && (yyvsp[-2].rec).typ->max == (double)(yyvsp[0].rec).val.i))
                                    semerror("initialization constant outside value range");
                                }
                                else
                                {
                                  semerror("type error in initialization constant");
                                  p->info.hasval = False;
                                }
                                break;
                              default:
                                if ((yyvsp[-2].rec).typ->type == Tpointer &&
                                    (((Tnode*)(yyvsp[-2].rec).typ->ref)->type == Tchar ||
                                     ((Tnode*)(yyvsp[-2].rec).typ->ref)->type == Twchar) &&
                                    (yyvsp[0].rec).typ->type == Tpointer &&
                                    ((Tnode*)(yyvsp[0].rec).typ->ref)->type == Tchar)
                                {
                                  p->info.val.s = (yyvsp[0].rec).val.s;
                                }
                                else if (((yyvsp[-2].rec).typ->type == Tpointer || is_smart((yyvsp[-2].rec).typ)) &&
                                    (((Tnode*)(yyvsp[-2].rec).typ->ref)->id == lookup("std::string") ||
                                     ((Tnode*)(yyvsp[-2].rec).typ->ref)->id == lookup("std::wstring")))
                                {
                                  p->info.val.s = (yyvsp[0].rec).val.s;
                                }
                                else if ((yyvsp[-2].rec).typ->id == lookup("std::string") ||
                                    (yyvsp[-2].rec).typ->id == lookup("std::wstring"))
                                {
                                  p->info.val.s = (yyvsp[0].rec).val.s;
                                }
                                else if ((yyvsp[-2].rec).typ->type == Tpointer &&
                                    (yyvsp[0].rec).typ->type == Tint &&
                                    (yyvsp[0].rec).val.i == 0)
                                {
                                  p->info.val.i = 0;
                                }
                                else
                                {
                                  semerror("type error in initialization constant");
                                  p->info.hasval = False;
                                }
                                break;
                            }
                          }
                          p->info.offset = sp->offset;
                          if ((yyvsp[-2].rec).sto & Sextern)
                            p->level = GLOBAL;
                          else if (sp->grow)
                            sp->offset += p->info.typ->width;
                          else if (p->info.typ->width > sp->offset)
                            sp->offset = p->info.typ->width;
                          sp->entry = p;
                        }
#line 3165 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 88:
#line 889 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (sp->table->level != PARAM)
                            (yyval.sym) = gensymidx("param", (int)++sp->val);
                          else if (eflag || zflag == 0 || zflag > 3)
                            (yyval.sym) = gensymidx("_param", (int)++sp->val);
                          else
                            (yyval.sym) = gensym("_param");
                        }
#line 3178 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 89:
#line 897 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (soap_version == 2 && *(yyvsp[0].sym)->name == '_' && sp->table->level == GLOBAL)
                          {
                            sprintf(errbuf, "SOAP 1.2 does not support anonymous parameters '%s'", (yyvsp[0].sym)->name);
                            semwarn(errbuf);
                          }
                          (yyval.sym) = (yyvsp[0].sym);
                        }
#line 3191 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 90:
#line 914 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 3197 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 91:
#line 916 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkmethod(tmp.typ, sp->table);
                          transient &= ~1;
                          exitscope();
                        }
#line 3207 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 92:
#line 923 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 3213 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 93:
#line 925 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 3219 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 94:
#line 927 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkint();
                          (yyval.rec).sto = Snone;
                          sp->node = (yyval.rec);
                        }
#line 3229 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 95:
#line 932 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = (yyvsp[0].rec).typ;
                          (yyval.rec).sto = (Storage)((int)(yyvsp[-1].sto) | (int)(yyvsp[0].rec).sto);
                          if (((yyval.rec).sto & Sattribute))
                          {
                            if (is_smart((yyvsp[0].rec).typ))
                            {
                              if (!is_primitive_or_string((yyvsp[0].rec).typ->ref) &&
                                  !is_stdstr((yyvsp[0].rec).typ->ref) &&
                                  !is_binary((yyvsp[0].rec).typ->ref) &&
                                  !is_external((yyvsp[0].rec).typ->ref))
                              {
                                semwarn("invalid attribute smart pointer @type");
                                (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                              }
                            }
                            else if ((yyvsp[0].rec).typ->type == Tpointer)
                            {
                              if (!is_primitive_or_string((yyvsp[0].rec).typ->ref) &&
                                  !is_stdstr((yyvsp[0].rec).typ->ref) &&
                                  !is_binary((yyvsp[0].rec).typ->ref) &&
                                  !is_external((yyvsp[0].rec).typ->ref))
                              {
                                semwarn("invalid attribute pointer @type");
                                (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                              }
                            }
                            else if (
                                !is_primitive_or_string((yyvsp[0].rec).typ) &&
                                !is_stdstr((yyvsp[0].rec).typ) &&
                                !is_binary((yyvsp[0].rec).typ) &&
                                !is_external((yyvsp[0].rec).typ))
                            {
                              semwarn("invalid attribute @type");
                              (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                            }
                          }
                          sp->node = (yyval.rec);
                          if ((yyvsp[-1].sto) & Sextern)
                            transient = 0;
                        }
#line 3275 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 96:
#line 973 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[-1].typ)->type == Tint)
                            switch ((yyvsp[0].rec).typ->type)
                            {
                              case Tchar:       (yyval.rec).typ = (yyvsp[0].rec).typ; break;
                              case Tshort:      (yyval.rec).typ = (yyvsp[0].rec).typ; break;
                              case Tint:        (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tlong:       (yyval.rec).typ = (yyvsp[0].rec).typ; break;
                              case Tllong:      (yyval.rec).typ = (yyvsp[0].rec).typ; break;
                              default:          semwarn("invalid int type specified");
                                                (yyval.rec).typ = (yyvsp[0].rec).typ;
                            }
                          else if ((yyvsp[-1].typ)->type == Tuint)
                            switch ((yyvsp[0].rec).typ->type)
                            {
                              case Tchar:       (yyval.rec).typ = mkuchar(); break;
                              case Tshort:      (yyval.rec).typ = mkushort(); break;
                              case Tint:        (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tlong:       (yyval.rec).typ = mkulong(); break;
                              case Tllong:      (yyval.rec).typ = mkullong(); break;
                              default:          semwarn("invalid unsigned type specified");
                                                (yyval.rec).typ = (yyvsp[0].rec).typ;
                            }
                          else if ((yyvsp[-1].typ)->type == Tlong)
                            switch ((yyvsp[0].rec).typ->type)
                            {
                              case Tint:        (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tlong:       (yyval.rec).typ = mkllong(); break;
                              case Tuint:       (yyval.rec).typ = mkulong(); break;
                              case Tulong:      (yyval.rec).typ = mkullong(); break;
                              case Tdouble:     (yyval.rec).typ = mkldouble(); break;
                              default:          semwarn("invalid use of 'long'");
                                                (yyval.rec).typ = (yyvsp[0].rec).typ;
                            }
                          else if ((yyvsp[-1].typ)->type == Tulong)
                            switch ((yyvsp[0].rec).typ->type)
                            {
                              case Tint:        (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tlong:       (yyval.rec).typ = mkullong(); break;
                              case Tuint:       (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tulong:      (yyval.rec).typ = mkullong(); break;
                              default:          semwarn("invalid use of 'long'");
                                                (yyval.rec).typ = (yyvsp[0].rec).typ;
                            }
                          else if ((yyvsp[0].rec).typ->type == Tint)
                            (yyval.rec).typ = (yyvsp[-1].typ);
                          else
                            semwarn("invalid type specified (missing ';' or type name used as non-type identifier?)");
                          (yyval.rec).sto = (yyvsp[0].rec).sto;
                          sp->node = (yyval.rec);
                        }
#line 3331 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1025 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkint();
                          (yyval.rec).sto = (yyvsp[0].sto);
                          sp->node = (yyval.rec);
                          if ((yyvsp[0].sto) & Sextern)
                            transient = 0;
                        }
#line 3343 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1032 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = (yyvsp[0].typ);
                          (yyval.rec).sto = Snone;
                          sp->node = (yyval.rec);
                        }
#line 3353 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1037 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = (yyvsp[0].rec).typ;
                          (yyval.rec).sto = (Storage)((int)(yyvsp[-1].sto) | (int)(yyvsp[0].rec).sto);
                          if (((yyval.rec).sto & Sattribute))
                          {
                            if (is_smart((yyvsp[0].rec).typ))
                            {
                              if (!is_primitive_or_string((yyvsp[0].rec).typ->ref) &&
                                  !is_stdstr((yyvsp[0].rec).typ->ref) &&
                                  !is_binary((yyvsp[0].rec).typ->ref) &&
                                  !is_external((yyvsp[0].rec).typ->ref))
                              {
                                semwarn("invalid attribute smart pointer @type");
                                (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                              }
                            }
                            else if ((yyvsp[0].rec).typ->type == Tpointer)
                            {
                              if (!is_primitive_or_string((yyvsp[0].rec).typ->ref) &&
                                  !is_stdstr((yyvsp[0].rec).typ->ref) &&
                                  !is_binary((yyvsp[0].rec).typ->ref) &&
                                  !is_external((yyvsp[0].rec).typ->ref))
                              {
                                semwarn("invalid attribute pointer @type");
                                (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                              }
                            }
                            else if (
                                !is_primitive_or_string((yyvsp[0].rec).typ) &&
                                !is_stdstr((yyvsp[0].rec).typ) &&
                                !is_binary((yyvsp[0].rec).typ) &&
                                !is_external((yyvsp[0].rec).typ))
                            {
                              semwarn("invalid attribute @type");
                              (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                            }
                          }
                          sp->node = (yyval.rec);
                          if ((yyvsp[-1].sto) & Sextern)
                            transient = 0;
                        }
#line 3399 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1078 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[-1].typ)->type == Tint)
                            switch ((yyvsp[0].rec).typ->type)
                            {
                              case Tchar:       (yyval.rec).typ = (yyvsp[0].rec).typ; break;
                              case Tshort:      (yyval.rec).typ = (yyvsp[0].rec).typ; break;
                              case Tint:        (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tlong:       (yyval.rec).typ = (yyvsp[0].rec).typ; break;
                              case Tllong:      (yyval.rec).typ = (yyvsp[0].rec).typ; break;
                              default:  semwarn("invalid int type specified");
                                        (yyval.rec).typ = (yyvsp[0].rec).typ;
                            }
                          else if ((yyvsp[-1].typ)->type == Tuint)
                            switch ((yyvsp[0].rec).typ->type)
                            {
                              case Tchar:       (yyval.rec).typ = mkuchar(); break;
                              case Tshort:      (yyval.rec).typ = mkushort(); break;
                              case Tint:        (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tlong:       (yyval.rec).typ = mkulong(); break;
                              case Tllong:      (yyval.rec).typ = mkullong(); break;
                              default:  semwarn("invalid unsigned type specified");
                                        (yyval.rec).typ = (yyvsp[0].rec).typ;
                            }
                          else if ((yyvsp[-1].typ)->type == Tlong)
                            switch ((yyvsp[0].rec).typ->type)
                            {
                              case Tint:        (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tlong:       (yyval.rec).typ = mkllong(); break;
                              case Tuint:       (yyval.rec).typ = mkulong(); break;
                              case Tulong:      (yyval.rec).typ = mkullong(); break;
                              case Tdouble:     (yyval.rec).typ = mkldouble(); break;
                              default:  semwarn("invalid use of 'long'");
                                        (yyval.rec).typ = (yyvsp[0].rec).typ;
                            }
                          else if ((yyvsp[-1].typ)->type == Tulong)
                            switch ((yyvsp[0].rec).typ->type)
                            {
                              case Tint:        (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tlong:       (yyval.rec).typ = mkullong(); break;
                              case Tuint:       (yyval.rec).typ = (yyvsp[-1].typ); break;
                              case Tulong:      (yyval.rec).typ = mkullong(); break;
                              default:  semwarn("invalid use of 'long'");
                                        (yyval.rec).typ = (yyvsp[0].rec).typ;
                            }
                          else if ((yyvsp[0].rec).typ->type == Tint)
                            (yyval.rec).typ = (yyvsp[-1].typ);
                          else
                            semwarn("invalid type specified (missing ';' or type name used as non-type identifier?)");
                          (yyval.rec).sto = (yyvsp[0].rec).sto;
                          sp->node = (yyval.rec);
                        }
#line 3455 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1130 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkvoid(); }
#line 3461 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1131 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkbool(); }
#line 3467 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1132 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkchar(); }
#line 3473 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1133 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkwchart(); }
#line 3479 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1134 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkshort(); }
#line 3485 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1135 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkint(); }
#line 3491 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1136 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mklong(); }
#line 3497 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1137 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkllong(); }
#line 3503 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1138 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkullong(); }
#line 3509 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1139 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mksize(); }
#line 3515 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1140 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkfloat(); }
#line 3521 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1141 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkdouble(); }
#line 3527 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1142 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkint(); }
#line 3533 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1143 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkuint(); }
#line 3539 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1144 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkuchar(); }
#line 3545 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1145 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkushort(); }
#line 3551 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1146 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkuint(); }
#line 3557 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1147 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mkulong(); }
#line 3563 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1148 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.typ) = mktimet(); }
#line 3569 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1150 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (!(p = entry(templatetable, (yyvsp[0].sym))))
                          {
                            p = enter(templatetable, (yyvsp[0].sym));
                            p->info.typ = mktemplate(NULL, (yyvsp[0].sym));
                            (yyvsp[0].sym)->token = TYPE;
                          }
                          (yyval.typ) = p->info.typ;
                        }
#line 3583 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1160 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sym = gensym("_Struct");
                          sprintf(errbuf, "anonymous class will be named '%s'", sym->name);
                          semwarn(errbuf);
                          if ((p = entry(classtable, sym)))
                          {
                            if (p->info.typ->ref || p->info.typ->type != Tclass)
                            {
                              sprintf(errbuf, "class '%s' already declared at %s:%d", sym->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                          }
                          else
                          {
                            p = enter(classtable, sym);
                            p->info.typ = mkclass(NULL, 0);
                          }
                          sym->token = TYPE;
                          sp->table->sym = sym;
                          p->info.typ->ref = sp->table;
                          p->info.typ->width = sp->offset;
                          p->info.typ->id = sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3613 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1186 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(classtable, (yyvsp[-4].e)->sym)) && p->info.typ->ref)
                          {
                            if (is_mutable(p))
                            {
                              if (merge((Table*)p->info.typ->ref, sp->table))
                              {
                                sprintf(errbuf, "member name clash in class '%s' declared at line %d", (yyvsp[-4].e)->sym->name, p->lineno);
                                semerror(errbuf);
                              }
                              p->info.typ->width += sp->offset;
                            }
                          }
                          else
                          {
                            p = reenter(classtable, (yyvsp[-4].e)->sym);
                            sp->table->sym = p->sym;
                            p->info.typ->ref = sp->table;
                            p->info.typ->width = sp->offset;
                            p->info.typ->id = p->sym;
                            if (p->info.typ->base)
                              sp->table->prev = (Table*)entry(classtable, p->info.typ->base)->info.typ->ref;
                          }
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3644 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1213 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          p = reenter(classtable, (yyvsp[-6].e)->sym);
                          sp->table->sym = p->sym;
                          if (!(yyvsp[-4].e))
                          {
                            semerror("invalid base class");
                          }
                          else
                          {
                            sp->table->prev = (Table*)(yyvsp[-4].e)->info.typ->ref;
                            if (!sp->table->prev && !(yyvsp[-4].e)->info.typ->transient)
                            {
                              sprintf(errbuf, "class '%s' has incomplete type (if this class is not serializable then declare 'extern class %s')'", (yyvsp[-4].e)->sym->name, (yyvsp[-4].e)->sym->name);
                              semerror(errbuf);
                            }
                            p->info.typ->base = (yyvsp[-4].e)->info.typ->id;
                          }
                          p->info.typ->ref = sp->table;
                          p->info.typ->width = sp->offset;
                          p->info.typ->id = p->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3672 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1236 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyvsp[0].e)->info.typ->id = (yyvsp[0].e)->sym;
                          (yyval.typ) = (yyvsp[0].e)->info.typ;
                        }
#line 3681 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1241 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (!(yyvsp[0].e))
                          {
                            semerror("invalid base class");
                          }
                          else
                          {
                            if (!(yyvsp[0].e)->info.typ->ref && !(yyvsp[0].e)->info.typ->transient)
                            {
                              sprintf(errbuf, "class '%s' has incomplete type (if this class is not serializable then declare 'extern class %s')'", (yyvsp[0].e)->sym->name, (yyvsp[0].e)->sym->name);
                              semerror(errbuf);
                            }
                            (yyvsp[-2].e)->info.typ->base = (yyvsp[0].e)->info.typ->id;
                          }
                          (yyvsp[-2].e)->info.typ->id = (yyvsp[-2].e)->sym;
                          (yyval.typ) = (yyvsp[-2].e)->info.typ;
                        }
#line 3703 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1259 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sym = gensym("_Struct");
                          sprintf(errbuf, "anonymous struct will be named '%s'", sym->name);
                          semwarn(errbuf);
                          if ((p = entry(classtable, sym)))
                          {
                            if (p->info.typ->ref || p->info.typ->type != Tstruct)
                            {
                              sprintf(errbuf, "struct '%s' already declared at %s:%d", sym->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = sp->offset;
                            }
                          }
                          else
                          {
                            p = enter(classtable, sym);
                            p->info.typ = mkstruct(sp->table, sp->offset);
                          }
                          p->info.typ->id = sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3734 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1286 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(classtable, (yyvsp[-4].e)->sym)) && p->info.typ->ref)
                          {
                            if (is_mutable(p))
                            {
                              if (merge((Table*)p->info.typ->ref, sp->table))
                              {
                                sprintf(errbuf, "member name clash in struct '%s' declared at line %d", (yyvsp[-4].e)->sym->name, p->lineno);
                                semerror(errbuf);
                              }
                              p->info.typ->width += sp->offset;
                            }
                          }
                          else
                          {
                            p = reenter(classtable, (yyvsp[-4].e)->sym);
                            p->info.typ->ref = sp->table;
                            p->info.typ->width = sp->offset;
                            p->info.typ->id = p->sym;
                          }
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3762 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1309 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(classtable, (yyvsp[0].sym))))
                          {
                            if (p->info.typ->type == Tstruct)
                            {
                              (yyval.typ) = p->info.typ;
                            }
                            else
                            {
                              sprintf(errbuf, "'struct %s' redeclaration (line %d)", (yyvsp[0].sym)->name, p->lineno);
                              semerror(errbuf);
                              (yyval.typ) = mkint();
                            }
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[0].sym));
                            (yyval.typ) = p->info.typ = mkstruct(NULL, 0);
                            p->info.typ->id = (yyvsp[0].sym);
                          }
                        }
#line 3788 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1331 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sym = gensym("_Union");
                          sprintf(errbuf, "anonymous union will be named '%s'", sym->name);
                          semwarn(errbuf);
                          if ((p = entry(classtable, sym)))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "union or struct '%s' already declared at %s:%d", sym->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = sp->offset;
                            }
                          }
                          else
                          {
                            p = enter(classtable, sym);
                            p->info.typ = mkunion(sp->table, sp->offset);
                          }
                          p->info.typ->id = sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3819 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1358 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(classtable, (yyvsp[-4].sym))))
                          {
                            if (p->info.typ->ref || p->info.typ->type != Tunion)
                            {
                              sprintf(errbuf, "union '%s' already declared at %s:%d", (yyvsp[-4].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p = reenter(classtable, (yyvsp[-4].sym));
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = sp->offset;
                            }
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[-4].sym));
                            p->info.typ = mkunion(sp->table, sp->offset);
                          }
                          p->info.typ->id = (yyvsp[-4].sym);
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3848 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1382 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(classtable, (yyvsp[0].sym))))
                          {
                            if (p->info.typ->type == Tunion)
                            {
                              (yyval.typ) = p->info.typ;
                            }
                            else
                            {
                              sprintf(errbuf, "'union %s' redeclaration (line %d)", (yyvsp[0].sym)->name, p->lineno);
                              semerror(errbuf);
                              (yyval.typ) = mkint();
                            }
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[0].sym));
                            (yyval.typ) = p->info.typ = mkunion(NULL, 0);
                            p->info.typ->id = (yyvsp[0].sym);
                          }
                        }
#line 3874 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1404 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sym = gensym("_Enum");
                          sprintf(errbuf, "anonymous enum will be named '%s'", sym->name);
                          semwarn(errbuf);
                          if ((p = entry(enumtable, sym)))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", sym->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = 4; /* 4 = enum */
                            }
                          }
                          else
                          {
                            p = enter(enumtable, sym);
                            p->info.typ = mkenum(sp->table);
                          }
                          p->info.typ->id = sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3905 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1431 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sym = gensym("_Enum");
                          sprintf(errbuf, "anonymous enum will be named '%s'", sym->name);
                          semwarn(errbuf);
                          if ((p = entry(enumtable, sym)))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", sym->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = 9; /* 9 = mask */
                            }
                          }
                          else
                          {
                            p = enter(enumtable, sym);
                            p->info.typ = mkmask(sp->table);
                          }
                          p->info.typ->id = sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3936 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1458 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[-5].e)->sym)))
                            if (!p->info.typ->ref)
                              p->info.typ->ref = sp->table;
                          p->info.typ->id = (yyvsp[-5].e)->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3949 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1467 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[-5].e)->sym)))
                            if (!p->info.typ->ref)
                              p->info.typ->ref = sp->table;
                          p->info.typ->id = (yyvsp[-5].e)->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3962 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1476 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[-5].e)->sym)))
                          {
                            if (!p->info.typ->ref)
                            {
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = 9; /* 9 = mask */
                            }
                          }
                          p->info.typ->id = (yyvsp[-5].e)->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3980 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1490 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[-5].e)->sym)))
                          {
                            if (!p->info.typ->ref)
                            {
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = 9; /* 9 = mask */
                            }
                          }
                          p->info.typ->id = (yyvsp[-5].e)->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        }
#line 3998 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1503 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[0].sym))))
                          {
                            if (p->info.typ->type != Tenum)
                            {
                              sprintf(errbuf, "'enum %s' used where enum class is expected", (yyvsp[0].sym)->name);
                              semwarn(errbuf);
                            }
                            (yyval.typ) = p->info.typ;
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[0].sym));
                            (yyval.typ) = p->info.typ = mkenum(NULL);
                            p->info.typ->id = (yyvsp[0].sym);
                          }
                        }
#line 4020 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1520 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[0].sym))))
                          {
                            if (p->info.typ->type != Tenumsc)
                            {
                              sprintf(errbuf, "'enum class %s' used where enum is expected", (yyvsp[0].sym)->name);
                              semwarn(errbuf);
                            }
                            (yyval.typ) = p->info.typ;
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[0].sym));
                            (yyval.typ) = p->info.typ = mkenumsc(NULL);
                            p->info.typ->id = (yyvsp[0].sym);
                            (yyvsp[0].sym)->token = TYPE;
                          }
                        }
#line 4043 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1538 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(typetable, (yyvsp[0].sym))))
                          {
                            (yyval.typ) = p->info.typ;
                          }
                          else if ((p = entry(classtable, (yyvsp[0].sym))))
                          {
                            (yyval.typ) = p->info.typ;
                          }
                          else if ((p = entry(enumtable, (yyvsp[0].sym))))
                          {
                            (yyval.typ) = p->info.typ;
                          }
                          else if ((yyvsp[0].sym) == lookup("std::string") || (yyvsp[0].sym) == lookup("std::wstring"))
                          {
                            p = enter(classtable, (yyvsp[0].sym));
                            (yyval.typ) = p->info.typ = mkclass(NULL, 8);
                            p->info.typ->id = (yyvsp[0].sym);
                            if (cflag)
                              p->info.typ->transient = 1;       /* make std::string transient in C */
                            else
                              p->info.typ->transient = -2;      /* otherwise volatile in C++ */
                          }
                          else
                          {
                            sprintf(errbuf, "unknown type '%s'", (yyvsp[0].sym)->name);
                            semerror(errbuf);
                            (yyval.typ) = mkint();
                          }
                        }
#line 4078 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1569 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(templatetable, (yyvsp[-3].sym))))
                          {
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                            if (p->info.typ->transient)
                              (yyval.typ)->transient = p->info.typ->transient;
                          }
                          else if ((yyvsp[-3].sym) == lookup("std::deque"))
                          {
                            semwarn("To use std::deque, please also add #import \"import/stldeque.h\"");
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                          }
                          else if ((yyvsp[-3].sym) == lookup("std::list"))
                          {
                            semwarn("To use std::list, please also add #import \"import/stllist.h\"");
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                          }
                          else if ((yyvsp[-3].sym) == lookup("std::vector"))
                          {
                            semwarn("To use std::vector, please also add #import \"import/stlvector.h\"");
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                          }
                          else if ((yyvsp[-3].sym) == lookup("std::set"))
                          {
                            semwarn("To use std::set, please also add #import \"import/stlset.h\"");
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                          }
                          else if ((yyvsp[-3].sym) == lookup("std::queue"))
                          {
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                            (yyval.typ)->transient = 1; /* not serializable */
                          }
                          else if ((yyvsp[-3].sym) == lookup("std::stack"))
                          {
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                            (yyval.typ)->transient = 1; /* not serializable */
                          }
                          else if ((yyvsp[-3].sym) == lookup("std::shared_ptr") ||
                              (yyvsp[-3].sym) == lookup("std::unique_ptr") ||
                              (yyvsp[-3].sym) == lookup("std::auto_ptr"))
                          {
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                            (yyval.typ)->transient = -2; /* volatile indicates smart pointer template */
                          }
                          else if ((yyvsp[-3].sym) == lookup("std::weak_ptr") ||
                              (yyvsp[-3].sym) == lookup("std::function"))
                          {
                            (yyval.typ) = mktemplate((yyvsp[-1].rec).typ, (yyvsp[-3].sym));
                            (yyval.typ)->transient = 1; /* not serializable */
                          }
                          else
                          {
                            semerror("undefined template");
                            (yyval.typ) = mkint();
                          }
                        }
#line 4139 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1626 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sprintf(errbuf, "undeclared '%s'", (yyvsp[-1].sym)->name);
                          synerror(errbuf);
                          (yyval.typ) = mkint();
                        }
#line 4149 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1631 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          sprintf(errbuf, "perhaps trying to use a template with an undefined type parameter '%s'?", (yyvsp[-1].sym)->name);
                          synerror(errbuf);
                          (yyval.typ) = mkint();
                        }
#line 4159 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1636 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("perhaps trying to use an undefined template or template with a non-type template parameter? Declare 'template <typename T> class name'");
                          (yyval.typ) = mkint();
                        }
#line 4168 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1641 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("malformed class definition (use spacing around ':' to separate derived : base)");
                          yyerrok;
                          (yyval.typ) = mkint();
                        }
#line 4178 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1647 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("malformed struct definition");
                          yyerrok;
                          (yyval.typ) = mkint();
                        }
#line 4188 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1653 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("malformed union definition");
                          yyerrok;
                          (yyval.typ) = mkint();
                        }
#line 4198 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1659 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          synerror("malformed enum definition");
                          yyerrok;
                          (yyval.typ) = mkint();
                        }
#line 4208 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1665 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(classtable, (yyvsp[0].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              if (!is_mutable(p))
                              {
                                sprintf(errbuf, "struct '%s' already declared at %s:%d", (yyvsp[0].sym)->name, p->filename, p->lineno);
                                semerror(errbuf);
                              }
                            }
                            else
                            {
                              p = reenter(classtable, (yyvsp[0].sym));
                            }
                            p->info.typ->transient = transient;
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[0].sym));
                            p->info.typ = mkstruct(NULL, 0);
                          }
                          (yyval.e) = p;
                        }
#line 4237 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1690 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(classtable, (yyvsp[0].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              if (!is_mutable(p))
                              {
                                sprintf(errbuf, "class '%s' already declared at %s:%d (redundant 'class' specifier here?)", (yyvsp[0].sym)->name, p->filename, p->lineno);
                                semerror(errbuf);
                              }
                            }
                            else
                            {
                              p = reenter(classtable, (yyvsp[0].sym));
                            }
                            p->info.typ->transient = transient;
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[0].sym));
                            p->info.typ = mkclass(NULL, 0);
                            p->info.typ->id = p->sym;
                          }
                          (yyvsp[0].sym)->token = TYPE;
                          (yyval.e) = p;
                        }
#line 4268 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1717 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[-1].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", (yyvsp[-1].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[-1].sym));
                            p->info.typ = mkenum(0);
                          }
                          p->info.typ->width = (int)(yyvsp[0].i);
                          (yyval.e) = p;
                        }
#line 4290 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1735 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[-1].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", (yyvsp[-1].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[-1].sym));
                            p->info.typ = mkenumsc(0);
                          }
                          p->info.typ->width = (int)(yyvsp[0].i);
                          (yyvsp[-1].sym)->token = TYPE;
                          (yyval.e) = p;
                        }
#line 4313 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1755 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[-1].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", (yyvsp[-1].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p->info.typ = mkmask(0);
                            }
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[-1].sym));
                            p->info.typ = mkmask(0);
                          }
                          (yyval.e) = p;
                        }
#line 4338 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1777 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((p = entry(enumtable, (yyvsp[-1].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", (yyvsp[-1].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p->info.typ = mkmasksc(0);
                            }
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[-1].sym));
                            p->info.typ = mkmasksc(0);
                          }
                          (yyvsp[-1].sym)->token = TYPE;
                          (yyval.e) = p;
                        }
#line 4364 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1799 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.sym) = (yyvsp[0].sym);
                          if (!c11flag)
                            semwarn("To use scoped enumerations (enum class) you must also use soapcpp2 option -c++11 or -c++14");
                        }
#line 4374 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1804 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.sym) = (yyvsp[0].sym);
                          if (!c11flag)
                            semwarn("To use scoped enumerations (enum class) you must also use soapcpp2 option -c++11 or -c++14");
                        }
#line 4384 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1810 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = 1; }
#line 4390 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1811 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = 4; }
#line 4396 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1812 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = 2; }
#line 4402 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1813 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = 4; }
#line 4408 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1814 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = 4; }
#line 4414 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1815 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = 8; }
#line 4420 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1816 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.i) = 4;
                          p = entry(typetable, (yyvsp[0].sym));
                          if (!p)
                            p = entry(enumtable, (yyvsp[0].sym));
                          if (!p)
                            semerror("enum underlying type must be one of int8_t, int16_t, int32_t, int64_t");
                          else
                            (yyval.i) = p->info.typ->width;
                        }
#line 4435 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1826 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          semerror("enum underlying type must be one of int8_t, int16_t, int32_t, int64_t");
                          (yyval.i) = 4;
                        }
#line 4444 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1830 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = 4; /* 4 = enum */ }
#line 4450 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1832 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 4456 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1833 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 4462 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1835 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.e) = (yyvsp[0].e); }
#line 4468 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1836 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.e) = (yyvsp[0].e); }
#line 4474 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1837 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.e) = (yyvsp[0].e); }
#line 4480 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1838 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.e) = entry(classtable, (yyvsp[0].sym));
                          if (!(yyval.e))
                          {
                            p = entry(typetable, (yyvsp[0].sym));
                            if (p && (p->info.typ->type == Tclass || p->info.typ->type == Tstruct))
                              (yyval.e) = p;
                          }
                        }
#line 4494 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1847 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.e) = entry(classtable, (yyvsp[0].sym)); }
#line 4500 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1849 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (transient <= -2)
                            transient = 0;
                          permission = 0;
                          enterscope(mktable(NULL), 0);
                          sp->entry = NULL;
                        }
#line 4512 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1857 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (transient <= -2)
                            transient = 0;
                          permission = 0;
                          enterscope(mktable(NULL), 0);
                          sp->entry = NULL;
                          sp->grow = False;
                        }
#line 4525 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1866 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          enterscope(mktable(NULL), 0);
                          sp->entry = NULL;
                          sp->mask = True;
                          sp->val = 1;
                        }
#line 4536 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1873 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 4542 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1874 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { }
#line 4548 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1876 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (sp->table->level == INTERNAL)
                            transient |= 1;
                          permission = 0;
                          enterscope(mktable(NULL), 0);
                          sp->entry = NULL;
                          sp->table->level = PARAM;
                        }
#line 4561 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1885 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sauto; }
#line 4567 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1886 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sregister; }
#line 4573 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1887 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sstatic; }
#line 4579 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1888 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sexplicit; }
#line 4585 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1889 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sextern; transient = 1; }
#line 4591 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1890 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Stypedef; }
#line 4597 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1891 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Svirtual; }
#line 4603 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1892 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sconst; }
#line 4609 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1893 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sfinal; }
#line 4615 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1894 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Soverride; }
#line 4621 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1895 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sfriend; }
#line 4627 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1896 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sinline; }
#line 4633 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1897 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = SmustUnderstand; }
#line 4639 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1898 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sreturn; }
#line 4645 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1899 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.sto) = Sattribute;
                          if (eflag)
                            semwarn("SOAP RPC encoding does not support XML attributes");
                        }
#line 4655 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1904 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sspecial; }
#line 4661 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1905 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sextern; transient = -2; }
#line 4667 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1906 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Smutable; transient = -4; }
#line 4673 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1908 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Snone; }
#line 4679 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1909 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) |= Sconstobj; }
#line 4685 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1910 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) |= Sfinal; }
#line 4691 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1911 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) |= Soverride; }
#line 4697 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1913 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Snone; }
#line 4703 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1914 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Sabstract; }
#line 4709 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1916 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Snone; }
#line 4715 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1917 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.sto) = Svirtual; }
#line 4721 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1919 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = tmp = sp->node; }
#line 4727 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1920 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          /* handle const pointers, such as const char* */
                          if ((tmp.sto & Sconst))
                            tmp.sto = (Storage)(((int)tmp.sto & ~Sconst) | Sconstptr);
                          tmp.typ = mkpointer(tmp.typ);
                          tmp.typ->transient = transient;
                          (yyval.rec) = tmp;
                        }
#line 4740 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1928 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          tmp.typ = mkreference(tmp.typ);
                          tmp.typ->transient = transient;
                          (yyval.rec) = tmp;
                        }
#line 4750 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1933 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          tmp.typ = mkrvalueref(tmp.typ);
                          tmp.typ->transient = transient;
                          (yyval.rec) = tmp;
                        }
#line 4760 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1939 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = tmp; }
#line 4766 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1941 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (!bflag && (yyvsp[0].rec).typ->type == Tchar)
                          {
                            sprintf(errbuf, "char[" SOAP_LONG_FORMAT "] will be serialized as an array of " SOAP_LONG_FORMAT " bytes: use soapcpp2 option -b to enable char[] string serialization or use char* for strings", (yyvsp[-2].rec).val.i, (yyvsp[-2].rec).val.i);
                            semwarn(errbuf);
                          }
                          if ((yyvsp[-2].rec).hasval && (yyvsp[-2].rec).typ->type == Tint && (yyvsp[-2].rec).val.i > 0 && (yyvsp[0].rec).typ->width > 0)
                          {
                            (yyval.rec).typ = mkarray((yyvsp[0].rec).typ, (int) (yyvsp[-2].rec).val.i * (yyvsp[0].rec).typ->width);
                          }
                          else
                          {
                            (yyval.rec).typ = mkarray((yyvsp[0].rec).typ, 0);
                            semerror("undetermined array size");
                          }
                          (yyval.rec).sto = (yyvsp[0].rec).sto;
                        }
#line 4788 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1958 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkpointer((yyvsp[0].rec).typ); /* zero size array = pointer */
                          (yyval.rec).sto = (yyvsp[0].rec).sto;
                        }
#line 4797 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1963 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[0].rec).typ->type == Tstruct || (yyvsp[0].rec).typ->type == Tclass)
                          {
                            if (!(yyvsp[0].rec).typ->ref && !(yyvsp[0].rec).typ->transient && !((yyvsp[0].rec).sto & Stypedef))
                            {
                              if ((yyvsp[0].rec).typ->type == Tstruct)
                                sprintf(errbuf, "struct '%s' has incomplete type (if this struct is not serializable then declare 'extern struct %s')", (yyvsp[0].rec).typ->id->name, (yyvsp[0].rec).typ->id->name);
                              else
                                sprintf(errbuf, "class '%s' has incomplete type (if this class is not serializable then declare 'extern class %s')", (yyvsp[0].rec).typ->id->name, (yyvsp[0].rec).typ->id->name);
                              semerror(errbuf);
                            }
                          }
                          (yyval.rec) = (yyvsp[0].rec);
                        }
#line 4816 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1978 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 4822 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1979 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[-1].rec).hasval)
                          {
                            (yyval.rec).typ = (yyvsp[-1].rec).typ;
                            (yyval.rec).hasval = True;
                            (yyval.rec).val = (yyvsp[-1].rec).val;
                          }
                          else
                          {
                            (yyval.rec).hasval = False;
                            semerror("initialization expression not constant");
                          }
                        }
#line 4840 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1993 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).hasval = False; }
#line 4846 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1994 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[0].rec).hasval)
                          {
                            (yyval.rec).typ = (yyvsp[0].rec).typ;
                            (yyval.rec).hasval = True;
                            (yyval.rec).val = (yyvsp[0].rec).val;
                          }
                          else
                          {
                            (yyval.rec).hasval = False;
                            semerror("initialization expression not constant");
                          }
                        }
#line 4864 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2008 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.s) = NULL; }
#line 4870 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 218:
#line 2009 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 4876 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 219:
#line 2011 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).minOccurs = -1;
                          (yyval.rec).maxOccurs = 1;
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = 0.0;
                          (yyval.rec).incmin = True;
                          (yyval.rec).incmax = True;
                          (yyval.rec).pattern = NULL;
                        }
#line 4892 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 220:
#line 2022 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).minOccurs = (yyvsp[0].i);
                          (yyval.rec).maxOccurs = 1;
                          if ((yyval.rec).minOccurs < 0)
                            (yyval.rec).minOccurs = -1;
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = 0.0;
                          (yyval.rec).incmin = True;
                          (yyval.rec).incmax = True;
                          (yyval.rec).pattern = NULL;
                        }
#line 4910 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2035 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).minOccurs = (yyvsp[-1].i);
                          (yyval.rec).maxOccurs = 1;
                          if ((yyval.rec).minOccurs < 0)
                            (yyval.rec).minOccurs = -1;
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = 0.0;
                          (yyval.rec).incmin = True;
                          (yyval.rec).incmax = True;
                          (yyval.rec).pattern = NULL;
                        }
#line 4928 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2048 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).minOccurs = (yyvsp[-2].i);
                          (yyval.rec).maxOccurs = (yyvsp[0].i);
                          if ((yyval.rec).minOccurs < 0 || (yyval.rec).maxOccurs < 0)
                          {
                            (yyval.rec).minOccurs = -1;
                            (yyval.rec).maxOccurs = 1;
                          }
                          else if ((yyval.rec).minOccurs > (yyval.rec).maxOccurs)
                          {
                            (yyval.rec).minOccurs = -1;
                            (yyval.rec).maxOccurs = 1;
                          }
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = 0.0;
                          (yyval.rec).incmin = True;
                          (yyval.rec).incmax = True;
                          (yyval.rec).pattern = NULL;
                        }
#line 4954 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2069 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).minOccurs = -1;
                          (yyval.rec).maxOccurs = (yyvsp[0].i);
                          if ((yyval.rec).maxOccurs < 0)
                          {
                            (yyval.rec).minOccurs = -1;
                            (yyval.rec).maxOccurs = 1;
                          }
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = 0.0;
                          (yyval.rec).incmin = True;
                          (yyval.rec).incmax = True;
                          (yyval.rec).pattern = NULL;
                        }
#line 4975 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2086 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).minOccurs = -1;
                          (yyval.rec).maxOccurs = 1;
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = 0.0;
                          (yyval.rec).incmin = True;
                          (yyval.rec).incmax = True;
                          (yyval.rec).nillable = (yyvsp[-1].i);
                          (yyval.rec).pattern = (yyvsp[0].s);
                        }
#line 4992 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2099 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).hasmin = True;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).incmin = (yyvsp[0].rec).incmin;
                          (yyval.rec).incmax = (yyvsp[0].rec).incmax;
                          (yyval.rec).minOccurs = (LONG64)(yyvsp[-1].r);
                          (yyval.rec).maxOccurs = 1;
                          if ((yyval.rec).minOccurs < 0)
                            (yyval.rec).minOccurs = -1;
                          (yyval.rec).min = (yyvsp[-1].r);
                          (yyval.rec).max = 0.0;
                          (yyval.rec).nillable = (yyvsp[-3].i);
                          (yyval.rec).pattern = (yyvsp[-2].s);
                        }
#line 5011 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2114 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).hasmin = True;
                          (yyval.rec).hasmax = True;
                          (yyval.rec).incmin = (yyvsp[-1].rec).incmin;
                          (yyval.rec).incmax = (yyvsp[-1].rec).incmax;
                          (yyval.rec).minOccurs = (LONG64)(yyvsp[-2].r);
                          (yyval.rec).maxOccurs = (LONG64)(yyvsp[0].r);
                          if ((yyval.rec).minOccurs < 0 || (yyval.rec).maxOccurs < 0)
                          {
                            (yyval.rec).minOccurs = -1;
                            (yyval.rec).maxOccurs = 1;
                          }
                          else if ((yyval.rec).minOccurs > (yyval.rec).maxOccurs)
                          {
                            (yyval.rec).minOccurs = -1;
                            (yyval.rec).maxOccurs = 1;
                          }
                          (yyval.rec).min = (yyvsp[-2].r);
                          (yyval.rec).max = (yyvsp[0].r);
                          (yyval.rec).nillable = (yyvsp[-4].i);
                          (yyval.rec).pattern = (yyvsp[-3].s);
                        }
#line 5038 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2136 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = True;
                          (yyval.rec).incmin = (yyvsp[-1].rec).incmin;
                          (yyval.rec).incmax = (yyvsp[-1].rec).incmax;
                          (yyval.rec).minOccurs = -1;
                          (yyval.rec).maxOccurs = (LONG64)(yyvsp[0].r);
                          if ((yyval.rec).maxOccurs < 0)
                          {
                            (yyval.rec).minOccurs = -1;
                            (yyval.rec).maxOccurs = 1;
                          }
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = (yyvsp[0].r);
                          (yyval.rec).nillable = (yyvsp[-3].i);
                          (yyval.rec).pattern = (yyvsp[-2].s);
                        }
#line 5060 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2154 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = False; }
#line 5066 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2155 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.i) = True; }
#line 5072 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2157 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.s) = NULL; }
#line 5078 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 231:
#line 2158 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 5084 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 232:
#line 2160 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.r) = (yyvsp[0].r); }
#line 5090 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 233:
#line 2161 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.r) = (double)(yyvsp[0].i); }
#line 5096 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 234:
#line 2162 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.r) = (double)(yyvsp[0].c); }
#line 5102 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2163 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.r) = +(yyvsp[0].r); }
#line 5108 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2164 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.r) = -(yyvsp[0].r); }
#line 5114 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2166 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = (yyval.rec).incmax = True; }
#line 5120 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2167 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = (yyval.rec).incmax = True; }
#line 5126 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 239:
#line 2168 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = False; (yyval.rec).incmax = True; }
#line 5132 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 240:
#line 2169 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = False; (yyval.rec).incmax = True; }
#line 5138 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2171 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = (yyval.rec).incmax = True; }
#line 5144 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2172 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = False; (yyval.rec).incmax = True; }
#line 5150 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2173 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = True; (yyval.rec).incmax = False; }
#line 5156 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 244:
#line 2174 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = False; (yyval.rec).incmax = False; }
#line 5162 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2175 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = False; (yyval.rec).incmax = False; }
#line 5168 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2177 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = (yyval.rec).incmax = True; }
#line 5174 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2178 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = True; (yyval.rec).incmax = False; }
#line 5180 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2179 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).incmin = True; (yyval.rec).incmax = False; }
#line 5186 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2188 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5192 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2189 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5198 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2193 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = (yyvsp[-2].rec).typ;
                          (yyval.rec).sto = Snone;
                          (yyval.rec).hasval = False;
                        }
#line 5208 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2201 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5214 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 254:
#line 2204 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).hasval = False;
                          (yyval.rec).typ = mkint();
                        }
#line 5223 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2208 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5229 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2210 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5235 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 257:
#line 2213 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec).hasval = False;
                          (yyval.rec).typ = mkint();
                        }
#line 5243 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2216 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5249 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2218 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5255 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2221 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = iop("|", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5261 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 261:
#line 2222 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = iop("^", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5267 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 262:
#line 2223 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = iop("&", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5273 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 263:
#line 2224 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = relop("==", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5279 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 264:
#line 2225 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = relop("!=", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5285 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 265:
#line 2226 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = relop("<", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5291 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 266:
#line 2227 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = relop("<=", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5297 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 267:
#line 2228 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = relop(">", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5303 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 268:
#line 2229 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = relop(">=", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5309 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 269:
#line 2230 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = iop("<<", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5315 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 270:
#line 2231 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = iop(">>", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5321 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 271:
#line 2232 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = op("+", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5327 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 272:
#line 2233 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = op("-", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5333 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 273:
#line 2234 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = op("*", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5339 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 274:
#line 2235 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = op("/", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5345 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 275:
#line 2236 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = iop("%", (yyvsp[-2].rec), (yyvsp[0].rec)); }
#line 5351 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 276:
#line 2237 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5357 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 277:
#line 2240 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[0].rec).hasval)
                            (yyval.rec).val.i = !(yyvsp[0].rec).val.i;
                          (yyval.rec).typ = (yyvsp[0].rec).typ;
                          (yyval.rec).hasval = (yyvsp[0].rec).hasval;
                        }
#line 5368 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 278:
#line 2246 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[0].rec).hasval)
                            (yyval.rec).val.i = ~(yyvsp[0].rec).val.i;
                          (yyval.rec).typ = (yyvsp[0].rec).typ;
                          (yyval.rec).hasval = (yyvsp[0].rec).hasval;
                        }
#line 5379 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 279:
#line 2252 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[0].rec).hasval)
                          {
                            if (integer((yyvsp[0].rec).typ))
                              (yyval.rec).val.i = -(yyvsp[0].rec).val.i;
                            else if (real((yyvsp[0].rec).typ))
                              (yyval.rec).val.r = -(yyvsp[0].rec).val.r;
                            else
                              typerror("string?");
                          }
                          (yyval.rec).typ = (yyvsp[0].rec).typ;
                          (yyval.rec).hasval = (yyvsp[0].rec).hasval;
                        }
#line 5397 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 280:
#line 2265 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5403 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 281:
#line 2266 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if ((yyvsp[0].rec).typ->type == Tpointer)
                            (yyval.rec).typ = (Tnode*)(yyvsp[0].rec).typ->ref;
                          else
                            typerror("dereference of non-pointer type");
                          (yyval.rec).sto = Snone;
                          (yyval.rec).hasval = False;
                        }
#line 5416 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 282:
#line 2274 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkpointer((yyvsp[0].rec).typ);
                          (yyval.rec).sto = Snone;
                          (yyval.rec).hasval = False;
                        }
#line 5426 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 283:
#line 2280 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).hasval = True;
                          (yyval.rec).typ = mkint();
                          (yyval.rec).val.i = (yyvsp[-1].rec).typ->width;
                        }
#line 5436 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 284:
#line 2285 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[0].rec); }
#line 5442 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 285:
#line 2288 "soapcpp2_yacc.y" /* yacc.c:1646  */
    { (yyval.rec) = (yyvsp[-1].rec); }
#line 5448 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 286:
#line 2289 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          if (!(p = enumentry((yyvsp[0].sym))))
                            p = undefined((yyvsp[0].sym));
                          else
                            (yyval.rec).hasval = True;
                          (yyval.rec).typ = p->info.typ;
                          (yyval.rec).val = p->info.val;
                        }
#line 5461 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 287:
#line 2297 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkint();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = (yyvsp[0].i);
                        }
#line 5471 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 288:
#line 2302 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkint();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = 0;
                        }
#line 5481 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 289:
#line 2307 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkfloat();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.r = (yyvsp[0].r);
                        }
#line 5491 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 290:
#line 2312 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkchar();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = (yyvsp[0].c);
                        }
#line 5501 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 291:
#line 2317 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkstring();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.s = (yyvsp[0].s);
                        }
#line 5511 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 292:
#line 2322 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkbool();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = 0;
                        }
#line 5521 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;

  case 293:
#line 2327 "soapcpp2_yacc.y" /* yacc.c:1646  */
    {
                          (yyval.rec).typ = mkbool();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = 1;
                        }
#line 5531 "soapcpp2_yacc.c" /* yacc.c:1646  */
    break;


#line 5535 "soapcpp2_yacc.c" /* yacc.c:1646  */
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
#line 2334 "soapcpp2_yacc.y" /* yacc.c:1906  */


/*
 * ???
 */
int
yywrap(void)
{
  return 1;
}

/**************************************\

        Support routines

\**************************************/

static Node
op(const char *op, Node p, Node q)
{
  Node  r;
  r.typ = p.typ;
  r.sto = Snone;
  if (p.hasval && q.hasval)
  {
    if (integer(p.typ) && integer(q.typ))
      switch (op[0])
      {
        case '|': r.val.i = p.val.i |  q.val.i; break;
        case '^': r.val.i = p.val.i ^  q.val.i; break;
        case '&': r.val.i = p.val.i &  q.val.i; break;
        case '<': r.val.i = p.val.i << q.val.i; break;
        case '>': r.val.i = p.val.i >> q.val.i; break;
        case '+': r.val.i = p.val.i +  q.val.i; break;
        case '-': r.val.i = p.val.i -  q.val.i; break;
        case '*': r.val.i = p.val.i *  q.val.i; break;
        case '/': r.val.i = p.val.i /  q.val.i; break;
        case '%': r.val.i = p.val.i %  q.val.i; break;
        default:  typerror(op);
      }
    else if (real(p.typ) && real(q.typ))
      switch (op[0])
      {
        case '+': r.val.r = p.val.r + q.val.r; break;
        case '-': r.val.r = p.val.r - q.val.r; break;
        case '*': r.val.r = p.val.r * q.val.r; break;
        case '/': r.val.r = p.val.r / q.val.r; break;
        default:  typerror(op);
      }
    else
      semerror("invalid constant operation");
    r.hasval = True;
  }
  else
  {
    r.typ = mgtype(p.typ, q.typ);
    r.hasval = False;
  }
  return r;
}

static Node
iop(const char *iop, Node p, Node q)
{
  if (integer(p.typ) && integer(q.typ))
    return op(iop, p, q);
  typerror("integer operands only");
  return p;
}

static Node
relop(const char *op, Node p, Node q)
{
  Node  r;
  r.typ = mkint();
  r.sto = Snone;
  r.hasval = True;
  r.val.i = 1;
  sprintf(errbuf, "comparison '%s' not evaluated and considered true", op);
  semwarn(errbuf);
  if (p.typ->type != Tpointer || p.typ != q.typ)
    r.typ = mgtype(p.typ, q.typ);
  return r;
}

/**************************************\

        Scope management

\**************************************/

/*
mkscope - initialize scope stack with a new table and offset
*/
static void
mkscope(Table *table, int offset)
{
  sp = stack-1;
  enterscope(table, offset);
}

/*
enterscope - enter a new scope by pushing a new table and offset on the stack
*/
static void
enterscope(Table *table, int offset)
{
  if (++sp == stack+MAXNEST)
    execerror("maximum scope depth exceeded");
  sp->table = table;
  sp->val = 0;
  sp->offset = offset;
  sp->grow = True;      /* by default, offset grows */
  sp->mask = False;
}

/*
exitscope - exit a scope by popping the table and offset from the stack
*/
static void
exitscope(void)
{
  check(sp-- != stack, "exitscope() has no matching enterscope()");
}

/**************************************\

        Undefined symbol

\**************************************/

static Entry*
undefined(Symbol *sym)
{
  Entry *p;
  sprintf(errbuf, "undefined identifier '%s'", sym->name);
  semwarn(errbuf);
  p = enter(sp->table, sym);
  p->level = GLOBAL;
  p->info.typ = mkint();
  p->info.sto = Sextern;
  p->info.hasval = False;
  return p;
}

/*
mgtype - return most general type among two numerical types
*/
Tnode*
mgtype(Tnode *typ1, Tnode *typ2)
{
  if (numeric(typ1) && numeric(typ2))
  {
    if (typ1->type < typ2->type)
      return typ2;
  }
  else
  {
    typerror("non-numeric type");
  }
  return typ1;
}

/**************************************\

        Type checks

\**************************************/

static int
integer(Tnode *typ)
{
  switch (typ->type)
  {
    case Tchar:
    case Tshort:
    case Tint:
    case Tlong: return True;
    default:    break;
  }
  return False;
}

static int
real(Tnode *typ)
{
  switch (typ->type)
  {
    case Tfloat:
    case Tdouble:
    case Tldouble: return True;
    default:       break;
  }
  return False;
}

static int
numeric(Tnode *typ)
{
  return integer(typ) || real(typ);
}

static void
add_fault(void)
{
  Table *t;
  Entry *p1, *p2, *p3, *p4;
  Symbol *s1, *s2, *s3, *s4;
  imported = NULL;
  s1 = lookup("SOAP_ENV__Code");
  p1 = entry(classtable, s1);
  if (!p1 || !p1->info.typ->ref)
  {
    t = mktable(NULL);
    if (!p1)
    {
      p1 = enter(classtable, s1);
      p1->info.typ = mkstruct(t, 3*4);
      p1->info.typ->id = s1;
    }
    else
    {
      p1->info.typ->ref = t;
    }
    p2 = enter(t, lookup("SOAP_ENV__Value"));
    p2->info.typ = qname;
    p2->info.minOccurs = 0;
    p2 = enter(t, lookup("SOAP_ENV__Subcode"));
    p2->info.typ = mkpointer(p1->info.typ);
    p2->info.minOccurs = 0;
  }
  s2 = lookup("SOAP_ENV__Detail");
  p2 = entry(classtable, s2);
  if (!p2 || !p2->info.typ->ref)
  {
    t = mktable(NULL);
    if (!p2)
    {
      p2 = enter(classtable, s2);
      p2->info.typ = mkstruct(t, 3*4);
      p2->info.typ->id = s2;
    }
    else
    {
      p2->info.typ->ref = t;
    }
    p3 = enter(t, lookup("__any"));
    p3->info.typ = xml;
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("__type"));
    p3->info.typ = mkint();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("fault"));
    p3->info.typ = mkpointer(mkvoid());
    p3->info.minOccurs = 0;
    custom_fault = 0;
  }
  s4 = lookup("SOAP_ENV__Reason");
  p4 = entry(classtable, s4);
  if (!p4 || !p4->info.typ->ref)
  {
    t = mktable(NULL);
    if (!p4)
    {
      p4 = enter(classtable, s4);
      p4->info.typ = mkstruct(t, 4);
      p4->info.typ->id = s4;
    }
    else
    {
      p4->info.typ->ref = t;
    }
    p3 = enter(t, lookup("SOAP_ENV__Text"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
  }
  s3 = lookup("SOAP_ENV__Fault");
  p3 = entry(classtable, s3);
  if (!p3 || !p3->info.typ->ref)
  {
    t = mktable(NULL);
    if (!p3)
    {
      p3 = enter(classtable, s3);
      p3->info.typ = mkstruct(t, 9*4);
      p3->info.typ->id = s3;
    }
    else
    {
      p3->info.typ->ref = t;
    }
    p3 = enter(t, lookup("faultcode"));
    p3->info.typ = qname;
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("faultstring"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("faultactor"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("detail"));
    p3->info.typ = mkpointer(p2->info.typ);
    p3->info.minOccurs = 0;
    p3 = enter(t, s1);
    p3->info.typ = mkpointer(p1->info.typ);
    p3->info.minOccurs = 0;
    p3 = enter(t, s4);
    p3->info.typ = mkpointer(p4->info.typ);
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("SOAP_ENV__Node"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("SOAP_ENV__Role"));
    p3->info.typ = mkstring();
    p3->info.minOccurs = 0;
    p3 = enter(t, lookup("SOAP_ENV__Detail"));
    p3->info.typ = mkpointer(p2->info.typ);
    p3->info.minOccurs = 0;
  }
}

static void
add_soap(void)
{
  Symbol *s = lookup("soap");
  p = enter(classtable, s);
  p->info.typ = mkstruct(NULL, 0);
  p->info.typ->transient = -2;
  p->info.typ->id = s;
}

static void
add_XML(void)
{
  Symbol *s = lookup("_XML");
  s->token = TYPE;
  p = enter(typetable, s);
  xml = p->info.typ = mksymtype(mkstring(), s);
  p->info.sto = Stypedef;
}

static void
add_qname(void)
{
  Symbol *s = lookup("_QName");
  s->token = TYPE;
  p = enter(typetable, s);
  qname = p->info.typ = mksymtype(mkstring(), s);
  p->info.sto = Stypedef;
}

static void
add_header(void)
{
  Table *t;
  Entry *p;
  Symbol *s = lookup("SOAP_ENV__Header");
  imported = NULL;
  p = entry(classtable, s);
  if (!p || !p->info.typ->ref)
  {
    t = mktable(NULL);
    if (!p)
      p = enter(classtable, s);
    p->info.typ = mkstruct(t, 0);
    p->info.typ->id = s;
    custom_header = 0;
  }
}

static void
add_response(Entry *fun, Entry *ret)
{
  Table *t;
  Entry *p, *q;
  Symbol *s;
  size_t i = 0, j, n = strlen(fun->sym->name);
  char *r = (char*)emalloc(n+100);
  strcpy(r, fun->sym->name);
  strcat(r, "Response");
  do
  {
    for (j = 0; j < i; j++)
      r[n+j+8] = '_';
    r[n+i+8] = '\0';
    if (!(s = lookup(r)))
      s = install(r, ID);
    i++;
  }
  while (entry(classtable, s));
  free(r);
  t = mktable(NULL);
  q = enter(t, ret->sym);
  q->info = ret->info;
  if (q->info.typ->type == Treference)
    q->info.typ = (Tnode*)q->info.typ->ref;
  p = enter(classtable, s);
  p->info.typ = mkstruct(t, 4);
  p->info.typ->id = s;
  fun->info.typ->response = p;
}

static void
add_result(Tnode *typ)
{
  Entry *p;
  if (!typ->ref || !((Tnode*)typ->ref)->ref)
  {
    semwarn("response struct/class must be declared before used in function prototype");
    return;
  }
  for (p = ((Table*)((Tnode*)typ->ref)->ref)->list; p; p = p->next)
    if (p->info.sto & Sreturn)
      return;
  for (p = ((Table*)((Tnode*)typ->ref)->ref)->list; p; p = p->next)
  {
    if (p->info.typ->type != Tfun &&
        !(p->info.sto & Sattribute) &&
        !is_transient(p->info.typ) &&
        !(p->info.sto & (Sprivate|Sprotected)))
      p->info.sto = (Storage)((int)p->info.sto | (int)Sreturn);
    return;
  }
}

static void
add_request(Symbol *sym, Scope *sp)
{
  Entry *p;
  unlinklast(sp->table);
  if ((p = entry(classtable, sym)))
  {
    if (p->info.typ->ref)
    {
      sprintf(errbuf, "service operation name clash: struct/class '%s' already declared at %s:%d", sym->name, p->filename, p->lineno);
      semerror(errbuf);
    }
    else
    {
      p->info.typ->ref = sp->table;
      p->info.typ->width = sp->offset;
    }
  }
  else
  {
    p = enter(classtable, sym);
    p->info.typ = mkstruct(sp->table, sp->offset);
    p->info.typ->id = sym;
  }
  if (p->info.typ->ref)
  {
    for (q = ((Table*)p->info.typ->ref)->list; q; q = q->next)
    {
      if (q->info.typ->type == Treference || q->info.typ->type == Trvalueref)
      {
        sprintf(errbuf, "parameter '%s' of service operation function '%s()' in %s:%d cannot be passed by reference: use a pointer instead", q->sym->name, sym->name, q->filename, q->lineno);
        semwarn(errbuf);
      }
      else if ((q->info.sto & (Sconst | Sconstptr)))
      {
        if (!is_string(q->info.typ) && !is_wstring(q->info.typ))
        {
          sprintf(errbuf, "parameter '%s' of service operation function '%s()' in %s:%d cannot be declared const", q->sym->name, sym->name, q->filename, q->lineno);
          semwarn(errbuf);
        }
      }
      else if ((q->info.sto & ~(Sattribute | Sextern | Sspecial)))
      {
        sprintf(errbuf, "invalid parameter '%s' of service operation function '%s()' in %s:%d", q->sym->name, sym->name, q->filename, q->lineno);
        semwarn(errbuf);
      }
    }
  }
}
