%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include "omicron.h"
  #include "generacion.h"
  #include "estructuras.h"

  extern int yylex();
  extern int yyleng;
  /*extern tablaSimbolosClases* ts_c;*/

  extern FILE* yyin;
  extern FILE* salida;
  extern int columna;
  extern int line;
  /*extern char* idclase;*/
  void yyerror( char *s);

  int clase_actual, tipo_actual, tamanio_actual;
  int etiqueta_global = 0;

%}

  %union{
        tipo_atributo atributos;
  }

  %token <atributos> TOK_IDENTIFICADOR
  %token <atributos> TOK_CONSTANTE_ENTERA

  %type <atributos> exp
  %type <atributos> comparacion
  %type <atributos> constante
  %type <atributos> constante_entera
  %type <atributos> constante_logica
  %type <atributos> asignacion
  %type <atributos> lectura
  %type <atributos> escritura
  %type <atributos> condicional

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
  %token TOK_IGUAL
  %token TOK_DISTINTO
  %token TOK_MENORIGUAL
  %token TOK_MAYORIGUAL
  %token TOK_OR
  %token TOK_AND
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

programa: iniciar_codigo TOK_MAIN '{' declaraciones escribir_variables funciones inicio_main sentencias '}' escribir_fin {fprintf(salida,";R:\tprograma: TOK_MAIN '{' declaraciones funciones sentencias '}'\n"); escribir_fin(salida);} /*REVISAR CON LA TABLA DE SIMBOLOS*/
        | TOK_MAIN '{' funciones sentencias '}' {fprintf(salida,";R:\tprograma: TOK_MAIN '{' funciones sentencias '}'\n");}
        ;

/*REVISAR CON LA TABLA DE SIMBOLOS*/
iniciar_codigo: /*vacio*/
        {

        escribir_subseccion_data(salida);
        escribir_cabecera_bss(salida);

      };

escribir_variables: /*vacio*/
        {
                /*escribirTS(); con cada simbolo -> declaracion variables*/
                escribir_segmento_codigo(salida); /*La profe pone texto en vez de codigo*/
        };

inicio_main: /*vacio*/
        {
                escribir_inicio_main(salida);
        };
escribir_fin: /*vacio*/
        {

        };
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

modificadores_clase: /*vacio*/ {
          fprintf(salida,";R:\tmodificadores_clase:\n");
        }
        ;

clase_escalar: tipo {fprintf(salida,";R:\tclase_escalar: tipo\n"); clase_actual= ESCALAR;}
        ;

tipo: TOK_INT {fprintf(salida,";R:\ttipo: TOK_INT\n"); tipo_actual = ENTERO;}
        | TOK_BOOLEAN {fprintf(salida,";R:\ttipo: TOK_BOOLEAN\n"); tipo_actual = BOOLEAN;} /*REVISAR NO SE QUE VALOR ES BOOLEAN*/
        ;

clase_objeto: '{' TOK_IDENTIFICADOR '}' {fprintf(salida,";R:\tclase_objeto: '{' TOK_IDENTIFICADOR '}'\n");}
        ;

