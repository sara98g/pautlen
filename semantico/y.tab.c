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
#line 1 "omicron.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "omicron.h"
  #include "generacion.h"
  #include "estructuras.h"

  extern int yylex();
  extern int yyleng;
  extern tablaSimbolosAmbitos *tsa;

  extern FILE* yyin;
  extern FILE* salida;
  extern int columna;
  extern int line;
  void yyerror( char *s);

  int clase_actual, tipo_actual, tamanio_actual;
  int etiqueta_global = 0;


#line 89 "y.tab.c" /* yacc.c:339  */

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
    TOK_IDENTIFICADOR = 258,
    TOK_CONSTANTE_ENTERA = 259,
    TOK_NONE = 260,
    TOK_CLASS = 261,
    TOK_INHERITS = 262,
    TOK_INSTANCE_OF = 263,
    TOK_DISCARD = 264,
    TOK_ITSELF = 265,
    TOK_FLECHA = 266,
    TOK_HIDDEN = 267,
    TOK_SECRET = 268,
    TOK_EXPOSED = 269,
    TOK_UNIQUE = 270,
    TOK_FUNCTION = 271,
    TOK_RETURN = 272,
    TOK_MAIN = 273,
    TOK_INT = 274,
    TOK_BOOLEAN = 275,
    TOK_ARRAY = 276,
    TOK_IF = 277,
    TOK_ELSE = 278,
    TOK_WHILE = 279,
    TOK_SCANF = 280,
    TOK_PRINTF = 281,
    TOK_IGUAL = 282,
    TOK_DISTINTO = 283,
    TOK_MENORIGUAL = 284,
    TOK_MAYORIGUAL = 285,
    TOK_OR = 286,
    TOK_AND = 287,
    TOK_FALSE = 288,
    TOK_TRUE = 289,
    TOK_ERROR = 290,
    TOK_FOR = 291,
    TOK_SWITCH = 292,
    TOK_CASE = 293,
    TOK_DEFAULT = 294,
    TOK_FLOAT = 295,
    TOK_MALLOC = 296,
    TOK_CPRINTF = 297,
    TOK_FREE = 298,
    TOK_SET = 299,
    TOK_OF = 300,
    TOK_UNION = 301,
    TOK_INTERSECTION = 302,
    TOK_ADD = 303,
    TOK_CLEAR = 304,
    TOK_SIZE = 305,
    TOK_CONTAINS = 306,
    TOK_CONSTANTE_REAL = 307,
    NEG = 308
  };
#endif
/* Tokens.  */
#define TOK_IDENTIFICADOR 258
#define TOK_CONSTANTE_ENTERA 259
#define TOK_NONE 260
#define TOK_CLASS 261
#define TOK_INHERITS 262
#define TOK_INSTANCE_OF 263
#define TOK_DISCARD 264
#define TOK_ITSELF 265
#define TOK_FLECHA 266
#define TOK_HIDDEN 267
#define TOK_SECRET 268
#define TOK_EXPOSED 269
#define TOK_UNIQUE 270
#define TOK_FUNCTION 271
#define TOK_RETURN 272
#define TOK_MAIN 273
#define TOK_INT 274
#define TOK_BOOLEAN 275
#define TOK_ARRAY 276
#define TOK_IF 277
#define TOK_ELSE 278
#define TOK_WHILE 279
#define TOK_SCANF 280
#define TOK_PRINTF 281
#define TOK_IGUAL 282
#define TOK_DISTINTO 283
#define TOK_MENORIGUAL 284
#define TOK_MAYORIGUAL 285
#define TOK_OR 286
#define TOK_AND 287
#define TOK_FALSE 288
#define TOK_TRUE 289
#define TOK_ERROR 290
#define TOK_FOR 291
#define TOK_SWITCH 292
#define TOK_CASE 293
#define TOK_DEFAULT 294
#define TOK_FLOAT 295
#define TOK_MALLOC 296
#define TOK_CPRINTF 297
#define TOK_FREE 298
#define TOK_SET 299
#define TOK_OF 300
#define TOK_UNION 301
#define TOK_INTERSECTION 302
#define TOK_ADD 303
#define TOK_CLEAR 304
#define TOK_SIZE 305
#define TOK_CONTAINS 306
#define TOK_CONSTANTE_REAL 307
#define NEG 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "omicron.y" /* yacc.c:355  */

        tipo_atributo atributos;
  

