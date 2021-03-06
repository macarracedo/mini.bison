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
typedef int YYSTYPE;
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
#define YYLAST   439

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  385

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
       0,    28,    28,    32,    35,    36,    39,    40,    44,    45,
      46,    47,    44,    49,    56,    57,    58,    61,    62,    65,
      68,    71,    72,    75,    76,    77,    78,    82,    83,    84,
      85,    86,    87,    90,    91,    92,    95,    96,    99,   100,
     103,   106,   107,   114,   115,   118,   119,   122,   125,   126,
     127,   128,   129,   130,   135,   136,   139,   140,   142,   143,
     146,   148,   149,   152,   155,   157,   158,   161,   169,   170,
     173,   174,   177,   178,   185,   186,   189,   192,   193,   196,
     199,   200,   203,   204,   207,   208,   211,   212,   215,   216,
     217,   215,   219,   222,   224,   225,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   244,   245,   248,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   265,   268,   269,   272,   273,   276,   279,   280,   283,
     284,   285,   286,   289,   290,   293,   294,   295,   298,   301,
     302,   305,   308,   311,   314,   315,   318,   319,   322,   325,
     326,   329,   332,   335,   343,   344,   345,   346,   349,   350,
     351,   352,   355,   356,   357,   358,   361,   362,   365,   366,
     367,   368,   371,   372,   375,   378,   379,   382,   383,   386,
     389,   390,   393,   396,   397,   399,   400,   403,   404,   405,
     408,   409,   410,   411,   412,   415,   416,   419,   420,   423,
     424,   427,   428,   429,   432,   433,   434,   437,   438,   439,
     440,   443,   444,   447,   448,   449,   450,   451
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
  "lista_campo", "linea_campo", "rep_ident", "declaraciones_constantes",
  "l_declaraciones_constantes", "declaracion_constante", "constante",
  "constante_enumerada", "l_constante", "rep_constante", "l_elemento_hash",
  "rep_elemento_hash", "elemento_hash", "constante_estructurada",
  "l_campo_constante", "campo_constante", "declaraciones_variables",
  "l_declaracion", "declaracion_variables", "declaraciones_funciones",
  "declaracion_funcion", "op_lista_parametros", "lista_parametros",
  "rep_parametros", "parametros", "rep_expr_constante", "tipo_salida",
  "cuerpo_funcion", "$@5", "$@6", "$@7", "bloque_instrucciones",
  "l_instruccion", "instruccion", "instruccion_expresion", "asignacion",
  "operador_asignacion", "instruccion_bifurcacion", "op_sino_accion",
  "rep_otros_casos", "otros_casos", "accion", "instruccion_bucle",
  "l_asignaciones", "instruccion_salto", "instruccion_destino_salto",
  "instruccion_devolver", "instruccion_vacia",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "clausulas", "op_clausula_defecto", "clausulas_excepcion",
  "rep_clausula_excepcion_especifica", "clausula_excepcion_especifica",
  "clausula_excepcion_general", "clausula_defecto", "agrup_expresion",
  "expresion_constante", "expresion_indexada", "op_indireccion",
  "expresion_basica", "indice", "expresion_funcional", "l_expresion",
  "l_expr", "expresion", "op_exp", "expresion_logica",
  "expresion_logica_or", "expresion_logica_and", "expresion_eq",
  "expresion_comp", "expresion_bin_or", "expresion_bin_xor",
  "expresion_bin_and", "expresion_desp", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_potencia", "expresion_noassoc", YY_NULLPTR
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

