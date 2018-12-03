#ifndef TABLA_SIMBOLOS
#define TABLA_SIMBOLOS

#include <stdio.h>
#include <stdlib.h>

#include "grafo.h"
#include "hash.h"

#define MAX_TAB 64 /*tamanio de la tabla entre 1 y 64*/

/***************************************************************************/
/*Enumerados utiles para la clasificacion de la informacion de los simbolos*/
/***************************************************************************/

typedef enum {
    OK = 0, ERROR = -1
} STATUS;

typedef enum {
	VARIABLE = 1, PARAMETRO = 2, FUNCION = 3
} CATEGORIA;

typedef enum {
	BOOLEAN = 1, INT = 2
} TIPO;

typedef enum {
	ESCALAR = 1, VECTOR = 2
} CLASE;

typedef enum {
    CERRADO = -1, GLOBAL = 0, LOCAL = 1
} AMBITO;

typedef enum {
    NINGUNO = 0, ACCESO_CLASE = 1, ACCESO_HERENCIA = 2, ACCESO_TODOS = 3
} TIPO_ACCESO;

typedef enum {
    MIEMBRO_UNICO = 0, MIEMBRO_NO_UNICO = 1
} TIPO_MIEMBRO;


/***************************/
/*Diseño de la TSC y la TSA*/
/***************************/

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

/******************************************/
/*Funciones de gestion de tablas y ambitos*/
/******************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento
**/
int iniciarTablaSimbolosClases(tablaSimbolosClases* t, char * nombre);
/**
* iniciarTablaSimbolosAmbitos
*
* Reserva todos los recursos para crear una tsa
* que tenga dos tablas hash por cada ambito local/global
**/
int iniciarTablaSimbolosAmbitos(tablaSimbolosAmbitos *t);
/**
* destruirTablaSimbolosAmbitos
*
* Libera todos los recursos de una tsa creada
*
**/
void destruirTablaSimbolosAmbitos(tablaSimbolosAmbitos *t);
/**
* abrirClase
*
* Realiza las tareas de añadir al grafo una nueva raíz
**/
int abrirClase(tablaSimbolosClases* t, char* id_clase);
/**
* abrirClaseHeredaN
*
* Realiza las tareas de añadir al grafo un nuevo nodo
* que debe conectarse a los nombres identificados mediante los últimos argumentos
*
*/
int abrirClaseHeredaN (tablaSimbolosClases* t, char *id_clase, int num_padres, char** nombres_padres);
/**
* cerrarClase
*
* Realiza tareas asociadas con el final de la clase identificada
* mediante el segundo argumento
*
*/
int cerrarClase(tablaSimbolosClases* t, char *id_clase, int num_atributos_clase, int num_atributos_instancia, int num_metodos_sobreescribibles, int num_metodos_no_sobreescribibles);
/**
* cerrarTablaSimbolosClases
*
* Realiza tareas asociadas con el final de la clase identificada
* mediante el segundo argumento
*
*/
int cerrarTablaSimbolosClases(tablaSimbolosClases* t);
/**
* abrirAmbitoPpalMain
*
* Realiza tareas asociadas con la apertura del ámbito principal
* de la tabla de símbolos por ámbitos de main
*
**/
int abrirAmbitoPpalMain(tablaSimbolosAmbitos* t);
/**
* abrirAmbitoMain
*
* Realiza tareas asociadas con la apertura del ámbito asociado
* con una función global dentro del ámbito main
*
**/
int abrirAmbitoMain(tablaSimbolosAmbitos * t, char* id_ambito, int categoria_ambito, int tipo_ambito);
/**
* cerrarAmbitoMain
*
* Realiza tareas asociadas con el cierre del ámbito asociado con una
* función global dentro del ámbito main, cierra el ámbito actual, de hecho
*
**/
int cerrarAmbitoMain(tablaSimbolosAmbitos* t);
/**
* tablaSimbolosClasesAbrirAmbitoEnClase
*
* Realiza tareas asociadas con la apertura del ámbito asociado con un método
*
**/
int tablaSimbolosClasesAbrirAmbitoEnClase(tablaSimbolosClases * grafo, char * id_clase, char* id_ambito, int categoria_ambito, int tipo_ambito, int acceso_ambito, int tipo_miembro, int posicion_metodo_sobre);
/**
* tablaSimbolosClasesCerrarAmbitoEnClase
*
* Realiza tareas asociadas con el cierre del ámbito asociado con un método
*
**/
int tablaSimbolosClasesCerrarAmbitoEnClase(tablaSimbolosClases * grafo, char * id_clase);

/*******************************************************/
/*Busqueda de identificadores en la parte de sentencias*/
/*******************************************************/

