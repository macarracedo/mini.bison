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
#line 2 "mini.y"

  
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
#line 14 "mini.y"

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
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

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
       2,     2,     2,    91,     2,     2,     2,     2,    83,     2,
      73,    74,     2,    86,    71,    89,    78,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    70,
      88,    72,    87,     2,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,    80,    82,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    85,    76,    90,     2,     2,     2,
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
       0,    38,    38,    42,    45,    46,    49,    50,    54,    55,
      56,    57,    54,    59,    66,    67,    70,    71,    74,    77,
      80,    81,    84,    85,    86,    87,    91,    92,    93,    94,
      95,    96,    99,   100,   101,   105,   106,   107,   108,   111,
     114,   115,   123,   126,   127,   130,   133,   134,   135,   136,
     137,   138,   141,   142,   145,   146,   148,   149,   152,   153,
     155,   156,   159,   162,   164,   165,   168,   177,   179,   180,
     183,   184,   187,   188,   191,   192,   202,   203,   206,   208,
     209,   212,   213,   216,   217,   220,   221,   224,   225,   228,
     229,   230,   231,   234,   235,   238,   239,   242,   243,   246,
     248,   249,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   266,   267,   270,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   287,   288,   291,   292,
     296,   299,   300,   303,   304,   305,   306,   309,   310,   313,
     314,   315,   318,   321,   322,   325,   328,   331,   334,   335,
     339,   342,   343,   346,   349,   352,   359,   360,   361,   362,
     365,   366,   367,   368,   369,   372,   373,   374,   375,   378,
     379,   382,   383,   385,   386,   389,   390,   421,   424,   425,
     428
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
  "')'", "'{'", "'}'", "':'", "'.'", "'^'", "'\\\\'", "'['", "']'", "'&'",
  "'@'", "'|'", "'+'", "'>'", "'<'", "'-'", "'~'", "'!'", "$accept",
  "programa", "inicio_programa", "l_cabecera", "l_rutas",
  "bloque_programa", "$@1", "$@2", "$@3", "$@4", "declaraciones_tipos",
  "l_decl_tipo", "declaracion_tipo", "especificacion_tipo", "l_ref",
  "tipo_basico", "tipo_escalar", "tipo_enumerado", "tipo_estructurado",
  "linea_campo", "l_campo", "declaraciones_constantes",
  "l_declaraciones_constantes", "declaracion_constante", "constante",
  "constante_enumerada", "l_constante", "rep_constante", "l_elemento_hash",
  "rep_elemento_hash", "elemento_hash", "constante_estructurada",
  "l_campo_constante", "campo_constante", "declaraciones_variables",
  "l_declaracion", "declaracion_variables", "l_expr", "l_ident",
  "declaracion_funcion", "lista_parametros", "l_parametros", "parametros",
  "rep_ident", "l_expr_constante", "tipo_salida", "cuerpo_funcion",
  "l_declaraciones_variables", "rep_declaracion_funcion",
  "bloque_instrucciones", "l_instruccion", "instruccion",
  "instruccion_expresion", "asignacion", "operador_asignacion",
  "instruccion_bifurcacion", "l_otros_casos", "otros_casos", "accion",
  "instruccion_bucle", "l_asignaciones", "instruccion_salto",
  "instruccion_destino_salto", "instruccion_devolver", "instruccion_vacia",
  "instruccion_lanzamiento_excepcion", "instruccion_captura_excepcion",
  "clausulas", "clausulas_excepcion", "l_clausula_excepcion_especifica",
  "clausula_excepcion_especifica", "clausula_excepcion_general",
  "clausula_defecto", "expresion_constante", "expresion_indexada",
  "expresion_basica", "indice", "expresion_funcional", "l_expresion",
  "l_expresiones", "expresion", "op_exp", "expresion_logica", YY_NULLPTR
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
      92,    91,    93,    38,    64,   124,    43,    62,    60,    45,
     126,    33
};
# endif

