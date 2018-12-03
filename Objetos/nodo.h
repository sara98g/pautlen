#ifndef NODO_H
#define NODO_H


#include <stdbool.h>

typedef struct _Nodo Nodo;

#include "list.h"
#include "tabla_simbolos.h"
#include "hash.h"


Nodo* nodo_ini(char *nombre, tablaSimbolosAmbitos *info, List *padres);
Nodo* nodo_ini_cmp(char* nombre);
void* nodo_copiar(const void* nodo);

void nodo_free(void *nodo);

char* nodo_get_nombre(const Nodo* nodo);
tablaSimbolosAmbitos* nodo_get_info(const Nodo* nodo);
List* nodo_get_hijos(const Nodo* nodo);
List* nodo_get_padres(const Nodo* nodo);
List* nodo_get_padres_familia(const Nodo* nodo);

bool nodo_insert_padre(Nodo* nodo, Nodo* padre);
bool nodo_insert_hijo(Nodo* nodo, Nodo* hijo);

int nodo_cmp(const void* nodo1, const void* nodo2);

bool nodo_print(FILE* fp, const void* nodo);

#endif