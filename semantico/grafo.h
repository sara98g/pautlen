#ifndef GRAFO
#define GRAFO

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "nodo.h"
#include "list.h"

typedef struct _Grafo Grafo;

Grafo* grafo_ini();
void grafo_free(Grafo* grafo);
List* grafo_get_nodes(const Grafo* grafo);
List* grafo_get_raiz(const Grafo* grafo);
bool grafo_insert_raiz(Grafo* grafo, char* nombre, void* info);
bool grafo_insert_node(Grafo* grafo, char* nombre, void* info, char** padres, int tam);
int grafo_get_size(Grafo* grafo);
Nodo* grafo_find_nodo(Grafo *grafo, char *nombre);
bool grafo_print(FILE* fp, Grafo* grafo);

#endif