#define YYPACT_NINF (-204)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-175)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -38,   -11,    38,     5,    10,  -204,  -204,    61,  -204,  -204,
    -204,    66,    87,  -204,   100,   112,  -204,  -204,  -204,    23,
    -204,    84,    71,   237,   123,  -204,    93,  -204,    82,  -204,
     -15,  -204,   137,  -204,  -204,   145,  -204,   109,  -204,  -204,
     147,  -204,  -204,  -204,   113,  -204,  -204,  -204,  -204,   249,
    -204,  -204,   126,  -204,  -204,   111,  -204,  -204,    -8,  -204,
      -8,   101,  -204,   103,  -204,   -41,   136,  -204,  -204,  -204,
    -204,   140,   141,   -18,  -204,   140,   142,     8,  -204,  -204,
     154,  -204,   156,  -204,   146,  -204,  -204,   161,   150,  -204,
    -204,  -204,  -204,  -204,    12,   167,   117,  -204,  -204,  -204,
      -6,   -19,   128,  -204,   139,  -204,  -204,   182,  -204,   143,
     151,   144,   153,  -204,   149,   -34,  -204,  -204,  -204,  -204,
     169,  -204,   184,   171,  -204,  -204,     8,  -204,     8,  -204,
     213,     8,   167,  -204,    54,  -204,   165,  -204,  -204,    20,
     189,   169,   160,   164,   128,   166,   195,    95,   170,   210,
     175,     2,   200,   176,  -204,  -204,   -22,   -22,   158,  -204,
    -204,   183,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
      31,  -204,   185,  -204,  -204,   182,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,   212,  -204,  -204,  -204,   136,  -204,  -204,
     -60,    27,    20,  -204,  -204,   186,  -204,  -204,   191,  -204,
    -204,   218,   193,   223,  -204,   225,   -22,   198,  -204,   196,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
      80,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     -22,  -204,  -204,  -204,  -204,  -204,   206,  -204,  -204,  -204,
     233,  -204,  -204,  -204,  -204,   256,   -17,  -204,   207,   205,
     211,  -204,   214,   216,   208,  -204,    81,  -204,   217,  -204,
    -204,  -204,   209,  -204,   204,  -204,  -204,  -204,   220,   128,
    -204,   248,   264,  -204,  -204,  -204,  -204,  -204,  -204,    95,
    -204,  -204,   -22,    95,  -204,  -204,  -204,   190,  -204,   128,
     128,   222,  -204,  -204,   224,   227,  -204,  -204,  -204,  -204,
    -204,  -204,   228,  -204,  -204,  -204,   230,    95,   -22,    51,
     190,  -204,  -204,    28,  -204,   279,    95,  -204,  -204,    95,
     229,   268,  -204,  -204,  -204,   231,    95,  -204
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,    13,     0,     2,     8,
       5,     0,     0,    17,     0,     3,    21,    14,    16,    94,
       9,     0,     0,     0,     0,    93,     0,    44,     0,     7,
       0,    18,     0,    29,    28,     0,    26,     0,    31,    30,
       0,    22,    27,    20,     0,    19,    23,    24,    25,     0,
      42,    43,     0,    10,     4,     0,    21,    21,     0,    21,
       0,     0,    75,     0,    69,     0,     0,     6,    32,    34,
      41,     0,     0,     0,    33,     0,     0,     0,    67,    68,
       0,    21,     0,    11,     0,    36,    21,     0,     0,    38,
      49,    48,    46,    47,    55,     0,     0,    50,    51,    74,
       0,     0,     0,    35,     0,    40,    37,    49,    57,     0,
      54,     0,    58,    61,     0,     0,    65,    45,    70,   180,
      21,    80,     0,     0,    12,    39,     0,    52,     0,    53,
       0,     0,     0,    63,     0,    73,   179,    88,    87,    94,
       0,    21,     0,   180,     0,     0,     0,     0,   165,     0,
       0,     0,     0,     0,   145,   180,     0,     0,     0,   101,
     102,     0,   103,   104,   105,   106,   107,   108,   109,   110,
       0,   160,     0,    62,    56,     0,    60,    66,    64,    71,
     180,   180,   177,    89,    95,    76,    90,    91,    92,    84,
       0,     0,    94,   140,   143,     0,   152,   141,     0,   132,
     131,     0,   180,     0,   180,     0,     0,     0,   180,     0,
     165,   167,   168,    99,   100,   112,   123,   118,   122,   121,
       0,   119,   117,   125,   120,   116,   115,   124,   114,   180,
       0,   180,   180,   163,   111,    72,     0,    97,    79,    78,
       0,    21,    77,   144,   147,   148,     0,   142,     0,     0,
     173,   176,     0,     0,     0,   138,     0,   139,     0,   166,
     162,   164,     0,   161,     0,   113,   180,    83,    81,     0,
     149,     0,     0,   151,   150,   180,   171,   180,   146,     0,
     180,   180,     0,     0,   170,   169,   178,     0,   155,     0,
       0,     0,   175,   133,     0,     0,   137,   129,   158,   159,
     156,   157,    82,    86,   153,   154,     0,     0,     0,     0,
       0,   134,   136,     0,   126,     0,     0,   128,    85,     0,
       0,     0,   135,   180,   127,     0,     0,   130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,   295,   -16,  -204,   259,  -204,  -204,    50,    59,
    -204,   296,   290,   -25,   -79,  -204,  -204,  -204,  -204,  -204,
     181,  -204,  -204,   180,   285,  -204,   251,  -204,  -204,   130,
    -204,  -204,  -204,  -204,  -204,   174,   127,  -204,  -204,  -100,
    -204,  -110,  -204,  -203,  -204,  -204,  -204,  -204,  -190,  -204,
      13,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
    -204,  -204,  -204,    14,  -204,  -152,    98,  -204,  -204,  -204,
    -135,  -204,  -204
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    15,    30,     8,    14,    28,    66,   102,
       9,    12,    13,   138,    23,    45,    46,    47,    48,    72,
      73,    25,   183,    27,    96,    97,   109,   110,   111,   112,
     113,    98,   115,   116,   184,    63,    64,   134,    65,    83,
     122,   140,   190,   191,   302,   139,   185,   186,   187,   199,
     158,   200,   160,   161,   232,   162,   309,   317,   201,   163,
     256,   164,   165,   166,   167,   168,   169,   244,   245,   246,
     273,   274,   270,   303,   170,   171,   233,   172,   249,   250,
     135,   182,   136
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    51,   124,   255,   211,   212,     6,    86,   195,   205,
     238,   120,   271,   159,   239,   108,   -15,     1,   210,    37,
     209,    90,    91,    92,    93,   107,    91,    92,    93,     4,
      80,    19,    70,   272,    19,   216,    81,   132,     5,   188,
      68,    69,   133,    74,   196,   235,   236,   173,   214,   174,
     217,   155,   177,    87,   121,    54,    55,   156,   157,    44,
      24,   218,   219,    24,   118,   100,   119,   251,   260,   253,
     104,     7,   220,   258,   123,   206,   221,   222,   263,   296,
      10,    94,   223,    95,   224,    94,   314,    95,    52,   293,
     225,    16,   188,   297,   262,   226,   264,   265,   240,   282,
     227,    11,   319,   228,   241,   255,   229,   142,    71,   230,
      75,    19,   231,   315,   316,   143,   144,   312,    21,    76,
     210,   145,    17,   146,   179,   180,   321,    11,    50,   322,
      84,   286,   147,    24,    88,   148,   327,   149,    78,   150,
     291,    31,   292,    62,    29,   294,   295,   151,    49,   123,
      52,   281,   282,   155,    56,   229,   152,   153,    51,   156,
     157,   231,    57,    58,    59,   154,    62,    60,   155,   288,
     142,    67,    82,    77,   156,   157,    85,    89,   143,   144,
      70,   103,   123,   142,   145,   106,   146,   117,   325,   304,
     305,   143,   144,   213,    99,   147,   101,   145,   148,   146,
     149,   105,   150,   298,   299,   300,   301,   114,   147,   125,
     151,   148,   126,   149,   141,   150,   137,   127,   129,   152,
     153,   131,   128,   151,   130,   268,   175,   181,   154,   189,
     193,   155,   152,   153,   194,   198,   197,   156,   157,   203,
     207,   154,    32,   202,   155,    33,    34,    35,   204,   208,
     156,   157,    24,   215,    32,   234,   243,    33,    34,    35,
      36,   247,   248,   252,    37,   254,    38,  -174,   257,   266,
     259,    39,    36,   267,   269,    40,    37,    41,    38,   276,
     275,   280,   277,    39,   278,   284,   285,    40,   289,    41,
     279,   283,   287,   290,    42,    43,   306,   308,   307,   310,
     311,   320,   323,   324,    44,   326,    42,    18,    61,    26,
      20,   176,   178,    53,    79,   192,    44,   237,   261,   242,
       0,   313,     0,     0,   318
};

