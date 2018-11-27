%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  extern int yylex();
  extern int yyleng;

  extern FILE* yyin;
  extern FILE* salida;
  extern int columna;
  extern int line;
  void yyerror( char *s);

%}

  %union{
    char cadena[1000];
    int numero;
  }

  %token TOK_NONE
  %token TOK_CLASS
  %token TOK_INHERITS
  %token TOK_INSTANCE_OF
  %token TOK_DISCARD
  %token TOK_ITSELF
  %token TOK_FLECHA
  %token TOK_HIDDEN
  %token TOK_SECRET
  %token TOK_EXPOSED
  %token TOK_UNIQUE
  %token TOK_FUNCTION
  %token TOK_RETURN
  %token TOK_MAIN
  %token TOK_INT
  %token TOK_BOOLEAN
  %token TOK_ARRAY
  %token TOK_IF
  %token TOK_ELSE
  %token TOK_WHILE
  %token TOK_SCANF
  %token TOK_PRINTF
  %token TOK_IDENTIFICADOR
  %token TOK_IGUAL
  %token TOK_DISTINTO
  %token TOK_MENORIGUAL
  %token TOK_MAYORIGUAL
  %token TOK_OR
  %token TOK_AND
  %token TOK_CONSTANTE_ENTERA
  %token TOK_FALSE
  %token TOK_TRUE
  %token TOK_ERROR
  %token TOK_FOR
  %token TOK_SWITCH
  %token TOK_CASE
  %token TOK_DEFAULT
  %token TOK_FLOAT
  %token TOK_MALLOC
  %token TOK_CPRINTF
  %token TOK_FREE
  %token TOK_SET
  %token TOK_OF
  %token TOK_UNION
  %token TOK_INTERSECTION
  %token TOK_ADD
  %token TOK_CLEAR
  %token TOK_SIZE
  %token TOK_CONTAINS
  %token TOK_CONSTANTE_REAL


  %left '+' '-' TOK_OR
  %left '*' '/' TOK_AND
  %right NEG '!'

  %start programa

%%

programa: TOK_MAIN '{' declaraciones funciones sentencias '}' {fprintf(salida,";R:\tprograma: TOK_MAIN '{' declaraciones funciones sentencias '}'\n");}
        | TOK_MAIN '{' funciones sentencias '}' {fprintf(salida,";R:\tprograma: TOK_MAIN '{' funciones sentencias '}'\n");}
        ;

declaraciones: declaracion declaraciones {fprintf(salida,";R:\tdeclaraciones: declaracion declaraciones\n");}
        | declaracion {fprintf(salida,";R:\tdeclaraciones: declaracion\n");}
        ;

declaracion: modificadores_acceso clase identificadores ';' {fprintf(salida,";R:\tdeclaracion: modificadores_acceso clase identificadores ';'\n");}
        | modificadores_acceso declaracion_clase ';'{fprintf(salida,";R:\tdeclaracion: modificadores_acceso declaracion_clase ';'\n");}
        ;

