#ifndef NODO_H
#define NODO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "list.h"


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

} elementoTablaSimbolos; /*info de los nodos del grafo*/


typedef struct _Nodo Nodo;


Nodo* nodo_ini(char *nombre, void *info, List *padres);
Nodo* nodo_ini_cmp(char* nombre);
void* nodo_copiar(const void* nodo);

void nodo_free(void *nodo);

char* nodo_get_nombre(const Nodo* nodo);
void* nodo_get_info(const Nodo* nodo);
List* nodo_get_hijos(const Nodo* nodo);
List* nodo_get_padres(const Nodo* nodo);
List* nodo_get_padres_familia(const Nodo* nodo);

bool nodo_insert_padre(Nodo* nodo, Nodo* padre);
bool nodo_insert_hijo(Nodo* nodo, Nodo* hijo);

int nodo_cmp(const void* nodo1, const void* nodo2);

bool nodo_print(FILE* fp, const void* nodo);

#endif