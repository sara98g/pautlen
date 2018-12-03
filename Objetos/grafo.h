#ifndef GRAFO
#define GRAFO

#include <stdbool.h>

typedef struct _Grafo Grafo;

#include "nodo.h"
#include "tabla_simbolos.h"


Grafo* grafo_ini();
void grafo_free(Grafo* grafo);
List* grafo_get_nodes(const Grafo* grafo);
List* grafo_get_raiz(const Grafo* grafo);
bool grafo_insert_raiz(Grafo* grafo, char* nombre, tablaSimbolosAmbitos* info);
bool grafo_insert_node(Grafo* grafo, char* nombre, tablaSimbolosAmbitos* info, char** padres, int tam);
int grafo_get_size(Grafo* grafo);
Nodo* grafo_find_nodo(Grafo *grafo, char *nombre);
Nodo* grafo_find_raiz(Grafo* grafo, char* nombre);
bool grafo_print(FILE* fp, Grafo* grafo);

#endif
