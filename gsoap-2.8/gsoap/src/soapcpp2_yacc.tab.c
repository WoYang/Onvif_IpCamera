/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     RA = 331,
     LA = 332,
     OA = 333,
     XA = 334,
     AA = 335,
     MA = 336,
     DA = 337,
     TA = 338,
     NA = 339,
     PA = 340,
     OR = 341,
     AN = 342,
     NE = 343,
     EQ = 344,
     GE = 345,
     LE = 346,
     RS = 347,
     LS = 348,
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
#define RA 331
#define LA 332
#define OA 333
#define XA 334
#define AA 335
#define MA 336
#define DA 337
#define TA 338
#define NA 339
#define PA 340
#define OR 341
#define AN 342
#define NE 343
#define EQ 344
#define GE 345
#define LE 346
#define RS 347
#define LS 348
#define AR 349
#define PP 350
#define NN 351




/* Copy the first part of user declarations.  */
#line 51 "soapcpp2_yacc.y"


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 153 "soapcpp2_yacc.y"
{
  Symbol  *sym;
  LONG64  i;
  double  r;
  char    c;
  char    *s;
  Tnode   *typ;
  Storage sto;
  Node    rec;
  Entry   *e;
}
/* Line 193 of yacc.c.  */
#line 397 "soapcpp2_yacc.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 410 "soapcpp2_yacc.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  450

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   117,     2,     2,   121,   107,    94,     2,
     119,   116,   105,   103,    76,   104,     2,   106,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,   113,
      97,    77,    98,    88,   120,     2,     2,     2,     2,     2,
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
      87,    90,    91,    95,    96,    99,   100,   101,   102,   108,
     109,   110
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    13,    15,    16,    19,    22,
      24,    26,    28,    31,    33,    34,    38,    43,    48,    53,
      58,    61,    63,    65,    66,    67,    68,    70,    73,    77,
      80,    83,    87,    92,    95,    98,   105,   108,   110,   112,
     114,   117,   120,   123,   126,   129,   132,   135,   138,   141,
     144,   147,   150,   153,   156,   159,   162,   165,   168,   171,
     174,   177,   180,   183,   186,   189,   192,   195,   198,   201,
     204,   207,   210,   213,   216,   220,   224,   227,   229,   233,
     241,   242,   243,   245,   247,   251,   254,   257,   264,   265,
     267,   269,   276,   280,   285,   286,   289,   292,   294,   296,
     299,   302,   304,   306,   308,   310,   312,   314,   316,   318,
     320,   322,   324,   326,   328,   330,   332,   334,   336,   338,
     340,   348,   354,   360,   368,   370,   374,   380,   386,   389,
     395,   402,   405,   412,   420,   427,   434,   441,   448,   451,
     454,   456,   461,   465,   469,   472,   476,   480,   484,   488,
     491,   494,   498,   502,   507,   512,   515,   518,   521,   524,
     527,   530,   533,   536,   539,   541,   542,   544,   546,   549,
     552,   555,   557,   560,   561,   562,   563,   564,   566,   567,
     569,   571,   573,   575,   577,   579,   581,   583,   585,   587,
     589,   591,   593,   595,   597,   599,   601,   603,   604,   607,
     610,   613,   614,   617,   618,   620,   621,   624,   627,   630,
     631,   636,   640,   642,   644,   648,   649,   652,   653,   655,
     656,   658,   661,   665,   668,   671,   676,   682,   687,   688,
     690,   691,   693,   695,   697,   699,   702,   705,   706,   708,
     711,   713,   715,   718,   721,   725,   727,   729,   732,   734,
     738,   740,   746,   748,   750,   754,   756,   758,   762,   764,
     766,   770,   774,   778,   782,   786,   790,   794,   798,   802,
     806,   810,   814,   818,   822,   826,   830,   832,   835,   838,
     841,   844,   847,   850,   855,   857,   861,   863,   865,   867,
     869,   871,   873,   875
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     123,     0,    -1,   124,   125,    -1,    -1,    50,    68,   111,
     126,   112,    -1,   126,    -1,    -1,   126,   127,    -1,   135,
     113,    -1,   128,    -1,   130,    -1,   131,    -1,     1,   113,
      -1,     3,    -1,    -1,   135,   113,   129,    -1,    37,    89,
     132,   129,    -1,    38,    89,   133,   129,    -1,    39,    89,
     134,   129,    -1,   130,   129,   131,   129,    -1,     1,   113,
      -1,   114,    -1,   115,    -1,    -1,    -1,    -1,   150,    -1,
     150,   136,    -1,   150,   137,   142,    -1,   140,   142,    -1,
     141,   142,    -1,   135,    76,   136,    -1,   135,    76,   137,
     142,    -1,     1,    68,    -1,     1,   116,    -1,   172,    68,
     174,   177,   179,   175,    -1,   172,   139,    -1,    68,    -1,
      70,    -1,    68,    -1,    42,   117,    -1,    42,   118,    -1,
      42,    77,    -1,    42,    87,    -1,    42,    86,    -1,    42,
      85,    -1,    42,    84,    -1,    42,    83,    -1,    42,    82,
      -1,    42,    81,    -1,    42,    80,    -1,    42,    79,    -1,
      42,    78,    -1,    42,    90,    -1,    42,    91,    -1,    42,
      92,    -1,    42,    93,    -1,    42,    94,    -1,    42,    96,
      -1,    42,    95,    -1,    42,    97,    -1,    42,   100,    -1,
      42,    98,    -1,    42,    99,    -1,    42,   102,    -1,    42,
     101,    -1,    42,   103,    -1,    42,   104,    -1,    42,   105,
      -1,    42,   106,    -1,    42,   107,    -1,    42,   109,    -1,
      42,   110,    -1,    42,   108,    -1,    42,   114,   115,    -1,
      42,   119,   116,    -1,    42,   149,    -1,    70,    -1,   171,
     118,    70,    -1,   143,   119,   167,   144,   116,   169,   170,
      -1,    -1,    -1,   145,    -1,   146,    -1,   146,    76,   145,
      -1,     1,    68,    -1,     1,    76,    -1,   151,   172,   147,
     174,   178,   176,    -1,    -1,    68,    -1,   149,    -1,   151,
     172,   119,   167,   144,   116,    -1,   151,   172,   173,    -1,
     151,   172,    68,   173,    -1,    -1,   168,   150,    -1,   152,
     150,    -1,   168,    -1,   152,    -1,   168,   151,    -1,   152,
     151,    -1,    27,    -1,    44,    -1,    16,    -1,    47,    -1,
      22,    -1,     6,    -1,    10,    -1,    43,    -1,    51,    -1,
      53,    -1,    21,    -1,     5,    -1,    26,    -1,    23,    -1,
      63,    -1,    64,    -1,    65,    -1,    66,    -1,    48,    -1,
      55,    97,   161,   138,    98,    36,   138,    -1,    36,   111,
     163,   129,   112,    -1,   154,   111,   163,   129,   112,    -1,
     154,    89,   162,   111,   163,   129,   112,    -1,   154,    -1,
     154,    89,   162,    -1,     7,   111,   163,   129,   112,    -1,
     153,   111,   163,   129,   112,    -1,     7,   138,    -1,    19,
     111,   164,   129,   112,    -1,    19,   138,   111,   164,   129,
     112,    -1,    19,   138,    -1,    13,   111,   163,   135,   166,
     112,    -1,    13,   105,   111,   163,   135,   166,   112,    -1,
     155,   111,   163,   135,   166,   112,    -1,   156,   111,   163,
     135,   166,   112,    -1,   157,   111,   165,   135,   166,   112,
      -1,   158,   111,   165,   135,   166,   112,    -1,    13,   138,
      -1,    13,   159,    -1,    70,    -1,    70,    97,   148,    98,
      -1,     1,    68,     1,    -1,     1,    68,    98,    -1,     1,
      98,    -1,    36,     1,   112,    -1,     7,     1,   112,    -1,
      19,     1,   112,    -1,    13,     1,   112,    -1,     7,   138,
      -1,    36,   138,    -1,    13,   138,   160,    -1,    13,   159,
     160,    -1,    13,   105,   138,   160,    -1,    13,   105,   159,
     160,    -1,     7,   138,    -1,    36,   138,    -1,    89,    16,
      -1,    89,    47,    -1,    89,    22,    -1,    89,     6,    -1,
      89,    10,    -1,    89,    43,    -1,    89,    70,    -1,    89,
      -1,    -1,    36,    -1,    57,    -1,    38,   162,    -1,    37,
     162,    -1,    39,   162,    -1,    70,    -1,     7,    68,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,     4,    -1,    14,
      -1,    34,    -1,    56,    -1,    17,    -1,    15,    -1,    40,
      -1,    20,    -1,    59,    -1,    62,    -1,    54,    -1,    41,
      -1,    52,    -1,    18,    -1,   120,    -1,   121,    -1,    31,
      -1,    58,    -1,    -1,   169,    20,    -1,   169,    59,    -1,
     169,    62,    -1,    -1,    77,    71,    -1,    -1,    40,    -1,
      -1,   172,   105,    -1,   172,    94,    -1,   172,    91,    -1,
      -1,   114,   187,   115,   173,    -1,   114,   115,   173,    -1,
     173,    -1,   176,    -1,   111,   187,   112,    -1,    -1,    77,
     187,    -1,    -1,    74,    -1,    -1,    71,    -1,    71,    89,
      -1,    71,    89,    71,    -1,    89,    71,    -1,   180,   181,
      -1,   180,   181,   182,   183,    -1,   180,   181,   182,   184,
     182,    -1,   180,   181,   185,   182,    -1,    -1,    60,    -1,
      -1,    75,    -1,    72,    -1,    71,    -1,    73,    -1,   103,
     182,    -1,   104,   182,    -1,    -1,    89,    -1,    97,    89,
      -1,    97,    -1,    89,    -1,    97,    89,    -1,    89,    97,
      -1,    97,    89,    97,    -1,    97,    -1,    89,    -1,    89,
      97,    -1,    97,    -1,   186,    76,   186,    -1,   187,    -1,
     190,    88,   188,    89,   187,    -1,   189,    -1,   186,    -1,
     190,    90,   191,    -1,   191,    -1,   189,    -1,   192,    91,
     193,    -1,   193,    -1,   191,    -1,   193,    92,   193,    -1,
     193,    93,   193,    -1,   193,    94,   193,    -1,   193,    96,
     193,    -1,   193,    95,   193,    -1,   193,    97,   193,    -1,
     193,   100,   193,    -1,   193,    98,   193,    -1,   193,    99,
     193,    -1,   193,   102,   193,    -1,   193,   101,   193,    -1,
     193,   103,   193,    -1,   193,   104,   193,    -1,   193,   105,
     193,    -1,   193,   106,   193,    -1,   193,   107,   193,    -1,
     194,    -1,   117,   194,    -1,   118,   194,    -1,   104,   194,
      -1,   103,   194,    -1,   105,   194,    -1,    94,   194,    -1,
      30,   119,   149,   116,    -1,   195,    -1,   119,   186,   116,
      -1,    68,    -1,    71,    -1,    60,    -1,    72,    -1,    73,
      -1,    75,    -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "TYPE", "LNG", "DBL", "CHR", "TAG", "STR", "','", "'='", "RA", "LA",
  "OA", "XA", "AA", "MA", "DA", "TA", "NA", "PA", "'?'", "':'", "OR", "AN",
  "'|'", "'^'", "'&'", "NE", "EQ", "'<'", "'>'", "GE", "LE", "RS", "LS",
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
  "abex", "rexp", "lexp", "pexp", 0
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
     325,   326,   327,   328,   329,   330,    44,    61,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,    63,    58,
     341,   342,   124,    94,    38,   343,   344,    60,    62,   345,
     346,   347,   348,    43,    45,    42,    47,    37,   349,   350,
     351,   123,   125,    59,    91,    93,    41,    33,   126,    40,
      64,    36
};
# endif

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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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
      42,    52,    51,    50,    49,    48,    47,    46,    45,    44,
      43,    53,    54,    55,    56,    57,    59,    58,    60,    62,
      63,    61,    65,    64,    66,    67,    68,    69,    70,    73,
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
     253,     0,   254,   257,   260,   261,   262,   264,   263,   265,
     267,   268,   266,   270,   269,   271,   272,   273,   274,   275,
       0,     0,    35,   213,   231,   224,   123,    91,   198,   199,
     200,     0,    79,   219,   283,   249,     0,   216,     0,   233,
     232,   234,   246,   248,     0,     0,   237,     0,   202,   220,
       0,   215,   251,   214,   247,   235,   236,   238,   240,   225,
       0,   227,   221,   223,    87,   243,   239,   226,   222,   244
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

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -293
static const yytype_int16 yypact[] =
{
    -293,    23,   -10,  -293,   -20,  -293,   237,   -60,    20,  -293,
    -293,  -293,  -293,    21,  -293,    30,  -293,  -293,  -293,  -293,
    -293,    26,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
      35,    -7,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,   -30,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
       2,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,   -12,
    -293,  -293,    44,  1193,    12,    27,    41,    63,    72,    73,
    1193,    29,  -293,    17,  -293,  -293,  -293,    43,  -293,  -293,
    -293,    78,    53,   139,   139,     6,  -293,    51,    51,    80,
    -293,    92,    94,  -293,  -293,   115,  1491,  -293,  -293,  -293,
       5,  -293,  -293,  -293,    -8,   -33,  -293,   130,  -293,  -293,
      40,  -293,  -293,  -293,  -293,  -293,  -293,   161,   833,  -293,
    -293,  -293,   594,  -293,  -293,  -293,  -293,   156,   156,  1311,
     144,  -293,  -293,  -293,   594,  -293,  -293,   594,  -293,  -293,
     139,   148,  -293,  -293,   951,  1072,  -293,  -293,  -293,  -293,
     355,   -24,  -293,  -293,  -293,  -293,    16,   594,   160,    40,
      40,    40,  -293,   137,   594,  1311,  1311,  1311,  1311,  -293,
    -293,    45,   172,   173,   180,   162,   712,    36,  1311,  -293,
    -293,   -44,   199,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
     164,   594,   170,   151,  -293,    99,  -293,  -293,  -293,  1420,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,   171,  -293,  -293,   178,  -293,  -293,  1592,  -293,
     213,   208,  -293,  -293,  -293,  -293,  -293,   221,   199,   199,
     199,   199,  -293,  -293,  -293,  -293,  -293,   191,   476,   199,
     222,   223,  -293,   224,  -293,   301,   225,  -293,  -293,    66,
     227,  -293,   262,  -293,  -293,  -293,    54,   226,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  1631,  1631,  1631,  1631,
     225,  1631,  1631,  1631,   229,   146,   182,   257,   258,  1676,
    -293,  -293,  -293,   281,  -293,   594,  -293,   251,   252,   254,
     255,   476,   476,   476,   476,  -293,   267,  -293,  -293,   139,
    -293,  1420,    11,  -293,  -293,  1562,   103,  1491,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,   -55,  -293,   225,  1631,  1631,
    1631,  1631,  1631,  1631,  1631,  1631,  1631,  1631,  1631,  1631,
    1631,  1631,  1631,  1631,  1631,  1631,  1631,  -293,   -38,   305,
     271,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,   268,    25,  -293,  -293,   225,   269,  1631,  -293,  -293,
     311,   299,   257,  1676,  1691,   695,   815,   459,   459,   118,
     118,   118,   118,   205,   205,   110,   110,  -293,  -293,  -293,
    1631,  1631,  -293,  -293,  -293,   243,  -293,  -293,  -293,  -293,
    -293,   319,  -293,   -51,  -293,  -293,  1631,  -293,   280,  -293,
    -293,  -293,   296,  -293,   250,   250,   -26,   250,  -293,   308,
     323,   324,  -293,  -293,  -293,  -293,  -293,   482,   194,  -293,
     250,  -293,   329,  -293,  -293,  -293,   600,  -293,  -293,  -293
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -293,  -293,  -293,   332,  -293,  -293,  -132,    13,   155,
    -293,  -293,  -293,    10,   343,   353,   -15,  -293,  -293,  -293,
     -28,  -293,    95,    97,  -293,  -293,  -293,  -141,   142,   -88,
     -95,  -293,  -293,  -293,  -293,  -293,  -293,   338,   -47,  -293,
     158,   -83,   289,   312,   -49,   159,   -92,  -293,  -293,  -293,
    -129,  -184,    55,  -293,    -3,  -293,  -293,  -293,  -293,  -293,
    -229,  -293,  -293,  -293,  -292,  -231,  -293,  -293,  -293,    90,
    -293,  1411,    38,  -293
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -260
static const yytype_int16 yytable[] =
{
      87,   144,   190,   129,   145,   192,    91,   294,   143,   236,
     137,   268,   119,    83,   195,    94,    59,   119,   119,    57,
     429,   377,    77,     3,    73,   241,   157,    89,   164,   165,
     166,    82,   247,   101,   150,   156,    92,    83,   430,   400,
       4,   132,    84,   178,   257,   408,   380,   158,     7,   144,
     144,    72,   145,   145,    74,   144,   196,   197,   145,   263,
     151,   378,   237,   437,    97,    74,    84,    95,   124,   125,
     127,   438,    76,   401,    78,   149,    79,   159,   160,   161,
     179,   180,   320,   152,   409,   415,   153,   410,    73,    78,
     238,    79,   268,   -33,    78,   -39,    79,   154,    78,    96,
      79,    98,   411,    78,   144,    79,   332,   145,   276,   120,
     162,  -204,    97,    73,   120,   120,   110,   126,    74,   198,
     -26,   -77,   266,   109,   148,   193,   315,   -85,    59,   -33,
     -33,    57,    80,    75,   322,    85,    76,    90,   111,   182,
     130,    86,   323,    74,   326,   152,    93,   117,   153,   258,
     183,   138,   112,   379,   184,   121,   -26,   -26,   252,   154,
     185,    76,  -165,   305,    74,   123,   186,   266,   238,   417,
     418,   374,   139,   360,   113,   248,   249,   250,   251,   365,
     366,   367,   368,   114,   115,   432,   376,   187,   259,  -149,
     152,   188,   133,   153,   152,   435,   436,   153,   441,   307,
     308,   309,   310,   135,   154,   108,   136,    78,   154,    79,
     316,   447,   116,   238,   189,   354,   355,   356,   267,   350,
     351,   352,   353,   354,   355,   356,   144,    96,   242,   145,
     144,   169,   144,   145,  -256,   145,  -256,    -5,     8,   237,
       9,    10,    11,    12,    13,   130,   194,    14,   246,   265,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   253,   254,    26,    27,  -245,  -245,  -245,    28,   255,
     338,    29,   339,    30,   256,   260,   262,    31,    32,   -94,
      33,    34,   264,   446,    35,    36,   274,   302,    37,    38,
      39,    40,    41,    42,   275,    43,    44,  -245,  -245,    45,
      46,    47,    48,    49,   370,   -94,    52,    50,   352,   353,
     354,   355,   356,   -94,   419,   420,   421,   243,   244,   245,
     304,   419,   420,   421,   328,   329,   330,   331,   -94,   333,
     334,   -94,   422,   306,  -177,   317,   318,   319,   325,   238,
     423,   357,   -94,   324,   337,   327,   424,   425,  -259,   340,
     -94,    51,    52,   424,   425,  -203,   105,    53,    54,    10,
      11,    12,    13,   361,   362,    14,   363,   364,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   369,
     404,    26,    27,   406,   407,   414,    28,   377,   416,    29,
     428,    30,   433,   434,   443,   106,    32,   442,    33,    34,
     448,   400,    35,    36,   118,   102,    37,    38,    39,    40,
      41,    42,   314,    43,    44,   103,   371,    45,    46,    47,
      48,    49,   373,   128,   191,   107,   321,   168,   444,   382,
     413,     0,   200,   201,   202,   203,   204,   205,   206,   207,
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
     -98,     0,   -98,     0,     0,   -98,     0,     0,     0,   -98,
       0,     0,     0,     0,     0,     0,   -98,     0,     0,     0,
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
     -97,     0,     0,     0,     0,     0,     0,   -97,     0,     0,
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
      71,    76,     1,     0,    68,   157,   109,     1,   111,   112,
     113,     1,   164,    61,    42,    68,     1,     7,    89,    77,
      50,    88,    36,   126,   176,    20,   338,     7,    68,   144,
     145,   111,   144,   145,    98,   150,   144,   145,   150,   191,
      68,   116,   150,    89,    76,    98,    36,    97,    83,    84,
      85,    97,   116,   111,    68,   103,    70,    37,    38,    39,
     127,   128,   266,    91,    59,   377,    94,    62,    68,    68,
     114,    70,   276,    76,    68,   119,    70,   105,    68,    97,
      70,   113,    77,    68,   199,    70,   290,   199,   237,    98,
      70,   118,    76,    68,    98,    98,    89,   111,    98,   147,
      76,   119,    68,   111,   119,   140,   258,   116,   118,   112,
     113,   118,   111,   113,    68,   105,   116,   111,   111,   129,
      89,   111,    76,    98,   273,    91,   111,   118,    94,   113,
       6,    36,   111,   337,    10,   112,   112,   113,   113,   105,
      16,   116,   111,   246,    98,   112,    22,    68,   114,   400,
     401,    68,    57,   305,   111,   165,   166,   167,   168,   311,
     312,   313,   314,   111,   111,   416,   327,    43,   178,   111,
      91,    47,   112,    94,    91,   424,   425,    94,   427,   248,
     249,   250,   251,   111,   105,    63,   112,    68,   105,    70,
     259,   440,    70,   114,    70,   105,   106,   107,   119,   101,
     102,   103,   104,   105,   106,   107,   321,    97,    68,   321,
     325,    70,   327,   325,    88,   327,    90,     0,     1,   327,
       3,     4,     5,     6,     7,    89,    98,    10,   111,    98,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    89,    89,    26,    27,    71,    72,    73,    31,    89,
      88,    34,    90,    36,   112,    76,   112,    40,    41,    42,
      43,    44,   112,    89,    47,    48,   115,    74,    51,    52,
      53,    54,    55,    56,   116,    58,    59,   103,   104,    62,
      63,    64,    65,    66,   319,    68,   115,    70,   103,   104,
     105,   106,   107,    76,    71,    72,    73,   159,   160,   161,
     112,    71,    72,    73,   286,   287,   288,   289,    91,   291,
     292,    94,    89,   112,   112,   112,   112,    36,    76,   114,
      97,    60,   105,   116,   115,   119,   103,   104,    91,    91,
     113,   114,   115,   103,   104,   118,     1,   120,   121,     4,
       5,     6,     7,   112,   112,    10,   112,   112,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   112,
      75,    26,    27,   112,   116,   116,    31,    76,    89,    34,
      71,    36,   112,    97,    71,    40,    41,    89,    43,    44,
      71,    77,    47,    48,    72,    62,    51,    52,    53,    54,
      55,    56,   257,    58,    59,    62,   321,    62,    63,    64,
      65,    66,   325,    85,   135,    70,   267,   115,   431,   339,
     375,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
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
      89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
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
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
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
     168,   171,   111,    68,    98,   113,   116,     1,    68,    70,
     111,   138,     1,     7,    36,   105,   111,   138,   159,     1,
     111,   138,     1,   111,   138,    97,    97,    76,   113,   142,
     143,   142,   136,   137,   172,     1,    40,    70,   150,   111,
      89,   111,   111,   111,   111,   111,   150,   118,   126,     1,
      98,   112,   163,   112,   138,   138,   111,   138,   159,   163,
      89,   160,   160,   112,   164,   111,   112,   163,    36,    57,
     161,   148,   149,   151,   152,   168,   136,   137,   119,   142,
      42,    68,    91,    94,   105,   139,    68,   163,     7,    37,
      38,    39,    70,   162,   163,   163,   163,   165,   165,    70,
     112,     1,    37,    38,    39,   129,   130,   135,   163,   160,
     160,     1,   135,     6,    10,    16,    22,    43,    47,    70,
     129,   164,   129,   138,    98,   172,   151,   151,   142,   167,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   114,   117,   118,   119,   149,   151,   114,   173,
     174,   129,    68,   162,   162,   162,   111,   129,   135,   135,
     135,   135,   113,    89,    89,    89,   112,   129,   113,   135,
      76,   166,   112,   129,   112,    98,    68,   119,   173,     1,
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 229 "soapcpp2_yacc.y"
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
                        ;}
    break;

  case 3:
#line 249 "soapcpp2_yacc.y"
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
                        ;}
    break;

  case 4:
