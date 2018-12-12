#include "estructuras.h"


Grafo* grafo_ini(){
	Grafo *grafo;
	
	if (!(grafo = (Grafo*)malloc(sizeof(Grafo))))
		return NULL;

	if (!(grafo->raiz = linkedList_ini(nodo_free, nodo_copiar, nodo_print, nodo_cmp, false))){
		free(grafo);
		return NULL;
	}
	
	if (!(grafo->nodos = linkedList_ini(nodo_free, nodo_copiar, nodo_print, nodo_cmp, false))){
		linkedList_free_no_node(grafo->raiz);
		free(grafo);
		return NULL;
	}
	
	return grafo;
}


void grafo_free(Grafo* grafo){
	if (!grafo)
		return;

	if(grafo_get_raiz(grafo))
		linkedList_free_no_node(grafo_get_raiz(grafo));
	if(grafo_get_nodes(grafo))
		linkedList_free(grafo_get_nodes(grafo));
	free(grafo);
	return;
}

List* grafo_get_nodes(const Grafo* grafo){
	if(!grafo)
		return NULL;
		
	return grafo->nodos;
}


List* grafo_get_raiz(const Grafo* grafo){
	if(!grafo)
		return NULL;
		
	return grafo->raiz;
}


bool grafo_insert_raiz(Grafo* grafo, char* nombre, tablaSimbolosAmbitos* info){
	Nodo* nodo = NULL;
	
	if (!grafo || !nombre || !info)
		return false;
	
	if(!(nodo = nodo_ini(nombre, info, NULL)))
		return false;
	
	if(linkedList_insert_last(grafo_get_raiz(grafo), nodo) == false){
		nodo_free(nodo);
		return false;
	}
	
	if(linkedList_insert_last(grafo_get_nodes(grafo), nodo) == false){
		linkedList_remove_last(grafo_get_raiz(grafo));
		return false;
	}
	
	return true;
}



bool grafo_insert_node(Grafo* grafo, char* nombre, tablaSimbolosAmbitos* info, char** padres, int tam){
	Nodo* nodo_aux = NULL;
	Nodo *nodo = NULL;
	List* list_aux = NULL;
	int i;
	int tam_aux;
	
	if (!grafo || !nombre || !info || !padres || tam <= 0)
		return false;

	/* Lista de padres */
	if(!(list_aux = linkedList_ini(nodo_free, nodo_copiar, nodo_print, nodo_cmp, false)))
		return false;

	/* Se crea la lista de padres con los nombres */
	for(i=0; i<tam; i++){
		if(!(nodo_aux = grafo_find_nodo(grafo, padres[i]))){
			linkedList_free_no_node(list_aux);
			return false;
		}
		if(linkedList_insert_last(list_aux, nodo_aux) == false){
			linkedList_free_no_node(list_aux);
			return false;
		}
	}

	if(!(nodo = nodo_ini(nombre, info, list_aux))){
		linkedList_free_no_node(list_aux);
		return false;
	}
	
	if(linkedList_insert_last(grafo_get_nodes(grafo), nodo) == false){
		nodo_free(nodo);
		return false;
	}
	
	for(i=0, tam_aux=linkedList_size(list_aux); i<tam_aux; i++){
		if(!(nodo_aux = linkedList_get(list_aux, i))){
			linkedList_remove_last(grafo_get_nodes(grafo));
			nodo_free(nodo);
			return false;
		}
		if(nodo_insert_hijo(nodo_aux, nodo) == false){
			linkedList_remove_last(grafo_get_nodes(grafo));
			nodo_free(nodo);
			return false;
		}
	}
	return true;
}

int grafo_get_size(Grafo* grafo){
	if(!grafo)
		return -1;

	return linkedList_size(grafo_get_nodes(grafo));
}


Nodo* grafo_find_nodo(Grafo* grafo, char* nombre){
	Nodo* nodo_aux = NULL;
	int pos;
	
	if (!grafo || !nombre)
		return NULL;
	
	if(!(nodo_aux = nodo_ini_cmp(nombre)))
		return NULL;
		
	if((pos = linkedList_find(grafo_get_nodes(grafo), nodo_aux)) < 0){
		nodo_free(nodo_aux);
		return NULL;
	}
	nodo_free(nodo_aux);
	return linkedList_get(grafo_get_nodes(grafo), pos);
}

Nodo* grafo_find_raiz(Grafo* grafo, char* nombre){
	Nodo* nodo_aux = NULL;
	int pos;
	
	if (!grafo || !nombre)
		return NULL;
	
	if(!(nodo_aux = nodo_ini_cmp(nombre)))
		return NULL;
		
	if((pos = linkedList_find(grafo_get_raiz(grafo), nodo_aux)) < 0){
		nodo_free(nodo_aux);
		return NULL;
	}
	nodo_free(nodo_aux);
	return linkedList_get(grafo_get_nodes(grafo), pos);
}

bool grafo_print(FILE* fp, Grafo* grafo){
	if(!fp || !grafo)
		return false;

	linkedList_print(fp, grafo_get_nodes(grafo));
	return true;
}