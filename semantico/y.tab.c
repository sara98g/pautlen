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
#define YYLAST   273

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
       0,   102,   102,   103,   108,   115,   141,   145,   148,   149,
     152,   153,   156,   157,   158,   159,   160,   161,   162,   163,
     166,   167,   168,   171,   172,   175,   180,   183,   184,   187,
     190,   196,   200,   202,   206,   207,   210,   255,   256,   257,
     260,   261,   264,   265,   268,   269,   272,   273,   276,   277,
     280,   281,   284,   285,   286,   287,   288,   289,   290,   293,
     296,   297,   300,   311,   312,   313,   314,   317,   322,   323,
     326,   332,   337,   345,   349,   352,   355,   361,   362,   364,
     376,   387,   398,   410,   412,   427,   441,   455,   464,   469,
     470,   471,   472,   473,   474,   485,   486,   489,   490,   493,
     494,   497,   509,   522,   538,   554,   570,   588,   592,   597,
     605,   614,   625
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
  "elemento_vector", "condicional", "if_exp", "bucle", "while_exp",
  "while", "lectura", "escritura", "retorno_funcion", "exp",
  "identificador_clase", "lista_expresiones", "resto_lista_expresiones",
  "comparacion", "constante", "constante_logica", "constante_entera",
  "identificador", YY_NULLPTR
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

#define YYPACT_NINF -106

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-106)))

