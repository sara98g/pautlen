/*
 * ADVERTENCIA: Esta librería es solo una guía de ayuda al estudiante.
 *  Es muy posible que haya que modificar las funciones, argumentos y retornos,
 *  así como ampliar su funcionalidad según el diseño implementado
 *  y según avance el proyecto.
 */
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

typedef struct NodoHash {
	char *clave;        //Identificador del nodo.
	void *info;         //Datos que vayamos a poner en este nodo.
	struct NodoHash *siguiente;//NULL en caso de que no exista un nodo en colision. El siguiente en caso contrario.
} NodoHash;

typedef struct TablaHash {
	int tam;    	//Tamaño de la tabla hash.
	NodoHash **tabla; //Array de punteros a los primeros elementos de la tabla hash.
} TablaHash;

/**************** FUNCIONES ****************/
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
NodoHash* crearNodoHash(char *clave, void *info);

//Inserta en la tabla hash un nodo en un indice calculado por funcionHash.
//Utilizara la funcionHash para saber donde insertar el nuevo elemento y debera crear dentro el nuevo nodo (crearNodoHash).
//Devuelve OK en caso de que se inserte y ERROR en caso de que no.
int insertarNodoHash(TablaHash *th, char *clave, void *info);

//Busca en la tabla hash el nodo identificado por su clave y lo devuelve. NULL en caso contrario.
NodoHash* buscarNodoHash(TablaHash *th, char *clave);

#endif