modificadores_acceso: TOK_HIDDEN TOK_UNIQUE {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN TOK_UNIQUE\n");}
        | TOK_SECRET TOK_UNIQUE {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET TOK_UNIQUE\n");}
        | TOK_EXPOSED TOK_UNIQUE {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED TOK_UNIQUE\n");}
        | TOK_HIDDEN {fprintf(salida,";R:\tmodificadores_acceso: TOK_HIDDEN\n");}
        | TOK_SECRET {fprintf(salida,";R:\tmodificadores_acceso: TOK_SECRET\n");}
        | TOK_EXPOSED {fprintf(salida,";R:\tmodificadores_acceso: TOK_EXPOSED\n");}
        | TOK_UNIQUE {fprintf(salida,";R:\tmodificadores_acceso: TOK_UNIQUE\n");}
        | /*vacio*/ {fprintf(salida,";R:\tmodificadores_acceso:\n");}
        ;

clase: clase_escalar {fprintf(salida,";R:\tclase: clase_escalar\n");}
        | clase_vector {fprintf(salida,";R:\tclase: clase_vector\n");}
        | clase_objeto {fprintf(salida,";R:\tclase: clase_objeto\n");}
        ;

declaracion_clase: modificadores_clase TOK_CLASS TOK_IDENTIFICADOR TOK_INHERITS identificadores '{' declaraciones funciones '}' {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS TOK_IDENTIFICADOR TOK_INHERITS identificadores '{' declaraciones funciones '}'\n");}
        | modificadores_clase TOK_CLASS TOK_IDENTIFICADOR '{' declaraciones funciones '}' {fprintf(salida,";R:\tdeclaracion_clase: modificadores_clase  TOK_CLASS TOK_IDENTIFICADOR '{' declaraciones funciones '}'\n");}
        ;

modificadores_clase: /*vacio*/ {fprintf(salida,";R:\tmodificadores_clase:\n");}
        ;

clase_escalar: tipo {fprintf(salida,";R:\tclase_escalar: tipo\n");}
        ;

tipo: TOK_INT {fprintf(salida,";R:\ttipo: TOK_INT\n");}
        | TOK_BOOLEAN {fprintf(salida,";R:\ttipo: TOK_BOOLEAN\n");}
        ;

clase_objeto: '{' TOK_IDENTIFICADOR '}' {fprintf(salida,";R:\tclase_objeto: '{' TOK_IDENTIFICADOR '}'\n");}
        ;

clase_vector: TOK_ARRAY tipo '[' constante_entera ']' {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ']'\n");}
        | TOK_ARRAY tipo '[' constante_entera ',' constante_entera ']' {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ',' constante_entera ']'\n");}
        ;

identificadores:
          TOK_IDENTIFICADOR
            {fprintf(salida,";R:\tidentificadores: TOK_IDENTIFICADOR\n");}
        | TOK_IDENTIFICADOR ',' identificadores
            {fprintf(salida,";R:\tidentificadores: TOK_IDENTIFICADOR ','identificadores\n");}
        ;

funciones: funcion funciones {fprintf(salida,";R:\tfunciones: funcion funciones\n");}
        | /*vacio*/  {fprintf(salida,";R:\tfunciones:\n");}
        ;

funcion: TOK_FUNCTION modificadores_acceso tipo_retorno TOK_IDENTIFICADOR '(' parametros_funcion ')' '{' declaraciones_funcion sentencias'}'{fprintf(salida,";R:\tfuncion: TOK_FUNCTION modificadores_acceso tipo_retorno TOK_IDENTIFICADOR '(' parametro_funcion ')' declaraciones_funcion sentencia\n");}
        ;

tipo_retorno: TOK_NONE {fprintf(salida,";R:\ttipo_retorno: TOK_NONE\n");}
        | tipo {fprintf(salida,";R:\tipo_retorno: tipo\n");}
        | clase_objeto {fprintf(salida,";R:\tipo_retorno: clase_objeto\n");}
        ;

parametros_funcion: parametro_funcion resto_parametros_funcion {fprintf(salida,";R:\tparametros_funcion: parametro_funcion resto_parametros_funcion\n");}
        | /*vacio*/ {fprintf(salida,";R:\tparametros_funcion:\n");}
        ;

resto_parametros_funcion: ';' parametro_funcion resto_parametros_funcion {fprintf(salida,";R:\tresto_parametros_funcion: ; parametro_funcion resto_parametros_funcion\n");}
        | /*vacio*/ {fprintf(salida,";R:\tresto_parametros_funcion:\n");}
        ;

parametro_funcion: tipo TOK_IDENTIFICADOR {fprintf(salida,";R:\tparametro_funcion: tipo TOK_IDENTIFICADOR\n");}
        | clase_objeto TOK_IDENTIFICADOR {fprintf(salida,";R:\tparametro_funcion: clase_objeto TOK_IDENTIFICADOR\n");}
        ;

declaraciones_funcion: declaraciones {fprintf(salida,";R:\tdeclaraciones_funcion: declaraciones_funcion\n");}
        | /*vacio*/ {fprintf(salida,";R:\tdeclaraciones_funcion:\n");}
        ;

sentencias: sentencia {fprintf(salida,";R:\tsentencias: sentencia\n");}
        | sentencia sentencias {fprintf(salida,";R:\tsentencias: sentencia sentencias\n");}
        ;

sentencia: sentencia_simple ';'{fprintf(salida,";R:\tsentencia: sentencia_simple ';'\n");}
        | bloque {fprintf(salida,";R:\tsentencia: bloque\n");}
        ;

sentencia_simple: asignacion {fprintf(salida,";R:\tsentencia_simple: asignacion\n");}
        | lectura {fprintf(salida,";R:\tsentencia_simple: lectura\n");}
        | escritura {fprintf(salida,";R:\tsentencia_simple: escritura\n");}
        | retorno_funcion {fprintf(salida,";R:\tsentencia_simple: retorno_funcion\n");}
        | identificador_clase '.' TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\tsentencia_simple: identificador_clase '.' TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
        | TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\tsentencia_simple: TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
        | destruir_objeto {fprintf(salida,";R:\tsentencia_simple: destruir_objeto \n");}
        ;

destruir_objeto: TOK_DISCARD TOK_IDENTIFICADOR {fprintf(salida,";R:\tdestruir_objeto: TOK_DISCARD TOK_IDENTIFICADOR \n");}
        ;

bloque: condicional {fprintf(salida,";R:\tbloque: condicional\n");}
        | bucle{fprintf(salida,";R:\tbloque: bucle\n");}
        ;

asignacion: TOK_IDENTIFICADOR '=' exp {fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' exp\n");}
        | elemento_vector '=' exp {fprintf(salida,";R:\tasignacion: elemento_vector '=' exp\n");}
        | elemento_vector '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
        | TOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\tTOK_IDENTIFICADOR '=' TOK_INSTANCE_OF identificador '(' lista_expresiones ')'\n");}
        | identificador_clase '.' TOK_IDENTIFICADOR '=' exp {fprintf(salida,";R:\tasignacion: identificador_clase '.' TOK_IDENTIFICADOR '=' exp \n");}
        ;

elemento_vector: TOK_IDENTIFICADOR '[' exp ']' {fprintf(salida,";R:\telemento_vector: TOK_IDENTIFICADOR '[' exp ']'\n");}
        ;

condicional: TOK_IF '(' exp ')' '{' sentencias '}' {fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' \n");}
        | TOK_IF '(' exp ')' '{' sentencias '}' TOK_ELSE '{' sentencias '}'{fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' TOK_ELSE '{' sentencias '}' \n");}
        ;


bucle: TOK_WHILE exp '{' sentencias '}'{fprintf(salida,";R:\tbucle: TOK_WHILE exp '{' sentencias '}' \n");}
        ;

lectura: TOK_SCANF TOK_IDENTIFICADOR {fprintf(salida,";R:\tlectura: TOK_SCANF TOK_IDENTIFICADOR  \n");}
        | TOK_SCANF elemento_vector {fprintf(salida,";R:\tlectura: TOK_SCANF elemento_vector \n");}
        ;

escritura: TOK_PRINTF exp  {fprintf(salida,";R:\tescritura: TOK_PRINTF exp\n");}
        ;

retorno_funcion: TOK_RETURN exp {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN exp\n");}
        | TOK_RETURN TOK_NONE {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN TOK_NONE\n");}
        ;

exp:    exp '+' exp {fprintf(salida,";R:\texp: exp '+' exp \n");}
        | exp '-' exp {fprintf(salida,";R:\texp: exp '-' exp \n");}
        | exp '/' exp {fprintf(salida,";R:\texp: exp '/' exp \n");}
        | exp '*' exp  {fprintf(salida,";R:\texp: exp '*' exp \n");}
        | '-' exp %prec NEG  {fprintf(salida,";R:\texp: '-' exp \n");}
        | exp TOK_AND exp  {fprintf(salida,";R:\texp: exp TOK_AND exp  \n");}
        | exp TOK_OR exp  {fprintf(salida,";R:\texp: exp TOK_OR exp \n");}
        | '!' exp {fprintf(salida,";R:\texp:'!' exp\n");}
        | TOK_IDENTIFICADOR  {fprintf(salida,";R:\texp: TOK_IDENTIFICADOR \n");}
        | constante  {fprintf(salida,";R:\texp: constante \n");}
        | '(' exp ')'  {fprintf(salida,";R:\texp:'(' exp ')' \n");}
        | '(' comparacion ')'  {fprintf(salida,";R:\texp:'(' comparacion ')' \n");}
        | elemento_vector  {fprintf(salida,";R:\texp: elemento_vector");}
        | TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\texp: TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
        | identificador_clase TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
        | identificador_clase TOK_IDENTIFICADOR  {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR \n");}
        ;

identificador_clase: TOK_IDENTIFICADOR {fprintf(salida,";R:\tidentificador_clase: TOK_IDENTIFICADOR \n");}
        | TOK_ITSELF {fprintf(salida,";R:\tidentificador_clase: TOK_ITSELF \n");}
        ;

lista_expresiones: exp resto_lista_expresiones  {fprintf(salida,";R:\tlista_expresiones: exp resto_lista_expresiones\n");}
        | /*vacio*/ {fprintf(salida,";R:\tlista_expresiones:\n");}
        ;

resto_lista_expresiones: ',' exp resto_lista_expresiones {fprintf(salida,";R:\tlista_expresiones: ',' exp resto_lista_expresiones\n");}
        | /*vacio*/{fprintf(salida,";R:\tresto_lista_expresiones:\n");}
        ;

comparacion: exp TOK_IGUAL exp {fprintf(salida,";R:\tcomparacion: exp TOK_IGUAL exp \n");}
        | exp TOK_DISTINTO exp {fprintf(salida,";R:\tcomparacion: exp TOK_DISTINTO exp \n");}
        | exp TOK_MENORIGUAL exp {fprintf(salida,";R:\tcomparacion: exp TOK_MENORIGUAL exp \n");}
        | exp TOK_MAYORIGUAL exp{fprintf(salida,";R:\tcomparacion: exp TOK_MAYORIGUAL exp \n");}
        | exp '<' exp {fprintf(salida,";R:\tcomparacion: exp < exp \n");}
        | exp '>' exp {fprintf(salida,";R:\tcomparacion: exp > exp \n");}
        ;

constante: constante_logica {fprintf(salida,";R:\tconstante: constante_logica\n");}
        | constante_entera  {fprintf(salida,";R:\tconstante: constante_entera\n");}
        ;
constante_logica: TOK_TRUE {fprintf(salida,";R:\tconstante_logica: TOK_TRUE\n");}
        | TOK_FALSE {fprintf(salida,";R:\tconstante_logica: TOK_FALSE\n");}
        ;
constante_entera: TOK_CONSTANTE_ENTERA {fprintf(salida,";R:\tconstante_entera: TOK_CONSTANTE_ENTERA\n");}
        ;





%%


void yyerror(char * s)
{
  if(yychar != TOK_ERROR)
    printf("ERROR SINTACTICO: %d:%d\n",line, columna-yyleng);

}
