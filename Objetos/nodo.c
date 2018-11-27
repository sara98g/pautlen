#include "nodo.h"
#include "tabla_simbolos.h"


struct _Nodo {
    elementoTablaSimbolos *e;
	char* nombre;
	void* info; //TSA
    List* padres;
    List* hijos;
    List* padres_familia;
};


elementoTablaSimbolos * nodo_crearElementoTablaSimbolos(){
	if (!e){
		return NULL;
	}
	e = (elementoTablaSimbolos*)malloc(sizeof(elementoTablaSimbolos));
	strcpy(e->clave, "");
	e->tipo_args = (int*)malloc(sizeof(int));
	e->categoria = VARIABLE;
	e->tipo = BOOLEAN;
	e->clase = ESCALAR;
	e->tamanio = MAX_TAB;
	e->numero_parametros = 0;
	e->posicion_parametro = 0;
	e->numero_variables_locales = 0;
	e->posicion_variable_local = 1;
	e->direcciones = 0; /*mayor o igual a 1 si es variable*/
	e->numero_atributos_clase = 0;
	e->numero_atributos_instancia = 0;
	e->numero_metodos_sobreescribibles = 0;
	e->numero_metodos_no_sobreescribibles = 0;
	e->tipo_acceso = NINGUNO;
	e->posicion_atributo_instancia = 0;
	e->posicion_metodo_sobreescribible = 0;
	e->num_acumulado_atributos_instancia = 0;
	e->num_acumulado_metodos_sobreescritura = 0;
	
	return e;
}

int nodo_free_ElementoTablaSimbolos(elementoTablaSimbolos * e){
	if (!e){
		return ERROR;
	}
	free(e->tipo_args);
	free(e);
	return OK;
	
}

elementoTablaSimbolos * nodo_get_ElementoTablaSimbolos(Nodo *n){
    if (!n){
        return NULL;
    }
    return nh->e;
}


bool nodo_calcular_padres_familia(Nodo* nodo);


Nodo* nodo_ini(char* nombre, void* info, List* padres){
    Nodo *nodo = NULL;
    
    if(!nombre || !info)
        return NULL;
    
    if(!(nodo = (Nodo*)malloc(sizeof(Nodo))))
    	return NULL;

    if(!(nodo->nombre = (char *)malloc(((strlen(nombre))+1)* sizeof(char)))){
        free(nodo);
        return NULL;
    }
    if(!strcpy(nodo->nombre, nombre)){
        free(nodo->nombre);
        free(nodo);
        return NULL;
    }
    
    if(!(nodo->e = nodo_crearElementoTablaSimbolos())){
        free(nodo->nombre);
        free(nodo);
        return NULL;
    }
    
    nodo->info = info;
    nodo->padres = padres;
    nodo->padres_familia = NULL;
    if(!(nodo->hijos = linkedList_ini(nodo_free, nodo_copiar, nodo_print, nodo_cmp, false))){
        nodo_free_ElementoTablaSimbolos(nodo->e);
        free(nodo->nombre);
        free(nodo);
        return NULL;
    }
    
    if(nodo_calcular_padres_familia(nodo) == false){
        nodo_free_ElementoTablaSimbolos(nodo->e);
        linkedList_free_no_node(nodo->hijos);
        free(nodo->nombre);
        free(nodo);
        return NULL;
    }
    
    return nodo;
}



Nodo* nodo_ini_cmp(char* nombre){
    Nodo *nodo = NULL;
    
    if(!nombre)
        return NULL;
    
    
    if(!(nodo = (Nodo*)malloc(sizeof(Nodo))))
    	return NULL;

    if(!(nodo->nombre = (char *)malloc(((strlen(nombre))+1)* sizeof(char)))){
        free(nodo);
        return NULL;
    }
    if(!strcpy(nodo->nombre, nombre)){
        free(nodo->nombre);
        free(nodo);
        return NULL;
    }
    nodo->e = NULL;
    nodo->info = NULL;
    nodo->padres = NULL;
    nodo->padres_familia = NULL;
    nodo->hijos = NULL;
    
    return nodo;
}


void* nodo_copiar(const void* nodo){
    Nodo* new_nodo = NULL;
    
    if(!nodo)
        return NULL;

    if(!(new_nodo = (Nodo*)malloc(sizeof(Nodo))))
    	return NULL;
    
    if(!(new_nodo->nombre = (char*)malloc(((strlen(nodo_get_nombre((Nodo*)nodo)))+1)* sizeof(char)))){
        free(new_nodo);
        return NULL;
    }
    if(!strcpy(new_nodo->nombre, nodo_get_nombre((Nodo*)nodo))){
        free(new_nodo->nombre);
        free(new_nodo);
        return NULL;
    }
    
    new_nodo->info = nodo_get_info((Nodo*)nodo);
    new_nodo->padres = nodo_get_padres((Nodo*)nodo);
    new_nodo->padres_familia = nodo_get_padres_familia((Nodo*)nodo);
    new_nodo->hijos = nodo_get_hijos((Nodo*)nodo);
    new_nodo->e = nodo_get_ElementoTablaSimbolos((Nodo*)nodo);
    
    return (void*)new_nodo;
}