#define YYTABLE_NINF -96

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,   -43,    35,   132,  -106,    33,    40,    49,  -106,   219,
    -106,   150,    22,   247,    24,  -106,  -106,  -106,     7,  -106,
    -106,  -106,  -106,     1,    66,    79,    30,    86,  -106,  -106,
    -106,  -106,   125,    90,  -106,    29,    31,    38,   101,    20,
      45,   247,    47,  -106,  -106,  -106,    44,  -106,    50,  -106,
     247,    20,  -106,  -106,  -106,    54,  -106,  -106,  -106,  -106,
     114,    24,    60,    71,  -106,    72,    68,  -106,   136,    20,
      20,    76,  -106,     8,  -106,  -106,  -106,  -106,    20,    20,
      20,  -106,   193,   137,  -106,  -106,  -106,    20,  -106,    73,
    -106,   193,  -106,  -106,  -106,   103,    84,    89,   157,   147,
      93,  -106,   151,  -106,  -106,    79,     2,   188,   174,    88,
     156,   193,    20,  -106,  -106,   148,   100,    20,    20,    20,
      20,    20,    20,   102,   193,   170,   193,   247,  -106,   122,
     -21,    -2,   247,    25,  -106,    79,   219,  -106,    20,  -106,
    -106,   117,   119,    20,    20,    20,    20,  -106,    20,    20,
    -106,   -10,  -106,   -10,   -10,  -106,  -106,    20,   118,   126,
    -106,    20,    20,   192,   197,   141,   154,   161,  -106,   151,
     149,    24,   174,    20,  -106,   193,   193,   193,   193,   193,
     193,   160,    20,   199,   169,   193,  -106,  -106,   177,    -2,
    -106,  -106,   153,   219,   179,  -106,   171,  -106,   186,   181,
    -106,   150,   154,  -106,  -106,    24,  -106,  -106,  -106,   247,
    -106,   247,  -106,   185,   194,   195,  -106,  -106,  -106
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    35,     1,    15,    16,    17,    18,    19,
       4,     9,    25,     0,    35,    12,    13,    14,     0,     5,
       8,    27,    28,     0,     0,     0,     0,     0,    20,    26,
      22,    21,    95,     0,    96,     0,     0,     0,     0,     0,
       0,    48,     0,    58,    51,    52,     0,    60,     0,    61,
       0,     0,    53,    54,    55,     0,    34,    37,    38,    39,
       0,    35,     0,     0,   112,     0,    32,    11,     0,     0,
      98,     0,    59,    87,   111,    78,   110,   109,     0,     0,
       0,    91,    77,     0,    88,   107,   108,     0,    73,    74,
      75,    76,     3,    49,    50,     0,     0,     0,     0,     0,
       0,     6,     0,    29,    10,     0,     0,     0,   100,     0,
       0,    62,    98,    83,    86,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    70,     0,    63,     0,    71,     0,
       0,    41,     0,     0,    33,     0,    19,    67,     0,    97,
      57,     0,     0,     0,     0,     0,     0,    89,     0,     0,
      90,    85,    84,    79,    80,    82,    81,    98,     0,     0,
      72,    98,     0,     0,     0,     0,    43,     0,    30,     0,
       0,    35,   100,    98,    92,   101,   102,   103,   104,   105,
     106,     0,    98,    68,     0,    66,    44,    45,     0,     0,
      40,     7,     0,    19,     0,    99,     0,    93,     0,     0,
      56,    47,    43,     2,    31,    35,    24,    65,    64,     0,
      46,     0,    42,     0,     0,     0,    23,    69,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,  -106,  -106,  -106,    -9,  -106,   244,  -106,
    -106,  -106,  -106,    53,    -4,  -106,   -99,   -11,  -106,  -106,
    -106,    56,    70,  -106,   -37,  -106,  -106,  -106,  -106,  -106,
     -13,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,   -20,
     -12,  -105,    91,  -106,  -106,  -106,   -97,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    61,   132,   203,    10,    11,    12,    25,
      26,    27,    28,   163,   164,    31,    65,    13,    14,    60,
     165,   190,   166,   211,    40,    41,    42,    43,    44,    45,
      81,    47,    48,    49,    50,    51,    52,    53,    54,   108,
      83,   109,   139,   116,    84,    85,    86,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    55,    20,    56,    93,   133,   134,   142,    30,   135,
       1,   -95,    57,    97,    59,    82,     3,    21,    22,    91,
      21,    22,   118,    73,    74,    90,    21,    22,    46,    55,
      34,    98,    73,    74,    75,     4,   170,    46,    55,    34,
       9,    21,    22,    23,   161,   121,   122,   162,    15,   107,
     101,   111,   181,    76,    77,    16,   184,    24,   113,   114,
     115,   136,    76,    77,    17,    29,    24,   124,   196,    63,
      69,    58,   192,   112,    78,   126,    62,   198,    79,    73,
      74,    24,    64,    78,   110,    80,    34,    79,   168,   169,
     159,    67,    68,    72,    80,   167,    87,   151,   152,   153,
     154,   155,   156,    88,    89,    92,    73,    74,    94,    76,
      77,   125,    95,    34,    46,    55,    96,   100,   172,    46,
      55,    99,   102,   175,   176,   177,   178,   171,   179,   180,
      78,   103,   105,   104,    79,    69,    76,    77,   -19,   106,
     123,    80,   185,   127,     5,     6,     7,     8,     9,   128,
     130,   -19,   -19,   -19,   140,    74,   -19,    78,   131,   141,
     194,    79,     5,     6,     7,     8,   150,   157,    80,   -19,
     -19,   -19,   214,   158,   215,   143,   144,   145,   146,   117,
     118,   160,   173,   182,   205,   174,   183,    69,   117,   118,
      70,   -19,   210,    71,   213,   186,    46,    55,    46,    55,
     187,   119,   120,   121,   122,   117,   118,   188,   193,   -19,
     119,   120,   121,   122,   147,   189,   204,   148,   149,   117,
     118,   191,   199,   129,   117,   118,   197,   119,   120,   121,
     122,     5,     6,     7,     8,   200,   201,   207,   138,   206,
     209,   119,   120,   121,   122,   216,   119,   120,   121,   122,
      32,   137,   208,    18,   217,   218,    33,    34,   212,   202,
       0,     0,     0,   195,    35,     0,     0,     0,     0,    36,
       0,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
      13,    13,    11,    14,    41,   102,   105,   112,    12,     7,
      18,     3,     5,    50,    18,    35,    59,    19,    20,    39,
      19,    20,    32,     3,     4,    38,    19,    20,    41,    41,
      10,    51,     3,     4,     5,     0,   135,    50,    50,    10,
      16,    19,    20,    21,    65,    55,    56,    68,    15,    69,
      61,    71,   157,    33,    34,    15,   161,    59,    78,    79,
      80,    59,    33,    34,    15,    12,    59,    87,   173,     3,
      62,    18,   169,    65,    54,    95,    23,   182,    58,     3,
       4,    59,     3,    54,     8,    65,    10,    58,    63,    64,
     127,    61,     6,     3,    65,   132,    65,   117,   118,   119,
     120,   121,   122,    65,     3,    60,     3,     4,    61,    33,
      34,     8,    68,    10,   127,   127,    66,     3,   138,   132,
     132,    67,    62,   143,   144,   145,   146,   136,   148,   149,
      54,    60,    64,    61,    58,    62,    33,    34,     6,     3,
       3,    65,   162,    59,    12,    13,    14,    15,    16,    60,
       3,    19,    20,    21,    66,     4,     6,    54,    65,     3,
     171,    58,    12,    13,    14,    15,    66,    65,    65,    19,
      20,    21,   209,     3,   211,    27,    28,    29,    30,    31,
      32,    59,    65,    65,   193,    66,    60,    62,    31,    32,
      65,    59,   201,    68,   205,     3,   209,   209,   211,   211,
       3,    53,    54,    55,    56,    31,    32,    66,    59,    59,
      53,    54,    55,    56,    66,    61,    63,    69,    70,    31,
      32,    60,    23,    66,    31,    32,    66,    53,    54,    55,
      56,    12,    13,    14,    15,    66,    59,    66,    64,    60,
      59,    53,    54,    55,    56,    60,    53,    54,    55,    56,
       3,    63,    66,     9,    60,    60,     9,    10,   202,   189,
      -1,    -1,    -1,   172,    17,    -1,    -1,    -1,    -1,    22,
      -1,    24,    25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    72,    59,     0,    12,    13,    14,    15,    16,
      77,    78,    79,    88,    89,    15,    15,    15,    79,    73,
      77,    19,    20,    21,    59,    80,    81,    82,    83,    84,
      85,    86,     3,     9,    10,    17,    22,    24,    25,    26,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   111,    88,     5,    84,    85,
      90,    74,    84,     3,     3,    87,   118,    61,     6,    62,
      65,    68,     3,     3,     4,     5,    33,    34,    54,    58,
      65,   101,   110,   111,   115,   116,   117,    65,    65,     3,
     101,   110,    60,    95,    61,    68,    66,    95,   110,    67,
       3,    88,    62,    60,    61,    64,     3,   110,   110,   112,
       8,   110,    65,   110,   110,   110,   114,    31,    32,    53,
      54,    55,    56,     3,   110,     8,   110,    59,    60,    66,
       3,    65,    75,   117,    87,     7,    59,    63,    64,   113,
      66,     3,   112,    27,    28,    29,    30,    66,    69,    70,
      66,   110,   110,   110,   110,   110,   110,    65,     3,    95,
      59,    65,    68,    84,    85,    91,    93,    95,    63,    64,
      87,    77,   110,    65,    66,   110,   110,   110,   110,   110,
     110,   112,    65,    60,   112,   110,     3,     3,    66,    61,
      92,    60,   117,    59,    88,   113,   112,    66,   112,    23,
      66,    59,    93,    76,    63,    77,    60,    66,    66,    59,
      77,    94,    92,    88,    95,    95,    60,    60,    60
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
     103,   104,   105,   106,   107,   107,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     116,   117,   118
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
#line 102 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tprograma: TOK_MAIN '{' declaraciones funciones sentencias '}'\n"); escribir_fin(salida);}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 103 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tprograma: TOK_MAIN '{' funciones sentencias '}'\n");}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "omicron.y" /* yacc.c:1646  */
    {
        escribir_subseccion_data(salida);
        escribir_cabecera_bss(salida);

      }
