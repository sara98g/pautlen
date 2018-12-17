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

  int clase_actual, tipo_actual, tamanio_vector_actual, tamanio_actual,es_variable1, es_variable2;
  int etiqueta_global = 0;

  char idAmbito[64];
  elementoTablaSimbolos * e = NULL;




#line 94 "y.tab.c" /* yacc.c:339  */

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
#line 29 "omicron.y" /* yacc.c:355  */

        tipo_atributo atributos;
  

#line 245 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 262 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

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
       0,   111,   111,   112,   116,   123,   146,   150,   151,   154,
     155,   158,   159,   160,   161,   162,   163,   164,   165,   168,
     169,   170,   173,   174,   177,   182,   185,   186,   189,   192,
     200,   203,   205,   209,   210,   213,   258,   259,   260,   263,
     264,   267,   268,   271,   272,   275,   276,   279,   280,   283,
     284,   287,   288,   289,   290,   291,   292,   293,   296,   299,
     302,   305,   326,   339,   340,   341,   344,   349,   355,   366,
     381,   387,   393,   407,   412,   438,   441,   452,   453,   455,
     478,   501,   523,   544,   562,   586,   610,   628,   642,   648,
     649,   654,   655,   656,   657,   668,   669,   672,   673,   676,
     677,   680,   704,   729,   753,   777,   801,   827,   831,   836,
     844,   853,   864
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
  "inicio_main", "declaraciones", "declaracion", "modificadores_acceso",
  "clase", "declaracion_clase", "modificadores_clase", "clase_escalar",
  "tipo", "clase_objeto", "clase_vector", "identificadores", "funciones",
  "funcion", "tipo_retorno", "parametros_funcion",
  "resto_parametros_funcion", "parametro_funcion", "declaraciones_funcion",
  "sentencias", "sentencia", "sentencia_simple", "destruir_objeto",
  "bloque", "asignacion", "elemento_vector", "condicional", "if_exp",
  "if_exp_sentencias", "bucle", "while_exp", "while", "lectura",
  "escritura", "retorno_funcion", "exp", "identificador_clase",
  "lista_expresiones", "resto_lista_expresiones", "comparacion",
  "constante", "constante_logica", "constante_entera", "identificador", YY_NULLPTR
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

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -96

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,   -39,    41,   136,  -108,    27,    33,    40,  -108,    94,
    -108,   147,    75,   254,     6,  -108,  -108,  -108,    25,  -108,
    -108,  -108,  -108,    43,    70,    72,    18,    84,  -108,  -108,
    -108,  -108,    73,    88,  -108,    13,    32,    45,   108,    82,
      54,   254,    58,  -108,  -108,  -108,    52,  -108,   254,   101,
    -108,   254,    82,  -108,  -108,  -108,    76,  -108,  -108,  -108,
    -108,   142,     6,    63,    98,  -108,    78,    99,  -108,   162,
      82,    82,    23,  -108,     7,  -108,  -108,  -108,  -108,    82,
      82,    82,  -108,   200,   168,  -108,  -108,  -108,    82,  -108,
     110,  -108,   200,  -108,  -108,  -108,    79,   113,   115,   119,
     138,   172,   123,  -108,   176,  -108,  -108,    72,     5,   196,
     184,   121,   187,   200,    82,  -108,  -108,   154,   132,    82,
      82,    82,    82,    82,    82,   134,   180,   199,   200,   182,
     254,  -108,   144,   -44,    46,   254,   -55,  -108,    72,    94,
    -108,    82,  -108,  -108,   148,   151,    82,    82,    82,    82,
    -108,    82,    82,  -108,   122,  -108,   122,   122,  -108,  -108,
      82,   155,   153,   159,  -108,    82,    82,   218,   219,   160,
     164,   169,  -108,   176,   171,     6,   184,    82,  -108,   200,
     200,   200,   200,   200,   200,   175,  -108,    82,  -108,   177,
     200,  -108,  -108,   183,    46,  -108,  -108,   181,    94,   185,
    -108,   192,  -108,   194,  -108,   147,   164,  -108,     6,  -108,
    -108,  -108,  -108,   254,  -108,   201,   202,  -108,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    34,     1,    14,    15,    16,    17,    18,
       4,     8,    24,     0,    34,    11,    12,    13,     0,     5,
       7,    26,    27,     0,     0,     0,     0,     0,    19,    25,
      21,    20,    95,     0,    96,     0,     0,     0,     0,     0,
       0,    47,     0,    57,    50,    51,     0,    59,     0,     0,
      60,     0,     0,    52,    53,    54,     0,    33,    36,    37,
      38,     0,    34,     0,     0,   112,     0,    31,    10,     0,
       0,    98,     0,    58,    87,   111,    78,   110,   109,     0,
       0,     0,    91,    77,     0,    88,   107,   108,     0,    73,
      74,    75,    76,     3,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     6,     0,    28,     9,     0,     0,     0,
     100,     0,     0,    61,    98,    83,    86,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,    62,    67,
       0,    71,     0,     0,    40,     0,     0,    32,     0,    18,
      66,     0,    97,    56,     0,     0,     0,     0,     0,     0,
      89,     0,     0,    90,    85,    84,    79,    80,    82,    81,
      98,     0,     0,     0,    72,    98,     0,     0,     0,     0,
      42,     0,    29,     0,     0,    34,   100,    98,    92,   101,
     102,   103,   104,   105,   106,     0,    69,    98,    68,     0,
      65,    43,    44,     0,     0,    39,     2,     0,    18,     0,
      99,     0,    93,     0,    55,    46,    42,    30,    34,    23,
      64,    63,    45,     0,    41,     0,     0,    22,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,  -108,  -108,    -9,  -108,   238,  -108,  -108,
    -108,  -108,    31,    22,  -108,  -101,   -11,  -108,  -108,  -108,
      59,    74,  -108,   -37,  -108,  -108,  -108,  -108,  -108,   -13,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,   -20,
     -12,  -107,    90,  -108,  -108,  -108,   -99,  -108
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    62,   135,    10,    11,    12,    25,    26,
      27,    28,   167,   168,    31,    66,    13,    14,    61,   169,
     195,   170,   213,    40,    41,    42,    43,    44,    45,    82,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   110,
      84,   111,   142,   118,    85,    86,    87,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    56,    20,    57,    94,   136,   137,   145,   172,   173,
     -95,    97,   138,     1,    99,    83,    74,    75,    76,    92,
       3,   165,     9,    34,   166,    91,    74,    75,    46,    56,
      58,   112,   100,    34,    30,    46,    56,   174,    46,    56,
      60,     4,    15,    29,    21,    22,    77,    78,    16,    59,
     109,   103,   113,   185,    63,    17,    77,    78,   189,   115,
     116,   117,    21,    22,   139,    21,    22,    79,   126,    70,
     201,    80,   114,    64,   197,    65,   128,    79,    81,    68,
     203,    80,    74,    75,    24,    74,    75,   127,    81,    34,
      69,    73,    34,   163,    21,    22,    23,    88,   171,   154,
     155,   156,   157,   158,   159,    24,     5,     6,     7,     8,
      89,    90,    77,    78,    93,    77,    78,    46,    56,    95,
      96,   176,    46,    56,    98,   104,   179,   180,   181,   182,
     175,   183,   184,    79,    24,    70,    79,    80,    71,   106,
      80,    72,   -18,   101,    81,   102,   190,    81,     5,     6,
       7,     8,     9,   -18,   120,   -18,   -18,   -18,   105,     5,
       6,     7,     8,   107,   199,   108,   -18,   -18,   -18,   119,
     120,   125,    70,   129,   130,   133,   216,   123,   124,   131,
      75,   146,   147,   148,   149,   119,   120,   143,   134,   208,
     144,   121,   122,   123,   124,   -18,   212,   215,   153,   160,
      46,    56,   162,   164,   132,   -70,   -18,   121,   122,   123,
     124,   119,   120,   177,   186,   119,   120,   178,   187,   188,
     150,   191,   192,   151,   152,   194,   193,   119,   120,   196,
     198,   119,   120,   121,   122,   123,   124,   121,   122,   123,
     124,   202,   205,   204,   207,   209,   161,    18,   141,   121,
     122,   123,   124,   121,   122,   123,   124,    32,   210,   140,
     211,   217,   218,    33,    34,   214,   200,     0,   206,     0,
       0,    35,     0,     0,     0,     0,    36,     0,    37,    38,
      39
};