clase_vector: TOK_ARRAY tipo '[' constante_entera ']' {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ']'\n");}
        | TOK_ARRAY tipo '[' constante_entera ',' constante_entera ']' {fprintf(salida,";R:\tclase_vector: TOK_ARRAY tipo '[' constante_entera ',' constante_entera ']'\n");}
        ;
//AQUI SI ES identificador NO TOK
identificadores:
          identificador
            {fprintf(salida,";R:\tidentificadores: identificador\n");}
        | identificador ',' identificadores
            {fprintf(salida,";R:\tidentificadores: identificador ','identificadores\n");}
        ;

funciones: funcion funciones {fprintf(salida,";R:\tfunciones: funcion funciones\n");}
        | /*vacio*/  {fprintf(salida,";R:\tfunciones:\n");}
        ;
/*CAMBIARLO A " fn_declaration sentencias '}' "*/
funcion: TOK_FUNCTION modificadores_acceso tipo_retorno TOK_IDENTIFICADOR '(' parametros_funcion ')' '{' declaraciones_funcion sentencias'}'{
        fprintf(salida,";R:\tfuncion: TOK_FUNCTION modificadores_acceso tipo_retorno TOK_IDENTIFICADOR '(' parametro_funcion ')' declaraciones_funcion sentencia\n");}
        /*Cerrar el ambito*/

        /*Leer mazo despues futuros Rodri y Sara
        comprobar que tenia retorno --> fn_return >0 */

        /*return_o_funcion: TOK_RETURN exp {
        mov esp, ebp
        pop ebp
        ret
      }
        */
        ;
/*
fn_declaration: fn_complete_name '{' declaraciones_funcion{
        Actualizar info funcion numVariables en la GLOBAL

        Leer mazo despues futuros Rodri y Sara
          _nombre_funcion
          push ebp
          mov ebp, esp
          sub esp, 4* n_variables (Reservar espacio variables locales)

}*/
/*
fn_complete_name: fn_name '(' parametros_funcion '}'{
        Crear nombre de la funcion --> nombre funcion @tipo1 @tipo2
        Abrir AmbitoLocal :
          1. insertar fn en GLOBAL
          2. crear Local
        Recoorer el array_params --> insertarTS (cada param tiene[ nombre,tipo, posicion en el array, ¿Escalar?])
}*/
/*
fn_name: TOK_FUNCTION modificadores_acceso tipo_retorno identificador{
        num_vars_boolean_actual = 0;
        pos_var_local_actual = 1;
        num_params_actuales = 0;
        pos_params_actual = 0:
        $$.lexema = $4.lexema; (identificador)
        $$.tipo= tipo_actual


}*/

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

parametro_funcion: tipo TOK_IDENTIFICADOR {fprintf(salida,";R:\tparametro_funcion: tipo identificador\n");}
        | clase_objeto TOK_IDENTIFICADOR {fprintf(salida,";R:\tparametro_funcion: clase_objeto identificador\n");}
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

asignacion: TOK_IDENTIFICADOR '=' exp {
                fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' exp\n");
                //elementoTablaSimbolos * e = NULL;
                // buscarTablaSimbolosAmbitoActual(tablaSimbolosAmbitos * t, ,e, GLOBAL)
                //Buscar_TS --> e
                //if e.tipo == $3.tipo
                asignar(salida, $1.lexema, $3.tipo);
}
        | elemento_vector '=' exp {fprintf(salida,";R:\tasignacion: elemento_vector '=' exp\n");}
        | elemento_vector '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\tasignacion: TOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
        | TOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\tTOK_IDENTIFICADOR '=' TOK_INSTANCE_OF TOK_IDENTIFICADOR '(' lista_expresiones ')'\n");}
        | identificador_clase '.' TOK_IDENTIFICADOR '=' exp {fprintf(salida,";R:\tasignacion: identificador_clase '.' TOK_IDENTIFICADOR '=' exp \n");}
        ;

elemento_vector: TOK_IDENTIFICADOR '[' exp ']' {fprintf(salida,";R:\telemento_vector: TOK_IDENTIFICADOR '[' exp ']'\n");}
        ;

condicional: TOK_IF '(' exp ')' '{' sentencias '}' {fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' \n");}
        | TOK_IF '(' exp ')' '{' sentencias '}' TOK_ELSE '{' sentencias '}'{fprintf(salida,";R:\tcondicional: TOK_IF '(' exp ')' '{' sentencias '}' TOK_ELSE '{' sentencias '}' \n");}
        ;


bucle: TOK_WHILE exp '{' sentencias '}'{fprintf(salida,";R:\tbucle: TOK_WHILE exp '{' sentencias '}' \n");}
        ;

lectura: TOK_SCANF TOK_IDENTIFICADOR {fprintf(salida,";R:\tlectura: TOK_SCANF TOK_IDENTIFICADOR  \n");
        leer(salida, $2.lexema, ENTERO);
        }
        | TOK_SCANF elemento_vector {fprintf(salida,";R:\tlectura: TOK_SCANF elemento_vector \n");}
        ;

escritura: TOK_PRINTF exp  {
                fprintf(salida,";R:\tescritura: TOK_PRINTF exp\n");
                escribir(salida, $2.es_direccion, $2.tipo);
        }
        ;

retorno_funcion: TOK_RETURN exp {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN exp\n");}
        | TOK_RETURN TOK_NONE {fprintf(salida,";R:\tretorno_funcion: TOK_RETURN TOK_NONE\n");}
        ;
//los cuatro primros ver que son int
exp:    exp '+' exp {fprintf(salida,";R:\texp: exp '+' exp \n");}
        | exp '-' exp {fprintf(salida,";R:\texp: exp '-' exp \n");}
        | exp '/' exp {fprintf(salida,";R:\texp: exp '/' exp \n");}
        | exp '*' exp  {fprintf(salida,";R:\texp: exp '*' exp \n");}
        | '-' exp %prec NEG  {fprintf(salida,";R:\texp: '-' exp \n");}
        //estas tres ver tipo booleano
        | exp TOK_AND exp  {fprintf(salida,";R:\texp: exp TOK_AND exp  \n");}
        | exp TOK_OR exp  {fprintf(salida,";R:\texp: exp TOK_OR exp \n");}
        | '!' exp {fprintf(salida,";R:\texp:'!' exp\n");}
        | TOK_IDENTIFICADOR/* cambiar "identificador" por "idf_llamada_funcion"*/ {
          fprintf(salida,";R:\texp: TOK_IDENTIFICADOR\n");
          escribir_operando(salida, $1.lexema, 1);
          $$.es_direccion = 1;
          //tipo aun no lo se
          /*en_exp_list = 0
            Comprobar nombre funcion
            BuscarTS */
        }
        | constante  {
                fprintf(salida,";R:\texp: constante \n");
                $$.tipo = $1.tipo;
                $$.es_direccion = $1.es_direccion;
        }
        | '(' exp ')'  {fprintf(salida,";R:\texp:'(' exp ')' \n");}
        | '(' comparacion ')'  {fprintf(salida,";R:\texp:'(' comparacion ')' \n");}
        | elemento_vector  {fprintf(salida,";R:\texp: elemento_vector");}
        | TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\texp: TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
        | identificador_clase TOK_IDENTIFICADOR '(' lista_expresiones ')' {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR '(' lista_expresiones ')' \n");}
        | identificador_clase TOK_IDENTIFICADOR  {fprintf(salida,";R:\texp: identificador_clase TOK_IDENTIFICADOR \n");}
        ;

/*idf_llamada_funcion: TOK_IDENTIFICADOR{
         ¿en_exp_list == 1  ? --> ERR_SEMANTICO
         $$.lexema = $1.lexema
           num_params_actual = 0
           en_exp_list = 1

}*/

identificador_clase: TOK_IDENTIFICADOR {fprintf(salida,";R:\tidentificador_clase: TOK_IDENTIFICADOR \n");}
        | TOK_ITSELF {fprintf(salida,";R:\tidentificador_clase: TOK_ITSELF \n");}
        ;

lista_expresiones: exp resto_lista_expresiones  {fprintf(salida,";R:\tlista_expresiones: exp resto_lista_expresiones\n");}
        | /*vacio*/ {fprintf(salida,";R:\tlista_expresiones:\n");}
        ;

resto_lista_expresiones: ',' exp resto_lista_expresiones {fprintf(salida,";R:\tlista_expresiones: ',' exp resto_lista_expresiones\n");}
        | /*vacio*/{fprintf(salida,";R:\tresto_lista_expresiones:\n");}
        ;

comparacion: exp TOK_IGUAL exp {fprintf(salida,";R:\tcomparacion: exp TOK_IGUAL exp \n");
              if($1.tipo == $3.tipo){
                igual(salida, $1.es_direccion, $3.es_direccion, etiqueta_global++);
                $$.tipo = BOOLEAN;
              }
              else{
                /*imprimo error*/
                exit(-1);
              }
        }
        | exp TOK_DISTINTO exp {fprintf(salida,";R:\tcomparacion: exp TOK_DISTINTO exp \n");}
        //estos solo enteros
        | exp TOK_MENORIGUAL exp {fprintf(salida,";R:\tcomparacion: exp TOK_MENORIGUAL exp \n");}
        | exp TOK_MAYORIGUAL exp{fprintf(salida,";R:\tcomparacion: exp TOK_MAYORIGUAL exp \n");}
        | exp '<' exp {fprintf(salida,";R:\tcomparacion: exp < exp \n");}
        | exp '>' exp {fprintf(salida,";R:\tcomparacion: exp > exp \n");}
        ;

constante: constante_logica {fprintf(salida,";R:\tconstante: constante_logica\n");
                $$.tipo = $1.tipo;
                $$.es_direccion = $1.es_direccion;
        }
        | constante_entera  {fprintf(salida,";R:\tconstante: constante_entera\n");
                $$.tipo = $1.tipo;
                $$.es_direccion = $1.es_direccion;
        }
        ;
constante_logica: TOK_TRUE {fprintf(salida,";R:\tconstante_logica: TOK_TRUE\n");
                    escribir_operando(salida, '1', 0);
                    $$.tipo = BOOLEAN;
                    $$.es_direccion = 0;
                    $$.valor_entero = 1;
        }
        | TOK_FALSE {fprintf(salida,";R:\tconstante_logica: TOK_FALSE\n");
                    escribir_operando(salida, '0', 0);
                    $$.tipo = BOOLEAN;
                    $$.es_direccion = 0;
                    $$.valor_entero = 0;

        }
        ;
constante_entera: TOK_CONSTANTE_ENTERA {
                fprintf(salida,";R:\tconstante_entera: TOK_CONSTANTE_ENTERA\n");
                $$.tipo = INT;
                $$.es_direccion = 0;
                escribir_operando(salida, $1.lexema, 0);
        }
        ;


identificador: TOK_IDENTIFICADOR
        {
                fprintf(salida, ";R:\tidentificador: TOK_IDENTIFICADOR");

                /*
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
        /* idf
         guardar[posParam] --> nombreParam = $1.lexema, tipo_Actual*/
        /* pos_actual parsActual++
           num_pars_actual++ */
        ;


%%


void yyerror(char * s)
{/*
  if(yychar != TOK_ERROR)
    printf("ERROR SINTACTICO: %d:%d\n",line, columna-yyleng);
    escribir_fin(salida); O en el .c (CREO)*/

}
