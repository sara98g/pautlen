#ifndef HASH
#define HASH

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "tabla_simbolos.h"

/**************** CONSTANTES ****************/
#define OK 1
#define ERROR 0
#define HASH_INI 5381
#define HASH_FACTOR 33

/**************** DECLARACIONES DE TIPOS ****************/

typedef struct _elementoTablaSimbolos {
    char clave[TAM_L]; /*clave de acceso a la tabla*/
    int categoria; /*variable, parametro de funcion, funcion, clase*/
    int tipo; /*boolean o int*/
    int clase; /*escalar o vector*/
    int tamanio; /*1-64*//*filas*//*Su valor ira de 1 a (#define MAX_TAB), solo valdra 0 si no se trata de un vector*/
    int numero_parametros; /*numero de parametros que contiene la funcion */
    int posicion_parametro; /*posicion del parametro de la funcion. COMIENZA EN 0*/
    int numero_variables_locales; /*numero de variables locales*/
    int posicion_variable_local; /*posicion de variable local. COMIENZA EN 1*/

    int direcciones; /*>=1 si es variable*/

    /* INFORMACION PARA CLASES */
  	int numero_atributos_clase;
  	int numero_atributos_instancia;
  	int numero_metodos_sobreescribibles;
  	int numero_metodos_no_sobreescribibles;
  	TIPO_ACCESO tipo_acceso;
  		/*NINGUNO (exposed) ACCESO_CLASE (secret)
      ACCESO_HERENCIA	(hidden) ACCESO_TODOS (exposed) */
  	TIPO_MIEMBRO tipo_miembro;
  		/*MIEMBRO_UNICO (unique) MIEMBRO_NO_UNICO*/
  	int posicion_atributo_instancia;
  	int posicion_metodo_sobreescribible;
  	int num_acumulado_atributos_instancia;
  	int num_acumulado_metodos_sobreescritura;
  	int * tipo_args;

} elementoTablaSimbolos; /*info de los nodos hash*/

typedef struct NodoHash {
	elementoTablaSimbolos *info;
	char *clave;        //Identificador del nodo.
	struct NodoHash *siguiente;//NULL en caso de que no exista un nodo en colision. El siguiente en caso contrario.
} NodoHash;

typedef struct TablaHash {
	int tam;    	//Tamaño de la tabla hash.
	NodoHash **tabla; //Array de punteros a los primeros elementos de la tabla hash.
} TablaHash;

/**************** FUNCIONES ****************/
elementoTablaSimbolos * nodo_crearElementoTablaSimbolos();
int nodo_free_ElementoTablaSimbolos(elementoTablaSimbolos * e);
elementoTablaSimbolos * nodo_get_ElementoTablaSimbolos(NodoHash *n);
elementoTablaSimbolos * nodo_set_ElementoTablaSimbolos(elementoTablaSimbolos *e, 
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
//Recibe un tamaño y crea una tabla de dicha longitud.
TablaHash* crearTablaHash(int tam);

//Elimina la tabla Hash.
//Devuelve OK en caso de que se borre correctamente y ERROR en caso de que no.
int eliminarTablaHash(TablaHash *th);

//Recibe el identificador de un nodo y devuelve su indice para la tabla hash.
//Funcion auxiliar, se llama dentro de la funcion insertarNodoHash.
int funcionHash(char *clave);

//Recibe la clave y la informacion, y devuelve un nuevo NodoHash. Reservara memoria y rellenara la estructura de NodoHash.
//Funcion auxiliar, se llama dentro de la funcion insertarNodoHash.
NodoHash* crearNodoHash(char *clave, elementoTablaSimbolos *info);

//Inserta en la tabla hash un nodo en un indice calculado por funcionHash.
//Utilizara la funcionHash para saber donde insertar el nuevo elemento y debera crear dentro el nuevo nodo (crearNodoHash).
//Devuelve OK en caso de que se inserte y ERROR en caso de que no.
int insertarNodoHash(TablaHash *th, char *clave, elementoTablaSimbolos *info);

//Busca en la tabla hash el nodo identificado por su clave y lo devuelve. NULL en caso contrario.
NodoHash* buscarNodoHash(TablaHash *th, char *clave);

#endif