static const yytype_int16 yycheck[] =
{
      13,    13,    11,    14,    41,   104,   107,   114,    63,    64,
       3,    48,     7,    18,    51,    35,     3,     4,     5,    39,
      59,    65,    16,    10,    68,    38,     3,     4,    41,    41,
       5,     8,    52,    10,    12,    48,    48,   138,    51,    51,
      18,     0,    15,    12,    19,    20,    33,    34,    15,    18,
      70,    62,    72,   160,    23,    15,    33,    34,   165,    79,
      80,    81,    19,    20,    59,    19,    20,    54,    88,    62,
     177,    58,    65,     3,   173,     3,    96,    54,    65,    61,
     187,    58,     3,     4,    59,     3,     4,     8,    65,    10,
       6,     3,    10,   130,    19,    20,    21,    65,   135,   119,
     120,   121,   122,   123,   124,    59,    12,    13,    14,    15,
      65,     3,    33,    34,    60,    33,    34,   130,   130,    61,
      68,   141,   135,   135,    23,    62,   146,   147,   148,   149,
     139,   151,   152,    54,    59,    62,    54,    58,    65,    61,
      58,    68,     6,    67,    65,     3,   166,    65,    12,    13,
      14,    15,    16,     6,    32,    19,    20,    21,    60,    12,
      13,    14,    15,    64,   175,     3,    19,    20,    21,    31,
      32,     3,    62,    60,    59,     3,   213,    55,    56,    60,
       4,    27,    28,    29,    30,    31,    32,    66,    65,   198,
       3,    53,    54,    55,    56,    59,   205,   208,    66,    65,
     213,   213,     3,    59,    66,    23,    59,    53,    54,    55,
      56,    31,    32,    65,    59,    31,    32,    66,    65,    60,
      66,     3,     3,    69,    70,    61,    66,    31,    32,    60,
      59,    31,    32,    53,    54,    55,    56,    53,    54,    55,
      56,    66,    59,    66,    63,    60,    66,     9,    64,    53,
      54,    55,    56,    53,    54,    55,    56,     3,    66,    63,
      66,    60,    60,     9,    10,   206,   176,    -1,   194,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    24,    25,
      26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    72,    59,     0,    12,    13,    14,    15,    16,
      76,    77,    78,    87,    88,    15,    15,    15,    78,    73,
      76,    19,    20,    21,    59,    79,    80,    81,    82,    83,
      84,    85,     3,     9,    10,    17,    22,    24,    25,    26,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   111,    87,     5,    83,
      84,    89,    74,    83,     3,     3,    86,   118,    61,     6,
      62,    65,    68,     3,     3,     4,     5,    33,    34,    54,
      58,    65,   100,   110,   111,   115,   116,   117,    65,    65,
       3,   100,   110,    60,    94,    61,    68,    94,    23,    94,
     110,    67,     3,    87,    62,    60,    61,    64,     3,   110,
     110,   112,     8,   110,    65,   110,   110,   110,   114,    31,
      32,    53,    54,    55,    56,     3,   110,     8,   110,    60,
      59,    60,    66,     3,    65,    75,   117,    86,     7,    59,
      63,    64,   113,    66,     3,   112,    27,    28,    29,    30,
      66,    69,    70,    66,   110,   110,   110,   110,   110,   110,
      65,    66,     3,    94,    59,    65,    68,    83,    84,    90,
      92,    94,    63,    64,    86,    76,   110,    65,    66,   110,
     110,   110,   110,   110,   110,   112,    59,    65,    60,   112,
     110,     3,     3,    66,    61,    91,    60,   117,    59,    87,
     113,   112,    66,   112,    66,    59,    92,    63,    76,    60,
      66,    66,    76,    93,    91,    87,    94,    60,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    73,    74,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    81,    82,    83,    83,    84,    85,
      85,    86,    86,    87,    87,    88,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    97,    98,
      98,    99,    99,    99,    99,    99,   100,   101,   101,   102,
     103,   104,   105,   106,   107,   107,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     116,   117,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     5,     0,     0,     0,     2,     1,     4,
       3,     2,     2,     2,     1,     1,     1,     1,     0,     1,
       1,     1,     9,     7,     0,     1,     1,     1,     3,     5,
       7,     1,     3,     2,     0,    11,     1,     1,     1,     2,
       0,     3,     0,     2,     2,     1,     0,     1,     2,     2,
       1,     1,     1,     1,     1,     6,     4,     1,     2,     1,
       1,     3,     3,     7,     7,     5,     4,     3,     5,     5,
       3,     3,     4,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     2,     3,     3,     2,     1,     1,     3,
       3,     1,     4,     5,     2,     1,     1,     2,     0,     3,
       0,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1
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
#line 111 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tprograma: TOK_MAIN '{' declaraciones funciones sentencias '}'\n"); escribir_fin(salida);}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 112 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tprograma: TOK_MAIN '{' funciones sentencias '}'\n"); escribir_fin(salida);}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 116 "omicron.y" /* yacc.c:1646  */
    {
        escribir_subseccion_data(salida);
        escribir_cabecera_bss(salida);

      }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 123 "omicron.y" /* yacc.c:1646  */
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
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 146 "omicron.y" /* yacc.c:1646  */
    {
                escribir_inicio_main(salida);
        }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 150 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones: declaracion declaraciones\n");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 151 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones: declaracion\n");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 154 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion: modificadores_acceso clase identificadores ';'\n");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 155 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion: modificadores_acceso declaracion_clase ';'\n");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 158 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN TOK_UNIQUE\n");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 159 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET TOK_UNIQUE\n");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 160 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED TOK_UNIQUE\n");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 161 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN\n");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 162 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET\n");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 163 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED\n");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 164 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_UNIQUE\n");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 165 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso:\n");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 168 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_escalar\n"); clase_actual=ESCALAR;}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 169 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_vector\n");clase_actual=VECTOR;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 170 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_objeto\n");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 173 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS TOK_IDENTIFICADOR TOK_INHERITS identificadores '{' declaraciones funciones '}'\n");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 174 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS TOK_IDENTIFICADOR '{' declaraciones funciones '}'\n");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 177 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\tmodificadores_clase:\n");
        }
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 182 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_escalar: tipo\n"); clase_actual= ESCALAR;}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 185 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo: TOK_INT\n"); tipo_actual =ENTERO;}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 186 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo: TOK_BOOLEAN\n"); tipo_actual = BOOLEANO;}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 189 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_objeto: '{' TOK_IDENTIFICADOR '}'\n");}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 192 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ']'\n");
              tamanio_vector_actual = (yyvsp[-1].atributos).valor_entero;
              clase_actual = VECTOR;
              if ((tamanio_vector_actual <1) || (tamanio_vector_actual > 64))
                printf("ERROR SEMANTICO: %d:%d - Tamaño vector demasiado grande\n",line, columna-yyleng);
                exit(-1);
            }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 200 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ',' constante_entera ']'\n");}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 204 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificadores: identificador\n");}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 206 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificadores: identificador ','identificadores\n");}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 209 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tfunciones: funcion funciones\n");}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 210 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tfunciones:\n");}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 213 "omicron.y" /* yacc.c:1646  */
    {
        fprintf(salida,";R:\tfuncion: TOK_FUNCTION modificadores_acceso tipo_retorno TOK_IDENTIFICADOR '(' parametro_funcion ')' declaraciones_funcion sentencia\n");}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 258 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo_retorno: TOK_NONE\n");}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 259 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tipo_retorno: tipo\n");}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 260 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tipo_retorno: clase_objeto\n");}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 263 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametros_funcion: parametro_funcion resto_parametros_funcion\n");}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 264 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametros_funcion:\n");}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 267 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_parametros_funcion: ; parametro_funcion resto_parametros_funcion\n");}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 268 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_parametros_funcion:\n");}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 271 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametro_funcion: tipo identificador\n");}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 272 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametro_funcion: clase_objeto identificador\n");}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 275 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones_funcion: declaraciones_funcion\n");}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 276 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones_funcion:\n");}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 279 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencias: sentencia\n");}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 280 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencias: sentencia sentencias\n");}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 283 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia: sentencia_simple ';'\n");}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 284 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia: bloque\n");}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 287 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: asignacion\n");}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 288 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: lectura\n");}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 289 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: escritura\n");}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 290 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: retorno_funcion\n");}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 291 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: identificador_clase '.' TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 292 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 293 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: destruir_objeto \n");}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 296 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdestruir_objeto: TOK_DISCARD TOK_IDENTIFICADOR \n");}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 299 "omicron.y" /* yacc.c:1646  */
    {
        fprintf(salida,";R:\tbloque: condicional\n");
      }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 302 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tbloque: bucle\n");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 305 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' exp\n");
                e = NULL;
                idAmbito[0] = '\0';
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito) == ERROR){
                  printf("ERROR SEMANTICO: %d:%d No existe identificador %s\n", line, columna - yyleng, (yyvsp[-2].atributos).lexema);
                  exit(-1);
                }

                if (e->tipo == (yyvsp[0].atributos).tipo){
                  if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                    asignar(salida, (yyvsp[-2].atributos).lexema, 0);
                  }else{
                    asignar(salida, (yyvsp[-2].atributos).lexema, 1);
                  }
                }else{
                  printf("ERROR SEMANTICO: %d:%d No se puede asignar dos objetos de diferentes tipos\n", line, columna - yyleng);
                  exit(-1);
                }

            }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 326 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tasignacion: elemento_vector '=' exp\n");
              if ((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo){
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  asignar(salida, (yyvsp[-2].atributos).lexema, 0);
                }else{
                  asignar(salida, (yyvsp[-2].atributos).lexema, 1);
                }
              }else{
                printf("ERROR SEMANTICO: %d:%d No se puede asignar dos objetos de diferentes tipos\n", line, columna - yyleng);
                exit(-1);
              }
            }
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 339 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 340 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tTOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 341 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: identificador_clase '.' TOK_IDENTIFICADOR '=' exp \n");}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 344 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\telemento_vector: TOK_IDENTIFICADOR '[' exp ']'\n");
              }
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 349 "omicron.y" /* yacc.c:1646  */
    {
        fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' \n");
        printf("PRIMER MENSAJE\n");
        ifthen_fin(salida, (yyvsp[-2].atributos).etiqueta);

        }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 355 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' TOK_ELSE '{' sentencias '}' \n");
          ifthenelse_fin(salida, (yyvsp[-4].atributos).etiqueta);

        }
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 366 "omicron.y" /* yacc.c:1646  */
    {
    fprintf(salida,";R:\tif_exp: TOK_IF '(' exp \n");
    printf("EL TIPO DE LA EXP: %d\n", (yyvsp[-2].atributos).tipo);
    if((yyvsp[-2].atributos).tipo != BOOLEANO){
      printf("ERROR SEMANTICO: %d:%d No se puede hacer if en distinto de boolean\n", line, columna - yyleng);
    }
    (yyval.atributos).etiqueta = etiqueta_global++;
    if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
      es_variable1 = 0;
    }else{
      es_variable1=1;
    }
    ifthen_inicio(salida, es_variable1, (yyval.atributos).etiqueta);

}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 381 "omicron.y" /* yacc.c:1646  */
    {
    (yyval.atributos).etiqueta = (yyvsp[-2].atributos).etiqueta;

    ifthenelse_fin_then(salida, (yyvsp[-2].atributos).etiqueta);
}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 387 "omicron.y" /* yacc.c:1646  */
    {
      fprintf(salida,";R:\tbucle: TOK_WHILE exp '{' sentencias '}' \n");
      while_fin(salida, (yyvsp[-2].atributos).etiqueta);
    }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 393 "omicron.y" /* yacc.c:1646  */
    {
      if((yyvsp[-2].atributos).tipo != BOOLEANO){
        fprintf(stdout, "ERROR, WHILE distinto de BOOLEANOo\n" );
      }
      if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
        es_variable1 = 0;
      }else{
        es_variable1=1;
      }

      (yyval.atributos).etiqueta = (yyvsp[-3].atributos).etiqueta;
      while_exp_pila(salida, es_variable1, (yyval.atributos).etiqueta);
}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 407 "omicron.y" /* yacc.c:1646  */
    {
    (yyval.atributos).etiqueta = etiqueta_global++;
    while_inicio(salida, (yyval.atributos).etiqueta);
}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 412 "omicron.y" /* yacc.c:1646  */
    {
            fprintf(salida,";R:\tlectura: TOK_SCANF TOK_IDENTIFICADOR  \n");
            if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
              printf("ERROR SEMANTICO: %d:%d - no se puede leer el identificador %s (no existe)\n", line, columna-yyleng, (yyvsp[0].atributos).lexema);
              exit(-1);
            }
            if(e->clase == VECTOR || e->categoria == FUNCION){
              printf("ERROR SEMANTICO: %d:%d - no se pueden leer funciones ni vectores\n", line, columna-yyleng);
              exit(-1);
            }
            //******preguntar profe
            // if(e->categoria == VARIABLE){
            //   if(e->ambito=GLOBAL){
            //
            //   }
            //   else{
            //
            //   }
            // }

            if(e->tipo ==ENTERO)
              leer(salida, (yyvsp[0].atributos).lexema,ENTERO);
            else
              leer(salida, (yyvsp[0].atributos).lexema, BOOLEANO);

        }
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 438 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlectura: TOK_SCANF elemento_vector \n");}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 441 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tescritura: TOK_PRINTF exp\n");
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable1 = 0;
                }
                else
                  es_variable1 =1;
                escribir(salida, es_variable1, (yyvsp[0].atributos).tipo);
        }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 452 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN exp\n");}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 453 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN TOK_NONE\n");}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 455 "omicron.y" /* yacc.c:1646  */
    {

              fprintf(salida,";R:\texp: exp '+' exp \n");
              if((yyvsp[-2].atributos).tipo !=ENTERO|| (yyvsp[0].atributos).tipo!=ENTERO){
                fprintf(stdout, "ERROR, no se pueden sumar cosas diferentes a enteros\n" );
                exit(-1);
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                es_variable1 = 0;
              }else{
                es_variable1=1;
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                es_variable2 = 0;
              }else{
                es_variable2=1;
              }

              sumar(salida,es_variable1,es_variable2);
              (yyval.atributos).es_direccion=0;
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
              sprintf((yyval.atributos).lexema, "suma+");
            }
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 478 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp '-' exp \n");
              if((yyvsp[-2].atributos).tipo !=ENTERO|| (yyvsp[0].atributos).tipo!=ENTERO){
                fprintf(stdout, "ERROR, no se pueden restar cosas diferentes aENTEROs\n" );
                exit(-1);
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable1 = 0;
              }else{
                  es_variable1=1;
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable2 = 0;
              }else{
                  es_variable2=1;
              }

                restar(salida,es_variable1,es_variable2);
                (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
                (yyval.atributos).es_direccion=0;
                sprintf((yyval.atributos).lexema, "resta-");

            }
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 501 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp '/' exp \n");
              if((yyvsp[-2].atributos).tipo !=ENTERO|| (yyvsp[0].atributos).tipo!=ENTERO){
                fprintf(stdout, "ERROR, no se pueden dividir cosas diferentes a enteros\n" );
                exit(-1);
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable1 = 0;
              }else{
                  es_variable1=1;
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable2 = 0;
              }else{
                  es_variable2=1;
              }

                dividir(salida,es_variable1,es_variable2);
                (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
                (yyval.atributos).es_direccion=0;
                sprintf((yyval.atributos).lexema, "division/");
            }
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 523 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp '*' exp \n");
              if((yyvsp[-2].atributos).tipo !=ENTERO|| (yyvsp[0].atributos).tipo!=ENTERO){
                fprintf(stdout, "ERROR, no se pueden multiplicar cosas diferentes a enteros\n" );
                exit(-1);
              }if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable1 = 0;
              }else{
                  es_variable1=1;
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable2 = 0;
              }else{
                  es_variable2=1;
              }

                multiplicar(salida,es_variable1,es_variable2);
                (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
                (yyval.atributos).es_direccion=0;
                sprintf((yyval.atributos).lexema, "multiplicar*");
            }
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 544 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: '-' exp \n");
              if((yyvsp[0].atributos).tipo !=ENTERO){
                fprintf(stdout, "ERROR, no se pueden cambiar_signo cosas diferentes a enteros\n" );
                exit(-1);
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable1 = 0;
              }else{
                  es_variable1=1;
              }
              cambiar_signo(salida, es_variable1);
              (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
              (yyval.atributos).es_direccion=0;
              sprintf((yyval.atributos).lexema, "cambiar_signo-");

            }
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 562 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp TOK_AND exp  \n");
              if((yyvsp[-2].atributos).tipo != BOOLEANO || (yyvsp[0].atributos).tipo!= BOOLEANO ){
                fprintf(stdout, "ERROR, no se puede hacer AND entre cosas diferentes a booleanos\n" );
                exit(-1);
              }
              //con la tabla de simbolos habria que ver si es variable o no, de momento generalazmaos a siempre variable
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable1 = 0;
              }else{
                  es_variable1=1;
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable2 = 0;
              }else{
                  es_variable2=1;
              }

              y(salida,es_variable1,es_variable2);
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
              (yyval.atributos).es_direccion=0;
              sprintf((yyval.atributos).lexema, "and&&");

            }
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 586 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp: exp TOK_OR exp \n");

              if((yyvsp[-2].atributos).tipo != BOOLEANO || (yyvsp[0].atributos).tipo!= BOOLEANO ){
                fprintf(stdout, "ERROR, no se puede hacer OR entre cosas diferentes a booleanos\n" );
                exit(-1);
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable1 = 0;
              }else{
                  es_variable1=1;
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable2 = 0;
              }else{
                  es_variable2=1;
              }

              o(salida,es_variable1,es_variable2);
              (yyval.atributos).tipo = (yyvsp[-2].atributos).tipo;
              (yyval.atributos).es_direccion=0;
              sprintf((yyval.atributos).lexema, "or||");

            }
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 610 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\texp:'!' exp\n");

              if((yyvsp[0].atributos).tipo != BOOLEANO){
                fprintf(stdout, "ERROR, no se puede hacer NO en cosas diferentes a booleanos\n" );
                exit(-1);
              }
              if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  es_variable1 = 0;
              }else{
                  es_variable1=1;
              }
              (yyval.atributos).es_direccion=0;
              (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
              no(salida,es_variable1,etiqueta_global++);
              sprintf((yyval.atributos).lexema, "!no");

              }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 628 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\texp: TOK_IDENTIFICADOR\n");
          if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==OK){
              escribir_operando(salida, (yyvsp[0].atributos).lexema, 1);
              (yyval.atributos).tipo = e->tipo;
              (yyval.atributos).es_direccion = 1;
              strcpy((yyval.atributos).lexema, (yyvsp[0].atributos).lexema);

          }
          else{
              printf("ERROR SEMANTICO: %d:%d - Identificador %s no declarado\n", line, columna-yyleng, (yyvsp[0].atributos).lexema);
              exit(-1);
          }
        }
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 642 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\texp: constante \n");

                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 648 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp:'(' exp ')' \n");}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 649 "omicron.y" /* yacc.c:1646  */
    {
            fprintf(salida,";R:\texp:'(' comparacion ')' \n");
            (yyval.atributos).tipo = (yyvsp[-1].atributos).tipo;
            strcpy((yyval.atributos).lexema, (yyvsp[-1].atributos).lexema);
          }
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 654 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: elemento_vector");}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 655 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 656 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 657 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR \n");}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 668 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador_clase: TOK_IDENTIFICADOR \n");}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 669 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador_clase: TOK_ITSELF \n");}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 672 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones: exp resto_lista_expresiones\n");}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 673 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones:\n");}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 676 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones: ',' exp resto_lista_expresiones\n");}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 677 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_lista_expresiones:\n");}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 680 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_IGUAL exp \n");

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo){
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable1 = 0;
                }else{
                    es_variable1=1;
                }
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable2 = 0;
                }else{
                    es_variable2=1;
                }
                igual(salida, es_variable1, es_variable2, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEANO;
                (yyval.atributos).es_direccion = 0;
                strcpy((yyval.atributos).lexema, "igual==");
              }
              else{
                printf("ERROR SEMANTICO: %d:%d - No se puede hacer la comparacion == entre objetos de diferentes tipos\n",line, columna-yyleng);
                exit(-1);
              }
        }
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 704 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_DISTINTO exp \n");
              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo){
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable1 = 0;
                }else{
                    es_variable1=1;
                }
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable2 = 0;
                }else{
                    es_variable2=1;
                }
                distinto(salida, es_variable1, es_variable2, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEANO;
                (yyval.atributos).es_direccion = 0;
                sprintf((yyval.atributos).lexema, "distinto!=");
              }

              else{
                printf("ERROR SEMANTICO: %d:%d - No se puede hacer la comparacion != entre objetos de diferentes tipos\n",line, columna-yyleng);
                exit(-1);
              }
            }
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 729 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_MENORIGUAL exp \n");

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo && (yyvsp[-2].atributos).tipo==ENTERO){
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable1 = 0;
                }else{
                    es_variable1=1;
                }
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable2 = 0;
                }else{
                    es_variable2=1;
                }
                menor_igual(salida, es_variable1, es_variable2, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEANO;
                (yyval.atributos).es_direccion = 0;
                sprintf((yyval.atributos).lexema, "menoigual<=");
              }
              else{
                printf("ERROR SEMANTICO: %d:%d - No se puede hacer la comparacion <= entre objetos no enteros\n",line, columna-yyleng);
                exit(-1);
              }
            }
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 753 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_MAYORIGUAL exp \n");

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo && (yyvsp[-2].atributos).tipo==ENTERO){
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable1 = 0;
                }else{
                    es_variable1=1;
                }
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable2 = 0;
                }else{
                    es_variable2=1;
                }
                mayor_igual(salida, es_variable1, es_variable2, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEANO;
                (yyval.atributos).es_direccion = 0;
                sprintf((yyval.atributos).lexema, "mayorigual>=");
              }
              else{
                printf("ERROR SEMANTICO: %d:%d - No se puede hacer la comparacion >= entre objetos no enteros\n",line, columna-yyleng);
                exit(-1);
              }
            }
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 777 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp < exp \n");

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo && (yyvsp[-2].atributos).tipo==ENTERO){
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable1 = 0;
                }else{
                    es_variable1=1;
                }
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable2 = 0;
                }else{
                    es_variable2=1;
                }
                menor(salida, es_variable1, es_variable2, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEANO;
                (yyval.atributos).es_direccion = 0;
                sprintf((yyval.atributos).lexema, "mayor>");
              }
              else{
                printf("ERROR SEMANTICO: %d:%d - No se puede hacer la comparacion < entre objetos no enteros\n",line, columna-yyleng);
                exit(-1);
              }
            }
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 801 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp > exp \n");

              if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo && (yyvsp[-2].atributos).tipo==ENTERO){
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[-2].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable1 = 0;
                }else{
                    es_variable1=1;
                }
                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                    es_variable2 = 0;
                }else{
                    es_variable2=1;
                }
                mayor(salida, es_variable1, es_variable2, etiqueta_global++);
                (yyval.atributos).tipo = BOOLEANO;
                (yyval.atributos).es_direccion = 0;
                sprintf((yyval.atributos).lexema, "mayor>");
              }
              else{
                printf("ERROR SEMANTICO: %d:%d - No se puede hacer la comparacion > entre objetos no enteros\n",line, columna-yyleng);
                exit(-1);
              }
            }
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 827 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante: constante_logica\n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 831 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante: constante_entera\n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 836 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante_logica: TOK_TRUE\n");
                    char valor[]={"1"};
                    (yyval.atributos).tipo = BOOLEANO;
                    (yyval.atributos).es_direccion = 0;
                    (yyval.atributos).valor_entero = 1;
                    escribir_operando(salida, valor, 0);

        }
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 844 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante_logica: TOK_FALSE\n");
                    char valor[]={"0"};
                    (yyval.atributos).tipo = BOOLEANO;
                    (yyval.atributos).es_direccion = 0;
                    (yyval.atributos).valor_entero = 0;
                    escribir_operando(salida, valor, 0);

        }
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 853 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tconstante_entera: TOK_CONSTANTE_ENTERA\n");
                (yyval.atributos).tipo =ENTERO;
                (yyval.atributos).es_direccion = 0;
                char valor[20];
                sprintf(valor, "%d", (yyvsp[0].atributos).valor_entero);
                escribir_operando(salida, valor, 0);
        }
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 865 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida, ";R:\tidentificador: TOK_IDENTIFICADOR");
                (yyvsp[0].atributos).tipo=tipo_actual;

                tipo_actual =0;


                elementoTablaSimbolos *elemento = nodo_crearElementoTablaSimbolos();
                elemento = nodo_set_ElementoTablaSimbolos(elemento,
                                          (yyvsp[0].atributos).lexema,
                													clase_actual,
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

                if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema, &e, idAmbito)==ERROR){
                  if((yyvsp[0].atributos).tipo == BOOLEANO || (yyvsp[0].atributos).tipo ==ENTERO){
                    if(insertarTablaSimbolosAmbitos(tsa, (yyvsp[0].atributos).lexema,  elemento) == ERROR){
                      printf("ERROR SEMANTICO: %d:%d - Identificador %s duplicado\n",line, columna-yyleng, (yyvsp[0].atributos).lexema);
                      exit(-1);
                    }

                  }

                }
                else{
                  printf("ERROR SEMANTICO: %d:%d - Identificador %s duplicado\n",line, columna-yyleng, (yyvsp[0].atributos).lexema);
                  exit(-1);
                }

              nodo_free_ElementoTablaSimbolos(elemento);

              //nodo_free_ElementoTablaSimbolos(e);
        }
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2743 "y.tab.c" /* yacc.c:1646  */
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
#line 929 "omicron.y" /* yacc.c:1906  */



void yyerror(char * s)
{
  if(yychar != TOK_ERROR)
    printf("ERROR SINTACTICO: %d:%d\n",line, columna-yyleng);
    escribir_fin(salida);

}