#define YYPACT_NINF (-328)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-177)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,     5,    53,    23,    38,  -328,    50,    54,  -328,  -328,
    -328,    65,    79,    11,  -328,   116,   125,  -328,  -328,  -328,
      97,  -328,    87,    84,   368,   138,    63,  -328,   105,  -328,
     -41,  -328,   159,  -328,  -328,   169,  -328,   136,  -328,  -328,
     239,  -328,  -328,  -328,   204,  -328,  -328,  -328,  -328,   151,
    -328,  -328,   219,  -328,  -328,   205,  -328,  -328,   219,  -328,
     219,   194,  -328,   -57,   108,  -328,  -328,  -328,  -328,  -328,
     118,  -328,   -13,  -328,   135,    34,   231,  -328,  -328,  -328,
     237,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,   153,
     234,   207,  -328,  -328,  -328,     4,   238,   226,  -328,   212,
     253,  -328,   210,   215,   217,   221,  -328,   222,   101,  -328,
    -328,  -328,   196,   223,   359,  -328,  -328,    34,  -328,    34,
    -328,   284,    34,   234,  -328,   228,  -328,  -328,  -328,  -328,
     227,    26,   196,    46,    46,    26,    26,    26,  -328,  -328,
     123,  -328,  -328,    13,  -328,   240,   250,   298,    -5,   112,
     218,   220,   225,   149,   111,   102,  -328,   249,  -328,   276,
    -328,   243,   245,    22,   226,   246,   270,   267,   288,   247,
       9,   278,   251,  -328,   313,  -328,  -328,   252,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,    93,   256,  -328,  -328,
     253,  -328,  -328,  -328,  -328,    56,  -328,   257,  -328,  -328,
    -328,  -328,  -328,  -328,    46,    46,   -60,  -328,   196,   196,
    -328,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     219,   280,  -328,  -328,  -328,   260,   305,  -328,   262,  -328,
    -328,   291,   296,   196,   302,    46,   268,   196,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,   196,  -328,   269,   273,  -328,  -328,  -328,
     196,   196,  -328,  -328,   282,   298,    -5,   112,   112,   218,
     218,   218,   218,   220,   225,   149,   111,   111,   102,   102,
    -328,  -328,  -328,  -328,   -49,    -6,  -328,  -328,    74,  -328,
     226,  -328,   305,   -18,  -328,  -328,   279,   281,   275,   283,
    -328,   160,  -328,   285,  -328,  -328,   286,   272,   196,  -328,
    -328,  -328,   293,  -328,  -328,  -328,  -328,  -328,   318,   332,
    -328,  -328,   196,  -328,   267,   196,   196,    46,   267,  -328,
    -328,  -328,   292,  -328,   105,   226,   226,   294,  -328,   295,
     297,  -328,  -328,   200,  -328,  -328,  -328,   300,   267,    46,
     157,   301,  -328,  -328,  -328,  -328,   -19,   344,   267,   346,
    -328,   200,   237,   267,   309,  -328,  -328,  -328,   226,  -328,
     196,  -328,   310,   267,  -328
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
       0,     0,    42,     0,     0,    71,    75,     6,    33,    35,
       0,    39,     0,    34,     0,     0,     0,    22,    68,    70,
      11,    36,    38,    22,    37,    51,    50,    48,    49,    57,
       0,     0,    52,    53,    41,     0,     0,     0,    74,     0,
      51,    59,     0,    56,     0,    60,    62,     0,     0,    66,
      47,    72,     0,    78,     0,    12,    40,     0,    54,     0,
      55,     0,     0,     0,    64,     0,   160,   161,   158,   159,
     168,     0,     0,     0,     0,     0,     0,     0,   217,   154,
     155,   162,   156,     0,   178,   181,   182,   184,   186,   189,
     194,   196,   198,   200,   203,   206,   210,   212,    81,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,     0,    95,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   167,     0,    63,    58,
       0,    61,    67,    65,   157,     0,   216,     0,   168,   170,
     171,   213,   214,   215,   166,     0,     0,    73,     0,     0,
     179,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,   105,   136,   139,     0,   150,   137,     0,   128,
     127,     0,     0,     0,     0,     0,     0,     0,    93,    94,
     107,   118,   113,   117,   116,   114,   112,   120,   115,   111,
     110,   119,   109,     0,   106,     0,   175,   169,   164,   163,
       0,     0,   165,   177,     0,   183,   185,   187,   188,   193,
     192,   190,   191,   195,   197,   199,   201,   202,   204,   205,
     207,   208,   209,   211,     0,     0,    87,    86,     0,   140,
       0,   143,   147,     0,   145,   138,     0,     0,     0,     0,
     134,     0,   135,     0,   108,   174,     0,     0,     0,    22,
      80,    79,     0,    88,    76,   153,   144,   146,     0,     0,
     149,   148,     0,   142,     0,     0,     0,     0,     0,   173,
     172,   180,    82,    92,    69,     0,     0,     0,   129,     0,
       0,   133,   125,     0,    89,   151,   152,     0,     0,     0,
     123,    83,    85,    75,   130,   132,     0,     0,     0,     0,
     124,     0,    90,     0,     0,   122,   121,    84,     0,   131,
       0,    91,     0,     0,   126
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,   375,   -52,  -328,   340,  -328,  -328,  -328,   330,
      44,   -46,    96,  -328,   372,   -29,  -328,  -328,  -328,  -328,
    -328,   289,  -328,  -328,   277,    60,  -328,   341,    49,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
     -97,  -328,  -101,  -328,  -237,  -328,  -328,  -328,  -328,  -328,
    -151,  -328,    48,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,   107,    98,  -327,  -113,  -328,
    -124,  -328,  -111,  -328,   224,  -130,  -328,  -328,  -328,   202,
     203,    30,    24,   195,   197,   201,    15,    39,    25,  -328
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    16,    30,     8,    15,    28,    66,    97,
       9,    13,    14,    23,    24,    45,    46,    47,    48,    70,
      71,    72,    21,    26,    27,    91,    92,   102,   103,   104,
     105,   106,    93,   108,   109,    53,    64,    65,    80,    98,
     159,   160,   230,   295,   361,   298,   324,   344,   363,   378,
     239,   174,   240,   176,   177,   263,   178,   369,   360,   370,
     241,   179,   311,   180,   181,   182,   183,   184,   185,   301,
     326,   302,   303,   330,   331,   304,   138,   139,   140,   206,
     141,   272,   142,   265,   143,   144,   210,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     115,   186,   197,   187,    68,    69,    63,    73,   310,   199,
     200,   328,    83,   175,    76,   270,   244,     1,    63,   213,
      77,   271,    76,   125,     6,    95,   362,   125,   319,    54,
      55,    99,   329,   235,   -15,   126,   127,   128,   129,   126,
     127,   128,   129,   214,   377,     4,    18,    85,    86,    87,
      88,    12,   337,     5,   186,   373,   187,   125,    76,   -15,
     101,   186,   130,   187,   320,   -13,   130,   236,   321,   126,
     127,   128,   129,   249,   111,   322,   112,   -15,   273,   274,
     268,   269,   245,   207,   208,    20,   198,   131,   188,     7,
     189,   -15,   234,   192,    12,   132,   130,   251,    50,   132,
     351,   133,   134,    25,    17,   133,   134,    89,    10,    90,
     -44,   135,   252,   308,    82,   136,   137,   313,    82,   132,
      11,   131,   310,   253,   254,   133,   134,    20,   -44,   132,
    -176,    22,   186,   314,   204,   133,   134,    25,   255,   256,
     316,   317,   -44,    78,   257,   135,   258,    29,    62,   136,
     137,   215,   259,    81,    31,   216,    32,   260,    62,    33,
      34,    35,   261,    49,   204,   262,   100,    86,    87,    88,
      84,   205,   123,    52,    36,    62,    56,   124,    37,   297,
      38,   222,   223,   348,   294,    39,    57,   352,   341,    40,
      58,    41,   226,   227,   228,   217,   218,   125,  -167,   224,
     225,   205,   347,   325,  -167,   349,   350,   365,    42,   126,
     127,   128,   129,   126,   127,   128,   129,   375,    44,   367,
     368,   186,   379,   187,   186,   186,    89,   187,    90,   196,
     336,   337,   384,   201,   202,   203,   130,   286,   287,   279,
     280,   281,   282,   277,   278,   186,   186,   187,   355,   356,
     382,   290,   291,   292,   293,   186,    59,   187,    60,    62,
     186,   131,   187,   288,   289,    67,    75,   342,   161,   132,
     186,    94,   187,    96,   107,   133,   134,   110,   113,   162,
     114,   381,   116,   117,   118,   135,   119,   163,   164,   136,
     137,   120,   121,   165,   122,   166,   158,   190,   194,   211,
     195,   212,   209,   219,   167,   229,   220,   130,   231,   168,
     238,   169,   221,   232,   161,   233,   237,   242,   246,   170,
     243,   114,   250,   300,   247,   162,   264,   296,   171,   172,
     299,   267,   305,   163,   164,   306,   307,   173,   312,   165,
     132,   166,   309,   315,   208,   318,   133,   134,   248,   334,
     167,   333,   332,   130,   340,   168,   335,   169,   345,   338,
     161,   346,   339,   343,   353,   170,   374,   359,   357,   358,
     364,   162,   371,    32,   171,   172,    33,    34,    35,   163,
     164,   376,   380,   173,   383,   165,   132,   166,    19,    61,
      74,    36,   133,   134,   323,    37,   167,    38,    51,   130,
     193,   168,    39,   169,   354,    79,    40,   366,    41,   327,
     191,   170,   372,   275,   283,   276,     0,   284,     0,   266,
     171,   172,   285,     0,     0,    42,    43,     0,     0,   173,
       0,     0,   132,     0,     0,    44,     0,     0,   133,   134
};