/**
* buscarIdEnJerarquiaDesdeClase
*
* Busca en la jerarquía de clases (en las tablas tablaAmbitos de cada clase)
*
**/
int buscarIdEnJerarquiaDesdeClase(tablaSimbolosClases *t, char * nombre_id, char * nombre_clase_desde, elementoTablaSimbolos * e, char * nombre_ambito_encontrado);
/**
* buscarTablaSimbolosAmbitosConPrefijos
*
* Encuentra simbolos por prefijo
*
**/
int buscarTablaSimbolosAmbitosConPrefijos (tablaSimbolosAmbitos *tA, char *id, elementoTablaSimbolos *e, char *id_ambito);
/**
* buscarIdNoCualificado
*
* Se responsabiliza de la búsqueda de un identificador cuando aparece en las sentencias y se quiere usar
* El identificador no debe ir cualificado
*
**/
int buscarIdNoCualificado(tablaSimbolosClases *t, tablaAmbitos *tabla_main, char * nombre_id, char * nombre_clase_desde, elementoTablaSimbolos * e, char * nombre_ambito_encontrado);
/**
* buscarIdIDCualificadoClase
*
* Busca identificadores cualificados cuando aparecen así en la parte de sentencias (expresiones del tipo <identificador>.<identificador>)
* Se utiliza cuando se cualifica con el nombre de una clase
*
**/
int buscarIdIDCualificadoClase(tablaSimbolosClases *t, char * nombre_clase_cualifica, char * nombre_id, char * nombre_clase_desde, elementoTablaSimbolos * e, char * nombre_ambito_encontrado);
/**
* buscarIdCualificadoInstancia
*
* Busca identificadores cualificados cuando aparecen así en la parte de sentencias (expresiones del tipo <identificador>.<identificador>)
* Se utiliza cuando se cualifica con el nombre de una instancia
*
**/
int buscarIdCualificadoInstancia(tablaSimbolosClases *t, tablaSimbolosAmbitos * tabla_main, char * nombre_instancia_cualifica, char * nombre_id, char * nombre_clase_desde, elementoTablaSimbolos * e, char * nombre_ambito_encontrado);

/**********************************************************/
/*Busqueda de identificadores en la parte de declaraciones*/
/**********************************************************/

/**
* buscarParaDeclararMiembroClase
*
* Realiza la búsqueda de identificadores cuando, al declararlos, se intenta insertarlos en la tabla de símbolos
* Se utiliza cuando se quiere declarar un miembro de clase (ya sea método o atributo)
*
**/
int buscarParaDeclararMiembroClase( tablaSimbolosClases *t, char * nombre_clase_desde, char * nombre_miembro, elementoTablaSimbolos * e, char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Realiza la búsqueda de identificadores cuando, al declararlos, se intenta insertarlos en la tabla de símbolos
* Se utiliza cuando se quiere declarar un miembro de instancia
*
**/
int buscarParaDeclararMiembroInstancia(tablaSimbolosClases *t, char * nombre_clase_desde, char * nombre_miembro, elementoTablaSimbolos * e, char * nombre_ambito_encontrado);
/**
* buscarTablaSimbolosAmbitoActual
*
* Busca el símbolo id en la tabla de símbolos t (especialmente pensada para main)
*
**/
int buscarTablaSimbolosAmbitoActual(tablaSimbolosAmbitos * t, char* id, elementoTablaSimbolos* e, char * id_ambito);
/**
* buscarTablaSimbolosClasesAmbitoActual
*
* Esta función se utilizará en situaciones similares a la anterior pero cuando se está en un método de una clase
*
**/
int buscarTablaSimbolosClasesAmbitoActual(tablaSimbolosClases *t, char * nombre_clase, char * nombre_id, elementoTablaSimbolos * e, char * nombre_ambito_encontrado);

/********************************************************************/
/*Funciones insercion simbolos que no involucren creacion de ambitos*/
/********************************************************************/

/**
* insertarTablaSimbolosClases
*
* Realiza las tareas de inserción de un símbolo en el grafo
*
**/
int insertarTablaSimbolosClases(tablaSimbolosClases * grafo, char* id_clase,
					char* id,
					int clase,
					int categoria,
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

/**
* insertarTablaSimbolosClases
*
* Realiza las tareas de inserción de un símbolo en la TSA
*
**/
int insertarTablaSimbolosAmbitos(tablaSimbolosAmbitos * tA, char* id_clase, elementoTablaSimbolos *e);

/***********************/
/*Funcionalidad variada*/
/***********************/

/**
* aplicarAccesos
*
* Esta función realiza el control de acceso aplicando la política de cualificadores de acceso (hidden, secret y exposed)
*
**/
int aplicarAccesos(tablaSimbolosClases *t, char * nombre_clase_ambito_actual, char * clase_declaro, elementoTablaSimbolos * pelem);
/**
* tablaSimbolosClasesToDot
*
* Esta función genera el fichero que contiene el gráfico en formato dot de la tabla de simbolos de clases
* y que tiene como nombre el nombre de la tabla (con el que se creó) con la extensión .dot.
*
**/
tablaSimbolosClases * tablaSimbolosClasesToDot(tablaSimbolosClases * grafo);
/**
* tablaSimbolosClasesANasm
*
* Esta funcion abre un fichero ensamblador y se escribe el codigo NASM necesario
* para que contenga la TS y se pueda unir al codigo ensamblador del resto de la
* generacion para componer la version de bajo nivel que genera nuestro compilador
*
**/
int tablaSimbolosClasesANasm(tablaSimbolosClases *t);

#endif /*TABLA_SIMBOLOS*/