static const yytype_int16 yycheck[] =
{
      16,    26,   102,   206,   156,   157,     1,    25,   143,     7,
      70,    30,    29,   123,    74,    94,    11,    55,    40,    27,
     155,    13,    14,    15,    16,    13,    14,    15,    16,    40,
      71,    11,    40,    50,    11,     4,    77,    71,     0,   139,
      56,    57,    76,    59,   144,   180,   181,   126,   158,   128,
      19,    73,   131,    71,    73,    70,    71,    79,    80,    67,
      40,    30,    31,    40,    70,    81,    72,   202,   220,   204,
      86,    66,    41,   208,    54,    73,    45,    46,   230,   282,
      70,    73,    51,    75,    53,    73,    35,    75,    68,   279,
      59,    25,   192,   283,   229,    64,   231,   232,    71,    71,
      69,    40,    74,    72,    77,   308,    75,    12,    58,    78,
      60,    11,    81,    62,    63,    20,    21,   307,     6,    60,
      40,    26,    35,    28,    70,    71,   316,    40,    35,   319,
      71,   266,    37,    40,    75,    40,   326,    42,    35,    44,
     275,    70,   277,    40,    60,   280,   281,    52,    25,    54,
      68,    70,    71,    73,    17,    75,    61,    62,   183,    79,
      80,    81,    17,    54,    17,    70,    40,    54,    73,   269,
      12,    60,    36,    72,    79,    80,    35,    35,    20,    21,
      40,    35,    54,    12,    26,    35,    28,    70,   323,   289,
     290,    20,    21,    35,    40,    37,    40,    26,    40,    28,
      42,    40,    44,    13,    14,    15,    16,    40,    37,    70,
      52,    40,    30,    42,    30,    44,    47,    74,    74,    61,
      62,    72,    71,    52,    71,   241,    13,    62,    70,    40,
      70,    73,    61,    62,    70,    40,    70,    79,    80,    29,
      40,    70,     5,    73,    73,     8,     9,    10,    73,    73,
      79,    80,    40,    70,     5,    70,    70,     8,     9,    10,
      23,    70,    44,    40,    27,    40,    29,    74,    70,    63,
      74,    34,    23,    40,    18,    38,    27,    40,    29,    74,
      73,    73,    71,    34,    70,    76,    82,    38,    40,    40,
      74,    74,    72,    29,    57,    58,    74,    70,    74,    71,
      70,    22,    73,    35,    67,    74,    57,    12,    49,    19,
      14,   130,   132,    28,    63,   141,    67,   187,   220,   192,
      -1,   308,    -1,    -1,   310
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    93,    94,    40,     0,     1,    66,    97,   102,
      70,    40,   103,   104,    98,    95,    25,    35,   104,    11,
     113,     6,   105,   106,    40,   113,   114,   115,    99,    60,
      96,    70,     5,     8,     9,    10,    23,    27,    29,    34,
      38,    40,    57,    58,    67,   107,   108,   109,   110,    25,
      35,   115,    68,   126,    70,    71,    17,    17,    54,    17,
      54,   107,    40,   127,   128,   130,   100,    60,   105,   105,
      40,   110,   111,   112,   105,   110,   111,    72,    35,   128,
      71,    77,    36,   131,   111,    35,    25,    71,   111,    35,
      13,    14,    15,    16,    73,    75,   116,   117,   123,    40,
     105,    40,   101,    35,   105,    40,    35,    13,   116,   118,
     119,   120,   121,   122,    40,   124,   125,    70,    70,    72,
      30,    73,   132,    54,   141,    70,    30,    74,    71,    74,
      71,    72,    71,    76,   129,   172,   174,    47,   105,   137,
     133,    30,    12,    20,    21,    26,    28,    37,    40,    42,
      44,    52,    61,    62,    70,    73,    79,    80,   142,   143,
     144,   145,   147,   151,   153,   154,   155,   156,   157,   158,
     166,   167,   169,   116,   116,    13,   122,   116,   125,    70,
      71,    62,   173,   114,   126,   138,   139,   140,   141,    40,
     134,   135,   137,    70,    70,   172,   141,    70,    40,   141,
     143,   150,    73,    29,    73,     7,    73,    40,    73,   172,
      40,   167,   167,    35,   143,    70,     4,    19,    30,    31,
      41,    45,    46,    51,    53,    59,    64,    69,    72,    75,
      78,    81,   146,   168,    70,   172,   172,   131,    70,    74,
      71,    77,   138,    70,   159,   160,   161,    70,    44,   170,
     171,   172,    40,   172,    40,   145,   152,    70,   172,    74,
     167,   168,   172,   167,   172,   172,    63,    40,   105,    18,
     164,    29,    50,   162,   163,    73,    74,    71,    70,    74,
      73,    70,    71,    74,    76,    82,   172,    72,   141,    40,
      29,   172,   172,   150,   172,   172,   145,   150,    13,    14,
      15,    16,   136,   165,   141,   141,    74,    74,    70,   148,
      71,    70,   150,   152,    35,    62,    63,   149,   165,    74,
      22,   150,   150,    73,    35,   172,    74,   150
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    94,    95,    95,    96,    96,    98,    99,
     100,   101,    97,    97,   102,   102,   103,   103,   104,   105,
     106,   106,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   109,   109,   109,   110,   110,   110,   110,   111,
     112,   112,   113,   114,   114,   115,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   123,   124,   124,   125,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   138,   138,   114,   114,   139,   139,   140,   140,   141,
     142,   142,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   144,   144,   145,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   147,   147,   148,   148,
     149,   150,   150,   151,   151,   151,   151,   152,   152,   153,
     153,   153,   154,   155,   155,   156,   157,   158,   159,   159,
     160,   161,   161,   162,   163,   164,   165,   165,   165,   165,
     166,   166,   166,   166,   166,   167,   167,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   173,   173,
     174
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     4,     0,     3,     1,     0,     0,
       0,     0,     9,     1,     3,     0,     2,     1,     4,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     5,     4,     5,     4,     4,
       3,     1,     3,     2,     1,     6,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     0,     3,     1,     1,     0,
       3,     1,     3,     3,     3,     1,     3,     3,     2,     1,
       4,     6,     3,     1,     3,     1,     5,     6,     4,     3,
       0,     3,     5,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     2,     0,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     7,     9,     2,     0,
       6,     1,     1,     5,     7,     9,     7,     3,     1,     3,
       2,     2,     3,     2,     3,     1,     4,     3,     1,     2,
       2,     2,     0,     3,     3,     2,     1,     1,     1,     1,
       1,     3,     3,     2,     3,     1,     3,     2,     2,     3,
       3,     4,     0,     1,     0,     3,     1,     2,     4,     0,
       0
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
#line 38 "mini.y"
                                                          {printf("programa --> inicio_programa bloque_programa\n");}
#line 1653 "mini.tab.c"
    break;

  case 3:
#line 42 "mini.y"
                                                          {printf("inicio_programa --> PROGRAMA IDENTIFICADOR ; librerias\n");}
#line 1659 "mini.tab.c"
    break;

  case 4:
#line 45 "mini.y"
                                                          {printf("l_cabecera --> l_cabecera CABECERA l_rutas \n");}
#line 1665 "mini.tab.c"
    break;

  case 5:
#line 46 "mini.y"
                                                          {printf("l_cabecera --> \n");}
#line 1671 "mini.tab.c"
    break;

  case 6:
#line 49 "mini.y"
                                                          {printf("l_rutas --> l_rutas RUTA\n");}
#line 1677 "mini.tab.c"
    break;

  case 7:
#line 50 "mini.y"
                                                          {printf("l_rutas --> RUTA\n");}
#line 1683 "mini.tab.c"
    break;

  case 8:
#line 54 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1689 "mini.tab.c"
    break;

  case 9:
#line 55 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1695 "mini.tab.c"
    break;

  case 10:
#line 56 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1701 "mini.tab.c"
    break;

  case 11:
#line 57 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1707 "mini.tab.c"
    break;

  case 12:
#line 58 "mini.y"
                                                          {printf("bloque_programa --> \n");}
#line 1713 "mini.tab.c"
    break;

  case 13:
#line 59 "mini.y"
                                                          {yyerror;}
#line 1719 "mini.tab.c"
    break;

  case 14:
#line 66 "mini.y"
                                                          {printf("declaraciones_tipos --> TIPOS l_decl_tipo FIN\n");}
#line 1725 "mini.tab.c"
    break;

  case 15:
#line 67 "mini.y"
                                                          {printf("declaraciones_tipos --> TIPOS l_decl_tipo FIN\n");}
#line 1731 "mini.tab.c"
    break;

  case 16:
#line 70 "mini.y"
                                                          {printf("l_decl_tipo --> l_decl_tipo declaracion_tipo\n");}
#line 1737 "mini.tab.c"
    break;

  case 17:
#line 71 "mini.y"
                                                          {printf("l_decl_tipo --> declaracion_tipo\n");}
#line 1743 "mini.tab.c"
    break;

  case 18:
#line 74 "mini.y"
                                                            {printf("declaracion_tipo --> TIPOS l_decl_tipo FIN\n");}
#line 1749 "mini.tab.c"
    break;

  case 19:
#line 77 "mini.y"
                                                          {printf("especificacion_tipo --> TIPOS l_decl_tipo FIN\n");}
#line 1755 "mini.tab.c"
    break;

  case 20:
#line 80 "mini.y"
                                                          {printf("l_ref --> l_ref REF\n");}
#line 1761 "mini.tab.c"
    break;

  case 21:
#line 81 "mini.y"
                                                          {printf("l_ref --> \n");}
#line 1767 "mini.tab.c"
    break;

  case 22:
#line 84 "mini.y"
                                                          {printf("tipo_basico --> IDENTIFICADOR\n");}
#line 1773 "mini.tab.c"
    break;

  case 23:
#line 85 "mini.y"
                                                          {printf("tipo_basico --> tipo_escalar\n");}
#line 1779 "mini.tab.c"
    break;

  case 24:
#line 86 "mini.y"
                                                          {printf("tipo_basico --> tipo_enumerado\n");}
#line 1785 "mini.tab.c"
    break;

  case 25:
#line 87 "mini.y"
                                                          {printf("tipo_basico --> tipo_estructurado\n");}
#line 1791 "mini.tab.c"
    break;

  case 26:
#line 91 "mini.y"
                                                          {printf("tipo_escalar --> ENTERO\n");}
#line 1797 "mini.tab.c"
    break;

  case 27:
#line 92 "mini.y"
                                                          {printf("tipo_escalar --> REAL\n");}
#line 1803 "mini.tab.c"
    break;

  case 28:
#line 93 "mini.y"
                                                          {printf("tipo_escalar --> CARACTER\n");}
#line 1809 "mini.tab.c"
    break;

  case 29:
#line 94 "mini.y"
                                                          {printf("tipo_escalar --> CADENA\n");}
#line 1815 "mini.tab.c"
    break;

  case 30:
#line 95 "mini.y"
                                                          {printf("tipo_escalar --> FICHERO\n");}
#line 1821 "mini.tab.c"
    break;

  case 31:
#line 96 "mini.y"
                                                          {printf("tipo_escalar --> EXCEPCION\n");}
#line 1827 "mini.tab.c"
    break;

  case 32:
#line 99 "mini.y"
                                                          {printf("tipo_enumerado --> ARRAY DE especificacion_tipo\n");}
#line 1833 "mini.tab.c"
    break;

  case 33:
#line 100 "mini.y"
                                                          {printf("tipo_enumerado --> HASH DE especificacion_tipo\n");}
#line 1839 "mini.tab.c"
    break;

  case 34:
#line 101 "mini.y"
                                                          {printf("tipo_enumerado --> CONJUNTO DE especificacion_tipo\n");}
#line 1845 "mini.tab.c"
    break;

  case 35:
#line 105 "mini.y"
                                                                             {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO tipo_estructurado linea_campo FIN\n");}
#line 1851 "mini.tab.c"
    break;

  case 36:
#line 106 "mini.y"
                                                                             {printf("tipo_estructurado --> ESTRUCTURA PRINCIPIO linea_campo FIN\n");}
#line 1857 "mini.tab.c"
    break;

  case 37:
#line 107 "mini.y"
                                                                             {printf("tipo_estructurado --> UNION PRINCIPIO tipo_estructurado linea_campo FIN\n");}
#line 1863 "mini.tab.c"
    break;

  case 38:
#line 108 "mini.y"
                                                                             {printf("tipo_estructurado --> UNION PRINCIPIO linea_campos FIN\n");}
#line 1869 "mini.tab.c"
    break;

  case 39:
#line 111 "mini.y"
                                                          {printf("linea_campo --> EXCEPCION\n");}
#line 1875 "mini.tab.c"
    break;

  case 40:
#line 114 "mini.y"
                                                          {printf("l_campo --> l_campo ',' IDENTIFICADOR\n");}
#line 1881 "mini.tab.c"
    break;

  case 41:
#line 115 "mini.y"
                                                          {printf("l_campo --> EXCEPCION\n");}
#line 1887 "mini.tab.c"
    break;


#line 1891 "mini.tab.c"

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
#line 432 "mini.y"


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