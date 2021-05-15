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
#line 1 "mini.y"

  
  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

  int yyerror(char *);


#line 82 "mini.tab.c"

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
#ifndef YY_YY_MINI_TAB_H_INCLUDED
# define YY_YY_MINI_TAB_H_INCLUDED
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
    AND = 258,
    AND_ASIG = 259,
    ARRAY = 260,
    CABECERA = 261,
    CADA = 262,
    CADENA = 263,
    CARACTER = 264,
    CONJUNTO = 265,
    CONSTANTES = 266,
    CONTINUAR = 267,
    CTC_CADENA = 268,
    CTC_CARACTER = 269,
    CTC_ENTERA = 270,
    CTC_REAL = 271,
    DE = 272,
    DEFECTO = 273,
    DIV_ASIG = 274,
    DEVOLVER = 275,
    EJECUTA = 276,
    ENCAMBIO = 277,
    ENTERO = 278,
    EQ = 279,
    ES = 280,
    ESCAPE = 281,
    ESTRUCTURA = 282,
    ETIQUETA = 283,
    EXCEPCION = 284,
    FD_ASIG = 285,
    FI_ASIG = 286,
    FLECHA_DCHA = 287,
    FLECHA_IZDA = 288,
    FICHERO = 289,
    FIN = 290,
    FUNCION = 291,
    HACER = 292,
    HASH = 293,
    GE = 294,
    IDENTIFICADOR = 295,
    INDIRECCION = 296,
    LANZA = 297,
    LE = 298,
    MIENTRAS = 299,
    MOD_ASIG = 300,
    MULT_ASIG = 301,
    NADA = 302,
    NEQ = 303,
    OR = 304,
    OTRA = 305,
    OR_ASIG = 306,
    PARA = 307,
    POT_ASIG = 308,
    PRINCIPIO = 309,
    PROGRAMA = 310,
    POTENCIA = 311,
    REAL = 312,
    REF = 313,
    RESTA_ASIG = 314,
    RUTA = 315,
    SALTAR = 316,
    SI = 317,
    SINO = 318,
    SUMA_ASIG = 319,
    TAMANO = 320,
    TIPOS = 321,
    UNION = 322,
    VARIABLES = 323,
    XOR_ASIG = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "mini.y"

  int valor_entero;
  double valor_real;
  char * texto;

#line 210 "mini.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_TAB_H_INCLUDED  */



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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  393

#define YYUNDEFTOK  2
#define YYMAXUTOK   324


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
       2,     2,     2,    94,     2,     2,     2,    92,    87,     2,
      73,    74,    90,    88,    71,    89,    78,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    70,
      83,    72,    84,     2,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,    80,    82,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    85,    76,    93,     2,     2,     2,
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
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    35,    35,    39,    42,    43,    46,    47,    51,    52,
      53,    54,    51,    56,    66,    67,    68,    71,    72,    75,
      78,    81,    82,    85,    86,    87,    88,    92,    93,    94,
      95,    96,    97,   100,   101,   102,   106,   107,   108,   109,
     112,   115,   116,   124,   125,   128,   129,   132,   135,   136,
     137,   138,   139,   140,   143,   144,   147,   148,   150,   151,
     154,   156,   157,   160,   163,   165,   166,   169,   178,   179,
     182,   183,   186,   187,   190,   191,   194,   195,   204,   205,
     208,   211,   212,   215,   218,   219,   222,   223,   226,   227,
     230,   231,   234,   235,   238,   239,   240,   241,   242,   246,
     248,   249,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   268,   269,   272,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   289,   292,   293,
     296,   297,   301,   304,   305,   308,   309,   310,   311,   314,
     315,   318,   319,   320,   323,   326,   327,   330,   333,   336,
     339,   340,   343,   344,   347,   350,   351,   354,   357,   360,
     368,   369,   370,   373,   374,   375,   376,   379,   380,   381,
     382,   385,   386,   389,   390,   391,   392,   395,   396,   399,
     402,   403,   406,   407,   410,   413,   414,   417,   420,   421,
     423,   424,   427,   428,   429,   432,   433,   434,   435,   436,
     439,   440,   443,   444,   447,   448,   451,   452,   453,   456,
     457,   458,   461,   462,   463,   464,   467,   468,   471,   472,
     473,   474,   475
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "AND_ASIG", "ARRAY", "CABECERA",
  "CADA", "CADENA", "CARACTER", "CONJUNTO", "CONSTANTES", "CONTINUAR",
  "CTC_CADENA", "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL", "DE", "DEFECTO",
  "DIV_ASIG", "DEVOLVER", "EJECUTA", "ENCAMBIO", "ENTERO", "EQ", "ES",
  "ESCAPE", "ESTRUCTURA", "ETIQUETA", "EXCEPCION", "FD_ASIG", "FI_ASIG",
  "FLECHA_DCHA", "FLECHA_IZDA", "FICHERO", "FIN", "FUNCION", "HACER",
  "HASH", "GE", "IDENTIFICADOR", "INDIRECCION", "LANZA", "LE", "MIENTRAS",
  "MOD_ASIG", "MULT_ASIG", "NADA", "NEQ", "OR", "OTRA", "OR_ASIG", "PARA",
  "POT_ASIG", "PRINCIPIO", "PROGRAMA", "POTENCIA", "REAL", "REF",
  "RESTA_ASIG", "RUTA", "SALTAR", "SI", "SINO", "SUMA_ASIG", "TAMANO",
  "TIPOS", "UNION", "VARIABLES", "XOR_ASIG", "';'", "','", "'='", "'('",
  "')'", "'{'", "'}'", "':'", "'.'", "'^'", "'\\\\'", "'['", "']'", "'<'",
  "'>'", "'|'", "'@'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "'~'",
  "'!'", "$accept", "programa", "inicio_programa", "l_cabecera", "l_rutas",
  "bloque_programa", "$@1", "$@2", "$@3", "$@4", "declaraciones_tipos",
  "l_decl_tipo", "declaracion_tipo", "especificacion_tipo", "l_ref",
  "tipo_basico", "tipo_escalar", "tipo_enumerado", "tipo_estructurado",
  "linea_campo", "l_campo", "declaraciones_constantes",
  "l_declaraciones_constantes", "declaracion_constante", "constante",
  "constante_enumerada", "l_constante", "rep_constante", "l_elemento_hash",
  "rep_elemento_hash", "elemento_hash", "constante_estructurada",
  "l_campo_constante", "campo_constante", "declaraciones_variables",
  "l_declaracion", "declaracion_variables", "l_expr", "l_ident",
  "declaraciones_funciones", "declaracion_funcion", "op_lista_parametros",
  "lista_parametros", "rep_parametros", "parametros", "rep_ident",
  "l_expr_constante", "tipo_salida", "cuerpo_funcion",
  "bloque_instrucciones", "l_instruccion", "instruccion",
  "instruccion_expresion", "asignacion", "operador_asignacion",
  "instruccion_bifurcacion", "op_sino_accion", "rep_otros_casos",
  "otros_casos", "accion", "instruccion_bucle", "l_asignaciones",
  "instruccion_salto", "instruccion_destino_salto", "instruccion_devolver",
  "instruccion_vacia", "instruccion_lanzamiento_excepcion",
  "instruccion_captura_excepcion", "clausulas", "op_clausula_defecto",
  "clausulas_excepcion", "rep_clausula_excepcion_especifica",
  "clausula_excepcion_especifica", "clausula_excepcion_general",
  "clausula_defecto", "agrup_expresion", "expresion_constante",
  "expresion_indexada", "op_indireccion", "expresion_basica", "indice",
  "expresion_funcional", "l_expresion", "l_expresiones", "expresion",
  "op_exp", "expresion_logica", "expresion_logica_or",
  "expresion_logica_and", "expresion_eq", "expresion_comp",
  "expresion_bin_or", "expresion_bin_xor", "expresion_bin_and",
  "expresion_desp", "expresion_aditiva", "expresion_multiplicativa",
  "expresion_potencia", "expresion_noassoc", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      59,    44,    61,    40,    41,   123,   125,    58,    46,    94,
      92,    91,    93,    60,    62,   124,    64,    38,    43,    45,
      42,    47,    37,   126,    33
};
# endif