static const yytype_int16 yycheck[] =
{
      97,   114,   132,   114,    56,    57,    52,    59,   245,   133,
     134,    29,    25,   114,    71,    75,     7,    55,    64,    24,
      77,    81,    71,     1,     1,    77,   353,     1,    77,    70,
      71,    83,    50,   163,    11,    13,    14,    15,    16,    13,
      14,    15,    16,    48,   371,    40,    35,    13,    14,    15,
      16,    40,    71,     0,   167,    74,   167,     1,    71,    36,
      89,   174,    40,   174,    70,     0,    40,   164,    74,    13,
      14,    15,    16,   174,    70,     1,    72,    54,   208,   209,
     204,   205,    73,    70,    71,    11,    40,    65,   117,    66,
     119,    68,    70,   122,    40,    73,    40,     4,    35,    73,
     337,    79,    80,    40,    25,    79,    80,    73,    70,    75,
      36,    89,    19,   243,    70,    93,    94,   247,    74,    73,
      70,    65,   359,    30,    31,    79,    80,    11,    54,    73,
      74,     6,   245,   263,    41,    79,    80,    40,    45,    46,
     270,   271,    68,    35,    51,    89,    53,    60,    40,    93,
      94,    39,    59,    35,    70,    43,     5,    64,    40,     8,
       9,    10,    69,    25,    41,    72,    13,    14,    15,    16,
      35,    78,    71,    68,    23,    40,    17,    76,    27,   231,
      29,    32,    33,   334,   230,    34,    17,   338,   318,    38,
      54,    40,    90,    91,    92,    83,    84,     1,    75,    88,
      89,    78,   332,   300,    81,   335,   336,   358,    57,    13,
      14,    15,    16,    13,    14,    15,    16,   368,    67,    62,
      63,   334,   373,   334,   337,   338,    73,   338,    75,   131,
      70,    71,   383,   135,   136,   137,    40,   222,   223,   215,
     216,   217,   218,   213,   214,   358,   359,   358,   345,   346,
     380,   226,   227,   228,   229,   368,    17,   368,    54,    40,
     373,    65,   373,   224,   225,    60,    72,   319,     1,    73,
     383,    40,   383,    36,    40,    79,    80,    70,    40,    12,
      54,   378,    70,    30,    74,    89,    71,    20,    21,    93,
      94,    74,    71,    26,    72,    28,    73,    13,    70,    49,
      73,     3,    62,    85,    37,    56,    86,    40,    32,    42,
      40,    44,    87,    70,     1,    70,    70,    29,    40,    52,
      73,    54,    70,    18,    73,    12,    70,    47,    61,    62,
      70,    74,    70,    20,    21,    44,    40,    70,    70,    26,
      73,    28,    40,    74,    71,    63,    79,    80,    35,    74,
      37,    70,    73,    40,    82,    42,    73,    44,    40,    74,
       1,    29,    76,    70,    72,    52,    22,    70,    74,    74,
      70,    12,    71,     5,    61,    62,     8,     9,    10,    20,
      21,    35,    73,    70,    74,    26,    73,    28,    13,    49,
      60,    23,    79,    80,   298,    27,    37,    29,    26,    40,
     123,    42,    34,    44,   344,    64,    38,   359,    40,   302,
     121,    52,   363,   211,   219,   212,    -1,   220,    -1,   195,
      61,    62,   221,    -1,    -1,    57,    58,    -1,    -1,    70,
      -1,    -1,    73,    -1,    -1,    67,    -1,    -1,    79,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    96,    97,    40,     0,     1,    66,   100,   105,
      70,    70,    40,   106,   107,   101,    98,    25,    35,   107,
      11,   117,     6,   108,   109,    40,   118,   119,   102,    60,
      99,    70,     5,     8,     9,    10,    23,    27,    29,    34,
      38,    40,    57,    58,    67,   110,   111,   112,   113,    25,
      35,   119,    68,   130,    70,    71,    17,    17,    54,    17,
      54,   110,    40,   116,   131,   132,   103,    60,   108,   108,
     114,   115,   116,   108,   114,    72,    71,    77,    35,   132,
     133,    35,   115,    25,    35,    13,    14,    15,    16,    73,
      75,   120,   121,   127,    40,   108,    36,   104,   134,   108,
      13,   120,   122,   123,   124,   125,   126,    40,   128,   129,
      70,    70,    72,    40,    54,   145,    70,    30,    74,    71,
      74,    71,    72,    71,    76,     1,    13,    14,    15,    16,
      40,    65,    73,    79,    80,    89,    93,    94,   171,   172,
     173,   175,   177,   179,   180,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,    73,   135,
     136,     1,    12,    20,    21,    26,    28,    37,    42,    44,
      52,    61,    62,    70,   146,   147,   148,   149,   151,   156,
     158,   159,   160,   161,   162,   163,   173,   177,   120,   120,
      13,   126,   120,   129,    70,    73,   171,   180,    40,   175,
     175,   171,   171,   171,    41,    78,   174,    70,    71,    62,
     181,    49,     3,    24,    48,    39,    43,    83,    84,    85,
      86,    87,    32,    33,    88,    89,    90,    91,    92,    56,
     137,    32,    70,    70,    70,   180,   145,    70,    40,   145,
     147,   155,    29,    73,     7,    73,    40,    73,    35,   147,
      70,     4,    19,    30,    31,    45,    46,    51,    53,    59,
      64,    69,    72,   150,    70,   178,   179,    74,   175,   175,
      75,    81,   176,   180,   180,   184,   185,   186,   186,   187,
     187,   187,   187,   188,   189,   190,   191,   191,   192,   192,
     193,   193,   193,   193,   116,   138,    47,   108,   140,    70,
      18,   164,   166,   167,   170,    70,    44,    40,   180,    40,
     149,   157,    70,   180,   180,    74,   180,   180,    63,    77,
      70,    74,     1,   117,   141,   145,   165,   170,    29,    50,
     168,   169,    73,    70,    74,    73,    70,    71,    74,    76,
      82,   180,   108,    70,   142,    40,    29,   180,   155,   180,
     180,   149,   155,    72,   130,   145,   145,    74,    74,    70,
     153,   139,   172,   143,    70,   155,   157,    62,    63,   152,
     154,    71,   133,    74,    22,   155,    35,   172,   144,   155,
      73,   145,   180,    74,   155
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    97,    98,    98,    99,    99,   101,   102,
     103,   104,   100,   100,   105,   105,   105,   106,   106,   107,
     108,   109,   109,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   112,   113,   113,   114,   114,
     115,   116,   116,   117,   117,   118,   118,   119,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   125,   125,   126,   127,   128,   128,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   135,   135,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   142,   143,
     144,   141,   141,   145,   146,   146,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   148,   148,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   152,   152,   153,   153,   154,   155,   155,   156,
     156,   156,   156,   157,   157,   158,   158,   158,   159,   160,
     160,   161,   162,   163,   164,   164,   165,   165,   166,   167,
     167,   168,   169,   170,   171,   171,   171,   171,   172,   172,
     172,   172,   173,   173,   173,   173,   174,   174,   175,   175,
     175,   175,   176,   176,   177,   178,   178,   179,   179,   180,
     181,   181,   182,   183,   183,   184,   184,   185,   185,   185,
     186,   186,   186,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   190,   190,   191,   191,   191,   192,   192,   192,
     192,   193,   193,   194,   194,   194,   194,   194
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     4,     0,     3,     1,     0,     0,
       0,     0,     9,     2,     3,     0,     2,     2,     1,     4,
       2,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     4,     4,     2,     1,
       4,     3,     1,     3,     0,     2,     1,     6,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     0,     3,     1,
       1,     3,     1,     3,     3,     3,     1,     3,     3,     0,
       2,     1,     4,     6,     2,     0,     6,     1,     0,     4,
       3,     0,     3,     5,     3,     1,     1,     1,     0,     0,
       0,     7,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     8,     2,     0,     2,     0,     6,     1,     1,     5,
       7,     9,     7,     3,     1,     3,     2,     2,     3,     2,
       3,     1,     4,     3,     2,     1,     1,     0,     2,     2,
       0,     3,     3,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     0,     1,     3,
       2,     2,     3,     3,     4,     1,     0,     3,     1,     2,
       4,     0,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     2,     2,     2,     2,     1
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
#line 28 "mini.y"
                                                          {printf("programa : inicio_programa bloque_programa\n");}
#line 1698 "mini.tab.c"
    break;

  case 3:
#line 32 "mini.y"
                                                          {printf("inicio_programa : PROGRAMA IDENTIFICADOR ; librerias\n");}
#line 1704 "mini.tab.c"
    break;

  case 4:
#line 35 "mini.y"
                                                          {printf("l_cabecera : l_cabecera CABECERA l_rutas \n");}
#line 1710 "mini.tab.c"
    break;

  case 5:
#line 36 "mini.y"
                                                          {printf("l_cabecera : \n");}
#line 1716 "mini.tab.c"
    break;

  case 6:
#line 39 "mini.y"
                                                          {printf("l_rutas : l_rutas RUTA\n");}
#line 1722 "mini.tab.c"
    break;

  case 7:
#line 40 "mini.y"
                                                          {printf("l_rutas : RUTA\n");}
#line 1728 "mini.tab.c"
    break;

  case 8:
#line 44 "mini.y"
                                                         {printf("bloque_programa : op_declaraciones_tipos\n");}
#line 1734 "mini.tab.c"
    break;

  case 9:
#line 45 "mini.y"
                                                         {printf("bloque_programa : op_declaraciones_constantes\n");}
#line 1740 "mini.tab.c"
    break;

  case 10:
#line 46 "mini.y"
                                                          {printf("bloque_programa : op_declaraciones_variables\n");}
#line 1746 "mini.tab.c"
    break;

  case 11:
#line 47 "mini.y"
                                                         {printf("bloque_programa : declaraciones_funciones\n");}
#line 1752 "mini.tab.c"
    break;

  case 12:
#line 48 "mini.y"
                                                         {printf("bloque_programa : bloque_instrucciones\n");}
#line 1758 "mini.tab.c"
    break;

  case 13:
#line 49 "mini.y"
                                                         {yyerrok;}
#line 1764 "mini.tab.c"
    break;

  case 14:
#line 56 "mini.y"
                                                          {printf("declaraciones_tipos : TIPOS l_decl_tipo FIN\n");}
#line 1770 "mini.tab.c"
    break;

  case 15:
#line 57 "mini.y"
                                                          {printf("declaraciones_tipos : \n");}
#line 1776 "mini.tab.c"
    break;

  case 16:
#line 58 "mini.y"
                                                          {yyerrok;}
#line 1782 "mini.tab.c"
    break;

  case 17:
#line 61 "mini.y"
                                                          {printf("l_decl_tipo : l_decl_tipo declaracion_tipo\n");}
#line 1788 "mini.tab.c"
    break;

  case 18:
#line 62 "mini.y"
                                                          {printf("l_decl_tipo : declaracion_tipo\n");}
#line 1794 "mini.tab.c"
    break;

  case 19:
#line 65 "mini.y"
                                                            {printf("declaracion_tipo : TIPOS l_decl_tipo FIN\n");}
#line 1800 "mini.tab.c"
    break;

  case 20:
#line 68 "mini.y"
                                                          {printf("especificacion_tipo : TIPOS l_decl_tipo FIN\n");}
#line 1806 "mini.tab.c"
    break;

  case 21:
#line 71 "mini.y"
                                                          {printf("l_ref : l_ref REF\n");}
#line 1812 "mini.tab.c"
    break;

  case 22:
#line 72 "mini.y"
                                                          {printf("l_ref : \n");}
#line 1818 "mini.tab.c"
    break;

  case 23:
#line 75 "mini.y"
                                                          {printf("tipo_basico : IDENTIFICADOR\n");}
#line 1824 "mini.tab.c"
    break;

  case 24:
#line 76 "mini.y"
                                                          {printf("tipo_basico : tipo_escalar\n");}
#line 1830 "mini.tab.c"
    break;

  case 25:
#line 77 "mini.y"
                                                          {printf("tipo_basico : tipo_enumerado\n");}
#line 1836 "mini.tab.c"
    break;

  case 26:
#line 78 "mini.y"
                                                          {printf("tipo_basico : tipo_estructurado\n");}
#line 1842 "mini.tab.c"
    break;

  case 27:
#line 82 "mini.y"
                                                          {printf("tipo_escalar : ENTERO\n");}
#line 1848 "mini.tab.c"
    break;

  case 28:
#line 83 "mini.y"
                                                          {printf("tipo_escalar : REAL\n");}
#line 1854 "mini.tab.c"
    break;

  case 29:
#line 84 "mini.y"
                                                          {printf("tipo_escalar : CARACTER\n");}
#line 1860 "mini.tab.c"
    break;

  case 30:
#line 85 "mini.y"
                                                          {printf("tipo_escalar : CADENA\n");}
#line 1866 "mini.tab.c"
    break;

  case 31:
#line 86 "mini.y"
                                                          {printf("tipo_escalar : FICHERO\n");}
#line 1872 "mini.tab.c"
    break;

  case 32:
#line 87 "mini.y"
                                                          {printf("tipo_escalar : EXCEPCION\n");}
#line 1878 "mini.tab.c"
    break;

  case 33:
#line 90 "mini.y"
                                                          {printf("tipo_enumerado : ARRAY DE especificacion_tipo\n");}
#line 1884 "mini.tab.c"
    break;

  case 34:
#line 91 "mini.y"
                                                          {printf("tipo_enumerado : HASH DE especificacion_tipo\n");}
#line 1890 "mini.tab.c"
    break;

  case 35:
#line 92 "mini.y"
                                                          {printf("tipo_enumerado : CONJUNTO DE especificacion_tipo\n");}
#line 1896 "mini.tab.c"
    break;

  case 36:
#line 95 "mini.y"
                                                            {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO  lista_campo FIN\n");}
#line 1902 "mini.tab.c"
    break;

  case 37:
#line 96 "mini.y"
                                                             {printf("tipo_estructurado --> UNION PRINCIPIO  lista_campo FIN\n");}
#line 1908 "mini.tab.c"
    break;

  case 38:
#line 99 "mini.y"
                                                             {printf("lista_campo --> lista_campo linea_campo\n");}
#line 1914 "mini.tab.c"
    break;

  case 39:
#line 100 "mini.y"
                                                         {printf("l_campo --> linea_campo\n");}
#line 1920 "mini.tab.c"
    break;

  case 40:
#line 103 "mini.y"
                                                             {printf("linea_campo --> rep_ident ES especificacion_tipo ';'\n");}
#line 1926 "mini.tab.c"
    break;

  case 41:
#line 106 "mini.y"
                                                              {printf("rep_ident : rep_ident ',' IDENTIFICADOR\n");}
#line 1932 "mini.tab.c"
    break;

  case 42:
#line 107 "mini.y"
                                                          {printf("rep_ident : IDENTIFICADOR\n");}
#line 1938 "mini.tab.c"
    break;

  case 43:
#line 114 "mini.y"
                                                                              {printf("declaraciones_constantes : CONSTANTES l_declaraciones_constantes FIN\n");}
#line 1944 "mini.tab.c"
    break;

  case 44:
#line 115 "mini.y"
                                                                              {printf("declaraciones_constantes : \n");}
#line 1950 "mini.tab.c"
    break;

  case 45:
#line 118 "mini.y"
                                                                              {printf("l_declaraciones_constantes : l_declaraciones_constantes declaracion_constante\n");}
#line 1956 "mini.tab.c"
    break;

  case 46:
#line 119 "mini.y"
                                                                              {printf("l_declaraciones_constantes : declaracion_constante\n");}
#line 1962 "mini.tab.c"
    break;

  case 47:
#line 122 "mini.y"
                                                                              {printf("declaracion_constante : IDENTIFICADOR ES tipo_basico '=' constante ';'\n");}
#line 1968 "mini.tab.c"
    break;

  case 48:
#line 125 "mini.y"
                                                          {printf("constante : CTC_ENTERA\n");}
#line 1974 "mini.tab.c"
    break;

  case 49:
#line 126 "mini.y"
                                                          {printf("constante : CTC_REAL\n");}
#line 1980 "mini.tab.c"
    break;

  case 50:
#line 127 "mini.y"
                                                          {printf("constante : CTC_CARACTER\n");}
#line 1986 "mini.tab.c"
    break;

  case 51:
#line 128 "mini.y"
                                                          {printf("constante : CTC_CADENA\n");}
#line 1992 "mini.tab.c"
    break;

  case 52:
#line 129 "mini.y"
                                                          {printf("constante : constante_enumerada\n");}
#line 1998 "mini.tab.c"
    break;

  case 53:
#line 130 "mini.y"
                                                          {printf("constante : constante_estructurada\n");}
#line 2004 "mini.tab.c"
    break;

  case 54:
#line 135 "mini.y"
                                                          {printf("constante_enumerada : '(' l_constante ')'\n");}
#line 2010 "mini.tab.c"
    break;

  case 55:
#line 136 "mini.y"
                                                          {printf("constante_enumerada : '(' l_elemento_hash ')'\n");}
#line 2016 "mini.tab.c"
    break;

  case 56:
#line 139 "mini.y"
                                                          {printf("l_constante : rep_constante\n");}
#line 2022 "mini.tab.c"
    break;

  case 57:
#line 140 "mini.y"
                                                          {printf("l_constante : \n");}
#line 2028 "mini.tab.c"
    break;

  case 58:
#line 142 "mini.y"
                                                          {printf("rep_constante : rep_constante ',' constante\n");}
#line 2034 "mini.tab.c"
    break;

  case 59:
#line 143 "mini.y"
                                                          {printf("rep_constante : constante\n");}
#line 2040 "mini.tab.c"
    break;

  case 60:
#line 146 "mini.y"
                                                          {printf("l_elemento_hash : rep_elemento_hash\n");}
#line 2046 "mini.tab.c"
    break;

  case 61:
#line 148 "mini.y"
                                                          {printf("rep_elemento_hash : rep_elemento_hash ',' elemento_hash\n");}
#line 2052 "mini.tab.c"
    break;

  case 62:
#line 149 "mini.y"
                                                          {printf("rep_elemento_hash : elemento_hash\n");}
#line 2058 "mini.tab.c"
    break;

  case 63:
#line 152 "mini.y"
                                                          {printf("elemento_hash : CTC_CADENA FD_ASIG constante\n");}
#line 2064 "mini.tab.c"
    break;

  case 64:
#line 155 "mini.y"
                                                          {printf("constante_estructurada : '{' l_campo_constante '}'\n");}
#line 2070 "mini.tab.c"
    break;

  case 65:
#line 157 "mini.y"
                                                          {printf("l_campo_constante : l_campo_constante ',' campo_constante\n");}
#line 2076 "mini.tab.c"
    break;

  case 66:
#line 158 "mini.y"
                                                          {printf("l_campo_constante : campo_constante\n");}
#line 2082 "mini.tab.c"
    break;

  case 67:
#line 161 "mini.y"
                                                          {printf("campo_constante : IDENTIFICADOR '=' constante\n");}
#line 2088 "mini.tab.c"
    break;

  case 68:
#line 169 "mini.y"
                                                          {printf("declaraciones_variables : VARIABLES l_declaracion FIN\n");}
#line 2094 "mini.tab.c"
    break;

  case 69:
#line 170 "mini.y"
                                                          {printf("declaraciones_variables : \n");}
#line 2100 "mini.tab.c"
    break;

  case 70:
#line 173 "mini.y"
                                                           {printf("l_declaracion : l_declaracion declaracion_variables\n");}
#line 2106 "mini.tab.c"
    break;

  case 71:
#line 174 "mini.y"
                                                          {printf("l_declaracion : declaracion_variables\n");}
#line 2112 "mini.tab.c"
    break;

  case 72:
#line 177 "mini.y"
                                                                                  {printf("declaracion_variables : rep_ident ':' especificacion_tipo ';'\n");}
#line 2118 "mini.tab.c"
    break;

  case 73:
#line 178 "mini.y"
                                                                                  {printf("declaracion_variables : rep_ident ':' especificacion_tipo  '=' l_expr ';'\n");}
#line 2124 "mini.tab.c"
    break;

  case 74:
#line 185 "mini.y"
                                                                          {printf("declaraciones_funciones : declaraciones_funciones declaracion_funcion\n");}
#line 2130 "mini.tab.c"
    break;

  case 75:
#line 186 "mini.y"
                                                                          {printf("declaraciones_funciones : \n");}
#line 2136 "mini.tab.c"
    break;

  case 76:
#line 189 "mini.y"
                                                                                                       {printf("declaracion_funcion : FUNCION IDENTIFICADOR op_lista_parametros FLECHA_DCHA tipo_salida cuerpo_funcion\n");}
#line 2142 "mini.tab.c"
    break;

  case 77:
#line 192 "mini.y"
                                                            {printf("op_lista_parametros : lista_parametros\n");}
#line 2148 "mini.tab.c"
    break;

  case 78:
#line 193 "mini.y"
                                                            {printf("op_lista_parametros : \n");}
#line 2154 "mini.tab.c"
    break;

  case 79:
#line 196 "mini.y"
                                                            {printf("lista_parametros : '(' l_parametros parametros ')'\n");}
#line 2160 "mini.tab.c"
    break;

  case 80:
#line 199 "mini.y"
                                                            {printf("l_parametros : l_parametros parametros ';'\n");}
#line 2166 "mini.tab.c"
    break;

  case 81:
#line 200 "mini.y"
                                                            {printf("l_parametros : \n");}
#line 2172 "mini.tab.c"
    break;

  case 82:
#line 203 "mini.y"
                                                          {printf("parametros : rep_ident ':' especificacion_tipo\n");}
#line 2178 "mini.tab.c"
    break;

  case 83:
#line 204 "mini.y"
                                                            {printf("parametros : rep_ident ':' especificacion_tipo '=' l_expr_constante\n");}
#line 2184 "mini.tab.c"
    break;

  case 84:
#line 207 "mini.y"
                                                                                    {printf("rep_expr_constante : l_expr_constante ',' expresion_constante\n");}
#line 2190 "mini.tab.c"
    break;

  case 85:
#line 208 "mini.y"
                                                                                {printf("rep_expr_constante : expresion_constante\n");}
#line 2196 "mini.tab.c"
    break;

  case 86:
#line 211 "mini.y"
                                                          {printf("tipo_salida : especificacion_tipo\n");}
#line 2202 "mini.tab.c"
    break;

  case 87:
#line 212 "mini.y"
                                                          {printf("tipo_salida : NADA\n");}
#line 2208 "mini.tab.c"
    break;

  case 88:
#line 215 "mini.y"
                                                          {printf("cuerpo_funcion : op_declaraciones_constantes\n");}
#line 2214 "mini.tab.c"
    break;

  case 89:
#line 216 "mini.y"
                                                         {printf("cuerpo_funcion : op_declaraciones_variables\n");}
#line 2220 "mini.tab.c"
    break;

  case 90:
#line 217 "mini.y"
                                                             {printf("cuerpo_funcion : declaraciones_funciones\n");}
#line 2226 "mini.tab.c"
    break;

  case 91:
#line 218 "mini.y"
                                                         {printf("cuerpo_funcion : bloque_instrucciones\n");}
#line 2232 "mini.tab.c"
    break;

  case 92:
#line 219 "mini.y"
                                                          {yyerrok;}
#line 2238 "mini.tab.c"
    break;

  case 93:
#line 222 "mini.y"
                                                           {printf("bloque_instrucciones : PRINCIPIO l_instruccion FIN\n");}
#line 2244 "mini.tab.c"
    break;

  case 94:
#line 224 "mini.y"
                                                           {printf("l_instruccion : l_instruccion instruccion \n");}
#line 2250 "mini.tab.c"
    break;

  case 95:
#line 225 "mini.y"
                                                           {printf("l_instruccion : instruccion\n");}
#line 2256 "mini.tab.c"
    break;

  case 96:
#line 232 "mini.y"
                                                            {printf("instruccion : instruccion_expresion\n");}
#line 2262 "mini.tab.c"
    break;

  case 97:
#line 233 "mini.y"
                                                            {printf("instruccion : instruccion_bifurcacion\n");}
#line 2268 "mini.tab.c"
    break;

  case 98:
#line 234 "mini.y"
                                                            {printf("instruccion : instruccion_bucle\n");}
#line 2274 "mini.tab.c"
    break;

  case 99:
#line 235 "mini.y"
                                                            {printf("instruccion : instruccion_salto\n");}
#line 2280 "mini.tab.c"
    break;

  case 100:
#line 236 "mini.y"
                                                            {printf("instruccion : instruccion_destino_salto\n");}
#line 2286 "mini.tab.c"
    break;

  case 101:
#line 237 "mini.y"
                                                            {printf("instruccion : instruccion_devolver\n");}
#line 2292 "mini.tab.c"
    break;

  case 102:
#line 238 "mini.y"
                                                            {printf("instruccion : instruccion_vacia\n");}
#line 2298 "mini.tab.c"
    break;

  case 103:
#line 239 "mini.y"
                                                            {printf("instruccion : instruccion_lanzamiento_excepcion\n");}
#line 2304 "mini.tab.c"
    break;

  case 104:
#line 240 "mini.y"
                                                            {printf("instruccion : instruccion_captura_excepcion\n");}
#line 2310 "mini.tab.c"
    break;

  case 105:
#line 241 "mini.y"
                                                            {yyerrok;}
#line 2316 "mini.tab.c"
    break;

  case 106:
#line 244 "mini.y"
                                                            {printf("instruccion_expresion : expresion_funcional ';'\n");}
#line 2322 "mini.tab.c"
    break;

  case 107:
#line 245 "mini.y"
                                                            {printf("instruccion_expresion : asignacion ';'\n");}
#line 2328 "mini.tab.c"
    break;

  case 108:
#line 248 "mini.y"
                                                                  {printf("asignacion : expresion_indexada operador_asignacion expresion\n");}
#line 2334 "mini.tab.c"
    break;

  case 109:
#line 251 "mini.y"
                                                            {printf("operador_asignacion : '='\n");}
#line 2340 "mini.tab.c"
    break;

  case 110:
#line 252 "mini.y"
                                                            {printf("operador_asignacion : SUMA_ASIG\n");}
#line 2346 "mini.tab.c"
    break;

  case 111:
#line 253 "mini.y"
                                                            {printf("operador_asignacion : RESTA_ASIG\n");}
#line 2352 "mini.tab.c"
    break;

  case 112:
#line 254 "mini.y"
                                                            {printf("operador_asignacion : MULT_ASIG\n");}
#line 2358 "mini.tab.c"
    break;

  case 113:
#line 255 "mini.y"
                                                            {printf("operador_asignacion : DIV_ASIG\n");}
#line 2364 "mini.tab.c"
    break;

  case 114:
#line 256 "mini.y"
                                                            {printf("operador_asignacion : MOD_ASIG\n");}
#line 2370 "mini.tab.c"
    break;

  case 115:
#line 257 "mini.y"
                                                            {printf("operador_asignacion : POT_ASIG\n");}
#line 2376 "mini.tab.c"
    break;

  case 116:
#line 258 "mini.y"
                                                            {printf("operador_asignacion : FI_ASIG\n");}
#line 2382 "mini.tab.c"
    break;

  case 117:
#line 259 "mini.y"
                                                            {printf("operador_asignacion : FD_ASIG\n");}
#line 2388 "mini.tab.c"
    break;

  case 118:
#line 260 "mini.y"
                                                            {printf("operador_asignacion : AND_ASIG\n");}
#line 2394 "mini.tab.c"
    break;

  case 119:
#line 261 "mini.y"
                                                            {printf("operador_asignacion : XOR_ASIG\n");}
#line 2400 "mini.tab.c"
    break;

  case 120:
#line 262 "mini.y"
                                                            {printf("operador_asignacion : OR_ASIG\n");}
#line 2406 "mini.tab.c"
    break;

  case 121:
#line 265 "mini.y"
                                                                                                {printf("instruccion_bifurcacion : SI '(' expresion ')' accion rep_otros_casos op_sino_accion FIN\n");}
#line 2412 "mini.tab.c"
    break;

  case 122:
#line 268 "mini.y"
                                                            {printf("op_sino_accion : SINO accion\n");}
#line 2418 "mini.tab.c"
    break;

  case 124:
#line 272 "mini.y"
                                                            {printf("rep_otros_casos : rep_otros_casos otros_casos\n");}
#line 2424 "mini.tab.c"
    break;

  case 125:
#line 273 "mini.y"
                                                            {printf("rep_otros_casos : \n");}
#line 2430 "mini.tab.c"
    break;

  case 126:
#line 276 "mini.y"
                                                            {printf("otros_casos : SI ENCAMBIO '(' expresion ')' accion\n");}
#line 2436 "mini.tab.c"
    break;

  case 127:
#line 279 "mini.y"
                                                            {printf("accion : instruccion\n");}
#line 2442 "mini.tab.c"
    break;

  case 128:
#line 280 "mini.y"
                                                            {printf("accion : bloque_instrucciones\n");}
#line 2448 "mini.tab.c"
    break;

  case 129:
#line 283 "mini.y"
                                                                              {printf("instruccion_bucle : MIENTRAS '(' expresion ')' accion\n");}
#line 2454 "mini.tab.c"
    break;

  case 130:
#line 284 "mini.y"
                                                                              {printf("instruccion_bucle : HACER accion MIENTRAS '(' expresion ')' ';'\n");}
#line 2460 "mini.tab.c"
    break;

  case 131:
#line 285 "mini.y"
                                                                              {printf("instruccion_bucle : PARA '(' l_asignaciones ';' expresion ';' l_asignaciones ')' accion\n");}
#line 2466 "mini.tab.c"
    break;

  case 132:
#line 286 "mini.y"
                                                                              {printf("instruccion_bucle : PARA CADA IDENTIFICADOR '(' expresion ')' accion\n");}
#line 2472 "mini.tab.c"
    break;

  case 133:
#line 289 "mini.y"
                                                            {printf("l_asignaciones : l_asignaciones ',' asignacion\n");}
#line 2478 "mini.tab.c"
    break;

  case 134:
#line 290 "mini.y"
                                                            {printf("l_asignaciones : asignacion\n");}
#line 2484 "mini.tab.c"
    break;

  case 135:
#line 293 "mini.y"
                                                            {printf("instruccion_salto : SALTAR IDENTIFICADOR ';'\n");}
#line 2490 "mini.tab.c"
    break;

  case 136:
#line 294 "mini.y"
                                                            {printf("instruccion_salto : CONTINUAR ';'\n");}
#line 2496 "mini.tab.c"
    break;

  case 137:
#line 295 "mini.y"
                                                            {printf("instruccion_salto : ESCAPE ';'\n");}
#line 2502 "mini.tab.c"
    break;

  case 138:
#line 298 "mini.y"
                                                            {printf("instruccion_destino_salto : ETIQUETA IDENTIFICADOR ';'\n");}
#line 2508 "mini.tab.c"
    break;

  case 139:
#line 301 "mini.y"
                                                            {printf("instruccion_devolver : DEVOLVER ';'\n");}
#line 2514 "mini.tab.c"
    break;

  case 140:
#line 302 "mini.y"
                                                            {printf("instruccion_devolver : DEVOLVER expresion ';'\n");}
#line 2520 "mini.tab.c"
    break;

  case 141:
#line 305 "mini.y"
                                                            {printf("instruccion_vacia : ';'\n");}
#line 2526 "mini.tab.c"
    break;

  case 142:
#line 308 "mini.y"
                                                                              {printf("instruccion_lanzamiento_excepcion : LANZA EXCEPCION IDENTIFICADOR ';'\n");}
#line 2532 "mini.tab.c"
    break;

  case 143:
#line 311 "mini.y"
                                                                              {printf("instruccion_captura_excepcion : EJECUTA bloque_instrucciones clausulas\n");}
#line 2538 "mini.tab.c"
    break;

  case 144:
#line 314 "mini.y"
                                                                              {printf("clausulas : clausulas_excepcion op_clausula_defecto\n");}
#line 2544 "mini.tab.c"
    break;

  case 145:
#line 315 "mini.y"
                                                                              {printf("clausulas : clausula_defecto\n");}
#line 2550 "mini.tab.c"
    break;

  case 146:
#line 318 "mini.y"
                                                                              {printf("op_clausula_defecto : clausula_defecto\n");}
#line 2556 "mini.tab.c"
    break;

  case 148:
#line 322 "mini.y"
                                                                                                            {printf("clausulas_excepcion : rep_clausula_excepcion_especifica clausula_excepcion_general\n");}
#line 2562 "mini.tab.c"
    break;

  case 149:
#line 325 "mini.y"
                                                                                                            {printf("rep_clausula_excepcion_especifica : rep_clausula_excepcion_especifica clausula_excepcion_especifica\n");}
#line 2568 "mini.tab.c"
    break;

  case 150:
#line 326 "mini.y"
                                                                                                            {printf("rep_clausula_excepcion_especifica : \n");}
#line 2574 "mini.tab.c"
    break;

  case 151:
#line 329 "mini.y"
                                                                                                            {printf("clausula_excepcion_especifica : EXCEPCION IDENTIFICADOR bloque_instrucciones\n");}
#line 2580 "mini.tab.c"
    break;

  case 152:
#line 332 "mini.y"
                                                                                                            {printf("clausula_excepcion_general : OTRA EXCEPCION bloque_instrucciones\n");}
#line 2586 "mini.tab.c"
    break;

  case 153:
#line 335 "mini.y"
                                                                                                            {printf("clausula_defecto : DEFECTO bloque_instrucciones\n");}
#line 2592 "mini.tab.c"
    break;

  case 154:
#line 343 "mini.y"
                                            {printf("agrup_expresion : expresion_constante\n");}
#line 2598 "mini.tab.c"
    break;

  case 155:
#line 344 "mini.y"
                                            {printf("agrup_expresion : expresion_indexada\n");}
#line 2604 "mini.tab.c"
    break;

  case 156:
#line 345 "mini.y"
                                            {printf("agrup_expresion : expresion_funcional\n");}
#line 2610 "mini.tab.c"
    break;

  case 157:
#line 346 "mini.y"
                                            {yyerrok;}
#line 2616 "mini.tab.c"
    break;

  case 158:
#line 349 "mini.y"
                                      {printf("expresion_constante : CTC_ENTERA\n");}
#line 2622 "mini.tab.c"
    break;

  case 159:
#line 350 "mini.y"
                                      {printf("expresion_constante : CTC_REAL\n");}
#line 2628 "mini.tab.c"
    break;

  case 160:
#line 351 "mini.y"
                                      {printf("expresion_constante : CTC_CADENA\n");}
#line 2634 "mini.tab.c"
    break;

  case 161:
#line 352 "mini.y"
                                      {printf("expresion_constante : CTC_CARACTER\n");}
#line 2640 "mini.tab.c"
    break;

  case 162:
#line 355 "mini.y"
                                                      {printf("expresion_indexada : expresion_basica\n");}
#line 2646 "mini.tab.c"
    break;

  case 163:
#line 356 "mini.y"
                                                      {printf("expresion_indexada : expresion_indexada '.' expresion_basica\n");}
#line 2652 "mini.tab.c"
    break;

  case 164:
#line 357 "mini.y"
                                                      {printf("expresion_indexada : expresion_indexada INDIRECCION expresion_basica\n");}
#line 2658 "mini.tab.c"
    break;

  case 165:
#line 358 "mini.y"
                                                      {printf("expresion_indexada : expresion_indexada op_indireccion indice\n");}
#line 2664 "mini.tab.c"
    break;

  case 166:
#line 361 "mini.y"
                                                      {printf("op_indireccion : INDIRECCION\n");}
#line 2670 "mini.tab.c"
    break;

  case 167:
#line 362 "mini.y"
                                                      {printf("op_indireccion : \n");}
#line 2676 "mini.tab.c"
    break;

  case 168:
#line 365 "mini.y"
                                                      {printf("expresion_basica : IDENTIFICADOR\n");}
#line 2682 "mini.tab.c"
    break;

  case 169:
#line 366 "mini.y"
                                                      {printf("expresion_basica : '(' expresion ')'\n");}
#line 2688 "mini.tab.c"
    break;

  case 170:
#line 367 "mini.y"
                                                      {printf("expresion_basica : '^' expresion_basica\n");}
#line 2694 "mini.tab.c"
    break;

  case 171:
#line 368 "mini.y"
                                                      {printf("expresion_basica : '\\' expresion_basica\n");}
#line 2700 "mini.tab.c"
    break;

  case 172:
#line 371 "mini.y"
                                                      {printf("indice : '[' expresion ']'\n");}
#line 2706 "mini.tab.c"
    break;

  case 173:
#line 372 "mini.y"
                                                      {printf("indice : '{' expresion '}'\n");}
#line 2712 "mini.tab.c"
    break;

  case 174:
#line 375 "mini.y"
                                                         {printf("expresion_funcional : IDENTIFICADOR '(' l_expresion ')'\n");}
#line 2718 "mini.tab.c"
    break;

  case 175:
#line 378 "mini.y"
                                                      {printf("l_expresion : l_expr\n");}
#line 2724 "mini.tab.c"
    break;

  case 176:
#line 379 "mini.y"
                                                      {printf("l_expresion : \n");}
#line 2730 "mini.tab.c"
    break;

  case 177:
#line 382 "mini.y"
                                                      {printf("l_expr : l_expr ',' expresion\n");}
#line 2736 "mini.tab.c"
    break;

  case 178:
#line 383 "mini.y"
                                                      {printf("l_expr : expresion\n");}
#line 2742 "mini.tab.c"
    break;

  case 179:
#line 386 "mini.y"
                                                      {printf("expresion : expresion_logica op_exp\n");}
#line 2748 "mini.tab.c"
    break;

  case 180:
#line 389 "mini.y"
                                                      {printf("op_exp : SI expresion SINO expresion\n");}
#line 2754 "mini.tab.c"
    break;

  case 181:
#line 390 "mini.y"
                                                      {printf("op_exp :  \n");}
#line 2760 "mini.tab.c"
    break;

  case 182:
#line 393 "mini.y"
                                                      {printf("expresion_logica :  expresion_logica_or\n");}
#line 2766 "mini.tab.c"
    break;

  case 183:
#line 396 "mini.y"
                                                                            {printf("expresion_logica_or :  expresion_logica_or OR expresion_logica_and\n");}
#line 2772 "mini.tab.c"
    break;

  case 184:
#line 397 "mini.y"
                                                                            {printf("expresion_logica_or :  expresion_logica_and\n");}
#line 2778 "mini.tab.c"
    break;

  case 185:
#line 399 "mini.y"
                                                                            {printf("expresion_logica_and :  expresion_logica_and AND expresion_eq\n");}
#line 2784 "mini.tab.c"
    break;

  case 186:
#line 400 "mini.y"
                                                                            {printf("expresion_logica_and :  expresion_eq\n");}
#line 2790 "mini.tab.c"
    break;

  case 187:
#line 403 "mini.y"
                                                                            {printf("expresion_eq :  expresion_eq EQ expresion_comp\n");}
#line 2796 "mini.tab.c"
    break;

  case 188:
#line 404 "mini.y"
                                                                            {printf("expresion_eq :  expresion_eq NEQ expresion_comp\n");}
#line 2802 "mini.tab.c"
    break;

  case 189:
#line 405 "mini.y"
                                                                            {printf("expresion_eq :  expresion_comp\n");}
#line 2808 "mini.tab.c"
    break;

  case 190:
#line 408 "mini.y"
                                                                            {printf("expresion_comp :  expresion_comp '<' expresion_bin_or\n");}
#line 2814 "mini.tab.c"
    break;

  case 191:
#line 409 "mini.y"
                                                                            {printf("expresion_comp :  expresion_comp '>' expresion_bin_or\n");}
#line 2820 "mini.tab.c"
    break;

  case 192:
#line 410 "mini.y"
                                                                            {printf("expresion_comp :  expresion_comp LE expresion_bin_or\n");}
#line 2826 "mini.tab.c"
    break;

  case 193:
#line 411 "mini.y"
                                                                            {printf("expresion_comp :  expresion_comp GE expresion_bin_or\n");}
#line 2832 "mini.tab.c"
    break;

  case 194:
#line 412 "mini.y"
                                                                            {printf("expresion_comp :  expresion_bin_or\n");}
#line 2838 "mini.tab.c"
    break;

  case 195:
#line 415 "mini.y"
                                                                            {printf("expresion_bin_or :  expresion_bin_or '|' expresion_bin_xor\n");}
#line 2844 "mini.tab.c"
    break;

  case 196:
#line 416 "mini.y"
                                                                            {printf("expresion_bin_or :  expresion_bin_xor\n");}
#line 2850 "mini.tab.c"
    break;

  case 197:
#line 419 "mini.y"
                                                                            {printf("expresion_bin_xor :  expresion_bin_xor '@' expresion_bin_and\n");}
#line 2856 "mini.tab.c"
    break;

  case 198:
#line 420 "mini.y"
                                                                            {printf("expresion_bin_xor :  expresion_bin_and\n");}
#line 2862 "mini.tab.c"
    break;

  case 199:
#line 423 "mini.y"
                                                                            {printf("expresion_bin_and :  expresion_bin_and '&' expresion_desp\n");}
#line 2868 "mini.tab.c"
    break;

  case 200:
#line 424 "mini.y"
                                                                            {printf("expresion_bin_and :  expresion_desp\n");}
#line 2874 "mini.tab.c"
    break;

  case 201:
#line 427 "mini.y"
                                                                            {printf("expresion_desp :  expresion_desp FLECHA_DCHA expresion_aditiva\n");}
#line 2880 "mini.tab.c"
    break;

  case 202:
#line 428 "mini.y"
                                                                            {printf("expresion_desp :  expresion_desp FLECHA_IZDA expresion_aditiva\n");}
#line 2886 "mini.tab.c"
    break;

  case 203:
#line 429 "mini.y"
                                                                            {printf("expresion_desp :  expresion_aditiva\n");}
#line 2892 "mini.tab.c"
    break;

  case 204:
#line 432 "mini.y"
                                                                      {printf("expresion_aditiva : expresion_aditiva '+' expresion_multiplicativa");}
#line 2898 "mini.tab.c"
    break;

  case 205:
#line 433 "mini.y"
                                                                      {printf("expresion_aditiva :  expresion_aditiva '-' expresion_multiplicativa\n");}
#line 2904 "mini.tab.c"
    break;

  case 206:
#line 434 "mini.y"
                                                                      {printf("expresion_aditiva :  expresion_multiplicativa\n");}
#line 2910 "mini.tab.c"
    break;

  case 207:
#line 437 "mini.y"
                                                                                    {printf("expresion_multiplicativa :  expresion_multiplicativa '*' expresion_potencia\n");}
#line 2916 "mini.tab.c"
    break;

  case 208:
#line 438 "mini.y"
                                                                                    {printf("expresion_multiplicativa :  expresion_multiplicativa '/' expresion_potencia\n");}
#line 2922 "mini.tab.c"
    break;

  case 209:
#line 439 "mini.y"
                                                                                    {printf("expresion_multiplicativa :  expresion_multiplicativa '%' expresion_potencia\n");}
#line 2928 "mini.tab.c"
    break;

  case 210:
#line 440 "mini.y"
                                                                                    {printf("expresion_multiplicativa :  expresion_potencia\n");}
#line 2934 "mini.tab.c"
    break;

  case 211:
#line 443 "mini.y"
                                                                                    {printf("expresion_potencia :  expresion_noassoc POTENCIA expresion_potencia\n");}
#line 2940 "mini.tab.c"
    break;

  case 212:
#line 444 "mini.y"
                                                                                    {printf("expresion_potencia :  expresion_noassoc\n");}
#line 2946 "mini.tab.c"
    break;

  case 213:
#line 447 "mini.y"
                                                                                    {printf("expresion_noassoc :  '-' agrup_expresion\n");}
#line 2952 "mini.tab.c"
    break;

  case 214:
#line 448 "mini.y"
                                                                                    {printf("expresion_noassoc :  '~' agrup_expresion\n");}
#line 2958 "mini.tab.c"
    break;

  case 215:
#line 449 "mini.y"
                                                                                    {printf("expresion_noassoc :  '!' agrup_expresion\n");}
#line 2964 "mini.tab.c"
    break;

  case 216:
#line 450 "mini.y"
                                                                                    {printf("expresion_noassoc :  TAMANO agrup_expresion\n");}
#line 2970 "mini.tab.c"
    break;

  case 217:
#line 451 "mini.y"
                                                                                    {printf("expresion_noassoc :  agrup_expresion\n");}
#line 2976 "mini.tab.c"
    break;


#line 2980 "mini.tab.c"

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
#line 454 "mini.y"


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
