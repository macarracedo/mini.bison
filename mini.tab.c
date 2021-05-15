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
#define YYLAST   403

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

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
      53,    54,    51,    65,    66,    69,    70,    73,    76,    79,
      80,    83,    84,    85,    86,    90,    91,    92,    93,    94,
      95,    98,    99,   100,   104,   105,   106,   107,   110,   113,
     114,   122,   123,   126,   127,   130,   133,   134,   135,   136,
     137,   138,   141,   142,   145,   146,   148,   149,   152,   154,
     155,   158,   161,   163,   164,   167,   176,   177,   180,   181,
     184,   185,   188,   189,   192,   193,   202,   203,   206,   209,
     210,   213,   216,   217,   220,   221,   224,   225,   228,   229,
     232,   233,   236,   237,   238,   239,   243,   245,   246,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   263,   264,
     267,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   284,   287,   288,   291,   292,   296,   299,
     300,   303,   304,   305,   306,   309,   310,   313,   314,   315,
     318,   321,   322,   325,   328,   331,   334,   335,   338,   339,
     342,   345,   346,   349,   352,   355,   362,   363,   364,   367,
     368,   369,   370,   373,   374,   375,   376,   379,   380,   383,
     384,   385,   386,   389,   390,   393,   396,   397,   400,   401,
     404,   407,   408,   411,   414,   415,   417,   418,   421,   422,
     423,   426,   427,   428,   429,   430,   433,   434,   437,   438,
     441,   442,   445,   446,   447,   450,   451,   452,   455,   456,
     457,   458,   461,   462,   465,   466,   467,   468,   469
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
  "rep_declaracion_funcion", "declaracion_funcion", "op_lista_parametros",
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