#define YYPACT_NINF (-341)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-173)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,    78,    53,    22,    51,  -341,    62,    97,  -341,  -341,
    -341,   144,   124,    54,  -341,   157,   187,  -341,  -341,  -341,
     146,  -341,   112,   136,     5,   192,    87,  -341,   151,  -341,
      85,  -341,   209,  -341,  -341,   216,  -341,   190,  -341,  -341,
     229,  -341,  -341,  -341,   195,  -341,  -341,  -341,  -341,   180,
    -341,  -341,   210,  -341,  -341,   193,  -341,  -341,   120,  -341,
     120,   183,  -341,    95,  -341,   -41,  -341,  -341,  -341,  -341,
    -341,   223,   241,    15,  -341,   223,   248,    96,  -341,  -341,
     245,  -341,   250,   253,  -341,  -341,   252,   255,  -341,  -341,
    -341,  -341,  -341,   138,   260,   231,  -341,  -341,  -341,    91,
     262,   239,  -341,  -341,   233,  -341,  -341,   274,  -341,   232,
     236,   237,   244,  -341,   238,   -30,  -341,  -341,  -341,    35,
     243,   293,  -341,  -341,    96,  -341,    96,  -341,   299,    96,
     260,  -341,  -341,  -341,  -341,  -341,   249,   125,    35,    12,
      12,   125,   125,   125,   108,  -341,  -341,    92,  -341,  -341,
    -341,   256,   275,   320,    47,    74,   240,   242,   251,   149,
     111,   132,  -341,   273,  -341,   300,  -341,   261,   266,     4,
     239,   269,   301,   122,   311,   270,    14,   302,   271,  -341,
     247,  -341,  -341,   276,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,   330,   277,  -341,  -341,   274,  -341,  -341,  -341,
      35,  -341,   278,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
      35,    12,    12,    21,    35,  -341,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    35,   308,   303,  -341,  -341,  -341,
     281,   335,  -341,   286,  -341,  -341,   313,   318,    35,   319,
      12,   292,    35,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,    35,  -341,
     290,   294,  -341,  -341,  -341,  -341,  -341,    35,    35,  -341,
     304,   320,    47,    74,    74,   240,   240,   240,   240,   242,
     251,   149,   111,   111,   132,   132,  -341,  -341,  -341,  -341,
    -341,    29,    48,  -341,  -341,    11,  -341,   239,  -341,   335,
       6,  -341,  -341,   295,   307,   296,   305,  -341,   126,  -341,
     306,  -341,  -341,    35,   298,   287,    35,  -341,  -341,   339,
    -341,   312,  -341,  -341,   250,  -341,  -341,  -341,  -341,  -341,
     344,   356,  -341,  -341,    35,  -341,   122,    35,    35,    12,
     122,  -341,  -341,  -341,  -341,  -341,   314,  -341,   239,   239,
     316,  -341,   317,   322,  -341,  -341,   225,  -341,  -341,   323,
     122,    12,   166,   324,  -341,  -341,  -341,    -7,   365,   122,
     353,  -341,   225,   122,   325,  -341,  -341,  -341,  -341,    35,
     326,   122,  -341
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     2,     8,
       5,    16,     0,     0,    18,    44,     3,    22,    14,    17,
       0,     9,     0,     0,     0,     0,     0,    46,    69,     7,
       0,    19,     0,    30,    29,     0,    27,     0,    32,    31,
       0,    23,    28,    21,     0,    20,    24,    25,    26,     0,
      43,    45,     0,    10,     4,     0,    22,    22,     0,    22,
       0,     0,    77,     0,    71,     0,    79,     6,    33,    35,
      42,     0,     0,     0,    34,     0,     0,     0,    68,    70,
       0,    22,    11,     0,    37,    22,     0,     0,    39,    51,
      50,    48,    49,    57,     0,     0,    52,    53,    76,     0,
       0,     0,    78,    36,     0,    41,    38,    51,    59,     0,
      56,     0,    60,    62,     0,     0,    66,    47,    72,     0,
      82,     0,    12,    40,     0,    54,     0,    55,     0,     0,
       0,    64,   165,   166,   163,   164,   173,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   160,   161,   167,   162,
      75,   186,   187,   189,   191,   194,   199,   201,   203,   205,
     208,   211,   215,   217,    85,     0,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,   101,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   172,     0,    63,    58,     0,    61,    67,    65,
     181,   221,     0,   173,   175,   176,   218,   219,   220,    73,
       0,   171,     0,     0,     0,   184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,   111,   142,   145,
       0,   156,   143,     0,   134,   133,     0,     0,     0,     0,
       0,     0,     0,    99,   100,   113,   124,   119,   123,   122,
     120,   118,   126,   121,   117,   116,   125,   115,     0,   112,
       0,   180,   183,   174,    74,   169,   168,     0,     0,   170,
       0,   188,   190,   192,   193,   198,   197,   195,   196,   200,
     202,   204,   206,   207,   209,   210,   212,   213,   214,   216,
      89,     0,     0,    93,    92,     0,   146,     0,   149,   153,
       0,   151,   144,     0,     0,     0,     0,   140,     0,   141,
       0,   114,   179,     0,     0,     0,     0,    84,    83,     0,
      22,     0,    94,    95,    96,    80,    97,   159,   150,   152,
       0,     0,   155,   154,     0,   148,     0,     0,     0,     0,
       0,   182,   178,   177,   185,    88,    86,    98,     0,     0,
       0,   135,     0,     0,   139,   131,     0,   157,   158,     0,
       0,     0,   129,    87,    91,   136,   138,     0,     0,     0,
       0,   130,     0,     0,     0,   128,   127,    90,   137,     0,
       0,     0,   132
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,   383,   -56,  -341,   348,  -341,  -341,   117,   -44,
    -341,    98,  -341,   375,   -69,  -341,  -341,  -341,  -341,  -341,
     279,  -341,  -341,   280,    99,  -341,   342,  -341,  -341,   101,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,   -97,
    -341,  -110,  -341,  -245,  -341,  -341,  -341,  -341,  -341,  -125,
    -341,    38,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,   102,   -36,  -340,  -119,  -341,  -131,
    -341,  -114,  -341,  -341,  -132,  -341,  -341,  -341,   196,   197,
      16,    58,   189,   191,   194,    43,    13,    64,  -341
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    16,    30,     8,    15,    28,    66,   101,
       9,    13,    14,    23,    24,    45,    46,    47,    48,    72,
      73,    21,    26,    27,    95,    96,   109,   110,   111,   112,
     113,    97,   115,   116,    53,    63,    64,   144,    65,    82,
     102,   165,   166,   235,   301,   302,   373,   305,   335,   244,
     180,   245,   182,   183,   268,   184,   380,   372,   381,   246,
     185,   318,   186,   187,   188,   189,   190,   191,   308,   338,
     309,   310,   342,   343,   311,   145,   146,   147,   213,   148,
     279,   149,   270,   271,   150,   215,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    69,   192,    74,   122,   317,   202,   193,   204,   205,
      32,   181,   331,    33,    34,    35,    76,   132,   133,   134,
     135,   249,    20,     6,   108,    99,   374,    83,    36,   104,
      80,    87,    37,   -15,    38,   340,    81,   240,     1,    39,
      85,   130,   387,    40,   136,    41,   131,   -44,   132,   133,
     134,   135,   203,     5,   192,   194,   341,   195,   -15,   193,
     198,   192,    42,    43,   349,   121,   193,   383,   272,   137,
     254,   218,    44,   241,   239,   136,   -15,   138,   274,    52,
     275,   276,   280,   139,   140,   138,    86,   250,     7,    18,
     -15,   139,   140,   141,    12,   219,   277,   142,   143,   327,
     137,   201,   278,   328,   364,   206,   207,   208,   138,    89,
      90,    91,    92,   220,   139,   140,   315,   221,     4,   329,
     320,    10,    50,   167,   141,   330,   317,    25,   142,   143,
      78,   192,    11,   211,   168,    62,   321,    12,   132,   133,
     134,   135,   169,   170,   -13,   324,   325,    37,   171,    17,
     172,   107,    90,    91,    92,    54,    55,   222,   223,   173,
      70,   118,   136,   119,   174,   136,   175,  -172,    20,    93,
     212,    94,    29,  -172,   176,    71,   121,    75,   209,   210,
     304,   227,   228,   177,   178,    32,    25,    44,    33,    34,
      35,   351,   179,    22,   354,   138,   348,   349,   138,   229,
     230,   139,   140,    36,   139,   140,    31,    37,   336,    38,
     337,    93,   360,    94,    39,   362,   363,    49,    40,    52,
      41,   361,   231,   232,   233,   365,    56,   192,   378,   379,
     192,   192,   193,    57,   283,   284,   193,    42,   132,   133,
     134,   135,   294,   295,    58,   376,    59,    44,   167,    60,
      62,   192,   192,    67,   385,    77,   193,   390,   388,   168,
     192,   367,   368,    70,   192,   193,   392,   169,   170,   193,
     292,   293,   192,   171,   356,   172,    84,   193,   285,   286,
     287,   288,   253,    88,   173,    98,   100,   136,   103,   174,
     106,   175,   105,   121,   167,   296,   297,   298,   299,   176,
     114,   117,   120,   123,   124,   168,   125,   126,   177,   178,
     129,   127,   196,   169,   170,   128,   164,   179,   214,   171,
     138,   172,   200,   217,   216,   224,   139,   140,   225,   234,
     173,   237,   236,   136,   256,   174,   238,   175,   226,   242,
     247,   243,   251,   248,   252,   176,   255,   269,   300,   257,
     303,   306,   273,   307,   177,   178,   312,   313,   314,   316,
     258,   259,   319,   179,   322,   323,   138,   326,   344,   353,
     346,   211,   139,   140,   352,   260,   261,   345,   347,   355,
     350,   262,   357,   263,   358,   359,   366,   384,   386,   264,
     369,   370,   371,   375,   265,   382,    19,    61,   389,   266,
     391,    51,   267,   332,   333,    79,   334,   197,   212,   377,
     199,   339,   281,   289,   282,     0,   290,     0,     0,     0,
     291
};

