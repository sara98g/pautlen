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
  extern tablaSimbolosClases* ts_c;

  extern FILE* yyin;
  extern FILE* salida;
  extern int columna;
  extern int line;
  extern char* idclase;
  void yyerror( char *s);

  int clase_actual, tipo_actual, tamanio_actual;



#line 90 "y.tab.c" /* yacc.c:339  */

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
#line 25 "omicron.y" /* yacc.c:355  */

        tipo_atributo atributos;
  

#line 241 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

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
       0,    98,    98,    99,   104,   112,   118,   121,   122,   125,
     126,   129,   130,   131,   132,   133,   134,   135,   136,   139,
     140,   141,   144,   145,   148,   153,   156,   157,   160,   163,
     164,   168,   170,   174,   175,   178,   223,   224,   225,   228,
     229,   232,   233,   236,   237,   240,   241,   244,   245,   248,
     249,   252,   253,   254,   255,   256,   257,   258,   261,   264,
     265,   268,   276,   277,   278,   279,   282,   285,   286,   290,
     293,   294,   297,   303,   304,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   321,   326,   327,   328,   329,   330,
     331,   342,   343,   346,   347,   350,   351,   354,   355,   356,
     357,   358,   359,   362,   366,   371,   375,   381,   390
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
  "'>'", "$accept", "programa", "iniciar_TS", "escribir_TS", "inicio_main",
  "declaraciones", "declaracion", "modificadores_acceso", "clase",
  "declaracion_clase", "modificadores_clase", "clase_escalar", "tipo",
  "clase_objeto", "clase_vector", "identificadores", "funciones",
  "funcion", "tipo_retorno", "parametros_funcion",
  "resto_parametros_funcion", "parametro_funcion", "declaraciones_funcion",
  "sentencias", "sentencia", "sentencia_simple", "destruir_objeto",
  "bloque", "asignacion", "elemento_vector", "condicional", "bucle",
  "lectura", "escritura", "retorno_funcion", "exp", "identificador_clase",
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

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -92

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   -23,    45,     4,    36,  -140,     2,   108,   268,    36,
     108,    48,    69,    71,  -140,    29,  -140,    54,  -140,     8,
      24,    61,    54,    61,    40,   268,    35,  -140,  -140,  -140,
      44,  -140,  -140,  -140,  -140,  -140,    43,   -15,  -140,  -140,
     162,    88,  -140,  -140,  -140,  -140,  -140,  -140,    54,  -140,
    -140,    54,  -140,  -140,  -140,  -140,  -140,    61,    61,    61,
    -140,   161,    54,  -140,  -140,  -140,    20,    61,   214,  -140,
      51,   161,  -140,  -140,  -140,    22,    54,    61,    61,    25,
      36,  -140,    83,    54,    53,   110,  -140,  -140,  -140,  -140,
      57,    60,  -140,  -140,   195,    52,    61,    61,    61,    61,
      61,    61,    62,    61,    97,   268,    54,   161,   -41,   175,
     188,    64,    54,   161,  -140,    70,    73,    72,  -140,    54,
    -140,    18,    61,    61,    61,    61,  -140,    61,    61,  -140,
      37,  -140,    37,    37,  -140,  -140,    61,    82,    78,    89,
      90,    61,    61,  -140,    61,  -140,  -140,    93,   268,   134,
    -140,    54,     1,    54,    54,    94,   103,   161,   161,   161,
     161,   161,   161,    99,  -140,   268,  -140,    61,   100,   161,
     188,    61,   113,    42,  -140,    54,   108,  -140,  -140,    95,
      18,  -140,  -140,   120,   106,  -140,  -140,   118,  -140,  -140,
     134,   127,    36,   162,   103,   165,  -140,  -140,   132,   108,
     137,  -140,   268,  -140,   140,  -140,    36,  -140,   142,   268,
     158,  -140,   172,  -140,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    34,     1,     0,    18,     0,    34,
      18,    14,    15,    16,    17,     0,   108,     0,    92,     0,
       0,     0,     0,     0,     0,    47,     0,    57,    50,    51,
       0,    59,    60,    52,    53,    54,     0,    91,    33,     5,
       8,    24,    11,    12,    13,    36,    26,    27,     0,    37,
      38,     0,    58,   107,    74,   106,   105,     0,     0,     0,
      87,    73,     0,    84,   103,   104,    83,     0,     0,    71,
      70,    72,     3,    48,    49,     0,     0,     0,    94,     0,
      34,     7,     0,     0,     0,     0,    19,    25,    21,    20,
       0,     0,    79,    82,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    94,     0,     0,     0,    62,     0,     0,
      96,     0,     0,    61,     6,     0,     0,    31,    10,     0,
      28,    40,     0,     0,     0,     0,    85,     0,     0,    86,
      81,    80,    75,    76,    78,    77,    94,     0,     0,     0,
       0,    94,     0,    66,     0,    93,    56,     0,     0,     0,
       9,     0,     0,     0,     0,     0,    42,    97,    98,    99,
     100,   101,   102,     0,    88,     0,    69,    94,     0,    65,
      96,    94,     0,     0,    32,     0,    18,    43,    44,     0,
       0,    39,    89,     0,     0,    55,    95,     0,     2,    29,
       0,     0,    34,    46,    42,    67,    63,    64,     0,    18,
       0,    45,     0,    41,     0,    30,    34,    23,     0,     0,
       0,    35,     0,    22,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,  -140,   -37,  -140,   193,  -140,  -140,
    -140,  -140,   -10,     5,  -140,   -84,    -2,  -140,  -140,  -140,
      39,    67,  -140,   -24,  -140,  -140,  -140,  -140,  -140,    -6,
    -140,  -140,  -140,  -140,  -140,   112,    -4,   -97,    85,  -140,
    -140,  -140,  -139,    -8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    80,   148,    39,    40,    41,    83,    84,
      85,    86,   153,   154,    89,   116,     8,     9,    51,   155,
     181,   156,   202,    24,    25,    26,    27,    28,    29,    60,
      31,    32,    33,    34,    35,   110,    62,   111,   145,    95,
      63,    64,    65,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    73,    30,    81,    36,    49,   137,    38,   175,    52,
     173,    16,    53,    54,    70,     1,    69,    37,    18,    30,
      50,    36,     6,   -91,   141,    16,    53,   142,    16,    53,
     106,    87,    18,   112,    45,    18,     4,    46,    47,   163,
      90,    55,    56,    91,   168,     5,    88,    77,    46,    47,
      78,   198,     7,    79,   102,    55,    56,    16,    55,    56,
     176,    10,    57,    42,    16,    53,    58,   174,   108,    97,
     184,    18,   115,    59,   187,   117,    57,    48,   114,    57,
      58,   139,    77,    58,    43,   103,    44,    59,    48,    67,
      59,   191,   100,   101,    55,    56,    74,    37,   140,    30,
      72,    36,    46,    47,   147,   189,   190,    46,    47,    82,
      76,   152,    75,    77,   118,    57,   119,   120,   129,    58,
      11,    12,    13,    14,   172,   121,    59,   136,    96,    97,
     146,    61,   149,    68,   150,    71,   151,   165,    53,   192,
      37,   183,    30,   117,    36,   177,   178,    48,   164,   166,
      98,    99,   100,   101,   193,   167,   201,    37,   171,    30,
     179,    36,   206,   138,   180,   182,   185,   117,   -18,    92,
      93,    94,   196,   188,    11,    12,    13,    14,   208,   104,
     195,   -18,   -18,   -18,   197,   212,   199,   107,   204,   109,
     200,   113,    96,    97,    37,   205,    30,   207,    36,   209,
      15,    37,   211,    30,   210,    36,    96,    97,   130,   131,
     132,   133,   134,   135,    98,    99,   100,   101,   213,    96,
      97,   -18,   122,   123,   124,   125,    96,    97,    98,    99,
     100,   101,   214,   203,   157,   158,   159,   160,   143,   161,
     162,    98,    99,   100,   101,    96,    97,   194,    98,    99,
     100,   101,   144,     0,   169,   186,   170,     0,     0,     0,
       0,   126,     0,     0,   127,   128,     0,    98,    99,   100,
     101,    16,     0,   105,     0,     0,     0,    17,    18,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
      20,     0,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       8,    25,     8,    40,     8,    15,   103,     9,     7,    17,
     149,     3,     4,     5,    22,    18,    22,    25,    10,    25,
      15,    25,    18,     3,    65,     3,     4,    68,     3,     4,
       8,    41,    10,     8,     5,    10,    59,    19,    20,   136,
      48,    33,    34,    51,   141,     0,    41,    62,    19,    20,
      65,   190,    16,    68,    62,    33,    34,     3,    33,    34,
      59,    59,    54,    15,     3,     4,    58,   151,    76,    32,
     167,    10,    82,    65,   171,    83,    54,    59,    80,    54,
      58,   105,    62,    58,    15,    65,    15,    65,    59,    65,
      65,   175,    55,    56,    33,    34,    61,   105,   106,   105,
      60,   105,    19,    20,   112,    63,    64,    19,    20,    21,
      67,   119,    68,    62,    61,    54,     6,    60,    66,    58,
      12,    13,    14,    15,   148,    65,    65,    65,    31,    32,
      66,    19,    62,    21,    61,    23,    64,    59,     4,   176,
     148,   165,   148,   151,   148,   153,   154,    59,    66,    60,
      53,    54,    55,    56,    59,    65,   193,   165,    65,   165,
      66,   165,   199,    66,    61,    66,    66,   175,     6,    57,
      58,    59,    66,    60,    12,    13,    14,    15,   202,    67,
      60,    19,    20,    21,    66,   209,    59,    75,    23,    77,
     192,    79,    31,    32,   202,    63,   202,    60,   202,    59,
       7,   209,    60,   209,   206,   209,    31,    32,    96,    97,
      98,    99,   100,   101,    53,    54,    55,    56,    60,    31,
      32,    59,    27,    28,    29,    30,    31,    32,    53,    54,
      55,    56,    60,   194,   122,   123,   124,   125,    63,   127,
     128,    53,    54,    55,    56,    31,    32,   180,    53,    54,
      55,    56,    64,    -1,   142,   170,   144,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    69,    70,    -1,    53,    54,    55,
      56,     3,    -1,    59,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    -1,    24,    25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    72,    73,    59,     0,    18,    16,    87,    88,
      59,    12,    13,    14,    15,    78,     3,     9,    10,    17,
      22,    24,    25,    26,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   107,   114,    87,    76,
      77,    78,    15,    15,    15,     5,    19,    20,    59,    83,
      84,    89,   114,     4,     5,    33,    34,    54,    58,    65,
     100,   106,   107,   111,   112,   113,   114,    65,   106,   100,
     114,   106,    60,    94,    61,    68,    67,    62,    65,    68,
      74,    76,    21,    79,    80,    81,    82,    83,    84,    85,
     114,   114,   106,   106,   106,   110,    31,    32,    53,    54,
      55,    56,   114,    65,   106,    59,     8,   106,   114,   106,
     106,   108,     8,   106,    87,    83,    86,   114,    61,     6,
      60,    65,    27,    28,    29,    30,    66,    69,    70,    66,
     106,   106,   106,   106,   106,   106,    65,   108,    66,    94,
     114,    65,    68,    63,    64,   109,    66,   114,    75,    62,
      61,    64,   114,    83,    84,    90,    92,   106,   106,   106,
     106,   106,   106,   108,    66,    59,    60,    65,   108,   106,
     106,    65,    94,   113,    86,     7,    59,   114,   114,    66,
      61,    91,    66,    94,   108,    66,   109,   108,    60,    63,
      64,    86,    76,    59,    92,    60,    66,    66,   113,    59,
      87,    76,    93,    91,    23,    63,    76,    60,    94,    59,
      87,    60,    94,    60,    60
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
     103,   103,   104,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   110,
     110,   110,   110,   111,   111,   112,   112,   113,   114
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
       1,     3,     3,     7,     7,     5,     4,     7,    11,     5,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     2,
       3,     3,     2,     1,     1,     3,     3,     1,     4,     5,
       2,     1,     1,     2,     0,     3,     0,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1
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
#line 98 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tprograma: TOK_MAIN '{' declaraciones funciones sentencias '}'\n"); escribir_fin(salida);}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 99 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tprograma: TOK_MAIN '{' funciones sentencias '}'\n");}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 104 "omicron.y" /* yacc.c:1646  */
    {

        escribir_subseccion_data(salida);
        escribir_cabecera_bss(salida);

      }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 112 "omicron.y" /* yacc.c:1646  */
    {
                /*escribirTS(); con cada simbolo -> declaracion variables*/
                escribir_segmento_codigo(salida); /*La profe pone texto en vez de codigo*/
        }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 118 "omicron.y" /* yacc.c:1646  */
    {
                escribir_inicio_main(salida);
        }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones: declaracion declaraciones\n");}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 122 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones: declaracion\n");}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 125 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion: modificadores_acceso clase identificadores ';'\n");}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 126 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion: modificadores_acceso declaracion_clase ';'\n");}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 129 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN TOK_UNIQUE\n");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 130 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET TOK_UNIQUE\n");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 131 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED TOK_UNIQUE\n");}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 132 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN\n");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 133 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET\n");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 134 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED\n");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 135 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_UNIQUE\n");}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 136 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso:\n");}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 139 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_escalar\n");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 140 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_vector\n");}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 141 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_objeto\n");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 144 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS identificador TOK_INHERITS identificadores '{' declaraciones funciones '}'\n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 145 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS identificador '{' declaraciones funciones '}'\n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 148 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\tmodificadores_clase:\n");
        }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_escalar: tipo\n"); clase_actual= ESCALAR;}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 156 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo: TOK_INT\n"); tipo_actual = ENTERO;}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 157 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo: TOK_BOOLEAN\n"); tipo_actual = BOOLEAN;}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 160 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_objeto: '{' identificador '}'\n");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 163 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ']'\n");}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 164 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ',' constante_entera ']'\n");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 169 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificadores: identificador\n");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 171 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificadores: identificador ','identificadores\n");}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 174 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tfunciones: funcion funciones\n");}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 175 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tfunciones:\n");}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 178 "omicron.y" /* yacc.c:1646  */
    {
        fprintf(salida,";R:\tfuncion: TOK_FUNCTION modificadores_acceso tipo_retorno identificador '(' parametro_funcion ')' declaraciones_funcion sentencia\n");}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 223 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo_retorno: TOK_NONE\n");}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 224 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tipo_retorno: tipo\n");}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 225 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tipo_retorno: clase_objeto\n");}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 228 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametros_funcion: parametro_funcion resto_parametros_funcion\n");}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 229 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametros_funcion:\n");}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 232 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_parametros_funcion: ; parametro_funcion resto_parametros_funcion\n");}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 233 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_parametros_funcion:\n");}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 236 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametro_funcion: tipo identificador\n");}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 237 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametro_funcion: clase_objeto identificador\n");}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 240 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones_funcion: declaraciones_funcion\n");}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 241 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones_funcion:\n");}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 244 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencias: sentencia\n");}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 245 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencias: sentencia sentencias\n");}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 248 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia: sentencia_simple ';'\n");}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 249 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia: bloque\n");}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 252 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: asignacion\n");}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 253 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: lectura\n");}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 254 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: escritura\n");}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 255 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: retorno_funcion\n");}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 256 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: identificador_clase '.' identificador '(' lista_expresiones ')'\n");}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 257 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: identificador '(' lista_expresiones ')'\n");}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 258 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: destruir_objeto \n");}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 261 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdestruir_objeto: TOK_DISCARD identificador \n");}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 264 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tbloque: condicional\n");}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 265 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tbloque: bucle\n");}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 268 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tasignacion: identificador '=' exp\n");
                //elementoTablaSimbolos * e = NULL;
                // buscarTablaSimbolosAmbitoActual(tablaSimbolosAmbitos * t, ,e, GLOBAL)
                //Buscar_TS --> e
                //if e.tipo == $3.tipo
                  //      asignar()
}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 276 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: elemento_vector '=' exp\n");}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 277 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: identificador '=' TOK_INSTANCE_OF identificador '(' lista_expresiones ')'\n");}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 278 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador '=' TOK_INSTANCE_OF identificador '(' lista_expresiones ')'\n");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 279 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: identificador_clase '.' identificador '=' exp \n");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 282 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\telemento_vector: identificador '[' exp ']'\n");}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 285 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' \n");}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 286 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' TOK_ELSE '{' sentencias '}' \n");}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 290 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tbucle: TOK_WHILE exp '{' sentencias '}' \n");}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 293 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlectura: TOK_SCANF identificador  \n");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 294 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlectura: TOK_SCANF elemento_vector \n");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 297 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tescritura: TOK_PRINTF exp\n");
                //escribirTS()
        }
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 303 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN exp\n");}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 304 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN TOK_NONE\n");}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 307 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: exp '+' exp \n");}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 308 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: exp '-' exp \n");}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 309 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: exp '/' exp \n");}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 310 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: exp '*' exp \n");}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 311 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: '-' exp \n");}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 312 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: exp TOK_AND exp  \n");}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 313 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: exp TOK_OR exp \n");}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 314 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp:'!' exp\n");}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 315 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\texp: identificador \n");
          /*en_exp_list = 0
            Comprobar nombre funcion
            BuscarTS */
        }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 321 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\texp: constante \n");
                //$$.tipo = $1.tipo
                //$$.es_direccion = $1.es_direccion
        }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 326 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp:'(' exp ')' \n");}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 327 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp:'(' comparacion ')' \n");}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 328 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: elemento_vector");}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 329 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador '(' lista_expresiones ')' \n");}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 330 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador_clase identificador '(' lista_expresiones ')' \n");}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 331 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador_clase identificador \n");}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 342 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador_clase: identificador \n");}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 343 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador_clase: TOK_ITSELF \n");}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 346 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones: exp resto_lista_expresiones\n");}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 347 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones:\n");}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 350 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones: ',' exp resto_lista_expresiones\n");}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 351 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_lista_expresiones:\n");}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 354 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcomparacion: exp TOK_IGUAL exp \n");}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 355 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcomparacion: exp TOK_DISTINTO exp \n");}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 356 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcomparacion: exp TOK_MENORIGUAL exp \n");}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 357 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcomparacion: exp TOK_MAYORIGUAL exp \n");}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 358 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcomparacion: exp < exp \n");}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 359 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcomparacion: exp > exp \n");}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 362 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante: constante_logica\n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 366 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante: constante_entera\n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 371 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante_logica: TOK_TRUE\n");
                    (yyval.atributos).tipo = BOOLEAN;
                    (yyval.atributos).es_direccion = 0;
        }
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 375 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante_logica: TOK_FALSE\n");
                    (yyval.atributos).tipo = BOOLEAN;
                    (yyval.atributos).es_direccion = 0;

        }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 381 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tconstante_entera: TOK_CONSTANTE_ENTERA\n");
                (yyval.atributos).tipo = INT;
                (yyval.atributos).es_direccion = 0;
                //escribir_operando($1.valor_entero....)
        }
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 391 "omicron.y" /* yacc.c:1646  */
    {/*
                fprintf(salida, ";R:\tidentificador: TOK_IDENTIFICADOR");
                elementoTablaSimbolos * e = NULL;
                char* ambito;
                e = nodo_set_ElementoTablaSimbolos(e,
                                          $1.lexema,
                													0,
                													VARIABLE,
                													$1.tipo,
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
                if(buscarTablaSimbolosClasesAmbitoActual(ts_c, idclase, $1.lexema, e, ambito) == ERROR){
                  fprintf(salida,"Error al insertar en la TS, elemento ya insertado\n");
                  exit(-1);
                }


                else{
                  if($1.tipo == BOOLEAN || $1.tipo==INT){
                    if(insertarTablaSimbolosClases(ts_c,
                                            idclase,
                                            $1.lexema,
                                            0,
                                            VARIABLE,
                                            $1.tipo,
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
                                            NULL) == ERROR){
                        fprintf(salida, "Error al insertart\n");
                        exit(-1);
                      }
                  }
                  else{
                    fprintf(salida, "El elemento a insertar no es de tipo boolean o int\n");
                    exit(Error);
                  }

                }*/
        }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2287 "y.tab.c" /* yacc.c:1646  */
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
#line 480 "omicron.y" /* yacc.c:1906  */



void yyerror(char * s)
{
  if(yychar != TOK_ERROR)
    printf("ERROR SINTACTICO: %d:%d\n",line, columna-yyleng);
    escribir_fin(salida); /*O en el .c (CREO)*/

}