#define YYPACT_NINF (-333)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-169)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -37,    49,    26,   -30,    21,  -333,    63,  -333,  -333,  -333,
     110,    65,  -333,   130,   142,  -333,  -333,  -333,   112,  -333,
      95,   116,   149,   135,    96,  -333,    97,  -333,   114,  -333,
     188,  -333,  -333,   196,  -333,   134,  -333,  -333,   200,  -333,
    -333,  -333,   140,  -333,  -333,  -333,  -333,   314,  -333,  -333,
     189,  -333,  -333,   180,  -333,  -333,    79,  -333,    79,   172,
    -333,   104,  -333,   -32,  -333,  -333,  -333,  -333,  -333,   205,
     211,   -14,  -333,   205,   216,    34,  -333,  -333,   212,  -333,
     218,   226,  -333,  -333,   229,   231,  -333,  -333,  -333,  -333,
    -333,   102,   233,   206,  -333,  -333,  -333,   101,   237,   224,
    -333,  -333,   214,  -333,  -333,   251,  -333,   208,   217,   215,
     219,  -333,   223,    71,  -333,  -333,  -333,    19,   225,   305,
    -333,  -333,    34,  -333,    34,  -333,   278,    34,   233,  -333,
    -333,  -333,  -333,  -333,   227,     6,    19,    48,    48,     6,
       6,     6,   126,  -333,  -333,   -17,  -333,  -333,  -333,   235,
     253,   301,   -11,   -16,   220,   221,   222,   171,   132,    90,
    -333,   250,  -333,   280,  -333,   238,     1,   224,   242,   273,
     213,   285,   243,     2,   275,   245,  -333,   259,  -333,  -333,
     257,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,    92,
     258,  -333,  -333,   251,  -333,  -333,  -333,    19,  -333,   256,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,    19,    48,    48,
      -5,    19,  -333,    19,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19,   294,   288,  -333,  -333,   266,   322,  -333,   274,
    -333,  -333,   302,   310,    19,   311,    48,   283,    19,  -333,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,    19,  -333,   281,   287,  -333,  -333,
    -333,  -333,  -333,    19,    19,  -333,   293,   301,   -11,   -16,
     -16,   220,   220,   220,   220,   221,   222,   171,   132,   132,
      90,    90,  -333,  -333,  -333,  -333,  -333,    40,    55,  -333,
    -333,    -3,  -333,   224,  -333,   322,    27,  -333,  -333,   286,
     290,   289,   291,  -333,   152,  -333,   295,  -333,  -333,    19,
     292,   279,    19,  -333,  -333,   325,  -333,  -333,  -333,   218,
    -333,  -333,  -333,  -333,  -333,   330,   333,  -333,  -333,    19,
    -333,   213,    19,    19,    48,   213,  -333,  -333,  -333,  -333,
    -333,   300,   224,   224,   299,  -333,   303,   304,  -333,  -333,
     177,  -333,  -333,   306,   213,    48,   169,   308,  -333,  -333,
    -333,    -2,   358,   213,   347,  -333,   177,   213,   313,  -333,
    -333,  -333,  -333,    19,   309,   213,  -333
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    14,     0,     1,     0,     2,     8,     5,
       0,     0,    16,    42,     3,    20,    13,    15,     0,     9,
       0,     0,     0,     0,     0,    44,    67,     7,     0,    17,
       0,    28,    27,     0,    25,     0,    30,    29,     0,    21,
      26,    19,     0,    18,    22,    23,    24,     0,    41,    43,
       0,    10,     4,     0,    20,    20,     0,    20,     0,     0,
      75,     0,    69,     0,    77,     6,    31,    33,    40,     0,
       0,     0,    32,     0,     0,     0,    66,    68,     0,    20,
      11,     0,    35,    20,     0,     0,    37,    49,    48,    46,
      47,    55,     0,     0,    50,    51,    74,     0,     0,     0,
      76,    34,     0,    39,    36,    49,    57,     0,    54,     0,
      58,    60,     0,     0,    64,    45,    70,     0,    80,     0,
      12,    38,     0,    52,     0,    53,     0,     0,     0,    62,
     161,   162,   159,   160,   169,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   156,   157,   163,   158,    73,   182,
     183,   185,   187,   190,   195,   197,   199,   201,   204,   207,
     211,   213,    83,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,    98,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   168,
       0,    61,    56,     0,    59,    65,    63,   177,   217,     0,
     169,   171,   172,   214,   215,   216,    71,     0,   167,     0,
       0,     0,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,   138,   141,     0,   152,   139,     0,
     130,   129,     0,     0,     0,     0,     0,     0,     0,    96,
      97,   109,   120,   115,   119,   118,   116,   114,   122,   117,
     113,   112,   121,   111,     0,   108,     0,   176,   179,   170,
      72,   165,   164,     0,     0,   166,     0,   184,   186,   188,
     189,   194,   193,   191,   192,   196,   198,   200,   202,   203,
     205,   206,   208,   209,   210,   212,    87,     0,     0,    91,
      90,    42,   142,     0,   145,   149,     0,   147,   140,     0,
       0,     0,     0,   136,     0,   137,     0,   110,   175,     0,
       0,     0,     0,    82,    81,     0,    20,    92,    93,    94,
      78,    95,   155,   146,   148,     0,     0,   151,   150,     0,
     144,     0,     0,     0,     0,     0,   178,   174,   173,   181,
      86,    84,     0,     0,     0,   131,     0,     0,   135,   127,
       0,   153,   154,     0,     0,     0,   125,    85,    89,   132,
     134,     0,     0,     0,     0,   126,     0,     0,     0,   124,
     123,    88,   133,     0,     0,     0,   128
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,   376,   -54,  -333,   341,  -333,  -333,    -4,    24,
    -333,    88,  -333,   366,   -84,  -333,  -333,  -333,  -333,  -333,
     265,  -333,  -333,   264,    93,  -333,   332,  -333,  -333,    94,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,   -89,
    -333,  -114,  -333,  -240,  -333,  -333,  -333,  -333,  -333,  -211,
    -333,    31,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,    98,    28,  -332,  -117,  -333,  -107,
    -333,  -115,  -333,  -333,  -124,  -333,  -333,  -333,   184,   185,
      20,   -18,   179,   176,   178,    13,    16,   -20,  -333
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    14,    28,     7,    13,    26,    64,    99,
       8,    11,    12,    21,    22,    43,    44,    45,    46,    70,
      71,    19,    24,    25,    93,    94,   107,   108,   109,   110,
     111,    95,   113,   114,    51,    61,    62,   142,    63,    80,
     100,   163,   164,   232,   297,   298,   367,   301,   330,   240,
     177,   241,   179,   180,   264,   181,   374,   366,   375,   242,
     182,   314,   183,   184,   185,   186,   187,   188,   304,   333,
     305,   306,   337,   338,   307,   143,   144,   145,   210,   146,
     275,   147,   266,   267,   148,   212,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    67,   189,    72,   190,   178,   313,   106,    18,   245,
     120,    83,   199,   215,   130,   131,   132,   133,     1,   130,
     131,   132,   133,   217,   208,    97,     5,   218,   368,   102,
     201,   202,   130,   131,   132,   133,     6,   216,   191,    78,
     192,   134,   236,   195,   381,    79,   134,    87,    88,    89,
      90,   119,    69,   189,    73,   190,   335,    84,  -168,   134,
     189,   209,   190,   250,  -168,    50,   135,   219,   220,   344,
     273,   235,   377,   268,   136,   246,   274,   336,   237,   136,
     137,   138,    74,   270,   135,   137,   138,   276,   200,     4,
     139,     9,   136,    81,   140,   141,   252,    85,   137,   138,
      16,   271,   272,    10,   358,    10,    35,    91,   139,    92,
     323,   253,   140,   141,   324,   105,    88,    89,    90,    68,
     311,   136,   254,   255,   316,   313,   325,   137,   138,   189,
     355,    48,   326,   208,   359,    15,    23,   256,   257,    76,
     317,    18,   128,   258,    60,   259,    42,   129,    20,   320,
     321,   260,    23,   370,    30,    27,   261,    31,    32,    33,
      47,   262,   379,   198,   263,    50,   382,   203,   204,   205,
     209,   116,    34,   117,   386,    91,    35,    92,    36,   300,
     228,   229,   230,    37,    52,    53,    29,    38,    56,    39,
     130,   131,   132,   133,    58,   346,   206,   207,   349,   281,
     282,   283,   284,   224,   225,    54,    40,    41,   292,   293,
     294,   295,   331,    55,   332,   354,    42,    57,   356,   357,
     226,   227,   343,   344,   189,   165,   190,   189,   189,    60,
     190,   372,   373,   166,   167,   279,   280,   288,   289,   168,
      65,   169,   290,   291,    75,    68,    82,   189,   189,   190,
     170,    86,    96,   134,    98,   171,   189,   172,   190,   384,
     189,   101,   190,   361,   362,   173,   104,   119,   189,   103,
     190,   165,   351,   112,   174,   175,   115,   118,   119,   166,
     167,   122,   123,   176,   121,   168,   136,   169,   124,   125,
     126,   193,   137,   138,   249,   127,   170,   211,   162,   134,
     197,   171,   213,   172,   214,   221,   231,   222,   234,   223,
     233,   173,   238,   239,   243,   247,   244,   165,   248,    30,
     174,   175,    31,    32,    33,   166,   167,   251,   265,   176,
     269,   168,   136,   169,   296,   299,   302,    34,   137,   138,
     303,    35,   170,    36,   308,   134,   309,   171,    37,   172,
     310,   312,    38,   315,    39,   318,   322,   173,   319,   339,
     340,   348,   353,   341,   342,   350,   174,   175,   347,   345,
     352,    40,   360,   363,   365,   176,   369,   364,   136,   376,
     378,    42,   380,   385,   137,   138,   383,    17,    59,   327,
      49,   194,   196,    77,   328,   329,   371,   277,   286,   278,
     285,   287,     0,   334
};