#line 240 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 257 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  225

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,     2,     2,     2,     2,     2,
      65,    66,    55,    53,    64,    54,    67,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    61,
      69,    68,    70,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   103,   108,   115,   138,   142,   145,   146,
     149,   150,   153,   154,   155,   156,   157,   158,   159,   160,
     163,   164,   165,   168,   169,   172,   177,   180,   181,   184,
     187,   193,   197,   199,   203,   204,   207,   252,   253,   254,
     257,   258,   261,   262,   265,   266,   269,   270,   273,   274,
     277,   278,   281,   282,   283,   284,   285,   286,   287,   290,
     293,   297,   300,   311,   312,   313,   314,   317,   322,   326,
     328,   331,   335,   346,   351,   359,   363,   366,   369,   375,
     376,   378,   390,   401,   412,   424,   426,   441,   455,   469,
     478,   483,   484,   489,   490,   491,   492,   503,   504,   507,
     508,   511,   512,   515,   529,   542,   557,   573,   589,   607,
     611,   616,   624,   633,   644
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENTIFICADOR",
  "TOK_CONSTANTE_ENTERA", "TOK_NONE", "TOK_CLASS", "TOK_INHERITS",
  "TOK_INSTANCE_OF", "TOK_DISCARD", "TOK_ITSELF", "TOK_FLECHA",
  "TOK_HIDDEN", "TOK_SECRET", "TOK_EXPOSED", "TOK_UNIQUE", "TOK_FUNCTION",
  "TOK_RETURN", "TOK_MAIN", "TOK_INT", "TOK_BOOLEAN", "TOK_ARRAY",
  "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_SCANF", "TOK_PRINTF",
  "TOK_IGUAL", "TOK_DISTINTO", "TOK_MENORIGUAL", "TOK_MAYORIGUAL",
  "TOK_OR", "TOK_AND", "TOK_FALSE", "TOK_TRUE", "TOK_ERROR", "TOK_FOR",
  "TOK_SWITCH", "TOK_CASE", "TOK_DEFAULT", "TOK_FLOAT", "TOK_MALLOC",
  "TOK_CPRINTF", "TOK_FREE", "TOK_SET", "TOK_OF", "TOK_UNION",
  "TOK_INTERSECTION", "TOK_ADD", "TOK_CLEAR", "TOK_SIZE", "TOK_CONTAINS",
  "TOK_CONSTANTE_REAL", "'+'", "'-'", "'*'", "'/'", "NEG", "'!'", "'{'",
  "'}'", "';'", "'['", "']'", "','", "'('", "')'", "'.'", "'='", "'<'",
  "'>'", "$accept", "programa", "iniciar_codigo", "escribir_variables",
  "inicio_main", "escribir_fin", "declaraciones", "declaracion",
  "modificadores_acceso", "clase", "declaracion_clase",
  "modificadores_clase", "clase_escalar", "tipo", "clase_objeto",
  "clase_vector", "identificadores", "funciones", "funcion",
  "tipo_retorno", "parametros_funcion", "resto_parametros_funcion",
  "parametro_funcion", "declaraciones_funcion", "sentencias", "sentencia",
  "sentencia_simple", "destruir_objeto", "bloque", "asignacion",
  "elemento_vector", "condicional", "inicio_if", "fin_if", "if_exp",
  "bucle", "while_exp", "while", "lectura", "escritura", "retorno_funcion",
  "exp", "identificador_clase", "lista_expresiones",
  "resto_lista_expresiones", "comparacion", "constante",
  "constante_logica", "constante_entera", "identificador", YY_NULLPTR
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
     305,   306,   307,    43,    45,    42,    47,   308,    33,   123,
     125,    59,    91,    93,    44,    40,    41,    46,    61,    60,
      62
};
# endif

