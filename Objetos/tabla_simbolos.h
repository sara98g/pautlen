#ifndef TABLA_SIMBOLOS
#define TABLA_SIMBOLOS

#include <stdio.h>
#include <stdlib.h>

#include "grafo.h"
#include "hash.h"

#define VARIABLE 1
#define PARAMETRO 2
#define FUNCION 3

#define BOOLEAN 1
#define INT 2

#define ESCALAR 1
#define VECTOR 2

#define TAM_L 100
#define MAX_TAB 64 /*tamanio de la tabla entre 1 y 64*/

typedef enum {
    OK = 0, ERROR = -1
} STATUS;

typedef enum {
    GLOBAL = 0, LOCAL = 1
} AMBITO;

typedef enum {
    NINGUNO = 0, ACCESO_CLASE = 1, ACCESO_HERENCIA = 2, ACCESO_TODOS = 3
} TIPO_ACCESO;

typedef enum {
    MIEMBRO_UNICO = 0, MIEMBRO_NO_UNICO = 1
} TIPO_MIEMBRO;

typedef struct _tablaSimbolosAmbitos {
    TablaHash *global;
    TablaHash *local;
    AMBITO idAmbito; /*global=0 o local=1*/
    char *nombre_local;
    char *nombre_global;
   
} tablaSimbolosAmbitos;

typedef struct _tablaSimbolosClases {
    Grafo *grafo;
    char *nombre;
   
} tablaSimbolosClases;

/*******************************************************/
/*Funciones de gestion de tablas y ambitos*/
/*******************************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int iniciarTablaSimbolosClases(tablaSimbolosClases** t, char * nombre);
/**
* iniciarTablaSimbolosAmbitos
*
* Reserva todos los recursos para crear una tsa
* que tenga dos tablas hash por cada ambito local/global.
**/
int iniciarTablaSimbolosAmbitos(tablaSimbolosAmbitos **t);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int abrirClase(tablaSimbolosClases* t, char* id_clase);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int abrirClaseHeredaN (tablaSimbolosClases* t, AMBITO id_clase, int num_padres, char** nombres_padres);
int cerrarClase(tablaSimbolosClases* t,
                                       char* id_clase,
                                       int num_atributos_clase,
                                       int num_atributos_instancia,
                                       int num_metodos_sobreescribibles,
                                       int num_metodos_no_sobreescribibles);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int cerrarTablaSimbolosClases(tablaSimbolosClases* t);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int abrirAmbitoPpalMain(tablaAmbitos** t);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int abrirAmbitoMain(tablaAmbitos ** t,
                    char* id_ambito,
                    int categoria_ambito,
                    int tipo_ambito,
                    int tamanio);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int cerrarAmbitoMain(tablaSimbolosAmbitos* t);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int tablaSimbolosClasesAbrirAmbitoEnClase(	tablaSimbolosClases * grafo,
						char * id_clase,
						char* id_ambito,
						int categoria_ambito,
						int tipo_ambito,
						int acceso_ambito,
						int tipo_miembro,
						int posicion_metodo_sobre,
						int tamanio);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int tablaSimbolosClasesCerrarAmbitoEnClase(tablaSimbolosClases * grafo, char * id_clase);

/*******************************************************/
/*Busqueda de identificadores en la parte de sentencias*/
/*******************************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarIdEnJerarquiaDesdeClase(tablaSimbolosClases *t,
					char * nombre_id,
					char * nombre_clase_desde,
					elementoTablaSimbolos ** e,
					char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarIdNoCualificado(	tablaSimbolosClases *t,
          					tablaAmbitos *tabla_main,
          	        char * nombre_id,
          					char * nombre_clase_desde,
          					elementoTablaSimbolos ** e,
          					char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarIdIDCualificadoClase(	tablaSimbolosClases *t,
                    					char * nombre_clase_cualifica,
                    					char * nombre_id,
                    					char * nombre_clase_desde,
                    					elementoTablaSimbolos ** e,
                    					char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarIdCualificadoInstancia(	tablaSimbolosClases *t,
                        					tablaSimbolosAmbitos * tabla_main,
                        					char * nombre_instancia_cualifica,
                        					char * nombre_id,
                        					char * nombre_clase_desde,
                        					elementoTablaSimbolos ** e,
                        					char * nombre_ambito_encontrado);

/**********************************************************/
/*Busqueda de identificadores en la parte de declaraciones*/
/**********************************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarParaDeclararMiembroClase( tablaSimbolosClases *t,
					  char * nombre_clase_desde,
					  char * nombre_miembro,
					  elementoTablaSimbolos ** e,
					  char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarParaDeclararMetodoClase(	tablaSimbolosClases *t,
						char * nombre_clase_desde,
						char * nombre_miembro,
						elementoTablaSimbolos ** e,
						char * nombre_ambito_encontrado);
						
int buscarParaDeclararMiembroInstancia(tablaSimbolosClases *t,
						char * nombre_clase_desde,
						char * nombre_miembro,
						elementoTablaSimbolos ** e,
						char * nombre_ambito_encontrado);	
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarTablaSimbolosAmbitoActual(tablaAmbitos * t,
                                    char* id,
                                    elementoTablaSimbolos** e,
                                    char* id_ambito);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarTablaSimbolosClasesAmbitoActual( tablaSimbolosClases *t,
						  char * nombre_clase,
						  char * nombre_id,
						  elementoTablaSimbolos ** e,
						  char * nombre_ambito_encontrado);

/********************************************************************/
/*Funciones insercion simbolos que no involucren creacion de ambitos*/
/********************************************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int insertarTablaSimbolosClases(tablaSimbolosClases * grafo,
					char * id_clase,
					char* id,
					int clase,
					int tipo,
					int estructura,
					int direcciones,
					int numero_parametros,
					int numero_variables_locales,
					int posicion_variable_local,
					int posicion_parametro,
					int dimension,
					int tamanio,
					int filas,
					int columnas,
					int capacidad,
					int numero_atributos_clase,
					int numero_atributos_instancia,
					int numero_metodos_sobreescribibles,
					int numero_metodos_no_sobreescribibles,
					int tipo_acceso,
					int tipo_miembro,
					int posicion_atributo_instancia,
					int posicion_metodo_sobreescribible,
					int num_acumulado_atributos_instancia,
					int num_acumulado_metodos_sobreescritura,
          int posicion_acumulada_atributos_instancia,
          int posicion_acumulada_metodos_sobreescritura,
					int * tipo_args);
/***********************/
/*Funcionalidad variada*/
/**********************/
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int aplicarAccesos( tablaSimbolosClases *t,
			char * nombre_clase_ambito_actual,
			char * clase_declaro,
			elementoTablaSimbolos * pelem);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
tablaSimbolosClases * tablaSimbolosClasesToDot(tablaSimbolosClases * grafo);



#endif /*TABLA_SIMBOLOS*/