static const yytype_int16 yycheck[] =
{
      54,    55,   119,    57,   119,   119,   246,    91,    11,     7,
      99,    25,   136,    24,    13,    14,    15,    16,    55,    13,
      14,    15,    16,    39,    41,    79,     0,    43,   360,    83,
     137,   138,    13,    14,    15,    16,    66,    48,   122,    71,
     124,    40,   166,   127,   376,    77,    40,    13,    14,    15,
      16,    54,    56,   170,    58,   170,    29,    71,    75,    40,
     177,    78,   177,   177,    81,    68,    65,    83,    84,    71,
      75,    70,    74,   197,    73,    73,    81,    50,   167,    73,
      79,    80,    58,   207,    65,    79,    80,   211,    40,    40,
      89,    70,    73,    69,    93,    94,     4,    73,    79,    80,
      35,   208,   209,    40,   344,    40,    27,    73,    89,    75,
      70,    19,    93,    94,    74,    13,    14,    15,    16,    40,
     244,    73,    30,    31,   248,   365,    71,    79,    80,   246,
     341,    35,    77,    41,   345,    25,    40,    45,    46,    35,
     264,    11,    71,    51,    40,    53,    67,    76,     6,   273,
     274,    59,    40,   364,     5,    60,    64,     8,     9,    10,
      25,    69,   373,   135,    72,    68,   377,   139,   140,   141,
      78,    70,    23,    72,   385,    73,    27,    75,    29,   233,
      90,    91,    92,    34,    70,    71,    70,    38,    54,    40,
      13,    14,    15,    16,    54,   319,    70,    71,   322,   217,
     218,   219,   220,    32,    33,    17,    57,    58,   228,   229,
     230,   231,   301,    17,   303,   339,    67,    17,   342,   343,
      88,    89,    70,    71,   341,    12,   341,   344,   345,    40,
     345,    62,    63,    20,    21,   215,   216,   224,   225,    26,
      60,    28,   226,   227,    72,    40,    35,   364,   365,   364,
      37,    35,    40,    40,    36,    42,   373,    44,   373,   383,
     377,    35,   377,   352,   353,    52,    35,    54,   385,    40,
     385,    12,   326,    40,    61,    62,    70,    40,    54,    20,
      21,    30,    74,    70,    70,    26,    73,    28,    71,    74,
      71,    13,    79,    80,    35,    72,    37,    62,    73,    40,
      73,    42,    49,    44,     3,    85,    56,    86,    70,    87,
      30,    52,    70,    40,    29,    40,    73,    12,    73,     5,
      61,    62,     8,     9,    10,    20,    21,    70,    70,    70,
      74,    26,    73,    28,    40,    47,    70,    23,    79,    80,
      18,    27,    37,    29,    70,    40,    44,    42,    34,    44,
      40,    40,    38,    70,    40,    74,    63,    52,    71,    73,
      70,    82,    29,    74,    73,    40,    61,    62,    76,    74,
      40,    57,    72,    74,    70,    70,    70,    74,    73,    71,
      22,    67,    35,    74,    79,    80,    73,    11,    47,   301,
      24,   126,   128,    61,   301,   301,   365,   213,   222,   214,
     221,   223,    -1,   305
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    96,    97,    40,     0,    66,   100,   105,    70,
      40,   106,   107,   101,    98,    25,    35,   107,    11,   116,
       6,   108,   109,    40,   117,   118,   102,    60,    99,    70,
       5,     8,     9,    10,    23,    27,    29,    34,    38,    40,
      57,    58,    67,   110,   111,   112,   113,    25,    35,   118,
      68,   129,    70,    71,    17,    17,    54,    17,    54,   110,
      40,   130,   131,   133,   103,    60,   108,   108,    40,   113,
     114,   115,   108,   113,   114,    72,    35,   131,    71,    77,
     134,   114,    35,    25,    71,   114,    35,    13,    14,    15,
      16,    73,    75,   119,   120,   126,    40,   108,    36,   104,
     135,    35,   108,    40,    35,    13,   119,   121,   122,   123,
     124,   125,    40,   127,   128,    70,    70,    72,    40,    54,
     144,    70,    30,    74,    71,    74,    71,    72,    71,    76,
      13,    14,    15,    16,    40,    65,    73,    79,    80,    89,
      93,    94,   132,   170,   171,   172,   174,   176,   179,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    73,   136,   137,    12,    20,    21,    26,    28,
      37,    42,    44,    52,    61,    62,    70,   145,   146,   147,
     148,   150,   155,   157,   158,   159,   160,   161,   162,   172,
     176,   119,   119,    13,   125,   119,   128,    73,   170,   179,
      40,   174,   174,   170,   170,   170,    70,    71,    41,    78,
     173,    62,   180,    49,     3,    24,    48,    39,    43,    83,
      84,    85,    86,    87,    32,    33,    88,    89,    90,    91,
      92,    56,   138,    30,    70,    70,   179,   144,    70,    40,
     144,   146,   154,    29,    73,     7,    73,    40,    73,    35,
     146,    70,     4,    19,    30,    31,    45,    46,    51,    53,
      59,    64,    69,    72,   149,    70,   177,   178,   179,    74,
     179,   174,   174,    75,    81,   175,   179,   183,   184,   185,
     185,   186,   186,   186,   186,   187,   188,   189,   190,   190,
     191,   191,   192,   192,   192,   192,    40,   139,   140,    47,
     108,   142,    70,    18,   163,   165,   166,   169,    70,    44,
      40,   179,    40,   148,   156,    70,   179,   179,    74,    71,
     179,   179,    63,    70,    74,    71,    77,   116,   129,   134,
     143,   144,   144,   164,   169,    29,    50,   167,   168,    73,
      70,    74,    73,    70,    71,    74,   179,    76,    82,   179,
      40,   108,    40,    29,   179,   154,   179,   179,   148,   154,
      72,   144,   144,    74,    74,    70,   152,   141,   171,    70,
     154,   156,    62,    63,   151,   153,    71,    74,    22,   154,
      35,   171,   154,    73,   179,    74,   154
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    98,    99,    99,   101,   102,
     103,   104,   100,   105,   105,   106,   106,   107,   108,   109,
     109,   110,   110,   110,   110,   111,   111,   111,   111,   111,
     111,   112,   112,   112,   113,   113,   113,   113,   114,   115,
     115,   116,   116,   117,   117,   118,   119,   119,   119,   119,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   124,
     124,   125,   126,   127,   127,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   134,   135,   136,
     136,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   143,   143,   144,   145,   145,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   147,   147,
     148,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   151,   151,   152,   152,   153,   154,
     154,   155,   155,   155,   155,   156,   156,   157,   157,   157,
     158,   159,   159,   160,   161,   162,   163,   163,   164,   164,
     165,   166,   166,   167,   168,   169,   170,   170,   170,   171,
     171,   171,   171,   172,   172,   172,   172,   173,   173,   174,
     174,   174,   174,   175,   175,   176,   177,   177,   178,   178,
     179,   180,   180,   181,   182,   182,   183,   183,   184,   184,
     184,   185,   185,   185,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   189,   190,   190,   190,   191,   191,
     191,   191,   192,   192,   193,   193,   193,   193,   193
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     4,     0,     3,     1,     0,     0,
       0,     0,     9,     3,     0,     2,     1,     4,     2,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     5,     4,     5,     4,     4,     3,
       1,     3,     0,     2,     1,     6,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     0,     3,     1,     1,     3,
       1,     3,     3,     3,     1,     3,     3,     0,     2,     1,
       4,     6,     3,     1,     3,     1,     2,     0,     6,     1,
       0,     4,     3,     0,     3,     5,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     2,     0,     2,     0,     6,     1,
       1,     5,     7,     9,     7,     3,     1,     3,     2,     2,
       3,     2,     3,     1,     4,     3,     2,     1,     1,     0,
       2,     2,     0,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     0,     1,
       3,     2,     2,     3,     3,     4,     1,     0,     3,     1,
       2,     4,     0,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     2,     2,     2,     2,     1
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
#line 1704 "mini.tab.c"
    break;

  case 3:
#line 39 "mini.y"
                                                          {printf("inicio_programa --> PROGRAMA IDENTIFICADOR ; librerias\n");}
#line 1710 "mini.tab.c"
    break;

  case 4:
#line 42 "mini.y"
                                                          {printf("l_cabecera --> l_cabecera CABECERA l_rutas \n");}
#line 1716 "mini.tab.c"
    break;

  case 5:
#line 43 "mini.y"
                                                          {printf("l_cabecera --> \n");}
#line 1722 "mini.tab.c"
    break;

  case 6:
#line 46 "mini.y"
                                                          {printf("l_rutas --> l_rutas RUTA\n");}
#line 1728 "mini.tab.c"
    break;

  case 7:
#line 47 "mini.y"
                                                          {printf("l_rutas --> RUTA\n");}
#line 1734 "mini.tab.c"
    break;

  case 8:
#line 51 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1740 "mini.tab.c"
    break;

  case 9:
#line 52 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1746 "mini.tab.c"
    break;

  case 10:
#line 53 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1752 "mini.tab.c"
    break;

  case 11:
#line 54 "mini.y"
                                                             {printf("bloque_programa --> \n");}
#line 1758 "mini.tab.c"
    break;

  case 12:
#line 55 "mini.y"
                                                             {printf("bloque_programa --> \n");}
#line 1764 "mini.tab.c"
    break;

  case 13:
#line 65 "mini.y"
                                                          {printf("declaraciones_tipos --> TIPOS l_decl_tipo FIN\n");}
#line 1770 "mini.tab.c"
    break;

  case 15:
#line 69 "mini.y"
                                                          {printf("l_decl_tipo --> l_decl_tipo declaracion_tipo\n");}
#line 1776 "mini.tab.c"
    break;

  case 16:
#line 70 "mini.y"
                                                          {printf("l_decl_tipo --> declaracion_tipo\n");}
#line 1782 "mini.tab.c"
    break;

  case 17:
#line 73 "mini.y"
                                                            {printf("declaracion_tipo --> TIPOS l_decl_tipo FIN\n");}
#line 1788 "mini.tab.c"
    break;

  case 18:
#line 76 "mini.y"
                                                          {printf("especificacion_tipo --> TIPOS l_decl_tipo FIN\n");}
#line 1794 "mini.tab.c"
    break;

  case 19:
#line 79 "mini.y"
                                                          {printf("l_ref --> l_ref REF\n");}
#line 1800 "mini.tab.c"
    break;

  case 20:
#line 80 "mini.y"
                                                          {printf("l_ref --> \n");}
#line 1806 "mini.tab.c"
    break;

  case 21:
#line 83 "mini.y"
                                                          {printf("tipo_basico --> IDENTIFICADOR\n");}
#line 1812 "mini.tab.c"
    break;

  case 22:
#line 84 "mini.y"
                                                          {printf("tipo_basico --> tipo_escalar\n");}
#line 1818 "mini.tab.c"
    break;

  case 23:
#line 85 "mini.y"
                                                          {printf("tipo_basico --> tipo_enumerado\n");}
#line 1824 "mini.tab.c"
    break;

  case 24:
#line 86 "mini.y"
                                                          {printf("tipo_basico --> tipo_estructurado\n");}
#line 1830 "mini.tab.c"
    break;

  case 25:
#line 90 "mini.y"
                                                          {printf("tipo_escalar --> ENTERO\n");}
#line 1836 "mini.tab.c"
    break;

  case 26:
#line 91 "mini.y"
                                                          {printf("tipo_escalar --> REAL\n");}
#line 1842 "mini.tab.c"
    break;

  case 27:
#line 92 "mini.y"
                                                          {printf("tipo_escalar --> CARACTER\n");}
#line 1848 "mini.tab.c"
    break;

  case 28:
#line 93 "mini.y"
                                                          {printf("tipo_escalar --> CADENA\n");}
#line 1854 "mini.tab.c"
    break;

  case 29:
#line 94 "mini.y"
                                                          {printf("tipo_escalar --> FICHERO\n");}
#line 1860 "mini.tab.c"
    break;

  case 30:
#line 95 "mini.y"
                                                          {printf("tipo_escalar --> EXCEPCION\n");}
#line 1866 "mini.tab.c"
    break;

  case 31:
#line 98 "mini.y"
                                                          {printf("tipo_enumerado --> ARRAY DE especificacion_tipo\n");}
#line 1872 "mini.tab.c"
    break;

  case 32:
#line 99 "mini.y"
                                                          {printf("tipo_enumerado --> HASH DE especificacion_tipo\n");}
#line 1878 "mini.tab.c"
    break;

  case 33:
#line 100 "mini.y"
                                                          {printf("tipo_enumerado --> CONJUNTO DE especificacion_tipo\n");}
#line 1884 "mini.tab.c"
    break;

  case 34:
#line 104 "mini.y"
                                                                             {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO tipo_estructurado linea_campo FIN\n");}
#line 1890 "mini.tab.c"
    break;

  case 35:
#line 105 "mini.y"
                                                                             {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO linea_campo FIN\n");}
#line 1896 "mini.tab.c"
    break;

  case 36:
#line 106 "mini.y"
                                                                             {printf("tipo_estructurado --> UNION PRINCIPIO tipo_estructurado linea_campo FIN\n");}
#line 1902 "mini.tab.c"
    break;

  case 37:
#line 107 "mini.y"
                                                                             {printf("tipo_estructurado --> UNION PRINCIPIO linea_campos FIN\n");}
#line 1908 "mini.tab.c"
    break;

  case 38:
#line 110 "mini.y"
                                                          {printf("linea_campo --> EXCEPCION\n");}
#line 1914 "mini.tab.c"
    break;

  case 39:
#line 113 "mini.y"
                                                          {printf("l_campo --> l_campo ',' IDENTIFICADOR\n");}
#line 1920 "mini.tab.c"
    break;

  case 40:
#line 114 "mini.y"
                                                          {printf("l_campo --> EXCEPCION\n");}
#line 1926 "mini.tab.c"
    break;

  case 41:
#line 122 "mini.y"
                                                                              {printf("declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN\n");}
#line 1932 "mini.tab.c"
    break;

  case 42:
#line 123 "mini.y"
                                                                              {printf("delcaraciones_constantes : \n");}
#line 1938 "mini.tab.c"
    break;

  case 43:
#line 126 "mini.y"
                                                                              {printf("l_declaraciones_constantes : l_declaraciones_constantes declaracion_constante\n");}
#line 1944 "mini.tab.c"
    break;

  case 44:
#line 127 "mini.y"
                                                                              {printf("l_declaraciones_constantes : declaracion_constante\n");}
#line 1950 "mini.tab.c"
    break;

  case 45:
#line 130 "mini.y"
                                                                              {printf("declaracion_constante : IDENTIFICADOR ES tipo_basico '=' constante ';'\n");}
#line 1956 "mini.tab.c"
    break;

  case 46:
#line 133 "mini.y"
                                                          {printf("constante: CTC_ENTERA\n");}
#line 1962 "mini.tab.c"
    break;

  case 47:
#line 134 "mini.y"
                                                          {printf("constante: CTC_REAL\n");}
#line 1968 "mini.tab.c"
    break;

  case 48:
#line 135 "mini.y"
                                                          {printf("constante: CTC_CARACTER\n");}
#line 1974 "mini.tab.c"
    break;

  case 49:
#line 136 "mini.y"
                                                          {printf("constante: CTC_CADENA\n");}
#line 1980 "mini.tab.c"
    break;

  case 50:
#line 137 "mini.y"
                                                          {printf("constante: constante_enumerada\n");}
#line 1986 "mini.tab.c"
    break;

  case 51:
#line 138 "mini.y"
                                                          {printf("constante: constante_estructurada\n");}
#line 1992 "mini.tab.c"
    break;

  case 52:
#line 141 "mini.y"
                                                          {printf("constante_enumerada : '(' l_constante ')'\n");}
#line 1998 "mini.tab.c"
    break;

  case 53:
#line 142 "mini.y"
                                                          {printf("constante_enumerada : '(' l_elemento_hash ')'\n");}
#line 2004 "mini.tab.c"
    break;

  case 54:
#line 145 "mini.y"
                                                          {printf("l_constante : rep_constante\n");}
#line 2010 "mini.tab.c"
    break;

  case 55:
#line 146 "mini.y"
                                                          {printf("l_constante : \n");}
#line 2016 "mini.tab.c"
    break;

  case 56:
#line 148 "mini.y"
                                                          {printf("rep_constante : rep_constante ',' constante\n");}
#line 2022 "mini.tab.c"
    break;

  case 57:
#line 149 "mini.y"
                                                          {printf("rep_constante : constante\n");}
#line 2028 "mini.tab.c"
    break;

  case 58:
#line 152 "mini.y"
                                                          {printf("l_elemento_hash : rep_elemento_hash\n");}
#line 2034 "mini.tab.c"
    break;

  case 59:
#line 154 "mini.y"
                                                          {printf("rep_elemento_hash : rep_elemento_hash ',' elemento_hash\n");}
#line 2040 "mini.tab.c"
    break;

  case 60:
#line 155 "mini.y"
                                                          {printf("rep_elemento_hash : elemento_hash\n");}
#line 2046 "mini.tab.c"
    break;

  case 61:
#line 158 "mini.y"
                                                          {printf("elemento_hash : CTC_CADENA FD_ASIG constante\n");}
#line 2052 "mini.tab.c"
    break;

  case 62:
#line 161 "mini.y"
                                                          {printf("constante_estructurada : '{' l_campo_constante '}'\n");}
#line 2058 "mini.tab.c"
    break;

  case 63:
#line 163 "mini.y"
                                                          {printf("l_campo_constante : l_campo_constante ',' campo_constante\n");}
#line 2064 "mini.tab.c"
    break;

  case 64:
#line 164 "mini.y"
                                                          {printf("l_campo_constante : campo_constante\n");}
#line 2070 "mini.tab.c"
    break;

  case 65:
#line 167 "mini.y"
                                                          {printf("campo_constante : IDENTIFICADOR '=' constante\n");}
#line 2076 "mini.tab.c"
    break;

  case 66:
#line 176 "mini.y"
                                                          {printf("declaraciones_variables : campo_constante\n");}
#line 2082 "mini.tab.c"
    break;

  case 68:
#line 180 "mini.y"
                                                          {printf("l_declaracion : l_declaracion declaracion_variables\n");}
#line 2088 "mini.tab.c"
    break;

  case 69:
#line 181 "mini.y"
                                                          {printf("l_declaracion : declaracion_variables\n");}
#line 2094 "mini.tab.c"
    break;

  case 70:
#line 184 "mini.y"
                                                                                {printf("declaracion_variables : l_ident ':' especificacion_tipo ';'\n");}
#line 2100 "mini.tab.c"
    break;

  case 71:
#line 185 "mini.y"
                                                                                {printf("declaracion_variables : l_ident ':' especificacion_tipo  '=' l_expr ';'\n");}
#line 2106 "mini.tab.c"
    break;

  case 72:
#line 188 "mini.y"
                                                          {printf("l_expr : l_expr ',' expresion\n");}
#line 2112 "mini.tab.c"
    break;

  case 73:
#line 189 "mini.y"
                                                          {printf("l_expr : expresion\n");}
#line 2118 "mini.tab.c"
    break;

  case 74:
#line 192 "mini.y"
                                                          {printf("l_ident : l_ident ',' IDENTIFICADOR\n");}
#line 2124 "mini.tab.c"
    break;

  case 75:
#line 193 "mini.y"
                                                          {printf("l_ident : IDENTIFICADOR\n");}
#line 2130 "mini.tab.c"
    break;

  case 76:
#line 202 "mini.y"
                                                                          {printf("rep_declaracion_funcion : rep_declaracion_funcion declaracion_funcion\n");}
#line 2136 "mini.tab.c"
    break;

  case 78:
#line 206 "mini.y"
                                                                                                   {printf("declaracion_funcion : FUNCION IDENTIFICADOR FD_ASIG tipo_salida cuerpo_funcion\n");}
#line 2142 "mini.tab.c"
    break;

  case 81:
#line 213 "mini.y"
                                                            {printf("lista_parametros : '(' l_parametros parametros ')'\n");}
#line 2148 "mini.tab.c"
    break;

  case 82:
#line 216 "mini.y"
                                                            {printf("l_parametros : l_parametros parametros ';'\n");}
#line 2154 "mini.tab.c"
    break;

  case 84:
#line 220 "mini.y"
                                                          {printf("parametros : rep_ident ':' especificacion_tipo\n");}
#line 2160 "mini.tab.c"
    break;

  case 85:
#line 221 "mini.y"
                                                          {printf("parametros : rep_ident ':' especificacion_tipo '=' l_expr_constante\n");}
#line 2166 "mini.tab.c"
    break;

  case 86:
#line 224 "mini.y"
                                                          {printf("rep_ident : rep_ident ',' IDENTIFICADOR\n");}
#line 2172 "mini.tab.c"
    break;

  case 87:
#line 225 "mini.y"
                                                          {printf("rep_ident : IDENTIFICADOR\n");}
#line 2178 "mini.tab.c"
    break;

  case 88:
#line 228 "mini.y"
                                                                                {printf("l_expr_constante : l_expr_constante ',' expresion_constante\n");}
#line 2184 "mini.tab.c"
    break;

  case 89:
#line 229 "mini.y"
                                                                                {printf("l_expr_constante : expresion_constante\n");}
#line 2190 "mini.tab.c"
    break;

  case 90:
#line 232 "mini.y"
                                                          {printf("tipo_salida : especificacion_tipo\n");}
#line 2196 "mini.tab.c"
    break;

  case 91:
#line 233 "mini.y"
                                                          {printf("tipo_salida : NADA\n");}
#line 2202 "mini.tab.c"
    break;

  case 92:
#line 236 "mini.y"
                                                        {printf("cuerpo_funcion : declaraciones_constantes\n");}
#line 2208 "mini.tab.c"
    break;

  case 93:
#line 237 "mini.y"
                                                        {printf("cuerpo_funcion : declaraciones_variables\n");}
#line 2214 "mini.tab.c"
    break;

  case 94:
#line 238 "mini.y"
                                                          {printf("cuerpo_funcion : rep_declaracion_funcion\n");}
#line 2220 "mini.tab.c"
    break;

  case 95:
#line 239 "mini.y"
                                                          {printf("cuerpo_funcion : bloque_instrucciones\n");}
#line 2226 "mini.tab.c"
    break;

  case 96:
#line 243 "mini.y"
                                                           {printf("bloque_instrucciones : PRINCIPIO l_instruccion FIN\n");}
#line 2232 "mini.tab.c"
    break;

  case 97:
#line 245 "mini.y"
                                                           {printf("l_instruccion : l_instruccion instruccion \n");}
#line 2238 "mini.tab.c"
    break;

  case 98:
#line 246 "mini.y"
                                                           {printf("l_instruccion : instruccion\n");}
#line 2244 "mini.tab.c"
    break;

  case 99:
#line 252 "mini.y"
                                                            {printf("instruccion : instruccion_expresion\n");}
#line 2250 "mini.tab.c"
    break;

  case 100:
#line 253 "mini.y"
                                                            {printf("instruccion : instruccion_bifurcacion\n");}
#line 2256 "mini.tab.c"
    break;

  case 101:
#line 254 "mini.y"
                                                            {printf("instruccion : instruccion_bucle\n");}
#line 2262 "mini.tab.c"
    break;

  case 102:
#line 255 "mini.y"
                                                            {printf("instruccion : instruccion_salto\n");}
#line 2268 "mini.tab.c"
    break;

  case 103:
#line 256 "mini.y"
                                                            {printf("instruccion : instruccion_destino_salto\n");}
#line 2274 "mini.tab.c"
    break;

  case 104:
#line 257 "mini.y"
                                                            {printf("instruccion : instruccion_devolver\n");}
#line 2280 "mini.tab.c"
    break;

  case 105:
#line 258 "mini.y"
                                                            {printf("instruccion : instruccion_vacia\n");}
#line 2286 "mini.tab.c"
    break;

  case 106:
#line 259 "mini.y"
                                                            {printf("instruccion : instruccion_lanzamiento_excepcion\n");}
#line 2292 "mini.tab.c"
    break;

  case 107:
#line 260 "mini.y"
                                                            {printf("instruccion : instruccion_captura_excepcion\n");}
#line 2298 "mini.tab.c"
    break;

  case 159:
#line 367 "mini.y"
                                      {printf("expresion_constante : CTC_ENTERA");}
#line 2304 "mini.tab.c"
    break;

  case 205:
#line 450 "mini.y"
                                                                      {printf("expresion_aditiva : expresion_aditiva '+' expresion_multiplicativa");}
#line 2310 "mini.tab.c"
    break;


#line 2314 "mini.tab.c"

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
#line 472 "mini.y"


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