#line 1532 "y.tab.c" /* yacc.c:1646  */
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
            printf("ESTA ES LA CLAVE[%d]: %s\n", i , clave);
            n = buscarNodoHash_aux(th, clave);
            printf("LA PUTA CLAVE %s\n",n->clave);
            if(n == NULL){
              printf("El nodo ha develto NULL\n");
            }
            e = nodo_get_ElementoTablaSimbolos(n);
            if(e == NULL){
              printf("El ELEMNTO ha develto NULL\n");
            }
            printf("******** %s", e->clave);
            declarar_variable(salida, clave,  1,  1);
          }
            escribir_segmento_codigo(salida);
        }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 141 "omicron.y" /* yacc.c:1646  */
    {
                escribir_inicio_main(salida);
        }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 145 "omicron.y" /* yacc.c:1646  */
    {

        }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 148 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones: declaracion declaraciones\n");}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 149 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones: declaracion\n");}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 152 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion: modificadores_acceso clase identificadores ';'\n");}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 153 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion: modificadores_acceso declaracion_clase ';'\n");}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 156 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN TOK_UNIQUE\n");}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 157 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET TOK_UNIQUE\n");}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 158 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED TOK_UNIQUE\n");}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 159 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN\n");}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET\n");}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 161 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED\n");}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 162 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso: TOK_UNIQUE\n");}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 163 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tmodificadores_acceso:\n");}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 166 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_escalar\n");}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 167 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_vector\n");}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 168 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase: clase_objeto\n");}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 171 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS TOK_IDENTIFICADOR TOK_INHERITS identificadores '{' declaraciones funciones '}'\n");}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 172 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS TOK_IDENTIFICADOR '{' declaraciones funciones '}'\n");}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 175 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\tmodificadores_clase:\n");
        }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 180 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_escalar: tipo\n"); clase_actual= ESCALAR;}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 183 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo: TOK_INT\n"); /*tipo_actual = ENTERO;*/}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 184 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo: TOK_BOOLEAN\n"); /*tipo_actual = BOOLEAN;*/}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 187 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_objeto: '{' TOK_IDENTIFICADOR '}'\n");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 190 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ']'\n");
              /*tamanio_vector_actual = $4.valor_entero
              if ((tamanio_actual <1) || (tamanio_vector_actual > 64))
              */
            }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 196 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ',' constante_entera ']'\n");}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 201 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificadores: identificador\n");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 203 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificadores: identificador ','identificadores\n");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 206 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tfunciones: funcion funciones\n");}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 207 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tfunciones:\n");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 210 "omicron.y" /* yacc.c:1646  */
    {
        fprintf(salida,";R:\tfuncion: TOK_FUNCTION modificadores_acceso tipo_retorno TOK_IDENTIFICADOR '(' parametro_funcion ')' declaraciones_funcion sentencia\n");}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 255 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\ttipo_retorno: TOK_NONE\n");}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 256 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tipo_retorno: tipo\n");}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 257 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tipo_retorno: clase_objeto\n");}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 260 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametros_funcion: parametro_funcion resto_parametros_funcion\n");}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 261 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametros_funcion:\n");}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 264 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_parametros_funcion: ; parametro_funcion resto_parametros_funcion\n");}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 265 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_parametros_funcion:\n");}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 268 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametro_funcion: tipo identificador\n");}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 269 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tparametro_funcion: clase_objeto identificador\n");}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 272 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones_funcion: declaraciones_funcion\n");}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 273 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdeclaraciones_funcion:\n");}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 276 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencias: sentencia\n");}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 277 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencias: sentencia sentencias\n");}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 280 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia: sentencia_simple ';'\n");}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 281 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia: bloque\n");}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 284 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: asignacion\n");}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 285 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: lectura\n");}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 286 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: escritura\n");}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 287 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: retorno_funcion\n");}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 288 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: identificador_clase '.' TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 289 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 290 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tsentencia_simple: destruir_objeto \n");}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 293 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tdestruir_objeto: TOK_DISCARD TOK_IDENTIFICADOR \n");}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 296 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tbloque: condicional\n");}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 297 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tbloque: bucle\n");}