#line 265 "soapcpp2_yacc.y"
    { namespaceid = (yyvsp[(2) - (5)].sym)->name; ;}
    break;

  case 5:
#line 266 "soapcpp2_yacc.y"
    { ;}
    break;

  case 6:
#line 268 "soapcpp2_yacc.y"
    {
                          add_soap();
                          add_qname();
                          add_XML();
                        ;}
    break;

  case 7:
#line 273 "soapcpp2_yacc.y"
    { ;}
    break;

  case 8:
#line 275 "soapcpp2_yacc.y"
    { ;}
    break;

  case 9:
#line 276 "soapcpp2_yacc.y"
    { ;}
    break;

  case 10:
#line 277 "soapcpp2_yacc.y"
    { ;}
    break;

  case 11:
#line 278 "soapcpp2_yacc.y"
    { ;}
    break;

  case 12:
#line 279 "soapcpp2_yacc.y"
    {
                          synerror("input before ; skipped");
                          while (sp > stack)
                          {
                            freetable(sp->table);
                            exitscope();
                          }
                          yyerrok;
                        ;}
    break;

  case 13:
#line 289 "soapcpp2_yacc.y"
    {
                          for (pp = &pragmas; *pp; pp = &(*pp)->next)
                            ;
                          *pp = (Pragma*)emalloc(sizeof(Pragma));
                          (*pp)->pragma = (yyvsp[(1) - (1)].s);
                          (*pp)->next = NULL;
                        ;}
    break;

  case 14:
#line 304 "soapcpp2_yacc.y"
    {
                          transient &= ~6;
                          permission = 0;
                        ;}
    break;

  case 15:
#line 309 "soapcpp2_yacc.y"
    { ;}
    break;

  case 16:
#line 311 "soapcpp2_yacc.y"
    { ;}
    break;

  case 17:
#line 313 "soapcpp2_yacc.y"
    { ;}
    break;

  case 18:
#line 315 "soapcpp2_yacc.y"
    { ;}
    break;

  case 19:
#line 317 "soapcpp2_yacc.y"
    { ;}
    break;

  case 20:
#line 318 "soapcpp2_yacc.y"
    {
                          synerror("declaration expected");
                          yyerrok;
                        ;}
    break;

  case 21:
#line 323 "soapcpp2_yacc.y"
    { transient |= 1; ;}
    break;

  case 22:
#line 325 "soapcpp2_yacc.y"
    { transient &= ~1; ;}
    break;

  case 23:
#line 327 "soapcpp2_yacc.y"
    { permission = Sprivate; ;}
    break;

  case 24:
#line 329 "soapcpp2_yacc.y"
    { permission = Sprotected; ;}
    break;

  case 25:
#line 331 "soapcpp2_yacc.y"
    { permission = 0; ;}
    break;

  case 26:
#line 333 "soapcpp2_yacc.y"
    { ;}
    break;

  case 27:
#line 334 "soapcpp2_yacc.y"
    { ;}
    break;

  case 28:
#line 336 "soapcpp2_yacc.y"
    { ;}
    break;

  case 29:
#line 337 "soapcpp2_yacc.y"
    { ;}
    break;

  case 30:
#line 338 "soapcpp2_yacc.y"
    { ;}
    break;

  case 31:
#line 339 "soapcpp2_yacc.y"
    { ;}
    break;

  case 32:
#line 341 "soapcpp2_yacc.y"
    { ;}
    break;

  case 33:
#line 342 "soapcpp2_yacc.y"
    {
                          sprintf(errbuf, "undefined type in declaration of '%s'", (yyvsp[(2) - (2)].sym)->name);
                          synerror(errbuf);
                          yyerrok;
                        ;}
    break;

  case 34:
#line 347 "soapcpp2_yacc.y"
    {
                          synerror("function declaration?");
                          yyerrok;
                        ;}
    break;

  case 35:
#line 353 "soapcpp2_yacc.y"
    {
                          if (((yyvsp[(3) - (6)].rec).sto & Stypedef) && sp->table->level == GLOBAL)
                          {
                            if (((yyvsp[(3) - (6)].rec).typ->type != Tstruct &&
                                  (yyvsp[(3) - (6)].rec).typ->type != Tclass &&
                                  (yyvsp[(3) - (6)].rec).typ->type != Tunion &&
                                  (yyvsp[(3) - (6)].rec).typ->type != Tenum &&
                                  (yyvsp[(3) - (6)].rec).typ->type != Tenumsc) ||
                                ((is_binary((yyvsp[(3) - (6)].rec).typ) || is_stdstr((yyvsp[(3) - (6)].rec).typ)) && strcmp((yyvsp[(2) - (6)].sym)->name, (yyvsp[(3) - (6)].rec).typ->id->name)) ||
                                strcmp((yyvsp[(2) - (6)].sym)->name, (yyvsp[(3) - (6)].rec).typ->id->name))
                            {
                              p = enter(typetable, (yyvsp[(2) - (6)].sym));
                              p->info.typ = mksymtype((yyvsp[(3) - (6)].rec).typ, (yyvsp[(2) - (6)].sym));
                              if ((yyvsp[(3) - (6)].rec).sto & Sextern)
                              {
                                p->info.typ->transient = -1;
                                p->info.typ->extsym = (yyvsp[(2) - (6)].sym);
                              }
                              else if (is_external((yyvsp[(3) - (6)].rec).typ))
                                p->info.typ->transient = -3; /* extern and volatile */
                              else
                                p->info.typ->transient = (yyvsp[(3) - (6)].rec).typ->transient;
                              if (p->info.typ->width == 0)
                                p->info.typ->width = 8;
                              p->info.sto = (yyvsp[(3) - (6)].rec).sto;
                              p->info.typ->synonym = (yyvsp[(3) - (6)].rec).typ->sym;
                              if ((yyvsp[(5) - (6)].rec).hasmin)
                              {
                                p->info.typ->hasmin = (yyvsp[(5) - (6)].rec).hasmin;
                                p->info.typ->incmin = (yyvsp[(5) - (6)].rec).incmin;
                                p->info.typ->min = (yyvsp[(5) - (6)].rec).min;
                                p->info.typ->synonym = NULL;
                              }
                              else
                              {
                                p->info.typ->hasmin = (yyvsp[(3) - (6)].rec).typ->hasmin;
                                p->info.typ->incmin = (yyvsp[(3) - (6)].rec).typ->incmin;
                                p->info.typ->min = (yyvsp[(3) - (6)].rec).typ->min;
                              }
                              if ((yyvsp[(5) - (6)].rec).hasmax)
                              {
                                p->info.typ->hasmax = (yyvsp[(5) - (6)].rec).hasmax;
                                p->info.typ->incmax = (yyvsp[(5) - (6)].rec).incmax;
                                p->info.typ->max = (yyvsp[(5) - (6)].rec).max;
                                p->info.typ->synonym = NULL;
                              }
                              else
                              {
                                p->info.typ->hasmax = (yyvsp[(3) - (6)].rec).typ->hasmax;
                                p->info.typ->incmax = (yyvsp[(3) - (6)].rec).typ->incmax;
                                p->info.typ->max = (yyvsp[(3) - (6)].rec).typ->max;
                              }
                              if ((yyvsp[(5) - (6)].rec).pattern)
                              {
                                p->info.typ->pattern = (yyvsp[(5) - (6)].rec).pattern;
                                p->info.typ->synonym = NULL;
                              }
                              else
                              {
                                p->info.typ->pattern = (yyvsp[(3) - (6)].rec).typ->pattern;
                              }
                            }
                            (yyvsp[(2) - (6)].sym)->token = TYPE;
                          }
                          else
                          {
                            p = enter(sp->table, (yyvsp[(2) - (6)].sym));
                            p->tag = (yyvsp[(4) - (6)].s);
                            p->info.typ = (yyvsp[(3) - (6)].rec).typ;
                            p->info.sto = (Storage)((int)(yyvsp[(3) - (6)].rec).sto | permission);
                            if ((yyvsp[(6) - (6)].rec).hasval)
                            {
                              p->info.hasval = True;
                              switch ((yyvsp[(3) - (6)].rec).typ->type)
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
                                  if ((yyvsp[(6) - (6)].rec).typ->type == Tint ||
                                      (yyvsp[(6) - (6)].rec).typ->type == Tchar ||
                                      (yyvsp[(6) - (6)].rec).typ->type == Tenum ||
                                      (yyvsp[(6) - (6)].rec).typ->type == Tenumsc)
                                  {
                                    sp->val = p->info.val.i = (yyvsp[(6) - (6)].rec).val.i;
                                    if (((yyvsp[(3) - (6)].rec).typ->hasmin && (yyvsp[(3) - (6)].rec).typ->min > (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmin && !(yyvsp[(3) - (6)].rec).typ->incmin && (yyvsp[(3) - (6)].rec).typ->min == (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmax && (yyvsp[(3) - (6)].rec).typ->max < (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmax && !(yyvsp[(3) - (6)].rec).typ->incmax && (yyvsp[(3) - (6)].rec).typ->max == (double)(yyvsp[(6) - (6)].rec).val.i))
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
                                  if ((yyvsp[(6) - (6)].rec).typ->type == Tfloat ||
                                      (yyvsp[(6) - (6)].rec).typ->type == Tdouble ||
                                      (yyvsp[(6) - (6)].rec).typ->type == Tldouble)
                                  {
                                    p->info.val.r = (yyvsp[(6) - (6)].rec).val.r;
                                    if (((yyvsp[(3) - (6)].rec).typ->hasmin && (yyvsp[(3) - (6)].rec).typ->min > (yyvsp[(6) - (6)].rec).val.r) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmin && !(yyvsp[(3) - (6)].rec).typ->incmin && (yyvsp[(3) - (6)].rec).typ->min == (yyvsp[(6) - (6)].rec).val.r) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmax && (yyvsp[(3) - (6)].rec).typ->max < (yyvsp[(6) - (6)].rec).val.r) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmax && !(yyvsp[(3) - (6)].rec).typ->incmax && (yyvsp[(3) - (6)].rec).typ->max == (yyvsp[(6) - (6)].rec).val.r))
                                      semerror("initialization constant outside value range");
                                  }
                                  else if ((yyvsp[(6) - (6)].rec).typ->type == Tint)
                                  {
                                    p->info.val.r = (double)(yyvsp[(6) - (6)].rec).val.i;
                                    if (((yyvsp[(3) - (6)].rec).typ->hasmin && (yyvsp[(3) - (6)].rec).typ->min > (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmin && !(yyvsp[(3) - (6)].rec).typ->incmin && (yyvsp[(3) - (6)].rec).typ->min == (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmax && (yyvsp[(3) - (6)].rec).typ->max < (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                        ((yyvsp[(3) - (6)].rec).typ->hasmax && !(yyvsp[(3) - (6)].rec).typ->incmax && (yyvsp[(3) - (6)].rec).typ->max == (double)(yyvsp[(6) - (6)].rec).val.i))
                                      semerror("initialization constant outside value range");
                                  }
                                  else
                                  {
                                    semerror("type error in initialization constant");
                                    p->info.hasval = False;
                                  }
                                  break;
                                default:
                                  if ((yyvsp[(3) - (6)].rec).typ->type == Tpointer &&
                                      (((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->type == Tchar ||
                                       ((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->type == Twchar) &&
                                      (yyvsp[(6) - (6)].rec).typ->type == Tpointer &&
                                      ((Tnode*)(yyvsp[(6) - (6)].rec).typ->ref)->type == Tchar)
                                    p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
                                  else if (bflag &&
                                      (yyvsp[(3) - (6)].rec).typ->type == Tarray &&
                                      ((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->type == Tchar &&
                                      (yyvsp[(6) - (6)].rec).typ->type == Tpointer &&
                                      ((Tnode*)(yyvsp[(6) - (6)].rec).typ->ref)->type == Tchar)
                                  {
                                    if ((yyvsp[(3) - (6)].rec).typ->width / ((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->width - 1 < (int)strlen((yyvsp[(6) - (6)].rec).val.s))
                                    {
                                      semerror("char[] initialization constant too long");
                                      p->info.val.s = "";
                                    }
                                    else
                                    {
                                      p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
                                    }

                                  }
                                  else if (((yyvsp[(3) - (6)].rec).typ->type == Tpointer || is_smart((yyvsp[(3) - (6)].rec).typ)) &&
                                      (((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->id == lookup("std::string") ||
                                       ((Tnode*)(yyvsp[(3) - (6)].rec).typ->ref)->id == lookup("std::wstring")))
                                  {
                                    p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
                                  }
                                  else if ((yyvsp[(3) - (6)].rec).typ->id == lookup("std::string") ||
                                      (yyvsp[(3) - (6)].rec).typ->id == lookup("std::wstring"))
                                  {
                                    p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
                                  }
                                  else if ((yyvsp[(3) - (6)].rec).typ->type == Tpointer &&
                                      (yyvsp[(6) - (6)].rec).typ->type == Tint &&
                                      (yyvsp[(6) - (6)].rec).val.i == 0)
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
                            if ((yyvsp[(5) - (6)].rec).minOccurs < 0)
                            {
                              if ((yyvsp[(6) - (6)].rec).hasval ||
                                  ((yyvsp[(3) - (6)].rec).sto & Sattribute) ||
                                  (yyvsp[(3) - (6)].rec).typ->type == Tpointer ||
                                  (yyvsp[(3) - (6)].rec).typ->type == Ttemplate ||
                                  !strncmp((yyvsp[(2) - (6)].sym)->name, "__size", 6))
                                p->info.minOccurs = 0;
                              else
                                p->info.minOccurs = 1;
                            }
                            else
                            {
                              p->info.minOccurs = (yyvsp[(5) - (6)].rec).minOccurs;
                            }
                            p->info.maxOccurs = (yyvsp[(5) - (6)].rec).maxOccurs;
                            p->info.nillable = (yyvsp[(5) - (6)].rec).nillable;
                            if (sp->mask)
                              sp->val <<= 1;
                            else
                              sp->val++;
                            p->info.offset = sp->offset;
                            if ((yyvsp[(3) - (6)].rec).sto & Sextern)
                              p->level = GLOBAL;
                            else if ((yyvsp[(3) - (6)].rec).sto & Stypedef)
                              ;
                            else if (sp->grow)
                              sp->offset += p->info.typ->width;
                            else if (p->info.typ->width > sp->offset)
                              sp->offset = p->info.typ->width;
                          }
                          sp->entry = p;
                        ;}
    break;

  case 36:
#line 575 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(1) - (2)].rec).sto & Stypedef)
                          {
                            sprintf(errbuf, "invalid typedef qualifier for '%s'", (yyvsp[(2) - (2)].sym)->name);
                            semwarn(errbuf);
                          }
                          p = enter(sp->table, (yyvsp[(2) - (2)].sym));
                          p->info.typ = (yyvsp[(1) - (2)].rec).typ;
                          p->info.sto = (yyvsp[(1) - (2)].rec).sto;
                          p->info.hasval = False;
                          p->info.offset = sp->offset;
                          if (sp->grow)
                            sp->offset += p->info.typ->width;
                          else if (p->info.typ->width > sp->offset)
                            sp->offset = p->info.typ->width;
                          sp->entry = p;
                        ;}
    break;

  case 37:
#line 593 "soapcpp2_yacc.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 38:
#line 594 "soapcpp2_yacc.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 39:
#line 596 "soapcpp2_yacc.y"
    { (yyval.sym) = (yyvsp[(1) - (1)].sym); ;}
    break;

  case 40:
#line 597 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator!"); ;}
    break;

  case 41:
#line 598 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator~"); ;}
    break;

  case 42:
#line 599 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator="); ;}
    break;

  case 43:
#line 600 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator+="); ;}
    break;

  case 44:
#line 601 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator-="); ;}
    break;

  case 45:
#line 602 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator*="); ;}
    break;

  case 46:
#line 603 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator/="); ;}
    break;

  case 47:
#line 604 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator%="); ;}
    break;

  case 48:
#line 605 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator&="); ;}
    break;

  case 49:
#line 606 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator^="); ;}
    break;

  case 50:
#line 607 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator|="); ;}
    break;

  case 51:
#line 608 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator<<="); ;}
    break;

  case 52:
#line 609 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator>>="); ;}
    break;

  case 53:
#line 610 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator||"); ;}
    break;

  case 54:
#line 611 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator&&"); ;}
    break;

  case 55:
#line 612 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator|"); ;}
    break;

  case 56:
#line 613 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator^"); ;}
    break;

  case 57:
#line 614 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator&"); ;}
    break;

  case 58:
#line 615 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator=="); ;}
    break;

  case 59:
#line 616 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator!="); ;}
    break;

  case 60:
#line 617 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator<"); ;}
    break;

  case 61:
#line 618 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator<="); ;}
    break;

  case 62:
#line 619 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator>"); ;}
    break;

  case 63:
#line 620 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator>="); ;}
    break;

  case 64:
#line 621 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator<<"); ;}
    break;

  case 65:
#line 622 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator>>"); ;}
    break;

  case 66:
#line 623 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator+"); ;}
    break;

  case 67:
#line 624 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator-"); ;}
    break;

  case 68:
#line 625 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator*"); ;}
    break;

  case 69:
#line 626 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator/"); ;}
    break;

  case 70:
#line 627 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator%"); ;}
    break;

  case 71:
#line 628 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator++"); ;}
    break;

  case 72:
#line 629 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator--"); ;}
    break;

  case 73:
#line 630 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator->"); ;}
    break;

  case 74:
#line 631 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator[]"); ;}
    break;

  case 75:
#line 632 "soapcpp2_yacc.y"
    { (yyval.sym) = lookup("operator()"); ;}
    break;

  case 76:
#line 633 "soapcpp2_yacc.y"
    {
                          s1 = c_storage((yyvsp[(2) - (2)].rec).sto);
                          s2 = c_type((yyvsp[(2) - (2)].rec).typ);
                          s = (char*)emalloc(strlen(s1) + strlen(s2) + 10);
                          strcpy(s, "operator ");
                          strcat(s, s1);
                          strcat(s, s2);
                          (yyval.sym) = lookup(s);
                          if (!(yyval.sym))
                            (yyval.sym) = install(s, ID);
                        ;}
    break;

  case 77:
#line 645 "soapcpp2_yacc.y"
    {
                          if (!(p = entry(classtable, (yyvsp[(1) - (1)].sym))))
                            semerror("invalid constructor");
                          sp->entry = enter(sp->table, (yyvsp[(1) - (1)].sym));
                          sp->entry->info.typ = mknone();
                          sp->entry->info.sto = Snone;
                          sp->entry->info.offset = sp->offset;
                          sp->node.typ = mkvoid();
                          sp->node.sto = Snone;
                        ;}
    break;

  case 78:
#line 657 "soapcpp2_yacc.y"
    {
                          if (!(p = entry(classtable, (yyvsp[(3) - (3)].sym))))
                                semerror("invalid destructor");
                          s = (char*)emalloc(strlen((yyvsp[(3) - (3)].sym)->name) + 2);
                          s2 = strrchr((yyvsp[(3) - (3)].sym)->name, ':');
                          if (s2 && *(s2+1) && (s2 == (yyvsp[(3) - (3)].sym)->name || *(s2-1) != ':'))
                          {
                            strncpy(s, (yyvsp[(3) - (3)].sym)->name, s2 - (yyvsp[(3) - (3)].sym)->name + 1);
                            strcat(s, "~");
                            strcat(s, s2 + 1);
                          }
                          else
                          {
                            strcpy(s, "~");
                            strcat(s, (yyvsp[(3) - (3)].sym)->name);
                          }
                          sym = lookup(s);
                          if (!sym)
                            sym = install(s, ID);
                          sp->entry = enter(sp->table, sym);
                          sp->entry->info.typ = mknone();
                          sp->entry->info.sto = (yyvsp[(1) - (3)].sto);
                          sp->entry->info.offset = sp->offset;
                          sp->node.typ = mkvoid();
                          sp->node.sto = Snone;
                        ;}
    break;

  case 79:
#line 685 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(1) - (7)].e)->level == GLOBAL)
                          {
                            if (!((yyvsp[(1) - (7)].e)->info.sto & Sextern) &&
                                sp->entry && sp->entry->info.typ->type == Tpointer &&
                                ((Tnode*)sp->entry->info.typ->ref)->type == Tchar)
                            {
                              sprintf(errbuf, "last output parameter of service operation function prototype '%s' is a pointer to a char which will only return one byte: use char** instead to return a string", (yyvsp[(1) - (7)].e)->sym->name);
                              semwarn(errbuf);
                            }
                            if ((yyvsp[(1) - (7)].e)->info.sto & Sextern)
                            {
                              (yyvsp[(1) - (7)].e)->info.typ = mkmethod((yyvsp[(1) - (7)].e)->info.typ, sp->table);
                            }
                            else if (sp->entry &&
                                (sp->entry->info.typ->type == Tpointer ||
                                 sp->entry->info.typ->type == Treference ||
                                 sp->entry->info.typ->type == Tarray ||
                                 is_transient(sp->entry->info.typ)))
                            {
                              if ((yyvsp[(1) - (7)].e)->info.typ->type == Tint)
                              {
                                sp->entry->info.sto = (Storage)((int)sp->entry->info.sto | (int)Sreturn);
                                (yyvsp[(1) - (7)].e)->info.typ = mkfun(sp->entry);
                                (yyvsp[(1) - (7)].e)->info.typ->id = (yyvsp[(1) - (7)].e)->sym;
                                if (!is_transient(sp->entry->info.typ))
                                {
                                  if (!is_response(sp->entry->info.typ))
                                  {
                                    if (!is_XML(sp->entry->info.typ))
                                      add_response((yyvsp[(1) - (7)].e), sp->entry);
                                  }
                                  else
                                  {
                                    add_result(sp->entry->info.typ);
                                  }
                                }
                                add_request((yyvsp[(1) - (7)].e)->sym, sp);
                              }
                              else
                              {
                                sprintf(errbuf, "return type of service operation function prototype '%s' must be integer", (yyvsp[(1) - (7)].e)->sym->name);
                                semerror(errbuf);
                              }
                            }
                            else
                            {
                              sprintf(errbuf, "last output parameter of service operation function prototype '%s' is a return parameter and must be a pointer or reference, or use %s(..., void) for one-way sends", (yyvsp[(1) - (7)].e)->sym->name, (yyvsp[(1) - (7)].e)->sym->name);
                              semerror(errbuf);
                            }
                          }
                          else if ((yyvsp[(1) - (7)].e)->level == INTERNAL)
                          {
                            (yyvsp[(1) - (7)].e)->info.typ = mkmethod((yyvsp[(1) - (7)].e)->info.typ, sp->table);
                            (yyvsp[(1) - (7)].e)->info.sto = (Storage)((int)(yyvsp[(1) - (7)].e)->info.sto | (int)(yyvsp[(6) - (7)].sto) | (int)(yyvsp[(7) - (7)].sto));
                            transient &= ~1;
                          }
                          exitscope();
                        ;}
    break;

  case 80:
#line 745 "soapcpp2_yacc.y"
    { (yyval.e) = sp->entry; ;}
    break;

  case 81:
#line 747 "soapcpp2_yacc.y"
    { ;}
    break;

  case 82:
#line 748 "soapcpp2_yacc.y"
    { ;}
    break;

  case 83:
#line 750 "soapcpp2_yacc.y"
    { ;}
    break;

  case 84:
#line 751 "soapcpp2_yacc.y"
    { ;}
    break;

  case 85:
#line 752 "soapcpp2_yacc.y"
    {
                          sprintf(errbuf, "undefined '%s'", (yyvsp[(2) - (2)].sym)->name);
                          synerror(errbuf);
                        ;}
    break;

  case 86:
#line 756 "soapcpp2_yacc.y"
    {
                          synerror("formal argument expected");
                          yyerrok;
                        ;}
    break;

  case 87:
#line 762 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(4) - (6)].rec).sto & Stypedef)
                            semwarn("typedef in function argument");
                          p = enter(sp->table, (yyvsp[(3) - (6)].sym));
                          p->info.typ = (yyvsp[(4) - (6)].rec).typ;
                          p->info.sto = (yyvsp[(4) - (6)].rec).sto;
                          if ((yyvsp[(5) - (6)].rec).minOccurs < 0)
                          {
                            if ((yyvsp[(6) - (6)].rec).hasval ||
                                ((yyvsp[(4) - (6)].rec).sto & Sattribute) ||
                                (yyvsp[(4) - (6)].rec).typ->type == Tpointer)
                              p->info.minOccurs = 0;
                            else
                              p->info.minOccurs = 1;
                          }
                          else
                          {
                            p->info.minOccurs = (yyvsp[(5) - (6)].rec).minOccurs;
                          }
                          p->info.maxOccurs = (yyvsp[(5) - (6)].rec).maxOccurs;
                          if ((yyvsp[(6) - (6)].rec).hasval)
                          {
                            p->info.hasval = True;
                            switch ((yyvsp[(4) - (6)].rec).typ->type)
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
                                if ((yyvsp[(6) - (6)].rec).typ->type == Tint ||
                                    (yyvsp[(6) - (6)].rec).typ->type == Tchar ||
                                    (yyvsp[(6) - (6)].rec).typ->type == Tenum ||
                                    (yyvsp[(6) - (6)].rec).typ->type == Tenumsc)
                                {
                                  sp->val = p->info.val.i = (yyvsp[(6) - (6)].rec).val.i;
                                  if (((yyvsp[(4) - (6)].rec).typ->hasmin && (yyvsp[(4) - (6)].rec).typ->min > (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmin && !(yyvsp[(4) - (6)].rec).typ->incmin && (yyvsp[(4) - (6)].rec).typ->min == (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmax && (yyvsp[(4) - (6)].rec).typ->max < (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmax && !(yyvsp[(4) - (6)].rec).typ->incmax && (yyvsp[(4) - (6)].rec).typ->max == (double)(yyvsp[(6) - (6)].rec).val.i))
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
                                if ((yyvsp[(6) - (6)].rec).typ->type == Tfloat ||
                                    (yyvsp[(6) - (6)].rec).typ->type == Tdouble ||
                                    (yyvsp[(6) - (6)].rec).typ->type == Tldouble)
                                {
                                  p->info.val.r = (yyvsp[(6) - (6)].rec).val.r;
                                  if (((yyvsp[(4) - (6)].rec).typ->hasmin && (yyvsp[(4) - (6)].rec).typ->min > (yyvsp[(6) - (6)].rec).val.r) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmin && !(yyvsp[(4) - (6)].rec).typ->incmin && (yyvsp[(4) - (6)].rec).typ->min == (yyvsp[(6) - (6)].rec).val.r) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmax && (yyvsp[(4) - (6)].rec).typ->max < (yyvsp[(6) - (6)].rec).val.r) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmax && !(yyvsp[(4) - (6)].rec).typ->incmax && (yyvsp[(4) - (6)].rec).typ->max == (yyvsp[(6) - (6)].rec).val.r))
                                    semerror("initialization constant outside value range");
                                }
                                else if ((yyvsp[(6) - (6)].rec).typ->type == Tint)
                                {
                                  p->info.val.r = (double)(yyvsp[(6) - (6)].rec).val.i;
                                  if (((yyvsp[(4) - (6)].rec).typ->hasmin && (yyvsp[(4) - (6)].rec).typ->min > (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmin && !(yyvsp[(4) - (6)].rec).typ->incmin && (yyvsp[(4) - (6)].rec).typ->min == (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmax && (yyvsp[(4) - (6)].rec).typ->max < (double)(yyvsp[(6) - (6)].rec).val.i) ||
                                      ((yyvsp[(4) - (6)].rec).typ->hasmax && !(yyvsp[(4) - (6)].rec).typ->incmax && (yyvsp[(4) - (6)].rec).typ->max == (double)(yyvsp[(6) - (6)].rec).val.i))
                                    semerror("initialization constant outside value range");
                                }
                                else
                                {
                                  semerror("type error in initialization constant");
                                  p->info.hasval = False;
                                }
                                break;
                              default:
                                if ((yyvsp[(4) - (6)].rec).typ->type == Tpointer &&
                                    (((Tnode*)(yyvsp[(4) - (6)].rec).typ->ref)->type == Tchar ||
                                     ((Tnode*)(yyvsp[(4) - (6)].rec).typ->ref)->type == Twchar) &&
                                    (yyvsp[(6) - (6)].rec).typ->type == Tpointer &&
                                    ((Tnode*)(yyvsp[(6) - (6)].rec).typ->ref)->type == Tchar)
                                {
                                  p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
                                }
                                else if (((yyvsp[(4) - (6)].rec).typ->type == Tpointer || is_smart((yyvsp[(4) - (6)].rec).typ)) &&
                                    (((Tnode*)(yyvsp[(4) - (6)].rec).typ->ref)->id == lookup("std::string") ||
                                     ((Tnode*)(yyvsp[(4) - (6)].rec).typ->ref)->id == lookup("std::wstring")))
                                {
                                  p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
                                }
                                else if ((yyvsp[(4) - (6)].rec).typ->id == lookup("std::string") ||
                                    (yyvsp[(4) - (6)].rec).typ->id == lookup("std::wstring"))
                                {
                                  p->info.val.s = (yyvsp[(6) - (6)].rec).val.s;
                                }
                                else if ((yyvsp[(4) - (6)].rec).typ->type == Tpointer &&
                                    (yyvsp[(6) - (6)].rec).typ->type == Tint &&
                                    (yyvsp[(6) - (6)].rec).val.i == 0)
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
                          if ((yyvsp[(4) - (6)].rec).sto & Sextern)
                            p->level = GLOBAL;
                          else if (sp->grow)
                            sp->offset += p->info.typ->width;
                          else if (p->info.typ->width > sp->offset)
                            sp->offset = p->info.typ->width;
                          sp->entry = p;
                        ;}
    break;

  case 88:
#line 889 "soapcpp2_yacc.y"
    {
                          if (sp->table->level != PARAM)
                            (yyval.sym) = gensymidx("param", (int)++sp->val);
                          else if (eflag || zflag == 0 || zflag > 3)
                            (yyval.sym) = gensymidx("_param", (int)++sp->val);
                          else
                            (yyval.sym) = gensym("_param");
                        ;}
    break;

  case 89:
#line 897 "soapcpp2_yacc.y"
    {
                          if (soap_version == 2 && *(yyvsp[(1) - (1)].sym)->name == '_' && sp->table->level == GLOBAL)
                          {
                            sprintf(errbuf, "SOAP 1.2 does not support anonymous parameters '%s'", (yyvsp[(1) - (1)].sym)->name);
                            semwarn(errbuf);
                          }
                          (yyval.sym) = (yyvsp[(1) - (1)].sym);
                        ;}
    break;

  case 90:
#line 914 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 91:
#line 916 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkmethod(tmp.typ, sp->table);
                          transient &= ~1;
                          exitscope();
                        ;}
    break;

  case 92:
#line 923 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(3) - (3)].rec); ;}
    break;

  case 93:
#line 925 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(4) - (4)].rec); ;}
    break;

  case 94:
#line 927 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkint();
                          (yyval.rec).sto = Snone;
                          sp->node = (yyval.rec);
                        ;}
    break;

  case 95:
#line 932 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                          (yyval.rec).sto = (Storage)((int)(yyvsp[(1) - (2)].sto) | (int)(yyvsp[(2) - (2)].rec).sto);
                          if (((yyval.rec).sto & Sattribute))
                          {
                            if (is_smart((yyvsp[(2) - (2)].rec).typ))
                            {
                              if (!is_primitive_or_string((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_stdstr((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_binary((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_external((yyvsp[(2) - (2)].rec).typ->ref))
                              {
                                semwarn("invalid attribute smart pointer @type");
                                (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                              }
                            }
                            else if ((yyvsp[(2) - (2)].rec).typ->type == Tpointer)
                            {
                              if (!is_primitive_or_string((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_stdstr((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_binary((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_external((yyvsp[(2) - (2)].rec).typ->ref))
                              {
                                semwarn("invalid attribute pointer @type");
                                (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                              }
                            }
                            else if (
                                !is_primitive_or_string((yyvsp[(2) - (2)].rec).typ) &&
                                !is_stdstr((yyvsp[(2) - (2)].rec).typ) &&
                                !is_binary((yyvsp[(2) - (2)].rec).typ) &&
                                !is_external((yyvsp[(2) - (2)].rec).typ))
                            {
                              semwarn("invalid attribute @type");
                              (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                            }
                          }
                          sp->node = (yyval.rec);
                          if ((yyvsp[(1) - (2)].sto) & Sextern)
                            transient = 0;
                        ;}
    break;

  case 96:
#line 973 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(1) - (2)].typ)->type == Tint)
                            switch ((yyvsp[(2) - (2)].rec).typ->type)
                            {
                              case Tchar:       (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
                              case Tshort:      (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
                              case Tint:        (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tlong:       (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
                              case Tllong:      (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
                              default:          semwarn("invalid int type specified");
                                                (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            }
                          else if ((yyvsp[(1) - (2)].typ)->type == Tuint)
                            switch ((yyvsp[(2) - (2)].rec).typ->type)
                            {
                              case Tchar:       (yyval.rec).typ = mkuchar(); break;
                              case Tshort:      (yyval.rec).typ = mkushort(); break;
                              case Tint:        (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tlong:       (yyval.rec).typ = mkulong(); break;
                              case Tllong:      (yyval.rec).typ = mkullong(); break;
                              default:          semwarn("invalid unsigned type specified");
                                                (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            }
                          else if ((yyvsp[(1) - (2)].typ)->type == Tlong)
                            switch ((yyvsp[(2) - (2)].rec).typ->type)
                            {
                              case Tint:        (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tlong:       (yyval.rec).typ = mkllong(); break;
                              case Tuint:       (yyval.rec).typ = mkulong(); break;
                              case Tulong:      (yyval.rec).typ = mkullong(); break;
                              case Tdouble:     (yyval.rec).typ = mkldouble(); break;
                              default:          semwarn("invalid use of 'long'");
                                                (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            }
                          else if ((yyvsp[(1) - (2)].typ)->type == Tulong)
                            switch ((yyvsp[(2) - (2)].rec).typ->type)
                            {
                              case Tint:        (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tlong:       (yyval.rec).typ = mkullong(); break;
                              case Tuint:       (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tulong:      (yyval.rec).typ = mkullong(); break;
                              default:          semwarn("invalid use of 'long'");
                                                (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            }
                          else if ((yyvsp[(2) - (2)].rec).typ->type == Tint)
                            (yyval.rec).typ = (yyvsp[(1) - (2)].typ);
                          else
                            semwarn("invalid type specified (missing ';' or type name used as non-type identifier?)");
                          (yyval.rec).sto = (yyvsp[(2) - (2)].rec).sto;
                          sp->node = (yyval.rec);
                        ;}
    break;

  case 97:
#line 1025 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkint();
                          (yyval.rec).sto = (yyvsp[(1) - (1)].sto);
                          sp->node = (yyval.rec);
                          if ((yyvsp[(1) - (1)].sto) & Sextern)
                            transient = 0;
                        ;}
    break;

  case 98:
#line 1032 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = (yyvsp[(1) - (1)].typ);
                          (yyval.rec).sto = Snone;
                          sp->node = (yyval.rec);
                        ;}
    break;

  case 99:
#line 1037 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                          (yyval.rec).sto = (Storage)((int)(yyvsp[(1) - (2)].sto) | (int)(yyvsp[(2) - (2)].rec).sto);
                          if (((yyval.rec).sto & Sattribute))
                          {
                            if (is_smart((yyvsp[(2) - (2)].rec).typ))
                            {
                              if (!is_primitive_or_string((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_stdstr((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_binary((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_external((yyvsp[(2) - (2)].rec).typ->ref))
                              {
                                semwarn("invalid attribute smart pointer @type");
                                (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                              }
                            }
                            else if ((yyvsp[(2) - (2)].rec).typ->type == Tpointer)
                            {
                              if (!is_primitive_or_string((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_stdstr((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_binary((yyvsp[(2) - (2)].rec).typ->ref) &&
                                  !is_external((yyvsp[(2) - (2)].rec).typ->ref))
                              {
                                semwarn("invalid attribute pointer @type");
                                (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                              }
                            }
                            else if (
                                !is_primitive_or_string((yyvsp[(2) - (2)].rec).typ) &&
                                !is_stdstr((yyvsp[(2) - (2)].rec).typ) &&
                                !is_binary((yyvsp[(2) - (2)].rec).typ) &&
                                !is_external((yyvsp[(2) - (2)].rec).typ))
                            {
                              semwarn("invalid attribute @type");
                              (yyval.rec).sto = (Storage)((int)(yyval.rec).sto & ~Sattribute);
                            }
                          }
                          sp->node = (yyval.rec);
                          if ((yyvsp[(1) - (2)].sto) & Sextern)
                            transient = 0;
                        ;}
    break;

  case 100:
#line 1078 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(1) - (2)].typ)->type == Tint)
                            switch ((yyvsp[(2) - (2)].rec).typ->type)
                            {
                              case Tchar:       (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
                              case Tshort:      (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
                              case Tint:        (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tlong:       (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
                              case Tllong:      (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ; break;
                              default:  semwarn("invalid int type specified");
                                        (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            }
                          else if ((yyvsp[(1) - (2)].typ)->type == Tuint)
                            switch ((yyvsp[(2) - (2)].rec).typ->type)
                            {
                              case Tchar:       (yyval.rec).typ = mkuchar(); break;
                              case Tshort:      (yyval.rec).typ = mkushort(); break;
                              case Tint:        (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tlong:       (yyval.rec).typ = mkulong(); break;
                              case Tllong:      (yyval.rec).typ = mkullong(); break;
                              default:  semwarn("invalid unsigned type specified");
                                        (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            }
                          else if ((yyvsp[(1) - (2)].typ)->type == Tlong)
                            switch ((yyvsp[(2) - (2)].rec).typ->type)
                            {
                              case Tint:        (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tlong:       (yyval.rec).typ = mkllong(); break;
                              case Tuint:       (yyval.rec).typ = mkulong(); break;
                              case Tulong:      (yyval.rec).typ = mkullong(); break;
                              case Tdouble:     (yyval.rec).typ = mkldouble(); break;
                              default:  semwarn("invalid use of 'long'");
                                        (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            }
                          else if ((yyvsp[(1) - (2)].typ)->type == Tulong)
                            switch ((yyvsp[(2) - (2)].rec).typ->type)
                            {
                              case Tint:        (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tlong:       (yyval.rec).typ = mkullong(); break;
                              case Tuint:       (yyval.rec).typ = (yyvsp[(1) - (2)].typ); break;
                              case Tulong:      (yyval.rec).typ = mkullong(); break;
                              default:  semwarn("invalid use of 'long'");
                                        (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            }
                          else if ((yyvsp[(2) - (2)].rec).typ->type == Tint)
                            (yyval.rec).typ = (yyvsp[(1) - (2)].typ);
                          else
                            semwarn("invalid type specified (missing ';' or type name used as non-type identifier?)");
                          (yyval.rec).sto = (yyvsp[(2) - (2)].rec).sto;
                          sp->node = (yyval.rec);
                        ;}
    break;

  case 101:
#line 1130 "soapcpp2_yacc.y"
    { (yyval.typ) = mkvoid(); ;}
    break;

  case 102:
#line 1131 "soapcpp2_yacc.y"
    { (yyval.typ) = mkbool(); ;}
    break;

  case 103:
#line 1132 "soapcpp2_yacc.y"
    { (yyval.typ) = mkchar(); ;}
    break;

  case 104:
#line 1133 "soapcpp2_yacc.y"
    { (yyval.typ) = mkwchart(); ;}
    break;

  case 105:
#line 1134 "soapcpp2_yacc.y"
    { (yyval.typ) = mkshort(); ;}
    break;

  case 106:
#line 1135 "soapcpp2_yacc.y"
    { (yyval.typ) = mkint(); ;}
    break;

  case 107:
#line 1136 "soapcpp2_yacc.y"
    { (yyval.typ) = mklong(); ;}
    break;

  case 108:
#line 1137 "soapcpp2_yacc.y"
    { (yyval.typ) = mkllong(); ;}
    break;

  case 109:
#line 1138 "soapcpp2_yacc.y"
    { (yyval.typ) = mkullong(); ;}
    break;

  case 110:
#line 1139 "soapcpp2_yacc.y"
    { (yyval.typ) = mksize(); ;}
    break;

  case 111:
#line 1140 "soapcpp2_yacc.y"
    { (yyval.typ) = mkfloat(); ;}
    break;

  case 112:
#line 1141 "soapcpp2_yacc.y"
    { (yyval.typ) = mkdouble(); ;}
    break;

  case 113:
#line 1142 "soapcpp2_yacc.y"
    { (yyval.typ) = mkint(); ;}
    break;

  case 114:
#line 1143 "soapcpp2_yacc.y"
    { (yyval.typ) = mkuint(); ;}
    break;

  case 115:
#line 1144 "soapcpp2_yacc.y"
    { (yyval.typ) = mkuchar(); ;}
    break;

  case 116:
#line 1145 "soapcpp2_yacc.y"
    { (yyval.typ) = mkushort(); ;}
    break;

  case 117:
#line 1146 "soapcpp2_yacc.y"
    { (yyval.typ) = mkuint(); ;}
    break;

  case 118:
#line 1147 "soapcpp2_yacc.y"
    { (yyval.typ) = mkulong(); ;}
    break;

  case 119:
#line 1148 "soapcpp2_yacc.y"
    { (yyval.typ) = mktimet(); ;}
    break;

  case 120:
#line 1150 "soapcpp2_yacc.y"
    {
                          if (!(p = entry(templatetable, (yyvsp[(7) - (7)].sym))))
                          {
                            p = enter(templatetable, (yyvsp[(7) - (7)].sym));
                            p->info.typ = mktemplate(NULL, (yyvsp[(7) - (7)].sym));
                            (yyvsp[(7) - (7)].sym)->token = TYPE;
                          }
                          (yyval.typ) = p->info.typ;
                        ;}
    break;

  case 121:
#line 1160 "soapcpp2_yacc.y"
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
                        ;}
    break;

  case 122:
#line 1186 "soapcpp2_yacc.y"
    {
                          if ((p = entry(classtable, (yyvsp[(1) - (5)].e)->sym)) && p->info.typ->ref)
                          {
                            if (is_mutable(p))
                            {
                              if (merge((Table*)p->info.typ->ref, sp->table))
                              {
                                sprintf(errbuf, "member name clash in class '%s' declared at line %d", (yyvsp[(1) - (5)].e)->sym->name, p->lineno);
                                semerror(errbuf);
                              }
                              p->info.typ->width += sp->offset;
                            }
                          }
                          else
                          {
                            p = reenter(classtable, (yyvsp[(1) - (5)].e)->sym);
                            sp->table->sym = p->sym;
                            p->info.typ->ref = sp->table;
                            p->info.typ->width = sp->offset;
                            p->info.typ->id = p->sym;
                            if (p->info.typ->base)
                              sp->table->prev = (Table*)entry(classtable, p->info.typ->base)->info.typ->ref;
                          }
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        ;}
    break;

  case 123:
#line 1213 "soapcpp2_yacc.y"
    {
                          p = reenter(classtable, (yyvsp[(1) - (7)].e)->sym);
                          sp->table->sym = p->sym;
                          if (!(yyvsp[(3) - (7)].e))
                          {
                            semerror("invalid base class");
                          }
                          else
                          {
                            sp->table->prev = (Table*)(yyvsp[(3) - (7)].e)->info.typ->ref;
                            if (!sp->table->prev && !(yyvsp[(3) - (7)].e)->info.typ->transient)
                            {
                              sprintf(errbuf, "class '%s' has incomplete type (if this class is not serializable then declare 'extern class %s')'", (yyvsp[(3) - (7)].e)->sym->name, (yyvsp[(3) - (7)].e)->sym->name);
                              semerror(errbuf);
                            }
                            p->info.typ->base = (yyvsp[(3) - (7)].e)->info.typ->id;
                          }
                          p->info.typ->ref = sp->table;
                          p->info.typ->width = sp->offset;
                          p->info.typ->id = p->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        ;}
    break;

  case 124:
#line 1236 "soapcpp2_yacc.y"
    {
                          (yyvsp[(1) - (1)].e)->info.typ->id = (yyvsp[(1) - (1)].e)->sym;
                          (yyval.typ) = (yyvsp[(1) - (1)].e)->info.typ;
                        ;}
    break;

  case 125:
#line 1241 "soapcpp2_yacc.y"
    {
                          if (!(yyvsp[(3) - (3)].e))
                          {
                            semerror("invalid base class");
                          }
                          else
                          {
                            if (!(yyvsp[(3) - (3)].e)->info.typ->ref && !(yyvsp[(3) - (3)].e)->info.typ->transient)
                            {
                              sprintf(errbuf, "class '%s' has incomplete type (if this class is not serializable then declare 'extern class %s')'", (yyvsp[(3) - (3)].e)->sym->name, (yyvsp[(3) - (3)].e)->sym->name);
                              semerror(errbuf);
                            }
                            (yyvsp[(1) - (3)].e)->info.typ->base = (yyvsp[(3) - (3)].e)->info.typ->id;
                          }
                          (yyvsp[(1) - (3)].e)->info.typ->id = (yyvsp[(1) - (3)].e)->sym;
                          (yyval.typ) = (yyvsp[(1) - (3)].e)->info.typ;
                        ;}
    break;

  case 126:
#line 1259 "soapcpp2_yacc.y"
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
                        ;}
    break;

  case 127:
#line 1286 "soapcpp2_yacc.y"
    {
                          if ((p = entry(classtable, (yyvsp[(1) - (5)].e)->sym)) && p->info.typ->ref)
                          {
                            if (is_mutable(p))
                            {
                              if (merge((Table*)p->info.typ->ref, sp->table))
                              {
                                sprintf(errbuf, "member name clash in struct '%s' declared at line %d", (yyvsp[(1) - (5)].e)->sym->name, p->lineno);
                                semerror(errbuf);
                              }
                              p->info.typ->width += sp->offset;
                            }
                          }
                          else
                          {
                            p = reenter(classtable, (yyvsp[(1) - (5)].e)->sym);
                            p->info.typ->ref = sp->table;
                            p->info.typ->width = sp->offset;
                            p->info.typ->id = p->sym;
                          }
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        ;}
    break;

  case 128:
#line 1309 "soapcpp2_yacc.y"
    {
                          if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
                          {
                            if (p->info.typ->type == Tstruct)
                            {
                              (yyval.typ) = p->info.typ;
                            }
                            else
                            {
                              sprintf(errbuf, "'struct %s' redeclaration (line %d)", (yyvsp[(2) - (2)].sym)->name, p->lineno);
                              semerror(errbuf);
                              (yyval.typ) = mkint();
                            }
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[(2) - (2)].sym));
                            (yyval.typ) = p->info.typ = mkstruct(NULL, 0);
                            p->info.typ->id = (yyvsp[(2) - (2)].sym);
                          }
                        ;}
    break;

  case 129:
#line 1331 "soapcpp2_yacc.y"
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
                        ;}
    break;

  case 130:
#line 1358 "soapcpp2_yacc.y"
    {
                          if ((p = entry(classtable, (yyvsp[(2) - (6)].sym))))
                          {
                            if (p->info.typ->ref || p->info.typ->type != Tunion)
                            {
                              sprintf(errbuf, "union '%s' already declared at %s:%d", (yyvsp[(2) - (6)].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p = reenter(classtable, (yyvsp[(2) - (6)].sym));
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = sp->offset;
                            }
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[(2) - (6)].sym));
                            p->info.typ = mkunion(sp->table, sp->offset);
                          }
                          p->info.typ->id = (yyvsp[(2) - (6)].sym);
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        ;}
    break;

  case 131:
#line 1382 "soapcpp2_yacc.y"
    {
                          if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
                          {
                            if (p->info.typ->type == Tunion)
                            {
                              (yyval.typ) = p->info.typ;
                            }
                            else
                            {
                              sprintf(errbuf, "'union %s' redeclaration (line %d)", (yyvsp[(2) - (2)].sym)->name, p->lineno);
                              semerror(errbuf);
                              (yyval.typ) = mkint();
                            }
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[(2) - (2)].sym));
                            (yyval.typ) = p->info.typ = mkunion(NULL, 0);
                            p->info.typ->id = (yyvsp[(2) - (2)].sym);
                          }
                        ;}
    break;

  case 132:
#line 1404 "soapcpp2_yacc.y"
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
                        ;}
    break;

  case 133:
#line 1431 "soapcpp2_yacc.y"
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
                        ;}
    break;

  case 134:
#line 1458 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(1) - (6)].e)->sym)))
                            if (!p->info.typ->ref)
                              p->info.typ->ref = sp->table;
                          p->info.typ->id = (yyvsp[(1) - (6)].e)->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        ;}
    break;

  case 135:
#line 1467 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(1) - (6)].e)->sym)))
                            if (!p->info.typ->ref)
                              p->info.typ->ref = sp->table;
                          p->info.typ->id = (yyvsp[(1) - (6)].e)->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        ;}
    break;

  case 136:
#line 1476 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(1) - (6)].e)->sym)))
                          {
                            if (!p->info.typ->ref)
                            {
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = 9; /* 9 = mask */
                            }
                          }
                          p->info.typ->id = (yyvsp[(1) - (6)].e)->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        ;}
    break;

  case 137:
#line 1490 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(1) - (6)].e)->sym)))
                          {
                            if (!p->info.typ->ref)
                            {
                              p->info.typ->ref = sp->table;
                              p->info.typ->width = 9; /* 9 = mask */
                            }
                          }
                          p->info.typ->id = (yyvsp[(1) - (6)].e)->sym;
                          (yyval.typ) = p->info.typ;
                          exitscope();
                        ;}
    break;

  case 138:
#line 1503 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(2) - (2)].sym))))
                          {
                            if (p->info.typ->type != Tenum)
                            {
                              sprintf(errbuf, "'enum %s' used where enum class is expected", (yyvsp[(2) - (2)].sym)->name);
                              semwarn(errbuf);
                            }
                            (yyval.typ) = p->info.typ;
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[(2) - (2)].sym));
                            (yyval.typ) = p->info.typ = mkenum(NULL);
                            p->info.typ->id = (yyvsp[(2) - (2)].sym);
                          }
                        ;}
    break;

  case 139:
#line 1520 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(2) - (2)].sym))))
                          {
                            if (p->info.typ->type != Tenumsc)
                            {
                              sprintf(errbuf, "'enum class %s' used where enum is expected", (yyvsp[(2) - (2)].sym)->name);
                              semwarn(errbuf);
                            }
                            (yyval.typ) = p->info.typ;
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[(2) - (2)].sym));
                            (yyval.typ) = p->info.typ = mkenumsc(NULL);
                            p->info.typ->id = (yyvsp[(2) - (2)].sym);
                            (yyvsp[(2) - (2)].sym)->token = TYPE;
                          }
                        ;}
    break;

  case 140:
#line 1538 "soapcpp2_yacc.y"
    {
                          if ((p = entry(typetable, (yyvsp[(1) - (1)].sym))))
                          {
                            (yyval.typ) = p->info.typ;
                          }
                          else if ((p = entry(classtable, (yyvsp[(1) - (1)].sym))))
                          {
                            (yyval.typ) = p->info.typ;
                          }
                          else if ((p = entry(enumtable, (yyvsp[(1) - (1)].sym))))
                          {
                            (yyval.typ) = p->info.typ;
                          }
                          else if ((yyvsp[(1) - (1)].sym) == lookup("std::string") || (yyvsp[(1) - (1)].sym) == lookup("std::wstring"))
                          {
                            p = enter(classtable, (yyvsp[(1) - (1)].sym));
                            (yyval.typ) = p->info.typ = mkclass(NULL, 8);
                            p->info.typ->id = (yyvsp[(1) - (1)].sym);
                            if (cflag)
                              p->info.typ->transient = 1;       /* make std::string transient in C */
                            else
                              p->info.typ->transient = -2;      /* otherwise volatile in C++ */
                          }
                          else
                          {
                            sprintf(errbuf, "unknown type '%s'", (yyvsp[(1) - (1)].sym)->name);
                            semerror(errbuf);
                            (yyval.typ) = mkint();
                          }
                        ;}
    break;

  case 141:
#line 1569 "soapcpp2_yacc.y"
    {
                          if ((p = entry(templatetable, (yyvsp[(1) - (4)].sym))))
                          {
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                            if (p->info.typ->transient)
                              (yyval.typ)->transient = p->info.typ->transient;
                          }
                          else if ((yyvsp[(1) - (4)].sym) == lookup("std::deque"))
                          {
                            semwarn("To use std::deque, please also add #import \"import/stldeque.h\"");
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                          }
                          else if ((yyvsp[(1) - (4)].sym) == lookup("std::list"))
                          {
                            semwarn("To use std::list, please also add #import \"import/stllist.h\"");
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                          }
                          else if ((yyvsp[(1) - (4)].sym) == lookup("std::vector"))
                          {
                            semwarn("To use std::vector, please also add #import \"import/stlvector.h\"");
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                          }
                          else if ((yyvsp[(1) - (4)].sym) == lookup("std::set"))
                          {
                            semwarn("To use std::set, please also add #import \"import/stlset.h\"");
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                          }
                          else if ((yyvsp[(1) - (4)].sym) == lookup("std::queue"))
                          {
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                            (yyval.typ)->transient = 1; /* not serializable */
                          }
                          else if ((yyvsp[(1) - (4)].sym) == lookup("std::stack"))
                          {
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                            (yyval.typ)->transient = 1; /* not serializable */
                          }
                          else if ((yyvsp[(1) - (4)].sym) == lookup("std::shared_ptr") ||
                              (yyvsp[(1) - (4)].sym) == lookup("std::unique_ptr") ||
                              (yyvsp[(1) - (4)].sym) == lookup("std::auto_ptr"))
                          {
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                            (yyval.typ)->transient = -2; /* volatile indicates smart pointer template */
                          }
                          else if ((yyvsp[(1) - (4)].sym) == lookup("std::weak_ptr") ||
                              (yyvsp[(1) - (4)].sym) == lookup("std::function"))
                          {
                            (yyval.typ) = mktemplate((yyvsp[(3) - (4)].rec).typ, (yyvsp[(1) - (4)].sym));
                            (yyval.typ)->transient = 1; /* not serializable */
                          }
                          else
                          {
                            semerror("undefined template");
                            (yyval.typ) = mkint();
                          }
                        ;}
    break;

  case 142:
#line 1626 "soapcpp2_yacc.y"
    {
                          sprintf(errbuf, "undeclared '%s'", (yyvsp[(2) - (3)].sym)->name);
                          synerror(errbuf);
                          (yyval.typ) = mkint();
                        ;}
    break;

  case 143:
#line 1631 "soapcpp2_yacc.y"
    {
                          sprintf(errbuf, "perhaps trying to use a template with an undefined type parameter '%s'?", (yyvsp[(2) - (3)].sym)->name);
                          synerror(errbuf);
                          (yyval.typ) = mkint();
                        ;}
    break;

  case 144:
#line 1636 "soapcpp2_yacc.y"
    {
                          synerror("perhaps trying to use an undefined template or template with a non-type template parameter? Declare 'template <typename T> class name'");
                          (yyval.typ) = mkint();
                        ;}
    break;

  case 145:
#line 1641 "soapcpp2_yacc.y"
    {
                          synerror("malformed class definition (use spacing around ':' to separate derived : base)");
                          yyerrok;
                          (yyval.typ) = mkint();
                        ;}
    break;

  case 146:
#line 1647 "soapcpp2_yacc.y"
    {
                          synerror("malformed struct definition");
                          yyerrok;
                          (yyval.typ) = mkint();
                        ;}
    break;

  case 147:
#line 1653 "soapcpp2_yacc.y"
    {
                          synerror("malformed union definition");
                          yyerrok;
                          (yyval.typ) = mkint();
                        ;}
    break;

  case 148:
#line 1659 "soapcpp2_yacc.y"
    {
                          synerror("malformed enum definition");
                          yyerrok;
                          (yyval.typ) = mkint();
                        ;}
    break;

  case 149:
#line 1665 "soapcpp2_yacc.y"
    {
                          if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              if (!is_mutable(p))
                              {
                                sprintf(errbuf, "struct '%s' already declared at %s:%d", (yyvsp[(2) - (2)].sym)->name, p->filename, p->lineno);
                                semerror(errbuf);
                              }
                            }
                            else
                            {
                              p = reenter(classtable, (yyvsp[(2) - (2)].sym));
                            }
                            p->info.typ->transient = transient;
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[(2) - (2)].sym));
                            p->info.typ = mkstruct(NULL, 0);
                          }
                          (yyval.e) = p;
                        ;}
    break;

  case 150:
#line 1690 "soapcpp2_yacc.y"
    {
                          if ((p = entry(classtable, (yyvsp[(2) - (2)].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              if (!is_mutable(p))
                              {
                                sprintf(errbuf, "class '%s' already declared at %s:%d (redundant 'class' specifier here?)", (yyvsp[(2) - (2)].sym)->name, p->filename, p->lineno);
                                semerror(errbuf);
                              }
                            }
                            else
                            {
                              p = reenter(classtable, (yyvsp[(2) - (2)].sym));
                            }
                            p->info.typ->transient = transient;
                          }
                          else
                          {
                            p = enter(classtable, (yyvsp[(2) - (2)].sym));
                            p->info.typ = mkclass(NULL, 0);
                            p->info.typ->id = p->sym;
                          }
                          (yyvsp[(2) - (2)].sym)->token = TYPE;
                          (yyval.e) = p;
                        ;}
    break;

  case 151:
#line 1717 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(2) - (3)].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", (yyvsp[(2) - (3)].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[(2) - (3)].sym));
                            p->info.typ = mkenum(0);
                          }
                          p->info.typ->width = (int)(yyvsp[(3) - (3)].i);
                          (yyval.e) = p;
                        ;}
    break;

  case 152:
#line 1735 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(2) - (3)].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", (yyvsp[(2) - (3)].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[(2) - (3)].sym));
                            p->info.typ = mkenumsc(0);
                          }
                          p->info.typ->width = (int)(yyvsp[(3) - (3)].i);
                          (yyvsp[(2) - (3)].sym)->token = TYPE;
                          (yyval.e) = p;
                        ;}
    break;

  case 153:
#line 1755 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(3) - (4)].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", (yyvsp[(3) - (4)].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p->info.typ = mkmask(0);
                            }
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[(3) - (4)].sym));
                            p->info.typ = mkmask(0);
                          }
                          (yyval.e) = p;
                        ;}
    break;

  case 154:
#line 1777 "soapcpp2_yacc.y"
    {
                          if ((p = entry(enumtable, (yyvsp[(3) - (4)].sym))))
                          {
                            if (p->info.typ->ref)
                            {
                              sprintf(errbuf, "enum '%s' already declared at %s:%d", (yyvsp[(3) - (4)].sym)->name, p->filename, p->lineno);
                              semerror(errbuf);
                            }
                            else
                            {
                              p->info.typ = mkmasksc(0);
                            }
                          }
                          else
                          {
                            p = enter(enumtable, (yyvsp[(3) - (4)].sym));
                            p->info.typ = mkmasksc(0);
                          }
                          (yyvsp[(3) - (4)].sym)->token = TYPE;
                          (yyval.e) = p;
                        ;}
    break;

  case 155:
#line 1799 "soapcpp2_yacc.y"
    {
                          (yyval.sym) = (yyvsp[(2) - (2)].sym);
                          if (!c11flag)
                            semwarn("To use scoped enumerations (enum class) you must also use soapcpp2 option -c++11 or -c++14");
                        ;}
    break;

  case 156:
#line 1804 "soapcpp2_yacc.y"
    {
                          (yyval.sym) = (yyvsp[(2) - (2)].sym);
                          if (!c11flag)
                            semwarn("To use scoped enumerations (enum class) you must also use soapcpp2 option -c++11 or -c++14");
                        ;}
    break;

  case 157:
#line 1810 "soapcpp2_yacc.y"
    { (yyval.i) = 1; ;}
    break;

  case 158:
#line 1811 "soapcpp2_yacc.y"
    { (yyval.i) = 4; ;}
    break;

  case 159:
#line 1812 "soapcpp2_yacc.y"
    { (yyval.i) = 2; ;}
    break;

  case 160:
#line 1813 "soapcpp2_yacc.y"
    { (yyval.i) = 4; ;}
    break;

  case 161:
#line 1814 "soapcpp2_yacc.y"
    { (yyval.i) = 4; ;}
    break;

  case 162:
#line 1815 "soapcpp2_yacc.y"
    { (yyval.i) = 8; ;}
    break;

  case 163:
#line 1816 "soapcpp2_yacc.y"
    {
                          (yyval.i) = 4;
                          p = entry(typetable, (yyvsp[(2) - (2)].sym));
                          if (!p)
                            p = entry(enumtable, (yyvsp[(2) - (2)].sym));
                          if (!p)
                            semerror("enum underlying type must be one of int8_t, int16_t, int32_t, int64_t");
                          else
                            (yyval.i) = p->info.typ->width;
                        ;}
    break;

  case 164:
#line 1826 "soapcpp2_yacc.y"
    {
                          semerror("enum underlying type must be one of int8_t, int16_t, int32_t, int64_t");
                          (yyval.i) = 4;
                        ;}
    break;

  case 165:
#line 1830 "soapcpp2_yacc.y"
    { (yyval.i) = 4; /* 4 = enum */ ;}
    break;

  case 166:
#line 1832 "soapcpp2_yacc.y"
    { ;}
    break;

  case 167:
#line 1833 "soapcpp2_yacc.y"
    { ;}
    break;

  case 168:
#line 1835 "soapcpp2_yacc.y"
    { (yyval.e) = (yyvsp[(2) - (2)].e); ;}
    break;

  case 169:
#line 1836 "soapcpp2_yacc.y"
    { (yyval.e) = (yyvsp[(2) - (2)].e); ;}
    break;

  case 170:
#line 1837 "soapcpp2_yacc.y"
    { (yyval.e) = (yyvsp[(2) - (2)].e); ;}
    break;

  case 171:
#line 1838 "soapcpp2_yacc.y"
    {
                          (yyval.e) = entry(classtable, (yyvsp[(1) - (1)].sym));
                          if (!(yyval.e))
                          {
                            p = entry(typetable, (yyvsp[(1) - (1)].sym));
                            if (p && (p->info.typ->type == Tclass || p->info.typ->type == Tstruct))
                              (yyval.e) = p;
                          }
                        ;}
    break;

  case 172:
#line 1847 "soapcpp2_yacc.y"
    { (yyval.e) = entry(classtable, (yyvsp[(2) - (2)].sym)); ;}
    break;

  case 173:
#line 1849 "soapcpp2_yacc.y"
    {
                          if (transient <= -2)
                            transient = 0;
                          permission = 0;
                          enterscope(mktable(NULL), 0);
                          sp->entry = NULL;
                        ;}
    break;

  case 174:
#line 1857 "soapcpp2_yacc.y"
    {
                          if (transient <= -2)
                            transient = 0;
                          permission = 0;
                          enterscope(mktable(NULL), 0);
                          sp->entry = NULL;
                          sp->grow = False;
                        ;}
    break;

  case 175:
#line 1866 "soapcpp2_yacc.y"
    {
                          enterscope(mktable(NULL), 0);
                          sp->entry = NULL;
                          sp->mask = True;
                          sp->val = 1;
                        ;}
    break;

  case 176:
#line 1873 "soapcpp2_yacc.y"
    { ;}
    break;

  case 177:
#line 1874 "soapcpp2_yacc.y"
    { ;}
    break;

  case 178:
#line 1876 "soapcpp2_yacc.y"
    {
                          if (sp->table->level == INTERNAL)
                            transient |= 1;
                          permission = 0;
                          enterscope(mktable(NULL), 0);
                          sp->entry = NULL;
                          sp->table->level = PARAM;
                        ;}
    break;

  case 179:
#line 1885 "soapcpp2_yacc.y"
    { (yyval.sto) = Sauto; ;}
    break;

  case 180:
#line 1886 "soapcpp2_yacc.y"
    { (yyval.sto) = Sregister; ;}
    break;

  case 181:
#line 1887 "soapcpp2_yacc.y"
    { (yyval.sto) = Sstatic; ;}
    break;

  case 182:
#line 1888 "soapcpp2_yacc.y"
    { (yyval.sto) = Sexplicit; ;}
    break;

  case 183:
#line 1889 "soapcpp2_yacc.y"
    { (yyval.sto) = Sextern; transient = 1; ;}
    break;

  case 184:
#line 1890 "soapcpp2_yacc.y"
    { (yyval.sto) = Stypedef; ;}
    break;

  case 185:
#line 1891 "soapcpp2_yacc.y"
    { (yyval.sto) = Svirtual; ;}
    break;

  case 186:
#line 1892 "soapcpp2_yacc.y"
    { (yyval.sto) = Sconst; ;}
    break;

  case 187:
#line 1893 "soapcpp2_yacc.y"
    { (yyval.sto) = Sfinal; ;}
    break;

  case 188:
#line 1894 "soapcpp2_yacc.y"
    { (yyval.sto) = Soverride; ;}
    break;

  case 189:
#line 1895 "soapcpp2_yacc.y"
    { (yyval.sto) = Sfriend; ;}
    break;

  case 190:
#line 1896 "soapcpp2_yacc.y"
    { (yyval.sto) = Sinline; ;}
    break;

  case 191:
#line 1897 "soapcpp2_yacc.y"
    { (yyval.sto) = SmustUnderstand; ;}
    break;

  case 192:
#line 1898 "soapcpp2_yacc.y"
    { (yyval.sto) = Sreturn; ;}
    break;

  case 193:
#line 1899 "soapcpp2_yacc.y"
    {
                          (yyval.sto) = Sattribute;
                          if (eflag)
                            semwarn("SOAP RPC encoding does not support XML attributes");
                        ;}
    break;

  case 194:
#line 1904 "soapcpp2_yacc.y"
    { (yyval.sto) = Sspecial; ;}
    break;

  case 195:
#line 1905 "soapcpp2_yacc.y"
    { (yyval.sto) = Sextern; transient = -2; ;}
    break;

  case 196:
#line 1906 "soapcpp2_yacc.y"
    { (yyval.sto) = Smutable; transient = -4; ;}
    break;

  case 197:
#line 1908 "soapcpp2_yacc.y"
    { (yyval.sto) = Snone; ;}
    break;

  case 198:
#line 1909 "soapcpp2_yacc.y"
    { (yyval.sto) |= Sconstobj; ;}
    break;

  case 199:
#line 1910 "soapcpp2_yacc.y"
    { (yyval.sto) |= Sfinal; ;}
    break;

  case 200:
#line 1911 "soapcpp2_yacc.y"
    { (yyval.sto) |= Soverride; ;}
    break;

  case 201:
#line 1913 "soapcpp2_yacc.y"
    { (yyval.sto) = Snone; ;}
    break;

  case 202:
#line 1914 "soapcpp2_yacc.y"
    { (yyval.sto) = Sabstract; ;}
    break;

  case 203:
#line 1916 "soapcpp2_yacc.y"
    { (yyval.sto) = Snone; ;}
    break;

  case 204:
#line 1917 "soapcpp2_yacc.y"
    { (yyval.sto) = Svirtual; ;}
    break;

  case 205:
#line 1919 "soapcpp2_yacc.y"
    { (yyval.rec) = tmp = sp->node; ;}
    break;

  case 206:
#line 1920 "soapcpp2_yacc.y"
    {
                          /* handle const pointers, such as const char* */
                          if ((tmp.sto & Sconst))
                            tmp.sto = (Storage)(((int)tmp.sto & ~Sconst) | Sconstptr);
                          tmp.typ = mkpointer(tmp.typ);
                          tmp.typ->transient = transient;
                          (yyval.rec) = tmp;
                        ;}
    break;

  case 207:
#line 1928 "soapcpp2_yacc.y"
    {
                          tmp.typ = mkreference(tmp.typ);
                          tmp.typ->transient = transient;
                          (yyval.rec) = tmp;
                        ;}
    break;

  case 208:
#line 1933 "soapcpp2_yacc.y"
    {
                          tmp.typ = mkrvalueref(tmp.typ);
                          tmp.typ->transient = transient;
                          (yyval.rec) = tmp;
                        ;}
    break;

  case 209:
#line 1939 "soapcpp2_yacc.y"
    { (yyval.rec) = tmp; ;}
    break;

  case 210:
#line 1941 "soapcpp2_yacc.y"
    {
                          if (!bflag && (yyvsp[(4) - (4)].rec).typ->type == Tchar)
                          {
                            sprintf(errbuf, "char[" SOAP_LONG_FORMAT "] will be serialized as an array of " SOAP_LONG_FORMAT " bytes: use soapcpp2 option -b to enable char[] string serialization or use char* for strings", (yyvsp[(2) - (4)].rec).val.i, (yyvsp[(2) - (4)].rec).val.i);
                            semwarn(errbuf);
                          }
                          if ((yyvsp[(2) - (4)].rec).hasval && (yyvsp[(2) - (4)].rec).typ->type == Tint && (yyvsp[(2) - (4)].rec).val.i > 0 && (yyvsp[(4) - (4)].rec).typ->width > 0)
                          {
                            (yyval.rec).typ = mkarray((yyvsp[(4) - (4)].rec).typ, (int) (yyvsp[(2) - (4)].rec).val.i * (yyvsp[(4) - (4)].rec).typ->width);
                          }
                          else
                          {
                            (yyval.rec).typ = mkarray((yyvsp[(4) - (4)].rec).typ, 0);
                            semerror("undetermined array size");
                          }
                          (yyval.rec).sto = (yyvsp[(4) - (4)].rec).sto;
                        ;}
    break;

  case 211:
#line 1958 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkpointer((yyvsp[(3) - (3)].rec).typ); /* zero size array = pointer */
                          (yyval.rec).sto = (yyvsp[(3) - (3)].rec).sto;
                        ;}
    break;

  case 212:
#line 1963 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(1) - (1)].rec).typ->type == Tstruct || (yyvsp[(1) - (1)].rec).typ->type == Tclass)
                          {
                            if (!(yyvsp[(1) - (1)].rec).typ->ref && !(yyvsp[(1) - (1)].rec).typ->transient && !((yyvsp[(1) - (1)].rec).sto & Stypedef))
                            {
                              if ((yyvsp[(1) - (1)].rec).typ->type == Tstruct)
                                sprintf(errbuf, "struct '%s' has incomplete type (if this struct is not serializable then declare 'extern struct %s')", (yyvsp[(1) - (1)].rec).typ->id->name, (yyvsp[(1) - (1)].rec).typ->id->name);
                              else
                                sprintf(errbuf, "class '%s' has incomplete type (if this class is not serializable then declare 'extern class %s')", (yyvsp[(1) - (1)].rec).typ->id->name, (yyvsp[(1) - (1)].rec).typ->id->name);
                              semerror(errbuf);
                            }
                          }
                          (yyval.rec) = (yyvsp[(1) - (1)].rec);
                        ;}
    break;

  case 213:
#line 1978 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 214:
#line 1979 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(2) - (3)].rec).hasval)
                          {
                            (yyval.rec).typ = (yyvsp[(2) - (3)].rec).typ;
                            (yyval.rec).hasval = True;
                            (yyval.rec).val = (yyvsp[(2) - (3)].rec).val;
                          }
                          else
                          {
                            (yyval.rec).hasval = False;
                            semerror("initialization expression not constant");
                          }
                        ;}
    break;

  case 215:
#line 1993 "soapcpp2_yacc.y"
    { (yyval.rec).hasval = False; ;}
    break;

  case 216:
#line 1994 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(2) - (2)].rec).hasval)
                          {
                            (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                            (yyval.rec).hasval = True;
                            (yyval.rec).val = (yyvsp[(2) - (2)].rec).val;
                          }
                          else
                          {
                            (yyval.rec).hasval = False;
                            semerror("initialization expression not constant");
                          }
                        ;}
    break;

  case 217:
#line 2008 "soapcpp2_yacc.y"
    { (yyval.s) = NULL; ;}
    break;

  case 218:
#line 2009 "soapcpp2_yacc.y"
    { (yyval.s) = (yyvsp[(1) - (1)].s); ;}
    break;

  case 219:
#line 2011 "soapcpp2_yacc.y"
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
                        ;}
    break;

  case 220:
#line 2022 "soapcpp2_yacc.y"
    {
                          (yyval.rec).minOccurs = (yyvsp[(1) - (1)].i);
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
                        ;}
    break;

  case 221:
#line 2035 "soapcpp2_yacc.y"
    {
                          (yyval.rec).minOccurs = (yyvsp[(1) - (2)].i);
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
                        ;}
    break;

  case 222:
#line 2048 "soapcpp2_yacc.y"
    {
                          (yyval.rec).minOccurs = (yyvsp[(1) - (3)].i);
                          (yyval.rec).maxOccurs = (yyvsp[(3) - (3)].i);
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
                        ;}
    break;

  case 223:
#line 2069 "soapcpp2_yacc.y"
    {
                          (yyval.rec).minOccurs = -1;
                          (yyval.rec).maxOccurs = (yyvsp[(2) - (2)].i);
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
                        ;}
    break;

  case 224:
#line 2086 "soapcpp2_yacc.y"
    {
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).minOccurs = -1;
                          (yyval.rec).maxOccurs = 1;
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = 0.0;
                          (yyval.rec).incmin = True;
                          (yyval.rec).incmax = True;
                          (yyval.rec).nillable = (yyvsp[(1) - (2)].i);
                          (yyval.rec).pattern = (yyvsp[(2) - (2)].s);
                        ;}
    break;

  case 225:
#line 2099 "soapcpp2_yacc.y"
    {
                          (yyval.rec).hasmin = True;
                          (yyval.rec).hasmax = False;
                          (yyval.rec).incmin = (yyvsp[(4) - (4)].rec).incmin;
                          (yyval.rec).incmax = (yyvsp[(4) - (4)].rec).incmax;
                          (yyval.rec).minOccurs = (LONG64)(yyvsp[(3) - (4)].r);
                          (yyval.rec).maxOccurs = 1;
                          if ((yyval.rec).minOccurs < 0)
                            (yyval.rec).minOccurs = -1;
                          (yyval.rec).min = (yyvsp[(3) - (4)].r);
                          (yyval.rec).max = 0.0;
                          (yyval.rec).nillable = (yyvsp[(1) - (4)].i);
                          (yyval.rec).pattern = (yyvsp[(2) - (4)].s);
                        ;}
    break;

  case 226:
#line 2114 "soapcpp2_yacc.y"
    {
                          (yyval.rec).hasmin = True;
                          (yyval.rec).hasmax = True;
                          (yyval.rec).incmin = (yyvsp[(4) - (5)].rec).incmin;
                          (yyval.rec).incmax = (yyvsp[(4) - (5)].rec).incmax;
                          (yyval.rec).minOccurs = (LONG64)(yyvsp[(3) - (5)].r);
                          (yyval.rec).maxOccurs = (LONG64)(yyvsp[(5) - (5)].r);
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
                          (yyval.rec).min = (yyvsp[(3) - (5)].r);
                          (yyval.rec).max = (yyvsp[(5) - (5)].r);
                          (yyval.rec).nillable = (yyvsp[(1) - (5)].i);
                          (yyval.rec).pattern = (yyvsp[(2) - (5)].s);
                        ;}
    break;

  case 227:
#line 2136 "soapcpp2_yacc.y"
    {
                          (yyval.rec).hasmin = False;
                          (yyval.rec).hasmax = True;
                          (yyval.rec).incmin = (yyvsp[(3) - (4)].rec).incmin;
                          (yyval.rec).incmax = (yyvsp[(3) - (4)].rec).incmax;
                          (yyval.rec).minOccurs = -1;
                          (yyval.rec).maxOccurs = (LONG64)(yyvsp[(4) - (4)].r);
                          if ((yyval.rec).maxOccurs < 0)
                          {
                            (yyval.rec).minOccurs = -1;
                            (yyval.rec).maxOccurs = 1;
                          }
                          (yyval.rec).min = 0.0;
                          (yyval.rec).max = (yyvsp[(4) - (4)].r);
                          (yyval.rec).nillable = (yyvsp[(1) - (4)].i);
                          (yyval.rec).pattern = (yyvsp[(2) - (4)].s);
                        ;}
    break;

  case 228:
#line 2154 "soapcpp2_yacc.y"
    { (yyval.i) = False; ;}
    break;

  case 229:
#line 2155 "soapcpp2_yacc.y"
    { (yyval.i) = True; ;}
    break;

  case 230:
#line 2157 "soapcpp2_yacc.y"
    { (yyval.s) = NULL; ;}
    break;

  case 231:
#line 2158 "soapcpp2_yacc.y"
    { (yyval.s) = (yyvsp[(1) - (1)].s); ;}
    break;

  case 232:
#line 2160 "soapcpp2_yacc.y"
    { (yyval.r) = (yyvsp[(1) - (1)].r); ;}
    break;

  case 233:
#line 2161 "soapcpp2_yacc.y"
    { (yyval.r) = (double)(yyvsp[(1) - (1)].i); ;}
    break;

  case 234:
#line 2162 "soapcpp2_yacc.y"
    { (yyval.r) = (double)(yyvsp[(1) - (1)].c); ;}
    break;

  case 235:
#line 2163 "soapcpp2_yacc.y"
    { (yyval.r) = +(yyvsp[(2) - (2)].r); ;}
    break;

  case 236:
#line 2164 "soapcpp2_yacc.y"
    { (yyval.r) = -(yyvsp[(2) - (2)].r); ;}
    break;

  case 237:
#line 2166 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = (yyval.rec).incmax = True; ;}
    break;

  case 238:
#line 2167 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = (yyval.rec).incmax = True; ;}
    break;

  case 239:
#line 2168 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = False; (yyval.rec).incmax = True; ;}
    break;

  case 240:
#line 2169 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = False; (yyval.rec).incmax = True; ;}
    break;

  case 241:
#line 2171 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = (yyval.rec).incmax = True; ;}
    break;

  case 242:
#line 2172 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = False; (yyval.rec).incmax = True; ;}
    break;

  case 243:
#line 2173 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = True; (yyval.rec).incmax = False; ;}
    break;

  case 244:
#line 2174 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = False; (yyval.rec).incmax = False; ;}
    break;

  case 245:
#line 2175 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = False; (yyval.rec).incmax = False; ;}
    break;

  case 246:
#line 2177 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = (yyval.rec).incmax = True; ;}
    break;

  case 247:
#line 2178 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = True; (yyval.rec).incmax = False; ;}
    break;

  case 248:
#line 2179 "soapcpp2_yacc.y"
    { (yyval.rec).incmin = True; (yyval.rec).incmax = False; ;}
    break;

  case 249:
#line 2188 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(3) - (3)].rec); ;}
    break;

  case 250:
#line 2189 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 251:
#line 2193 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = (yyvsp[(3) - (5)].rec).typ;
                          (yyval.rec).sto = Snone;
                          (yyval.rec).hasval = False;
                        ;}
    break;

  case 253:
#line 2201 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 254:
#line 2204 "soapcpp2_yacc.y"
    {
                          (yyval.rec).hasval = False;
                          (yyval.rec).typ = mkint();
                        ;}
    break;

  case 255:
#line 2208 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 256:
#line 2210 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 257:
#line 2213 "soapcpp2_yacc.y"
    { (yyval.rec).hasval = False;
                          (yyval.rec).typ = mkint();
                        ;}
    break;

  case 258:
#line 2216 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 259:
#line 2218 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 260:
#line 2221 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("|", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 261:
#line 2222 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("^", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 262:
#line 2223 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("&", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 263:
#line 2224 "soapcpp2_yacc.y"
    { (yyval.rec) = relop("==", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 264:
#line 2225 "soapcpp2_yacc.y"
    { (yyval.rec) = relop("!=", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 265:
#line 2226 "soapcpp2_yacc.y"
    { (yyval.rec) = relop("<", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 266:
#line 2227 "soapcpp2_yacc.y"
    { (yyval.rec) = relop("<=", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 267:
#line 2228 "soapcpp2_yacc.y"
    { (yyval.rec) = relop(">", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 268:
#line 2229 "soapcpp2_yacc.y"
    { (yyval.rec) = relop(">=", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 269:
#line 2230 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("<<", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 270:
#line 2231 "soapcpp2_yacc.y"
    { (yyval.rec) = iop(">>", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 271:
#line 2232 "soapcpp2_yacc.y"
    { (yyval.rec) = op("+", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 272:
#line 2233 "soapcpp2_yacc.y"
    { (yyval.rec) = op("-", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 273:
#line 2234 "soapcpp2_yacc.y"
    { (yyval.rec) = op("*", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 274:
#line 2235 "soapcpp2_yacc.y"
    { (yyval.rec) = op("/", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 275:
#line 2236 "soapcpp2_yacc.y"
    { (yyval.rec) = iop("%", (yyvsp[(1) - (3)].rec), (yyvsp[(3) - (3)].rec)); ;}
    break;

  case 276:
#line 2237 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 277:
#line 2240 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(2) - (2)].rec).hasval)
                            (yyval.rec).val.i = !(yyvsp[(2) - (2)].rec).val.i;
                          (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                          (yyval.rec).hasval = (yyvsp[(2) - (2)].rec).hasval;
                        ;}
    break;

  case 278:
#line 2246 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(2) - (2)].rec).hasval)
                            (yyval.rec).val.i = ~(yyvsp[(2) - (2)].rec).val.i;
                          (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                          (yyval.rec).hasval = (yyvsp[(2) - (2)].rec).hasval;
                        ;}
    break;

  case 279:
#line 2252 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(2) - (2)].rec).hasval)
                          {
                            if (integer((yyvsp[(2) - (2)].rec).typ))
                              (yyval.rec).val.i = -(yyvsp[(2) - (2)].rec).val.i;
                            else if (real((yyvsp[(2) - (2)].rec).typ))
                              (yyval.rec).val.r = -(yyvsp[(2) - (2)].rec).val.r;
                            else
                              typerror("string?");
                          }
                          (yyval.rec).typ = (yyvsp[(2) - (2)].rec).typ;
                          (yyval.rec).hasval = (yyvsp[(2) - (2)].rec).hasval;
                        ;}
    break;

  case 280:
#line 2265 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(2) - (2)].rec); ;}
    break;

  case 281:
#line 2266 "soapcpp2_yacc.y"
    {
                          if ((yyvsp[(2) - (2)].rec).typ->type == Tpointer)
                            (yyval.rec).typ = (Tnode*)(yyvsp[(2) - (2)].rec).typ->ref;
                          else
                            typerror("dereference of non-pointer type");
                          (yyval.rec).sto = Snone;
                          (yyval.rec).hasval = False;
                        ;}
    break;

  case 282:
#line 2274 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkpointer((yyvsp[(2) - (2)].rec).typ);
                          (yyval.rec).sto = Snone;
                          (yyval.rec).hasval = False;
                        ;}
    break;

  case 283:
#line 2280 "soapcpp2_yacc.y"
    {
                          (yyval.rec).hasval = True;
                          (yyval.rec).typ = mkint();
                          (yyval.rec).val.i = (yyvsp[(3) - (4)].rec).typ->width;
                        ;}
    break;

  case 284:
#line 2285 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(1) - (1)].rec); ;}
    break;

  case 285:
#line 2288 "soapcpp2_yacc.y"
    { (yyval.rec) = (yyvsp[(2) - (3)].rec); ;}
    break;

  case 286:
#line 2289 "soapcpp2_yacc.y"
    {
                          if (!(p = enumentry((yyvsp[(1) - (1)].sym))))
                            p = undefined((yyvsp[(1) - (1)].sym));
                          else
                            (yyval.rec).hasval = True;
                          (yyval.rec).typ = p->info.typ;
                          (yyval.rec).val = p->info.val;
                        ;}
    break;

  case 287:
#line 2297 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkint();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = (yyvsp[(1) - (1)].i);
                        ;}
    break;

  case 288:
#line 2302 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkint();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = 0;
                        ;}
    break;

  case 289:
#line 2307 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkfloat();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.r = (yyvsp[(1) - (1)].r);
                        ;}
    break;

  case 290:
#line 2312 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkchar();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = (yyvsp[(1) - (1)].c);
                        ;}
    break;

  case 291:
#line 2317 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkstring();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.s = (yyvsp[(1) - (1)].s);
                        ;}
    break;

  case 292:
#line 2322 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkbool();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = 0;
                        ;}
    break;

  case 293:
#line 2327 "soapcpp2_yacc.y"
    {
                          (yyval.rec).typ = mkbool();
                          (yyval.rec).hasval = True;
                          (yyval.rec).val.i = 1;
                        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5462 "soapcpp2_yacc.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 2334 "soapcpp2_yacc.y"


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