static const yytype_int16 yycheck[] =
{
      56,    57,   121,    59,   101,   250,   138,   121,   139,   140,
       5,   121,     1,     8,     9,    10,    60,    13,    14,    15,
      16,     7,    11,     1,    93,    81,   366,    71,    23,    85,
      71,    75,    27,    11,    29,    29,    77,   169,    55,    34,
      25,    71,   382,    38,    40,    40,    76,    36,    13,    14,
      15,    16,    40,     0,   173,   124,    50,   126,    36,   173,
     129,   180,    57,    58,    71,    54,   180,    74,   200,    65,
     180,    24,    67,   170,    70,    40,    54,    73,   210,    68,
     211,   212,   214,    79,    80,    73,    71,    73,    66,    35,
      68,    79,    80,    89,    40,    48,    75,    93,    94,    70,
      65,   137,    81,    74,   349,   141,   142,   143,    73,    13,
      14,    15,    16,    39,    79,    80,   248,    43,    40,    71,
     252,    70,    35,     1,    89,    77,   371,    40,    93,    94,
      35,   250,    70,    41,    12,    40,   268,    40,    13,    14,
      15,    16,    20,    21,     0,   277,   278,    27,    26,    25,
      28,    13,    14,    15,    16,    70,    71,    83,    84,    37,
      40,    70,    40,    72,    42,    40,    44,    75,    11,    73,
      78,    75,    60,    81,    52,    58,    54,    60,    70,    71,
     236,    32,    33,    61,    62,     5,    40,    67,     8,     9,
      10,   323,    70,     6,   326,    73,    70,    71,    73,    88,
      89,    79,    80,    23,    79,    80,    70,    27,   305,    29,
     307,    73,   344,    75,    34,   347,   348,    25,    38,    68,
      40,   346,    90,    91,    92,   350,    17,   346,    62,    63,
     349,   350,   346,    17,   218,   219,   350,    57,    13,    14,
      15,    16,   229,   230,    54,   370,    17,    67,     1,    54,
      40,   370,   371,    60,   379,    72,   370,   389,   383,    12,
     379,   358,   359,    40,   383,   379,   391,    20,    21,   383,
     227,   228,   391,    26,   330,    28,    35,   391,   220,   221,
     222,   223,    35,    35,    37,    40,    36,    40,    35,    42,
      35,    44,    40,    54,     1,   231,   232,   233,   234,    52,
      40,    70,    40,    70,    30,    12,    74,    71,    61,    62,
      72,    74,    13,    20,    21,    71,    73,    70,    62,    26,
      73,    28,    73,     3,    49,    85,    79,    80,    86,    56,
      37,    70,    32,    40,     4,    42,    70,    44,    87,    70,
      29,    40,    40,    73,    73,    52,    70,    70,    40,    19,
      47,    70,    74,    18,    61,    62,    70,    44,    40,    40,
      30,    31,    70,    70,    74,    71,    73,    63,    73,    82,
      74,    41,    79,    80,    76,    45,    46,    70,    73,    40,
      74,    51,    70,    53,    40,    29,    72,    22,    35,    59,
      74,    74,    70,    70,    64,    71,    13,    49,    73,    69,
      74,    26,    72,   305,   305,    63,   305,   128,    78,   371,
     130,   309,   216,   224,   217,    -1,   225,    -1,    -1,    -1,
     226
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    96,    97,    40,     0,     1,    66,   100,   105,
      70,    70,    40,   106,   107,   101,    98,    25,    35,   107,
      11,   116,     6,   108,   109,    40,   117,   118,   102,    60,
      99,    70,     5,     8,     9,    10,    23,    27,    29,    34,
      38,    40,    57,    58,    67,   110,   111,   112,   113,    25,
      35,   118,    68,   129,    70,    71,    17,    17,    54,    17,
      54,   110,    40,   130,   131,   133,   103,    60,   108,   108,
      40,   113,   114,   115,   108,   113,   114,    72,    35,   131,
      71,    77,   134,   114,    35,    25,    71,   114,    35,    13,
      14,    15,    16,    73,    75,   119,   120,   126,    40,   108,
      36,   104,   135,    35,   108,    40,    35,    13,   119,   121,
     122,   123,   124,   125,    40,   127,   128,    70,    70,    72,
      40,    54,   144,    70,    30,    74,    71,    74,    71,    72,
      71,    76,    13,    14,    15,    16,    40,    65,    73,    79,
      80,    89,    93,    94,   132,   170,   171,   172,   174,   176,
     179,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,    73,   136,   137,     1,    12,    20,
      21,    26,    28,    37,    42,    44,    52,    61,    62,    70,
     145,   146,   147,   148,   150,   155,   157,   158,   159,   160,
     161,   162,   172,   176,   119,   119,    13,   125,   119,   128,
      73,   170,   179,    40,   174,   174,   170,   170,   170,    70,
      71,    41,    78,   173,    62,   180,    49,     3,    24,    48,
      39,    43,    83,    84,    85,    86,    87,    32,    33,    88,
      89,    90,    91,    92,    56,   138,    32,    70,    70,    70,
     179,   144,    70,    40,   144,   146,   154,    29,    73,     7,
      73,    40,    73,    35,   146,    70,     4,    19,    30,    31,
      45,    46,    51,    53,    59,    64,    69,    72,   149,    70,
     177,   178,   179,    74,   179,   174,   174,    75,    81,   175,
     179,   183,   184,   185,   185,   186,   186,   186,   186,   187,
     188,   189,   190,   190,   191,   191,   192,   192,   192,   192,
      40,   139,   140,    47,   108,   142,    70,    18,   163,   165,
     166,   169,    70,    44,    40,   179,    40,   148,   156,    70,
     179,   179,    74,    71,   179,   179,    63,    70,    74,    71,
      77,     1,   116,   129,   134,   143,   144,   144,   164,   169,
      29,    50,   167,   168,    73,    70,    74,    73,    70,    71,
      74,   179,    76,    82,   179,    40,   108,    70,    40,    29,
     179,   154,   179,   179,   148,   154,    72,   144,   144,    74,
      74,    70,   152,   141,   171,    70,   154,   156,    62,    63,
     151,   153,    71,    74,    22,   154,    35,   171,   154,    73,
     179,    74,   154
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    98,    99,    99,   101,   102,
     103,   104,   100,   100,   105,   105,   105,   106,   106,   107,
     108,   109,   109,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   112,   113,   113,   113,   113,
     114,   115,   115,   116,   116,   117,   117,   118,   119,   119,
     119,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   124,   124,   125,   126,   127,   127,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   136,   136,   137,   138,   138,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   143,   143,   143,   144,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   147,   147,   148,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   150,   151,   151,
     152,   152,   153,   154,   154,   155,   155,   155,   155,   156,
     156,   157,   157,   157,   158,   159,   159,   160,   161,   162,
     163,   163,   164,   164,   165,   166,   166,   167,   168,   169,
     170,   170,   170,   171,   171,   171,   171,   172,   172,   172,
     172,   173,   173,   174,   174,   174,   174,   175,   175,   176,
     177,   177,   178,   178,   179,   180,   180,   181,   182,   182,
     183,   183,   184,   184,   184,   185,   185,   185,   185,   185,
     186,   186,   187,   187,   188,   188,   189,   189,   189,   190,
     190,   190,   191,   191,   191,   191,   192,   192,   193,   193,
     193,   193,   193
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     4,     0,     3,     1,     0,     0,
       0,     0,     9,     2,     3,     0,     2,     2,     1,     4,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     5,     4,     5,     4,
       4,     3,     1,     3,     0,     2,     1,     6,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     0,     3,     1,
       1,     3,     1,     3,     3,     3,     1,     3,     3,     0,
       2,     1,     4,     6,     3,     1,     3,     1,     2,     0,
       6,     1,     0,     4,     3,     0,     3,     5,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     8,     2,     0,
       2,     0,     6,     1,     1,     5,     7,     9,     7,     3,
       1,     3,     2,     2,     3,     2,     3,     1,     4,     3,
       2,     1,     1,     0,     2,     2,     0,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     0,     1,     3,     2,     2,     3,     3,     4,
       1,     0,     3,     1,     2,     4,     0,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     1,     2,     2,
       2,     2,     1
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
#line 35 "mini.y"
                                                          {printf("programa --> inicio_programa bloque_programa\n");}
#line 1714 "mini.tab.c"
    break;

  case 3:
#line 39 "mini.y"
                                                          {printf("inicio_programa --> PROGRAMA IDENTIFICADOR ; librerias\n");}
#line 1720 "mini.tab.c"
    break;

  case 4:
#line 42 "mini.y"
                                                          {printf("l_cabecera --> l_cabecera CABECERA l_rutas \n");}
#line 1726 "mini.tab.c"
    break;

  case 5:
#line 43 "mini.y"
                                                          {printf("l_cabecera --> \n");}
#line 1732 "mini.tab.c"
    break;

  case 6:
#line 46 "mini.y"
                                                          {printf("l_rutas --> l_rutas RUTA\n");}
#line 1738 "mini.tab.c"
    break;

  case 7:
#line 47 "mini.y"
                                                          {printf("l_rutas --> RUTA\n");}
#line 1744 "mini.tab.c"
    break;

  case 8:
#line 51 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1750 "mini.tab.c"
    break;

  case 9:
#line 52 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1756 "mini.tab.c"
    break;

  case 10:
#line 53 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1762 "mini.tab.c"
    break;

  case 11:
#line 54 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1768 "mini.tab.c"
    break;

  case 12:
#line 55 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1774 "mini.tab.c"
    break;

  case 13:
#line 56 "mini.y"
                                                          {yyerrok;}
#line 1780 "mini.tab.c"
    break;

  case 14:
#line 66 "mini.y"
                                                          {printf("declaraciones_tipos --> TIPOS l_decl_tipo FIN\n");}
#line 1786 "mini.tab.c"
    break;

  case 16:
#line 68 "mini.y"
                                                          {yyerrok;}
#line 1792 "mini.tab.c"
    break;

  case 17:
#line 71 "mini.y"
                                                          {printf("l_decl_tipo --> l_decl_tipo declaracion_tipo\n");}
#line 1798 "mini.tab.c"
    break;

  case 18:
#line 72 "mini.y"
                                                          {printf("l_decl_tipo --> declaracion_tipo\n");}
#line 1804 "mini.tab.c"
    break;

  case 19:
#line 75 "mini.y"
                                                            {printf("declaracion_tipo --> TIPOS l_decl_tipo FIN\n");}
#line 1810 "mini.tab.c"
    break;

  case 20:
#line 78 "mini.y"
                                                          {printf("especificacion_tipo --> TIPOS l_decl_tipo FIN\n");}
#line 1816 "mini.tab.c"
    break;

  case 21:
#line 81 "mini.y"
                                                          {printf("l_ref --> l_ref REF\n");}
#line 1822 "mini.tab.c"
    break;

  case 22:
#line 82 "mini.y"
                                                          {printf("l_ref --> \n");}
#line 1828 "mini.tab.c"
    break;

  case 23:
#line 85 "mini.y"
                                                          {printf("tipo_basico --> IDENTIFICADOR\n");}
#line 1834 "mini.tab.c"
    break;

  case 24:
#line 86 "mini.y"
                                                          {printf("tipo_basico --> tipo_escalar\n");}
#line 1840 "mini.tab.c"
    break;

  case 25:
#line 87 "mini.y"
                                                          {printf("tipo_basico --> tipo_enumerado\n");}
#line 1846 "mini.tab.c"
    break;

  case 26:
#line 88 "mini.y"
                                                          {printf("tipo_basico --> tipo_estructurado\n");}
#line 1852 "mini.tab.c"
    break;

  case 27:
#line 92 "mini.y"
                                                          {printf("tipo_escalar --> ENTERO\n");}
#line 1858 "mini.tab.c"
    break;

  case 28:
#line 93 "mini.y"
                                                          {printf("tipo_escalar --> REAL\n");}
#line 1864 "mini.tab.c"
    break;

  case 29:
#line 94 "mini.y"
                                                          {printf("tipo_escalar --> CARACTER\n");}
#line 1870 "mini.tab.c"
    break;

  case 30:
#line 95 "mini.y"
                                                          {printf("tipo_escalar --> CADENA\n");}
#line 1876 "mini.tab.c"
    break;

  case 31:
#line 96 "mini.y"
                                                          {printf("tipo_escalar --> FICHERO\n");}
#line 1882 "mini.tab.c"
    break;

  case 32:
#line 97 "mini.y"
                                                          {printf("tipo_escalar --> EXCEPCION\n");}
#line 1888 "mini.tab.c"
    break;

  case 33:
#line 100 "mini.y"
                                                          {printf("tipo_enumerado --> ARRAY DE especificacion_tipo\n");}
#line 1894 "mini.tab.c"
    break;

  case 34:
#line 101 "mini.y"
                                                          {printf("tipo_enumerado --> HASH DE especificacion_tipo\n");}
#line 1900 "mini.tab.c"
    break;

  case 35:
#line 102 "mini.y"
                                                          {printf("tipo_enumerado --> CONJUNTO DE especificacion_tipo\n");}
#line 1906 "mini.tab.c"
    break;

  case 36:
#line 106 "mini.y"
                                                                             {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO tipo_estructurado linea_campo FIN\n");}
#line 1912 "mini.tab.c"
    break;

  case 37:
#line 107 "mini.y"
                                                                             {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO linea_campo FIN\n");}
#line 1918 "mini.tab.c"
    break;

  case 38:
#line 108 "mini.y"
                                                                             {printf("tipo_estructurado --> UNION PRINCIPIO tipo_estructurado linea_campo FIN\n");}
#line 1924 "mini.tab.c"
    break;

  case 39:
#line 109 "mini.y"
                                                                             {printf("tipo_estructurado --> UNION PRINCIPIO linea_campos FIN\n");}
#line 1930 "mini.tab.c"
    break;

  case 40:
#line 112 "mini.y"
                                                          {printf("linea_campo --> EXCEPCION\n");}
#line 1936 "mini.tab.c"
    break;

  case 41:
#line 115 "mini.y"
                                                          {printf("l_campo --> l_campo ',' IDENTIFICADOR\n");}
#line 1942 "mini.tab.c"
    break;

  case 42:
#line 116 "mini.y"
                                                          {printf("l_campo --> EXCEPCION\n");}
#line 1948 "mini.tab.c"
    break;

  case 43:
#line 124 "mini.y"
                                                                              {printf("declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN\n");}
#line 1954 "mini.tab.c"
    break;

  case 44:
#line 125 "mini.y"
                                                                              {printf("declaraciones_constantes : \n");}
#line 1960 "mini.tab.c"
    break;

  case 45:
#line 128 "mini.y"
                                                                              {printf("l_declaraciones_constantes : l_declaraciones_constantes declaracion_constante\n");}
#line 1966 "mini.tab.c"
    break;

  case 46:
#line 129 "mini.y"
                                                                              {printf("l_declaraciones_constantes : declaracion_constante\n");}
#line 1972 "mini.tab.c"
    break;

  case 47:
#line 132 "mini.y"
                                                                              {printf("declaracion_constante : IDENTIFICADOR ES tipo_basico '=' constante ';'\n");}
#line 1978 "mini.tab.c"
    break;

  case 48:
#line 135 "mini.y"
                                                          {printf("constante: CTC_ENTERA\n");}
#line 1984 "mini.tab.c"
    break;

  case 49:
#line 136 "mini.y"
                                                          {printf("constante: CTC_REAL\n");}
#line 1990 "mini.tab.c"
    break;

  case 50:
#line 137 "mini.y"
                                                          {printf("constante: CTC_CARACTER\n");}
#line 1996 "mini.tab.c"
    break;

  case 51:
#line 138 "mini.y"
                                                          {printf("constante: CTC_CADENA\n");}
#line 2002 "mini.tab.c"
    break;

  case 52:
#line 139 "mini.y"
                                                          {printf("constante: constante_enumerada\n");}
#line 2008 "mini.tab.c"
    break;

  case 53:
#line 140 "mini.y"
                                                          {printf("constante: constante_estructurada\n");}
#line 2014 "mini.tab.c"
    break;

  case 54:
#line 143 "mini.y"
                                                          {printf("constante_enumerada : '(' l_constante ')'\n");}
#line 2020 "mini.tab.c"
    break;

  case 55:
#line 144 "mini.y"
                                                          {printf("constante_enumerada : '(' l_elemento_hash ')'\n");}
#line 2026 "mini.tab.c"
    break;

  case 56:
#line 147 "mini.y"
                                                          {printf("l_constante : rep_constante\n");}
#line 2032 "mini.tab.c"
    break;

  case 57:
#line 148 "mini.y"
                                                          {printf("l_constante : \n");}
#line 2038 "mini.tab.c"
    break;

  case 58:
#line 150 "mini.y"
                                                          {printf("rep_constante : rep_constante ',' constante\n");}
#line 2044 "mini.tab.c"
    break;

  case 59:
#line 151 "mini.y"
                                                          {printf("rep_constante : constante\n");}
#line 2050 "mini.tab.c"
    break;

  case 60:
#line 154 "mini.y"
                                                          {printf("l_elemento_hash : rep_elemento_hash\n");}
#line 2056 "mini.tab.c"
    break;

  case 61:
#line 156 "mini.y"
                                                          {printf("rep_elemento_hash : rep_elemento_hash ',' elemento_hash\n");}
#line 2062 "mini.tab.c"
    break;

  case 62:
#line 157 "mini.y"
                                                          {printf("rep_elemento_hash : elemento_hash\n");}
#line 2068 "mini.tab.c"
    break;

  case 63:
#line 160 "mini.y"
                                                          {printf("elemento_hash : CTC_CADENA FD_ASIG constante\n");}
#line 2074 "mini.tab.c"
    break;

  case 64:
#line 163 "mini.y"
                                                          {printf("constante_estructurada : '{' l_campo_constante '}'\n");}
#line 2080 "mini.tab.c"
    break;

  case 65:
#line 165 "mini.y"
                                                          {printf("l_campo_constante : l_campo_constante ',' campo_constante\n");}
#line 2086 "mini.tab.c"
    break;

  case 66:
#line 166 "mini.y"
                                                          {printf("l_campo_constante : campo_constante\n");}
#line 2092 "mini.tab.c"
    break;

  case 67:
#line 169 "mini.y"
                                                          {printf("campo_constante : IDENTIFICADOR '=' constante\n");}
#line 2098 "mini.tab.c"
    break;

  case 68:
#line 178 "mini.y"
                                                          {printf("declaraciones_variables : campo_constante\n");}
#line 2104 "mini.tab.c"
    break;

  case 70:
#line 182 "mini.y"
                                                          {printf("l_declaracion : l_declaracion declaracion_variables\n");}
#line 2110 "mini.tab.c"
    break;

  case 71:
#line 183 "mini.y"
                                                          {printf("l_declaracion : declaracion_variables\n");}
#line 2116 "mini.tab.c"
    break;

  case 72:
#line 186 "mini.y"
                                                                                {printf("declaracion_variables : l_ident ':' especificacion_tipo ';'\n");}
#line 2122 "mini.tab.c"
    break;

  case 73:
#line 187 "mini.y"
                                                                                {printf("declaracion_variables : l_ident ':' especificacion_tipo  '=' l_expr ';'\n");}
#line 2128 "mini.tab.c"
    break;

  case 74:
#line 190 "mini.y"
                                                          {printf("l_expr : l_expr ',' expresion\n");}
#line 2134 "mini.tab.c"
    break;

  case 75:
#line 191 "mini.y"
                                                          {printf("l_expr : expresion\n");}
#line 2140 "mini.tab.c"
    break;

  case 76:
#line 194 "mini.y"
                                                          {printf("l_ident : l_ident ',' IDENTIFICADOR\n");}
#line 2146 "mini.tab.c"
    break;

  case 77:
#line 195 "mini.y"
                                                          {printf("l_ident : IDENTIFICADOR\n");}
#line 2152 "mini.tab.c"
    break;

  case 78:
#line 204 "mini.y"
                                                                          {printf("declaraciones_funciones : declaraciones_funciones declaracion_funcion\n");}
#line 2158 "mini.tab.c"
    break;

  case 79:
#line 205 "mini.y"
                                                                          {printf("declaraciones_funciones : \n");}
#line 2164 "mini.tab.c"
    break;

  case 80:
#line 208 "mini.y"
                                                                                                       {printf("declaracion_funcion : FUNCION IDENTIFICADOR FD_ASIG tipo_salida cuerpo_funcion\n");}
#line 2170 "mini.tab.c"
    break;

  case 81:
#line 211 "mini.y"
                                                            {printf("op_lista_parametros : lista_parametros\n");}
#line 2176 "mini.tab.c"
    break;

  case 82:
#line 212 "mini.y"
                                                            {printf("op_lista_parametros : \n");}
#line 2182 "mini.tab.c"
    break;

  case 83:
#line 215 "mini.y"
                                                            {printf("lista_parametros : '(' l_parametros parametros ')'\n");}
#line 2188 "mini.tab.c"
    break;

  case 84:
#line 218 "mini.y"
                                                            {printf("l_parametros : l_parametros parametros ';'\n");}
#line 2194 "mini.tab.c"
    break;

  case 86:
#line 222 "mini.y"
                                                          {printf("parametros : rep_ident ':' especificacion_tipo\n");}
#line 2200 "mini.tab.c"
    break;

  case 87:
#line 223 "mini.y"
                                                          {printf("parametros : rep_ident ':' especificacion_tipo '=' l_expr_constante\n");}
#line 2206 "mini.tab.c"
    break;

  case 88:
#line 226 "mini.y"
                                                          {printf("rep_ident : rep_ident ',' IDENTIFICADOR\n");}
#line 2212 "mini.tab.c"
    break;

  case 89:
#line 227 "mini.y"
                                                          {printf("rep_ident : IDENTIFICADOR\n");}
#line 2218 "mini.tab.c"
    break;

  case 90:
#line 230 "mini.y"
                                                                                {printf("l_expr_constante : l_expr_constante ',' expresion_constante\n");}
#line 2224 "mini.tab.c"
    break;

  case 91:
#line 231 "mini.y"
                                                                                {printf("l_expr_constante : expresion_constante\n");}
#line 2230 "mini.tab.c"
    break;

  case 92:
#line 234 "mini.y"
                                                          {printf("tipo_salida : especificacion_tipo\n");}
#line 2236 "mini.tab.c"
    break;

  case 93:
#line 235 "mini.y"
                                                          {printf("tipo_salida : NADA\n");}
#line 2242 "mini.tab.c"
    break;

  case 94:
#line 238 "mini.y"
                                                          {printf("cuerpo_funcion : declaraciones_constantes\n");}
#line 2248 "mini.tab.c"
    break;

  case 95:
#line 239 "mini.y"
                                                          {printf("cuerpo_funcion : declaraciones_variables\n");}
#line 2254 "mini.tab.c"
    break;

  case 96:
#line 240 "mini.y"
                                                          {printf("cuerpo_funcion : declaraciones_funciones\n");}
#line 2260 "mini.tab.c"
    break;

  case 97:
#line 241 "mini.y"
                                                          {printf("cuerpo_funcion : bloque_instrucciones\n");}
#line 2266 "mini.tab.c"
    break;

  case 98:
#line 242 "mini.y"
                                                             {yyerrok;}
#line 2272 "mini.tab.c"
    break;

  case 99:
#line 246 "mini.y"
                                                           {printf("bloque_instrucciones : PRINCIPIO l_instruccion FIN\n");}
#line 2278 "mini.tab.c"
    break;

  case 100:
#line 248 "mini.y"
                                                           {printf("l_instruccion : l_instruccion instruccion \n");}
#line 2284 "mini.tab.c"
    break;

  case 101:
#line 249 "mini.y"
                                                           {printf("l_instruccion : instruccion\n");}
#line 2290 "mini.tab.c"
    break;

  case 102:
#line 256 "mini.y"
                                                            {printf("instruccion : instruccion_expresion\n");}
#line 2296 "mini.tab.c"
    break;

  case 103:
#line 257 "mini.y"
                                                            {printf("instruccion : instruccion_bifurcacion\n");}
#line 2302 "mini.tab.c"
    break;

  case 104:
#line 258 "mini.y"
                                                            {printf("instruccion : instruccion_bucle\n");}
#line 2308 "mini.tab.c"
    break;

  case 105:
#line 259 "mini.y"
                                                            {printf("instruccion : instruccion_salto\n");}
#line 2314 "mini.tab.c"
    break;

  case 106:
#line 260 "mini.y"
                                                            {printf("instruccion : instruccion_destino_salto\n");}
#line 2320 "mini.tab.c"
    break;

  case 107:
#line 261 "mini.y"
                                                            {printf("instruccion : instruccion_devolver\n");}
#line 2326 "mini.tab.c"
    break;

  case 108:
#line 262 "mini.y"
                                                            {printf("instruccion : instruccion_vacia\n");}
#line 2332 "mini.tab.c"
    break;

  case 109:
#line 263 "mini.y"
                                                            {printf("instruccion : instruccion_lanzamiento_excepcion\n");}
#line 2338 "mini.tab.c"
    break;

  case 110:
#line 264 "mini.y"
                                                            {printf("instruccion : instruccion_captura_excepcion\n");}
#line 2344 "mini.tab.c"
    break;

  case 111:
#line 265 "mini.y"
                                                             {yyerrok;}
#line 2350 "mini.tab.c"
    break;

  case 112:
#line 268 "mini.y"
                                                            {printf("instruccion_expresion : expresion_funcional ';'\n");}
#line 2356 "mini.tab.c"
    break;

  case 113:
#line 269 "mini.y"
                                                            {printf("instruccion_expresion : asignacion ';'\n");}
#line 2362 "mini.tab.c"
    break;

  case 114:
#line 272 "mini.y"
                                                                  {printf("asignacion : expresion_indexada operador_asignacion expresion\n");}
#line 2368 "mini.tab.c"
    break;

  case 115:
#line 275 "mini.y"
                                                            {printf("operador_asignacion : '='\n");}
#line 2374 "mini.tab.c"
    break;

  case 116:
#line 276 "mini.y"
                                                            {printf("operador_asignacion : SUMA_ASIG\n");}
#line 2380 "mini.tab.c"
    break;

  case 117:
#line 277 "mini.y"
                                                            {printf("operador_asignacion : RESTA_ASIG\n");}
#line 2386 "mini.tab.c"
    break;

  case 118:
#line 278 "mini.y"
                                                            {printf("operador_asignacion : MULT_ASIG\n");}
#line 2392 "mini.tab.c"
    break;

  case 119:
#line 279 "mini.y"
                                                            {printf("operador_asignacion : DIV_ASIG\n");}
#line 2398 "mini.tab.c"
    break;

  case 120:
#line 280 "mini.y"
                                                            {printf("operador_asignacion : MOD_ASIG\n");}
#line 2404 "mini.tab.c"
    break;

  case 121:
#line 281 "mini.y"
                                                            {printf("operador_asignacion : POT_ASIG\n");}
#line 2410 "mini.tab.c"
    break;

  case 122:
#line 282 "mini.y"
                                                            {printf("operador_asignacion : FI_ASIG\n");}
#line 2416 "mini.tab.c"
    break;

  case 123:
#line 283 "mini.y"
                                                            {printf("operador_asignacion : FD_ASIG\n");}
#line 2422 "mini.tab.c"
    break;

  case 124:
#line 284 "mini.y"
                                                            {printf("operador_asignacion : AND_ASIG\n");}
#line 2428 "mini.tab.c"
    break;

  case 125:
#line 285 "mini.y"
                                                            {printf("operador_asignacion : XOR_ASIG\n");}
#line 2434 "mini.tab.c"
    break;

  case 126:
#line 286 "mini.y"
                                                            {printf("operador_asignacion : OR_ASIG\n");}
#line 2440 "mini.tab.c"
    break;

  case 127:
#line 289 "mini.y"
                                                                                                {printf("instruccion_bifurcacion : SI '(' expresion ')' accion rep_otros_casos op_sino_accion FIN\n");}
#line 2446 "mini.tab.c"
    break;

  case 128:
#line 292 "mini.y"
                                                            {printf("op_sino_accion : SINO accion\n");}
#line 2452 "mini.tab.c"
    break;

  case 130:
#line 296 "mini.y"
                                                            {printf("rep_otros_casos : rep_otros_casos otros_casos\n");}
#line 2458 "mini.tab.c"
    break;

  case 131:
#line 297 "mini.y"
                                                            {printf("rep_otros_casos : \n");}
#line 2464 "mini.tab.c"
    break;

  case 132:
#line 301 "mini.y"
                                                            {printf("otros_casos : SI ENCAMBIO '(' expresion ')' accion\n");}
#line 2470 "mini.tab.c"
    break;

  case 133:
#line 304 "mini.y"
                                                            {printf("accion : instruccion\n");}
#line 2476 "mini.tab.c"
    break;

  case 134:
#line 305 "mini.y"
                                                            {printf("accion : bloque_instrucciones\n");}
#line 2482 "mini.tab.c"
    break;

  case 135:
#line 308 "mini.y"
                                                                              {printf("instruccion_bucle : MIENTRAS '(' expresion ')' accion\n");}
#line 2488 "mini.tab.c"
    break;

  case 136:
#line 309 "mini.y"
                                                                              {printf("instruccion_bucle : HACER accion MIENTRAS '(' expresion ')' ';'\n");}
#line 2494 "mini.tab.c"
    break;

  case 137:
#line 310 "mini.y"
                                                                              {printf("instruccion_bucle : PARA '(' l_asignaciones ';' expresion ';' l_asignaciones ')' accion\n");}
#line 2500 "mini.tab.c"
    break;

  case 138:
#line 311 "mini.y"
                                                                              {printf("instruccion_bucle : PARA CADA IDENTIFICADOR '(' expresion ')' accion\n");}
#line 2506 "mini.tab.c"
    break;

  case 139:
#line 314 "mini.y"
                                                            {printf("l_asignaciones : l_asignaciones ',' asignacion\n");}
#line 2512 "mini.tab.c"
    break;

  case 140:
#line 315 "mini.y"
                                                            {printf("l_asignaciones : asignacion\n");}
#line 2518 "mini.tab.c"
    break;

  case 141:
#line 318 "mini.y"
                                                            {printf("instruccion_salto : SALTAR IDENTIFICADOR ';'\n");}
#line 2524 "mini.tab.c"
    break;

  case 142:
#line 319 "mini.y"
                                                            {printf("instruccion_salto : CONTINUAR ';'\n");}
#line 2530 "mini.tab.c"
    break;

  case 143:
#line 320 "mini.y"
                                                            {printf("instruccion_salto : ESCAPE ';'\n");}
#line 2536 "mini.tab.c"
    break;

  case 144:
#line 323 "mini.y"
                                                            {printf("instruccion_destino_salto : ETIQUETA IDENTIFICADOR ';'\n");}
#line 2542 "mini.tab.c"
    break;

  case 145:
#line 326 "mini.y"
                                                            {printf("instruccion_devolver : DEVOLVER ';'\n");}
#line 2548 "mini.tab.c"
    break;

  case 146:
#line 327 "mini.y"
                                                            {printf("instruccion_devolver : DEVOLVER expresion ';'\n");}
#line 2554 "mini.tab.c"
    break;

  case 147:
#line 330 "mini.y"
                                                            {printf("instruccion_vacia : ';'\n");}
#line 2560 "mini.tab.c"
    break;

  case 148:
#line 333 "mini.y"
                                                                              {printf("instruccion_lanzamiento_excepcion : LANZA EXCEPCION IDENTIFICADOR ';'\n");}
#line 2566 "mini.tab.c"
    break;

  case 149:
#line 336 "mini.y"
                                                                              {printf("instruccion_captura_excepcion : EJECUTA bloque_instrucciones clausulas\n");}
#line 2572 "mini.tab.c"
    break;

  case 150:
#line 339 "mini.y"
                                                                              {printf("clausulas : clausulas_excepcion op_clausula_defecto\n");}
#line 2578 "mini.tab.c"
    break;

  case 151:
#line 340 "mini.y"
                                                                              {printf("clausulas : clausula_defecto\n");}
#line 2584 "mini.tab.c"
    break;

  case 152:
#line 343 "mini.y"
                                                                              {printf("op_clausula_defecto : clausula_defecto\n");}
#line 2590 "mini.tab.c"
    break;

  case 154:
#line 347 "mini.y"
                                                                                                            {printf("clausulas_excepcion : rep_clausula_excepcion_especifica clausula_excepcion_general\n");}
#line 2596 "mini.tab.c"
    break;

  case 155:
#line 350 "mini.y"
                                                                                                            {printf("rep_clausula_excepcion_especifica : rep_clausula_excepcion_especifica clausula_excepcion_especifica\n");}
#line 2602 "mini.tab.c"
    break;

  case 156:
#line 351 "mini.y"
                                                                                                            {printf("rep_clausula_excepcion_especifica : \n");}
#line 2608 "mini.tab.c"
    break;

  case 157:
#line 354 "mini.y"
                                                                                                            {printf("clausula_excepcion_especifica : EXCEPCION IDENTIFICADOR bloque_instrucciones\n");}
#line 2614 "mini.tab.c"
    break;

  case 158:
#line 357 "mini.y"
                                                                                                            {printf("clausula_excepcion_general : OTRA EXCEPCION bloque_instrucciones\n");}
#line 2620 "mini.tab.c"
    break;

  case 159:
#line 360 "mini.y"
                                                                                                            {printf("clausula_defecto : DEFECTO bloque_instrucciones\n");}
#line 2626 "mini.tab.c"
    break;

  case 160:
#line 368 "mini.y"
                                            {printf("agrup_expresion : expresion_constante\n");}
#line 2632 "mini.tab.c"
    break;

  case 161:
#line 369 "mini.y"
                                            {printf("agrup_expresion : expresion_indexada\n");}
#line 2638 "mini.tab.c"
    break;

  case 162:
#line 370 "mini.y"
                                            {printf("agrup_expresion : expresion_funcional\n");}
#line 2644 "mini.tab.c"
    break;

  case 163:
#line 373 "mini.y"
                                      {printf("expresion_constante : CTC_ENTERA\n");}
#line 2650 "mini.tab.c"
    break;

  case 164:
#line 374 "mini.y"
                                      {printf("expresion_constante : CTC_REAL\n");}
#line 2656 "mini.tab.c"
    break;

  case 165:
#line 375 "mini.y"
                                      {printf("expresion_constante : CTC_CADENA\n");}
#line 2662 "mini.tab.c"
    break;

  case 166:
#line 376 "mini.y"
                                      {printf("expresion_constante : CTC_CARACTER\n");}
#line 2668 "mini.tab.c"
    break;

  case 167:
#line 379 "mini.y"
                                                      {printf("expresion_indexada : expresion_basica\n");}
#line 2674 "mini.tab.c"
    break;

  case 168:
#line 380 "mini.y"
                                                      {printf("expresion_indexada : expresion_indexada '.' expresion_basica\n");}
#line 2680 "mini.tab.c"
    break;

  case 169:
#line 381 "mini.y"
                                                      {printf("expresion_indexada : expresion_indexada INDIRECCION expresion_basica\n");}
#line 2686 "mini.tab.c"
    break;

  case 170:
#line 382 "mini.y"
                                                      {printf("expresion_indexada : expresion_indexada op_indireccion indice\n");}
#line 2692 "mini.tab.c"
    break;

  case 171:
#line 385 "mini.y"
                                                      {printf("op_indireccion : INDIRECCION\n");}
#line 2698 "mini.tab.c"
    break;

  case 172:
#line 386 "mini.y"
                                                      {printf("agrup_expresion : \n");}
#line 2704 "mini.tab.c"
    break;

  case 173:
#line 389 "mini.y"
                                                      {printf("expresion_basica : IDENTIFICADOR\n");}
#line 2710 "mini.tab.c"
    break;

  case 174:
#line 390 "mini.y"
                                                      {printf("expresion_basica : '(' expresion ')'\n");}
#line 2716 "mini.tab.c"
    break;

  case 175:
#line 391 "mini.y"
                                                      {printf("expresion_basica : '^' expresion_basica\n");}
#line 2722 "mini.tab.c"
    break;

  case 176:
#line 392 "mini.y"
                                                      {printf("expresion_basica : '\\' expresion_basica\n");}
#line 2728 "mini.tab.c"
    break;

  case 177:
#line 395 "mini.y"
                                                      {printf("indice : '[' expresion ']'\n");}
#line 2734 "mini.tab.c"
    break;

  case 178:
#line 396 "mini.y"
                                                      {printf("indice : '{' expresion '}'\n");}
#line 2740 "mini.tab.c"
    break;

  case 179:
#line 399 "mini.y"
                                                         {printf("expresion_funcional : IDENTIFICADOR '(' l_expresion ')'\n");}
#line 2746 "mini.tab.c"
    break;

  case 180:
#line 402 "mini.y"
                                              {printf("l_expresion : l_expresiones\n");}
#line 2752 "mini.tab.c"
    break;

  case 181:
#line 403 "mini.y"
                                              {printf("l_expresion :  \n");}
#line 2758 "mini.tab.c"
    break;

  case 182:
#line 406 "mini.y"
                                                    {printf("l_expresiones : l_expresiones ',' expresion\n");}
#line 2764 "mini.tab.c"
    break;

  case 183:
#line 407 "mini.y"
                                                    {printf("l_expresiones : expresion\n");}
#line 2770 "mini.tab.c"
    break;

  case 184:
#line 410 "mini.y"
                                                    {printf("expresion : expresion_logica op_exp\n");}
#line 2776 "mini.tab.c"
    break;

  case 185:
#line 413 "mini.y"
                                                    {printf("op_exp : SI expresion SINO expresion\n");}
#line 2782 "mini.tab.c"
    break;

  case 186:
#line 414 "mini.y"
                                                    {printf("op_exp :  \n");}
#line 2788 "mini.tab.c"
    break;

  case 187:
#line 417 "mini.y"
                                                    {printf("expresion_logica :  expresion_logica_or\n");}
#line 2794 "mini.tab.c"
    break;

  case 188:
#line 420 "mini.y"
                                                                            {printf("expresion_logica_or :  expresion_logica_or OR expresion_logica_and\n");}
#line 2800 "mini.tab.c"
    break;

  case 189:
#line 421 "mini.y"
                                                                            {printf("expresion_logica_or :  expresion_logica_and\n");}
#line 2806 "mini.tab.c"
    break;

  case 190:
#line 423 "mini.y"
                                                                            {printf("expresion_logica_and :  expresion_logica_and AND expresion_eq\n");}
#line 2812 "mini.tab.c"
    break;

  case 191:
#line 424 "mini.y"
                                                                            {printf("expresion_logica_and :  expresion_eq\n");}
#line 2818 "mini.tab.c"
    break;

  case 192:
#line 427 "mini.y"
                                                                            {printf("expresion_eq :  expresion_eq EQ expresion_comp\n");}
#line 2824 "mini.tab.c"
    break;

  case 193:
#line 428 "mini.y"
                                                                            {printf("expresion_eq :  expresion_eq NEQ expresion_comp\n");}
#line 2830 "mini.tab.c"
    break;

  case 194:
#line 429 "mini.y"
                                                                            {printf("expresion_eq :  expresion_comp\n");}
#line 2836 "mini.tab.c"
    break;

  case 195:
#line 432 "mini.y"
                                                                            {printf("expresion_comp :  expresion_comp '<' expresion_bin_or\n");}
#line 2842 "mini.tab.c"
    break;

  case 196:
#line 433 "mini.y"
                                                                            {printf("expresion_comp :  expresion_comp '>' expresion_bin_or\n");}
#line 2848 "mini.tab.c"
    break;

  case 197:
#line 434 "mini.y"
                                                                            {printf("expresion_comp :  expresion_comp LE expresion_bin_or\n");}
#line 2854 "mini.tab.c"
    break;

  case 198:
#line 435 "mini.y"
                                                                            {printf("expresion_comp :  expresion_comp GE expresion_bin_or\n");}
#line 2860 "mini.tab.c"
    break;

  case 199:
#line 436 "mini.y"
                                                                            {printf("expresion_comp :  expresion_bin_or\n");}
#line 2866 "mini.tab.c"
    break;

  case 200:
#line 439 "mini.y"
                                                                            {printf("expresion_bin_or :  expresion_bin_or '|' expresion_bin_xor\n");}
#line 2872 "mini.tab.c"
    break;

  case 201:
#line 440 "mini.y"
                                                                            {printf("expresion_bin_or :  expresion_bin_xor\n");}
#line 2878 "mini.tab.c"
    break;

  case 202:
#line 443 "mini.y"
                                                                            {printf("expresion_bin_xor :  expresion_bin_xor '@' expresion_bin_and\n");}
#line 2884 "mini.tab.c"
    break;

  case 203:
#line 444 "mini.y"
                                                                            {printf("expresion_bin_xor :  expresion_bin_and\n");}
#line 2890 "mini.tab.c"
    break;

  case 204:
#line 447 "mini.y"
                                                                            {printf("expresion_bin_and :  expresion_bin_and '&' expresion_desp\n");}
#line 2896 "mini.tab.c"
    break;

  case 205:
#line 448 "mini.y"
                                                                            {printf("expresion_bin_and :  expresion_desp\n");}
#line 2902 "mini.tab.c"
    break;

  case 206:
#line 451 "mini.y"
                                                                            {printf("expresion_desp :  expresion_desp FLECHA_DCHA expresion_aditiva\n");}
#line 2908 "mini.tab.c"
    break;

  case 207:
#line 452 "mini.y"
                                                                            {printf("expresion_desp :  expresion_desp FLECHA_IZDA expresion_aditiva\n");}
#line 2914 "mini.tab.c"
    break;

  case 208:
#line 453 "mini.y"
                                                                            {printf("expresion_desp :  expresion_aditiva\n");}
#line 2920 "mini.tab.c"
    break;

  case 209:
#line 456 "mini.y"
                                                                      {printf("expresion_aditiva : expresion_aditiva '+' expresion_multiplicativa");}
#line 2926 "mini.tab.c"
    break;

  case 210:
#line 457 "mini.y"
                                                                      {printf("expresion_aditiva :  expresion_aditiva '-' expresion_multiplicativa\n");}
#line 2932 "mini.tab.c"
    break;

  case 211:
#line 458 "mini.y"
                                                                      {printf("expresion_aditiva :  expresion_multiplicativa\n");}
#line 2938 "mini.tab.c"
    break;

  case 212:
#line 461 "mini.y"
                                                                                    {printf("expresion_multiplicativa :  expresion_multiplicativa '*' expresion_potencia\n");}
#line 2944 "mini.tab.c"
    break;

  case 213:
#line 462 "mini.y"
                                                                                    {printf("expresion_multiplicativa :  expresion_multiplicativa '/' expresion_potencia\n");}
#line 2950 "mini.tab.c"
    break;

  case 214:
#line 463 "mini.y"
                                                                                    {printf("expresion_multiplicativa :  expresion_multiplicativa '%' expresion_potencia\n");}
#line 2956 "mini.tab.c"
    break;

  case 215:
#line 464 "mini.y"
                                                                                    {printf("expresion_multiplicativa :  expresion_potencia\n");}
#line 2962 "mini.tab.c"
    break;

  case 216:
#line 467 "mini.y"
                                                                                    {printf("expresion_potencia :  expresion_noassoc POTENCIA expresion_potencia\n");}
#line 2968 "mini.tab.c"
    break;

  case 217:
#line 468 "mini.y"
                                                                                    {printf("expresion_potencia :  expresion_noassoc\n");}
#line 2974 "mini.tab.c"
    break;

  case 218:
#line 471 "mini.y"
                                                                                    {printf("expresion_noassoc :  '-' agrup_expresion\n");}
#line 2980 "mini.tab.c"
    break;

  case 219:
#line 472 "mini.y"
                                                                                    {printf("expresion_noassoc :  '~' agrup_expresion\n");}
#line 2986 "mini.tab.c"
    break;

  case 220:
#line 473 "mini.y"
                                                                                    {printf("expresion_noassoc :  '!' agrup_expresion\n");}
#line 2992 "mini.tab.c"
    break;

  case 221:
#line 474 "mini.y"
                                                                                    {printf("expresion_noassoc :  TAMANO agrup_expresion\n");}
#line 2998 "mini.tab.c"
    break;

  case 222:
#line 475 "mini.y"
                                                                                    {printf("expresion_noassoc :  agrup_expresion\n");}
#line 3004 "mini.tab.c"
    break;


#line 3008 "mini.tab.c"

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
#line 478 "mini.y"


int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./mini NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