#line 1909 "y.tab.c" /* yacc.c:1646  */
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
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 311 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: elemento_vector '=' exp\n");}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 312 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 313 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tTOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 314 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tasignacion: identificador_clase '.' TOK_IDENTIFICADOR '=' exp \n");}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 317 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\telemento_vector: TOK_IDENTIFICADOR '[' exp ']'\n");
              }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 322 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' \n");}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 323 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' TOK_ELSE '{' sentencias '}' \n");}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 326 "omicron.y" /* yacc.c:1646  */
    {
    if((yyvsp[0].atributos).tipo != BOOLEAN){
      fprintf(stdout, "ERROR, IF_ELSE distinto de booleano\n" );
    }
}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 332 "omicron.y" /* yacc.c:1646  */
    {
      fprintf(salida,";R:\tbucle: TOK_WHILE exp '{' sentencias '}' \n");
    }
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 337 "omicron.y" /* yacc.c:1646  */
    {
      if((yyvsp[-2].atributos).tipo != BOOLEAN){
        fprintf(stdout, "ERROR, WHILE distinto de booleano\n" );
      }

      (yyval.atributos).etiqueta = (yyvsp[-3].atributos).etiqueta;
}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 345 "omicron.y" /* yacc.c:1646  */
    {
    (yyval.atributos).etiqueta = etiqueta_global++;
}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 349 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlectura: TOK_SCANF TOK_IDENTIFICADOR  \n");
        leer(salida, (yyvsp[0].atributos).lexema, ENTERO);
        }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 352 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlectura: TOK_SCANF elemento_vector \n");}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 355 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tescritura: TOK_PRINTF exp\n");
                escribir(salida, (yyvsp[0].atributos).es_direccion, (yyvsp[0].atributos).tipo);
        }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 361 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN exp\n");}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 362 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN TOK_NONE\n");}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 364 "omicron.y" /* yacc.c:1646  */
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
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 376 "omicron.y" /* yacc.c:1646  */
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
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 387 "omicron.y" /* yacc.c:1646  */
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
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 398 "omicron.y" /* yacc.c:1646  */
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
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 410 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: '-' exp \n");}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 412 "omicron.y" /* yacc.c:1646  */
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
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 427 "omicron.y" /* yacc.c:1646  */
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
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 441 "omicron.y" /* yacc.c:1646  */
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
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 455 "omicron.y" /* yacc.c:1646  */
    {
          fprintf(salida,";R:\texp: TOK_IDENTIFICADOR\n");
          escribir_operando(salida, (yyvsp[0].atributos).lexema, 1);
          (yyval.atributos).es_direccion = 1;
        //tipo aun no lo se
          /*en_exp_list = 0
            Comprobar nombre funcion
            BuscarTS */
        }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 464 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\texp: constante \n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 469 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp:'(' exp ')' \n");}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 470 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp:'(' comparacion ')' \n");}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 471 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: elemento_vector");}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 472 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 473 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 474 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR \n");}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 485 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador_clase: TOK_IDENTIFICADOR \n");}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 486 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tidentificador_clase: TOK_ITSELF \n");}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 489 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones: exp resto_lista_expresiones\n");}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 490 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones:\n");}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 493 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tlista_expresiones: ',' exp resto_lista_expresiones\n");}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 494 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tresto_lista_expresiones:\n");}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 497 "omicron.y" /* yacc.c:1646  */
    {
              fprintf(salida,";R:\tcomparacion: exp TOK_IGUAL exp \n");
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
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 509 "omicron.y" /* yacc.c:1646  */
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
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 522 "omicron.y" /* yacc.c:1646  */
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
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 538 "omicron.y" /* yacc.c:1646  */
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
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 554 "omicron.y" /* yacc.c:1646  */
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
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 570 "omicron.y" /* yacc.c:1646  */
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
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 588 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante: constante_logica\n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 592 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante: constante_entera\n");
                (yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
                (yyval.atributos).es_direccion = (yyvsp[0].atributos).es_direccion;
        }
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 597 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante_logica: TOK_TRUE\n");
                    char valor[]={"1"};
                    (yyval.atributos).tipo = BOOLEAN;
                    (yyval.atributos).es_direccion = 0;
                    (yyval.atributos).valor_entero = 1;
                    escribir_operando(salida, valor, 0);

        }
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 605 "omicron.y" /* yacc.c:1646  */
    {fprintf(salida,";R:\tconstante_logica: TOK_FALSE\n");
                    char valor[]={"0"};
                    (yyval.atributos).tipo = BOOLEAN;
                    (yyval.atributos).es_direccion = 0;
                    (yyval.atributos).valor_entero = 0;
                    escribir_operando(salida, valor, 0);

        }
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 614 "omicron.y" /* yacc.c:1646  */
    {
                fprintf(salida,";R:\tconstante_entera: TOK_CONSTANTE_ENTERA\n");
                (yyval.atributos).tipo = ENTERO;
                (yyval.atributos).es_direccion = 0;
                char valor[20];
                sprintf(valor, "%d", (yyvsp[0].atributos).valor_entero);
                escribir_operando(salida, valor, 0);
        }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 626 "omicron.y" /* yacc.c:1646  */
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
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2504 "y.tab.c" /* yacc.c:1646  */
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
#line 686 "omicron.y" /* yacc.c:1906  */



void yyerror(char * s)
{
  if(yychar != TOK_ERROR)
    printf("ERROR SINTACTICO: %d:%d\n",line, columna-yyleng);
    escribir_fin(salida);

}