void nodo_free(void* nodo){
    if(!nodo)
        return;

    /* Este free de la lista solo libera la lista sin llamar a liberar nodo */
    if(nodo_get_hijos((Nodo*)nodo))
        linkedList_free_no_node(nodo_get_hijos((Nodo*)nodo));
    if (nodo_get_info((Nodo*) nodo))
        destruirTablaSimbolosAmbitos(nodo_get_info((Nodo*)nodo));
    if(nodo_get_padres((Nodo*)nodo))
        linkedList_free_no_node(nodo_get_padres((Nodo*)nodo));
    if(nodo_get_padres_familia((Nodo*)nodo))
        linkedList_free_no_node(nodo_get_padres_familia((Nodo*)nodo));
    if(nodo_get_nombre((Nodo*)nodo))
        free(nodo_get_nombre((Nodo*)nodo));
    if(nodo_get_ElementoTablaSimbolos((Nodo*)nodo))
        nodo_free_ElementoTablaSimbolos(nodo_get_ElementoTablaSimbolos((Nodo*)nodo));
    free((Nodo*)nodo);
    return;
}


char* nodo_get_nombre(const Nodo* nodo){
	if (!nodo)
		return NULL;

	return nodo->nombre;
}


void* nodo_get_info(const Nodo* nodo){
    if(!nodo)
        return NULL;
    
    return nodo->info;
}


List* nodo_get_hijos(const Nodo* nodo){
    if(!nodo)
        return NULL;
    
    return nodo->hijos;
}

List* nodo_get_padres(const Nodo* nodo){
    if(!nodo)
        return NULL;
    
    return nodo->padres;
}


List* nodo_get_padres_familia(const Nodo* nodo){
    if(!nodo)
        return NULL;
    
    return nodo->padres_familia;
}



bool nodo_insert_padre(Nodo* nodo, Nodo* padre){  
    if(!nodo || !padre)
        return false;
        
    if(linkedList_find(nodo_get_padres(nodo), padre) >= 0)
        return true;
        
    if(linkedList_insert_last(nodo_get_padres(nodo), padre) == false)
        return false;
    return true;
}


bool nodo_insert_hijo(Nodo* nodo, Nodo* hijo){    
    if(!nodo || !hijo)
        return false;
        
    if(linkedList_find(nodo_get_hijos(nodo), hijo) >= 0)
        return true;
        
    if(linkedList_insert_last(nodo_get_hijos(nodo), hijo) == false)
        return false;
    return true;
}


bool nodo_calcular_padres_familia(Nodo* nodo){
    List* padres_familia = NULL;
    List* listaux = NULL;
    Nodo* padre = NULL;
    Nodo* nodoaux = NULL;
    int i, j, tam1, tam2;
    
    if(!nodo)
        return false;
    
    if(!nodo_get_padres(nodo) || (tam1 = linkedList_size(nodo_get_padres(nodo))) <= 0)
        return  true;
    
    if(!(padres_familia = linkedList_ini(nodo_free, nodo_copiar, nodo_print, nodo_cmp, false)))
        return false;

    for(i=0; i<tam1; i++){ /* Para cada padre */
        /* Obtengo el padre i */
        if(!(padre = (Nodo*)linkedList_get(nodo_get_padres(nodo), i))){
            linkedList_free_no_node(padres_familia);
            return false;
        }
        if(linkedList_find(padres_familia, padre) < 0){
            if(linkedList_insert_last(padres_familia, padre) == false){
                linkedList_free_no_node(padres_familia);
                return false;
            }
        }
        
        if((listaux = nodo_get_padres_familia(padre)) && (tam2 = linkedList_size(listaux)) > 0){  /* Este padre tiene la lista de sus padres familia */       
            for(j=0; j<tam2; j++){
                if(!(nodoaux = (Nodo*)linkedList_get(listaux, j))){
                    linkedList_free_no_node(padres_familia);
                    return false;
                }
                if(linkedList_find(padres_familia, nodoaux) < 0){
                    if(linkedList_insert_last(padres_familia, nodoaux) == false){
                        linkedList_free_no_node(padres_familia);
                        return false;
                    }
                }
            }
        }
    }
    nodo->padres_familia = padres_familia;
    return true;
}


int nodo_cmp(const void* nodo1, const void* nodo2){
    if(!nodo1 && !nodo2)
        return 0;
    
    if(!nodo1)
        return 1;
    if(!nodo2)
        return -1;
        
    return strcmp(nodo_get_nombre((Nodo*)nodo1), nodo_get_nombre((Nodo*)nodo2));
}

bool nodo_print(FILE* fp, const void* nodo){
    if (!fp || !nodo)
        return false;
    
    fprintf(fp, "%s", nodo_get_nombre((Nodo*)nodo));
    return true;
}