#define YYPACT_NINF -109

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define YYTABLE_NINF -98

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,   -47,    18,   153,  -109,     8,    20,    25,  -109,   169,
    -109,   201,    22,   270,    10,  -109,  -109,  -109,    14,  -109,
    -109,  -109,  -109,    11,    41,    45,    13,    61,  -109,  -109,
    -109,  -109,   -10,    46,  -109,    12,    21,    28,    75,   143,
      36,   270,    34,  -109,  -109,  -109,    32,  -109,    44,  -109,
     270,   143,  -109,  -109,  -109,    52,  -109,  -109,  -109,  -109,
      99,    10,    47,    60,  -109,    62,    63,  -109,   123,   143,
     143,    84,  -109,     6,  -109,  -109,  -109,  -109,   143,   143,
     143,  -109,   139,   125,  -109,  -109,  -109,   143,  -109,    72,
    -109,   139,  -109,  -109,  -109,   152,    78,   270,    79,    58,
     137,    76,  -109,   140,  -109,  -109,    45,     0,   215,   203,
      77,   142,   139,   143,  -109,  -109,   196,    82,   143,   143,
     143,   143,   143,   143,    85,   187,   149,   139,   270,    94,
    -109,    98,   -54,    42,   270,    19,  -109,    45,   169,  -109,
     143,  -109,  -109,    93,    95,   143,   143,   143,   143,  -109,
     143,   143,  -109,    43,  -109,    43,    43,  -109,  -109,   143,
     104,   110,   119,  -109,  -109,   143,   143,   184,   185,   130,
     128,   131,  -109,   140,   150,    10,   203,   143,  -109,   139,
     139,   139,   139,   139,   139,   133,  -109,   143,   188,  -109,
     163,   139,  -109,  -109,   171,    42,  -109,  -109,   168,   169,
     172,  -109,   167,  -109,   170,   178,  -109,   201,   128,  -109,
    -109,    10,  -109,  -109,  -109,   270,  -109,   270,  -109,   179,
     194,   195,  -109,  -109,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    35,     1,    15,    16,    17,    18,    19,
       4,     9,    25,     0,    35,    12,    13,    14,     0,     5,
       8,    27,    28,     0,     0,     0,     0,     0,    20,    26,
      22,    21,    97,     0,    98,     0,     0,     0,     0,     0,
       0,    48,     0,    58,    51,    52,     0,    60,    70,    61,
       0,     0,    53,    54,    55,     0,    34,    37,    38,    39,
       0,    35,     0,     0,   114,     0,    32,    11,     0,     0,
     100,     0,    59,    89,   113,    80,   112,   111,     0,     0,
       0,    93,    79,     0,    90,   109,   110,     0,    75,    76,
      77,    78,     3,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     6,     0,    29,    10,     0,     0,     0,   102,
       0,     0,    62,   100,    85,    88,     0,     0,     0,     0,
       0,     0,     0,     0,    96,     0,     0,    63,     0,     0,
      73,     0,     0,    41,     0,     0,    33,     0,    19,    67,
       0,    99,    57,     0,     0,     0,     0,     0,     0,    91,
       0,     0,    92,    87,    86,    81,    82,    84,    83,   100,
       0,     0,     0,    71,    74,   100,     0,     0,     0,     0,
      43,     0,    30,     0,     0,    35,   102,   100,    94,   103,
     104,   105,   106,   107,   108,     0,    72,   100,     0,    68,
       0,    66,    44,    45,     0,     0,    40,     7,     0,    19,
       0,   101,     0,    95,     0,     0,    56,    47,    43,     2,
      31,    35,    24,    65,    64,     0,    46,     0,    42,     0,
       0,     0,    23,    69,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,  -109,  -109,  -109,  -109,    -9,  -109,   229,  -109,
    -109,  -109,  -109,     9,    35,  -109,   -98,   -11,  -109,  -109,
    -109,    37,    49,  -109,   -37,  -109,  -109,  -109,  -109,  -109,
     -13,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,   -15,   -12,  -108,    87,  -109,  -109,  -109,   -97,  -109
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    61,   134,   209,    10,    11,    12,    25,
      26,    27,    28,   167,   168,    31,    65,    13,    14,    60,
     169,   196,   170,   217,    40,    41,    42,    43,    44,    45,
      81,    47,    97,   189,    48,    49,    50,    51,    52,    53,
      54,   109,    83,   110,   141,   117,    84,    85,    86,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    55,    20,    56,    93,   144,   135,   137,   136,   -97,
       1,   165,     3,    98,   166,    73,    74,    75,     4,    57,
      82,    29,    34,    15,    91,    90,     9,    58,    46,    55,
      21,    22,    62,    21,    22,    16,    99,    46,    55,   174,
      17,    21,    22,    23,    63,    76,    77,    30,    64,    72,
     102,   185,    69,    59,   108,    70,   112,   190,    71,   138,
     129,    21,    22,   114,   115,   116,    78,    68,    69,   202,
      79,   113,   125,    24,    67,   119,   198,    80,    89,   204,
     127,    24,   172,   173,    46,    55,    87,    73,    74,   118,
     119,   162,   111,    88,    34,    94,    92,   171,   122,   123,
      95,    24,   101,   153,   154,   155,   156,   157,   158,   103,
      96,   120,   121,   122,   123,    46,    55,    76,    77,   100,
     104,    46,    55,   105,   131,   176,   107,   106,   124,   175,
     179,   180,   181,   182,    69,   183,   184,   128,    78,   130,
     132,   133,    79,   142,    74,   143,    73,    74,   152,    80,
     159,   191,   161,    34,   163,    73,    74,   164,   177,   -19,
     126,   178,    34,   186,   200,     5,     6,     7,     8,     9,
     118,   119,   -19,   -19,   -19,   187,    76,    77,   220,   188,
     221,     5,     6,     7,     8,    76,    77,   192,   193,   195,
     211,   197,   120,   121,   122,   123,   194,    78,   216,   203,
     219,    79,    46,    55,    46,    55,    78,   -19,    80,   199,
      79,   205,   -19,     5,     6,     7,     8,    80,   118,   119,
     -19,   -19,   -19,   145,   146,   147,   148,   118,   119,   206,
     207,   210,   212,   213,   118,   119,   214,   215,    18,   222,
     120,   121,   122,   123,   208,   218,   118,   119,     0,   120,
     121,   122,   123,   160,   223,   224,   120,   121,   122,   123,
     -19,     0,   149,   201,     0,   150,   151,   140,   120,   121,
     122,   123,     0,    32,     0,     0,     0,     0,   139,    33,
      34,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,    36,     0,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
      13,    13,    11,    14,    41,   113,   103,     7,   106,     3,
      18,    65,    59,    50,    68,     3,     4,     5,     0,     5,
      35,    12,    10,    15,    39,    38,    16,    18,    41,    41,
      19,    20,    23,    19,    20,    15,    51,    50,    50,   137,
      15,    19,    20,    21,     3,    33,    34,    12,     3,     3,
      61,   159,    62,    18,    69,    65,    71,   165,    68,    59,
      97,    19,    20,    78,    79,    80,    54,     6,    62,   177,
      58,    65,    87,    59,    61,    32,   173,    65,     3,   187,
      95,    59,    63,    64,    97,    97,    65,     3,     4,    31,
      32,   128,     8,    65,    10,    61,    60,   134,    55,    56,
      68,    59,     3,   118,   119,   120,   121,   122,   123,    62,
      66,    53,    54,    55,    56,   128,   128,    33,    34,    67,
      60,   134,   134,    61,    66,   140,     3,    64,     3,   138,
     145,   146,   147,   148,    62,   150,   151,    59,    54,    60,
       3,    65,    58,    66,     4,     3,     3,     4,    66,    65,
      65,   166,     3,    10,    60,     3,     4,    59,    65,     6,
       8,    66,    10,    59,   175,    12,    13,    14,    15,    16,
      31,    32,    19,    20,    21,    65,    33,    34,   215,    60,
     217,    12,    13,    14,    15,    33,    34,     3,     3,    61,
     199,    60,    53,    54,    55,    56,    66,    54,   207,    66,
     211,    58,   215,   215,   217,   217,    54,     6,    65,    59,
      58,    23,    59,    12,    13,    14,    15,    65,    31,    32,
      19,    20,    21,    27,    28,    29,    30,    31,    32,    66,
      59,    63,    60,    66,    31,    32,    66,    59,     9,    60,
      53,    54,    55,    56,   195,   208,    31,    32,    -1,    53,
      54,    55,    56,    66,    60,    60,    53,    54,    55,    56,
      59,    -1,    66,   176,    -1,    69,    70,    64,    53,    54,
      55,    56,    -1,     3,    -1,    -1,    -1,    -1,    63,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    22,    -1,    24,    25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    72,    59,     0,    12,    13,    14,    15,    16,
      77,    78,    79,    88,    89,    15,    15,    15,    79,    73,
      77,    19,    20,    21,    59,    80,    81,    82,    83,    84,
      85,    86,     3,     9,    10,    17,    22,    24,    25,    26,
      95,    96,    97,    98,    99,   100,   101,   102,   105,   106,
     107,   108,   109,   110,   111,   113,    88,     5,    84,    85,
      90,    74,    84,     3,     3,    87,   120,    61,     6,    62,
      65,    68,     3,     3,     4,     5,    33,    34,    54,    58,
      65,   101,   112,   113,   117,   118,   119,    65,    65,     3,
     101,   112,    60,    95,    61,    68,    66,   103,    95,   112,
      67,     3,    88,    62,    60,    61,    64,     3,   112,   112,
     114,     8,   112,    65,   112,   112,   112,   116,    31,    32,
      53,    54,    55,    56,     3,   112,     8,   112,    59,    95,
      60,    66,     3,    65,    75,   119,    87,     7,    59,    63,
      64,   115,    66,     3,   114,    27,    28,    29,    30,    66,
      69,    70,    66,   112,   112,   112,   112,   112,   112,    65,
      66,     3,    95,    60,    59,    65,    68,    84,    85,    91,
      93,    95,    63,    64,    87,    77,   112,    65,    66,   112,
     112,   112,   112,   112,   112,   114,    59,    65,    60,   104,
     114,   112,     3,     3,    66,    61,    92,    60,   119,    59,
      88,   115,   114,    66,   114,    23,    66,    59,    93,    76,
      63,    77,    60,    66,    66,    59,    77,    94,    92,    88,
      95,    95,    60,    60,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    73,    74,    75,    76,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    80,    81,    81,    82,    83,    84,    84,    85,
      86,    86,    87,    87,    88,    88,    89,    90,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    98,
      99,    99,   100,   100,   100,   100,   100,   101,   102,   102,
     103,   104,   105,   106,   107,   108,   109,   109,   110,   111,
     111,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   114,
     114,   115,   115,   116,   116,   116,   116,   116,   116,   117,
     117,   118,   118,   119,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     5,     0,     0,     0,     0,     2,     1,
       4,     3,     2,     2,     2,     1,     1,     1,     1,     0,
       1,     1,     1,     9,     7,     0,     1,     1,     1,     3,
       5,     7,     1,     3,     2,     0,    11,     1,     1,     1,
       2,     0,     3,     0,     2,     2,     1,     0,     1,     2,
       2,     1,     1,     1,     1,     1,     6,     4,     1,     2,
       1,     1,     3,     3,     7,     7,     5,     4,     5,     9,
       0,     0,     5,     3,     4,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     2,     3,     3,     2,     1,
       1,     3,     3,     1,     4,     5,     2,     1,     1,     2,
       0,     3,     0,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1
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
#line 102 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tprograma: TOK_MAIN '{' declaraciones funciones sentencias '}'\n"); escribir_fin(salida);}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 103 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tprograma: TOK_MAIN '{' funciones sentencias '}'\n");}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "omicron.y" /* yacc.c:1646  */
    {
        escribir_subseccion_data(salida);
        escribir_cabecera_bss(salida);

      }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 115 "omicron.y" /* yacc.c:1646  */
    {
          TablaHash *th=NULL;
        	 NodoHash *n=NULL;
           elementoTablaSimbolos *e=NULL;
          char* clave=NULL;
          int i;
          th = tsa->global;
          for(i=0; i<th->nElem; i++){
            clave = th->lista[i];
            n = buscarNodoHash(th, clave);
            if(n == NULL){
              printf("El nodo ha develto NULL\n");
            }
            e = nodo_get_ElementoTablaSimbolos(n);
            if(e == NULL){
              printf("El ELEMNTO ha develto NULL\n");
            }
            declarar_variable(salida, clave,  1,  1);
          }
            escribir_segmento_codigo(salida);
        }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 138 "omicron.y" /* yacc.c:1646  */
    {
                escribir_inicio_main(salida);
        }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 142 "omicron.y" /* yacc.c:1646  */
    {

        }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 145 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones: declaracion declaraciones\n");}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 146 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones: declaracion\n");}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 149 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion: modificadores_acceso clase identificadores ';'\n");}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion: modificadores_acceso declaracion_clase ';'\n");}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 153 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN TOK_UNIQUE\n");}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 154 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET TOK_UNIQUE\n");}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 155 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED TOK_UNIQUE\n");}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 156 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN\n");}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 157 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET\n");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 158 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED\n");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 159 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_UNIQUE\n");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 160 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso:\n");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 163 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_escalar\n");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 164 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_vector\n");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 165 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_objeto\n");}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 168 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS TOK_IDENTIFICADOR TOK_INHERITS identificadores '{' declaraciones funciones '}'\n");}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 169 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS TOK_IDENTIFICADOR '{' declaraciones funciones '}'\n");}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 172 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\tmodificadores_clase:\n");
        }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 177 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_escalar: tipo\n"); clase_actual= ESCALAR;}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 180 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo: TOK_INT\n"); /*tipo_actual = ENTERO;*/}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 181 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo: TOK_BOOLEAN\n"); /*tipo_actual = BOOLEAN;*/}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 184 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_objeto: '{' TOK_IDENTIFICADOR '}'\n");}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 187 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ']'\n");
              /*tamanio_vector_actual = $4.valor_entero
              if ((tamanio_actual <1) || (tamanio_vector_actual > 64))
              */
            }
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 193 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ',' constante_entera ']'\n");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 198 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificadores: identificador\n");}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 200 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificadores: identificador ','identificadores\n");}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 203 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tfunciones: funcion funciones\n");}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 204 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tfunciones:\n");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 207 "omicron.y" /* yacc.c:1646  */
    {
        fprintf(salida,";R:\tfuncion: TOK_FUNCTION modificadores_acceso tipo_retorno TOK_IDENTIFICADOR '(' parametro_funcion ')' declaraciones_funcion sentencia\n");}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 252 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo_retorno: TOK_NONE\n");}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 253 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tipo_retorno: tipo\n");}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 254 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tipo_retorno: clase_objeto\n");}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 257 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametros_funcion: parametro_funcion resto_parametros_funcion\n");}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 258 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametros_funcion:\n");}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 261 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_parametros_funcion: ; parametro_funcion resto_parametros_funcion\n");}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 262 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_parametros_funcion:\n");}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 265 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametro_funcion: tipo identificador\n");}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 266 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametro_funcion: clase_objeto identificador\n");}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 269 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones_funcion: declaraciones_funcion\n");}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 270 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones_funcion:\n");}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 273 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencias: sentencia\n");}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 274 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencias: sentencia sentencias\n");}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 277 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia: sentencia_simple ';'\n");}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 278 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia: bloque\n");}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 281 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: asignacion\n");}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 282 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: lectura\n");}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 283 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: escritura\n");}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 284 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: retorno_funcion\n");}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 285 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: identificador_clase '.' TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 286 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 287 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: destruir_objeto \n");}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 290 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdestruir_objeto: TOK_DISCARD TOK_IDENTIFICADOR \n");}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 293 "omicron.y" /* yacc.c:1646  */
    {
        fprintf(salida,";R:\tbloque: condicional\n");
        fprintf(stdout,"EN EL BLOQUE CONDICIONAL\n");
      }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 297 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tbloque: bucle\n");}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 300 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' exp\n");
                //if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, $3.lexema, e, idAmbito)==ERROR)
                //elementoTablaSimbolos * e = NULL;
                // buscarTablaSimbolosAmbitoActual(tablaSimbolosAmbitos * t, ,e, GLOBAL)
                //Buscar_TS --> e
                //if e.tipo == $3.tipo
                (yyvsp[-2].atributos).tipo=(yyvsp[0].atributos).tipo;
                //hay que ver si es variable o no
                asignar(salida, (yyvsp[-2].atributos).lexema, 0);
}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 311 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: elemento_vector '=' exp\n");}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 312 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 313 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tTOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 314 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: identificador_clase '.' TOK_IDENTIFICADOR '=' exp \n");}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 317 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\telemento_vector: TOK_IDENTIFICADOR '[' exp ']'\n");
              }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 322 "omicron.y" /* yacc.c:1646  */
    {
        fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' \n");
        printf("PRIMER MENSAJE\n");
      }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 326 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' TOK_ELSE '{' sentencias '}' \n");}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 328 "omicron.y" /* yacc.c:1646  */
    {
    if_then_ini(salida, etiqueta_global++);
}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 331 "omicron.y" /* yacc.c:1646  */
    {
    if_then_fin(salida, etiqueta_global++);
}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 335 "omicron.y" /* yacc.c:1646  */
    {
    fprintf(salida,";R:\tif_exp: TOK_IF '(' exp \n");
    printf("EL TIPO DE LA EXP: %d\n", (yyvsp[-2].atributos).tipo);
    if((yyvsp[-2].atributos).tipo != BOOLEAN){
      printf("Error tipo distinto de BOOLEAN\n");
    }
    etiqueta_global++;
    if_then_ini(salida, etiqueta_global);

}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 346 "omicron.y" /* yacc.c:1646  */
    {
      fprintf(salida,";R:\tbucle: TOK_WHILE exp '{' sentencias '}' \n");
    }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 351 "omicron.y" /* yacc.c:1646  */
    {
      if((yyvsp[-2].atributos).tipo != BOOLEAN){
        fprintf(stdout, "ERROR, WHILE distinto de booleano\n" );
      }

      (yyval.atributos).etiqueta = (yyvsp[-3].atributos).etiqueta;
}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 359 "omicron.y" /* yacc.c:1646  */
    {
    (yyval.atributos).etiqueta = etiqueta_global++;
}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 363 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlectura: TOK_SCANF TOK_IDENTIFICADOR  \n");
        leer(salida, (yyvsp[0].atributos).lexema, ENTERO);
        }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 366 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlectura: TOK_SCANF elemento_vector \n");}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 369 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tescritura: TOK_PRINTF exp\n");
                escribir(salida, (yyvsp[0].atributos).es_direccion, (yyvsp[0].atributos).tipo);
        }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 375 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN exp\n");}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 376 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN TOK_NONE\n");}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 378 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp '+' exp \n");
              if((yyvsp[-2].atributos).tipo != ENTERO || (yyvsp[0].atributos).tipo!= ENTERO ){
                fprintf(stdout, "ERROR, no se pueden sumar cosas diferentes a enteros\n" );
                exit(-1);
              }
              fprintf(stdout, "entra en la funcion de sumar\n");
              //con la tabla de simbolos habria que ver si es variable o no, de momento generalazmaos a siempre variable

              sumar(salida,1,1);
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
            }
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 390 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp '-' exp \n");
              if((yyvsp[-2].atributos).tipo != ENTERO || (yyvsp[0].atributos).tipo!= ENTERO ){
                fprintf(stdout, "ERROR, no se pueden restar cosas diferentes a enteros\n" );
                exit(-1);
              }
              //con la tabla de simbolos habria que ver si es variable o no, de momento generalazmaos a siempre variable

              restar(salida,1,1);
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
            }
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 401 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp '/' exp \n");
              if((yyvsp[-2].atributos).tipo != ENTERO || (yyvsp[0].atributos).tipo!= ENTERO ){
                fprintf(stdout, "ERROR, no se pueden dividir cosas diferentes a enteros\n" );
                exit(-1);
              }
              //con la tabla de simbolos habria que ver si es variable o no, de momento generalazmaos a siempre variable

              dividir(salida,1,1);
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
            }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 412 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp '*' exp \n");
              if((yyvsp[-2].atributos).tipo != ENTERO || (yyvsp[0].atributos).tipo!= ENTERO ){
                fprintf(stdout, "ERROR, no se pueden multiplicar cosas diferentes a enteros\n" );
                exit(-1);
              }
              //con la tabla de simbolos habria que ver si es variable o no, de momento generalazmaos a siempre variable

              multiplicar(salida,1,1);
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
            }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 424 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: '-' exp \n");}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 426 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp TOK_AND exp  \n");
              //esto es provisional
              (yyvsp[-2].atributos).tipo=1;
              (yyvsp[0].atributos).tipo=1;

              if((yyvsp[-2].atributos).tipo != BOOLEAN || (yyvsp[0].atributos).tipo!= BOOLEAN ){
                fprintf(stdout, "ERROR, no se puede hacer AND entre cosas diferentes a booleanos\n" );
                exit(-1);
              }
              //con la tabla de simbolos habria que ver si es variable o no, de momento generalazmaos a siempre variable

              y(salida,1,1);
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
            }
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 441 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp TOK_OR exp \n");
              //esto es provisional
              (yyvsp[-2].atributos).tipo=1;
              (yyvsp[0].atributos).tipo=1;

              if((yyvsp[-2].atributos).tipo != BOOLEAN || (yyvsp[0].atributos).tipo!= BOOLEAN ){
                fprintf(stdout, "ERROR, no se puede hacer OR entre cosas diferentes a booleanos\n" );
                exit(-1);
              }
              //con la tabla de simbolos habria que ver si es variable o no, de momento generalazmaos a siempre variable

              o(salida,1,1);
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 455 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp:'!' exp\n");
              //esto e sprovisoinal
              (yyvsp[0].atributos).tipo=1;

              if((yyvsp[0].atributos).tipo != BOOLEAN){
                fprintf(stdout, "ERROR, no se puede hacer NO en cosas diferentes a booleanos\n" );
                exit(-1);
              }
              //con la tabla de simbolos habria que ver si es variable o no, de momento generalazmaos a siempre variable

              no(salida,1,etiqueta_global++);

              }
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 469 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\texp: TOK_IDENTIFICADOR\n");
          escribir_operando(salida, (yyvsp[0].atributos).lexema, 1);
          (yyval.atributos).es_direccion = 1;
        //tipo aun no lo se
          /*en_exp_list = 0
            Comprobar nombre funcion
            BuscarTS */
        }
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 478 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\texp: constante \n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 483 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp:'(' exp ')' \n");}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 484 "omicron.y" /* yacc.c:1646  */
    {
            fprintf(salida,";R:\texp:'(' comparacion ')' \n");
            printf("DENTRO DE LA COMPARACION EL TIPO: %d\n", (yyvsp[-1].atributos).tipo);
            (yyval.atributos).tipo = (yyvsp[-1].atributos).tipo;
          }
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 489 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: elemento_vector");}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 490 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 491 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 492 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR \n");}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 503 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador_clase: TOK_IDENTIFICADOR \n");}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 504 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador_clase: TOK_ITSELF \n");}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 507 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones: exp resto_lista_expresiones\n");}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 508 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones:\n");}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 511 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones: ',' exp resto_lista_expresiones\n");}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 512 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_lista_expresiones:\n");}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 515 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_IGUAL exp \n");
              printf("LLEGAMOS AL MENOR IGUAL\n");

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo){
                //con la ts hay qu ver si son variables
                igual(salida, 1, 1, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEAN;
              }
              else{
                fprintf(stdout, "ERROR, no se puede hacer == entre cosas diferentes\n" );
                exit(-1);
              }
        }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 529 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_DISTINTO exp \n");
              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo){
                //con la ts hay qu ver si son variables
                distinto(salida, 1, 1, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEAN;
              }
              else{
                fprintf(stdout, "ERROR, no se puede hacer != entre cosas diferentes\n" );
                exit(-1);
              }
            }
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 542 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_MENORIGUAL exp \n");
              //esto es provisional
              (yyvsp[-2].atributos).tipo=ENTERO;
              (yyvsp[0].atributos).tipo=ENTERO;
              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo && (yyvsp[-2].atributos).tipo==ENTERO){
                //con la ts hay qu ver si son variables
                menor_igual(salida, 1, 1, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEAN;
              }
              else{
                fprintf(stdout, "ERROR, no se puede hacer <= entre cosas diferentes a enteros\n" );
                exit(-1);
              }
            }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 557 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_MAYORIGUAL exp \n");
              //esto es provisional
              (yyvsp[-2].atributos).tipo=ENTERO;
              (yyvsp[0].atributos).tipo=ENTERO;

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo && (yyvsp[-2].atributos).tipo==ENTERO){
                //con la ts hay qu ver si son variables
                mayor_igual(salida, 1, 1, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEAN;
              }
              else{
                fprintf(stdout, "ERROR, no se puede hacer >= entre cosas diferentes a enteros\n" );
                exit(-1);
              }
            }
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 573 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp < exp \n");
              //esto es provisional
              (yyvsp[-2].atributos).tipo=ENTERO;
              (yyvsp[0].atributos).tipo=ENTERO;

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo && (yyvsp[-2].atributos).tipo==ENTERO){
                //con la ts hay qu ver si son variables
                menor(salida, 1, 1, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEAN;
              }
              else{
                fprintf(stdout, "ERROR, no se puede hacer < entre cosas diferentes a enteros\n" );
                exit(-1);
              }
            }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 589 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp > exp \n");
              //esto es provisional
              (yyvsp[-2].atributos).tipo=ENTERO;
              (yyvsp[0].atributos).tipo=ENTERO;

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo && (yyvsp[-2].atributos).tipo==ENTERO){
                //con la ts hay qu ver si son variables
                mayor(salida, 1, 1, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEAN;
              }
              else{
                fprintf(stdout, "ERROR, no se puede hacer > entre cosas diferentes a enteros\n" );
                exit(-1);
              }
            }
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 607 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante: constante_logica\n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 611 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante: constante_entera\n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 616 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante_logica: TOK_TRUE\n");
                    char valor[]={"1"};
                    (yyval.atributos).tipo = BOOLEAN;
                    (yyval.atributos).es_direccion = 0;
                    (yyval.atributos).valor_entero = 1;
                    escribir_operando(salida, valor, 0);

        }
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 624 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante_logica: TOK_FALSE\n");
                    char valor[]={"0"};
                    (yyval.atributos).tipo = BOOLEAN;
                    (yyval.atributos).es_direccion = 0;
                    (yyval.atributos).valor_entero = 0;
                    escribir_operando(salida, valor, 0);

        }
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 633 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tconstante_entera: TOK_CONSTANTE_ENTERA\n");
                (yyval.atributos).tipo = ENTERO;
                (yyval.atributos).es_direccion = 0;
                char valor[20];
                sprintf(valor, "%d", (yyvsp[0].atributos).valor_entero);
                escribir_operando(salida, valor, 0);
        }
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 645 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida, ";R:\tidentificador: TOK_IDENTIFICADOR");

                char*idAmbito = NULL;
                elementoTablaSimbolos *elemento = nodo_crearElementoTablaSimbolos();
                elemento = nodo_set_ElementoTablaSimbolos(elemento,
                                          (yyvsp[0].atributos).lexema,
                													0,
                													VARIABLE,
                													(yyvsp[0].atributos).tipo,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													1,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                													0,
                								        	0,
                								        	0,
                													NULL);

                elementoTablaSimbolos ** e = NULL;
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, e, idAmbito)==ERROR){
                  if((yyvsp[0].atributos).tipo == BOOLEAN || (yyvsp[0].atributos).tipo == ENTERO){
                    if(insertarTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema,  elemento) == ERROR){
                      printf("ERROR al insertar en la tsa\n");
                      exit(-1);
                    }

                  }

                }
                else{
                  printf("ERROR, variable ya declarada\n");
                  exit(-1);
                }

              nodo_free_ElementoTablaSimbolos(elemento);
        }
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2540 "y.tab.c" /* yacc.c:1646  */
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
#line 705 "omicron.y" /* yacc.c:1906  */



void yyerror(char * s)
{
  if(yychar != TOK_ERROR)
    printf("ERROR SINTACTICO: %d:%d\n",line, columna-yyleng);
    escribir_fin(salida);

}
