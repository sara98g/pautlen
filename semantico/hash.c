#include "hash.h"

TablaHash* crearTablaHash(int tam) {
	TablaHash *th;

    if ((th = (TablaHash *) malloc(sizeof(TablaHash)))) {
        if (!(th->tabla = (NodoHash **) calloc(tam, sizeof(NodoHash *)))) {
            free(th); 
            return NULL;
        }
        th->tam = tam;
    }
    return th;
}


int eliminarTablaHash(TablaHash *th) {
    int i;
    NodoHash *n1, *n2;
    
    if (th) {
        if (th->tabla) {
            for (i = 0; i < th->tam; i++) {
                n1 = th->tabla[i];
                while (n1) {
                	if(n1->siguiente){
                		n2 = n1->siguiente;
						if(n1->clave)
							free(n1->clave);
						if(n1->info)
							n1->info = NULL;
	    				free(n1);
		                n1 = n2;
                	} else {
                		if(n1->clave)
							free(n1->clave);
						if(n1->info)
							n1->info = NULL;
	    				free(n1);
	    				n1=NULL;
                	}
                }
            }
            free(th->tabla);
        }
        free(th);
    }
    
    return OK;
}


int funcionHash(char *clave) {
	int h = HASH_INI;
    char *p = clave;
	while(*p != 0){
		h = h*HASH_FACTOR + *p;
        //printf("\tclave:%s *clave:%d, p:%s, *p:%d, h:%d\n",clave , *clave, p, *p, h);
        p++;
        //printf("\t2clave:%s *clave:%d, p:%s, *p:%d, h:%d\n",clave , *clave, p, *p, h);
	}
	
	/*
    for (p = (char *) clave; *p!=NULL; p++) {
        h = h*HASH_FACTOR + *p;
        printf("\tclave:%s *clave:%d, p:%s, *p:%d, h:%d\n",clave , *clave, p, *p, h);
    }
    */
    return h;
}


NodoHash* crearNodoHash(char *clave, void *info) {
	NodoHash *nh;

    if ((nh = (NodoHash *) malloc(sizeof(NodoHash)))) {
        nh->info = info;
		nh->clave = (char*) malloc (sizeof(char)*(strlen(clave)+1));
		if(!nh->clave){
			free(nh);
			return NULL;
		}
		strcpy(nh->clave, clave);
        nh->siguiente = NULL;
    }
    return nh;
}

int insertarNodoHash(TablaHash *th, char *clave, void *info) {
	int ind;
    NodoHash *n = NULL;
    NodoHash *n2 = NULL;
    
    if (buscarNodoHash(th, clave)) {
    	//printf("\tEl nodo con clave = %s ya existe... ", clave);
        return ERROR;
    }
    
    ind = funcionHash(clave) % th->tam;
	//printf("\t\tInsertar en la posicion: %d\n", ind);
	
	if (!(n = crearNodoHash(clave, info))) {
        return ERROR;
    }
    
    if(th->tabla[ind]){
    	n2 = th->tabla[ind];
    	while(n2->siguiente){
    		n2 = n2->siguiente;
    	}
    	n2->siguiente = n;
    } else {
    	th->tabla[ind] = n;
    }
	
    return OK;
}


NodoHash* buscarNodoHash(TablaHash *th, char *clave) {
	int ind, fh;    
    NodoHash *n;
	
	fh = funcionHash(clave);
	//printf("\tFuncion Hash: %d\n", fh);
    ind = fh % th->tam;
	n = th->tabla[ind];
    while (n && (!n->info || strcmp(n->clave, clave))) {
        n = n->siguiente;
    }
    return n ? n->info : NULL;
}
