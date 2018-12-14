#include "hash.h"


elementoTablaSimbolos * nodo_crearElementoTablaSimbolos(){
	elementoTablaSimbolos *e;

	e = (elementoTablaSimbolos*)malloc(sizeof(elementoTablaSimbolos));

	e->clave = (char *)malloc(sizeof(char)*TAM_L+1);
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
	free(e->clave);
	free(e->tipo_args);
	free(e);
	return OK;

}

elementoTablaSimbolos * nodo_get_ElementoTablaSimbolos(NodoHash *n){
    if (!n){
        return NULL;
    }
    return n->info;
}

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
													int * tipo_args){
    // if(!e){
    // 	printf("\n_No hay elem_");
    // 	return NULL;
    // }
    if (!id){
    	printf("\n_No hay id_");
    	return NULL;
    }

	strcpy(e->clave, id);
	e->tipo_args = tipo_args;
	e->categoria = categoria;
	e->tipo = tipo;
	e->clase = ESCALAR;
	e->tamanio = tamanio;
	e->numero_parametros = numero_parametros;
	e->posicion_parametro = posicion_parametro;
	e->numero_variables_locales = numero_variables_locales;
	e->posicion_variable_local = posicion_variable_local;
	e->direcciones = direcciones;
	e->numero_atributos_clase = numero_atributos_clase;
	e->numero_atributos_instancia = numero_atributos_instancia;
	e->numero_metodos_sobreescribibles = numero_metodos_sobreescribibles;
	e->numero_metodos_no_sobreescribibles = numero_metodos_no_sobreescribibles;
	e->tipo_acceso = tipo_acceso;
        e->tipo_miembro = tipo_miembro;
	e->posicion_atributo_instancia = posicion_atributo_instancia;
	e->posicion_metodo_sobreescribible = posicion_metodo_sobreescribible;
	e->num_acumulado_atributos_instancia = num_acumulado_atributos_instancia;
	e->num_acumulado_metodos_sobreescritura = num_acumulado_metodos_sobreescritura;
	/*Faltan campos relacionados a estos*/
	/*int clase,
	int estructura,
	int dimension,
	int filas,
	int columnas,
	int capacidad,
	int tipo_miembro,
	int posicion_acumulada_atributos_instancia,
	int posicion_acumulada_metodos_sobreescritura,*/
	return e;
}


TablaHash* crearTablaHash(int tam) {
	TablaHash *th;

    if ((th = (TablaHash *) malloc(sizeof(TablaHash)))) {
        if (!(th->tabla = (NodoHash **) calloc(tam, sizeof(NodoHash *)))) {
            free(th);
            return NULL;
        }
        th->tam = tam;
    }

        th->lista = (char**) malloc(sizeof(char*)*1000);
        /*for(i=0; i<1000; i++)
            th->lista[i] = (char*) malloc(sizeof(char)*1000);
        */th->nElem = 0;

    return th;
}


int eliminarTablaHash(TablaHash *th) {
    int i;
    NodoHash *n1, *n2;

    if (th) {
        if (th->tabla) {
            for (i = 0; i < th->tam; i++) {
                if(th->nElem == 0){
                    free(th->tabla);
                    /*
                    for(x=0; x<100; x++){
                        free(th->lista[x]);
                    }
                    */
                    free(th->lista);
                    free(th);
                    return OK;
                }
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
                                        th->nElem--;
                	}
                }
            }
            free(th->tabla);

            /*for(x=0; x<1000; x++){

                    free(th->lista[x]);

            }*/

			free(th->lista);

        }
        free(th);
    }

    return OK;
}


int funcionHash(char *clave) {
	int h = HASH_INI;
    char *p = clave;
		printf("********CLAVE EN LA FUNCION HASH: %s%s***************** \n", clave, p);
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
		printf("******************RESULTADO DESPUES DEL IND:%d\n", h);
    return h;
}


NodoHash* crearNodoHash(char *clave, elementoTablaSimbolos *info) {
		NodoHash *nh;
		nh = (NodoHash *)malloc(sizeof(NodoHash));
		if (!nh){
			return NULL;
		}
    	nh->clave = (char*) malloc (sizeof(char)*(strlen(clave)+1));
        if(!nh->clave){
                free(nh);
                return NULL;
        }
        strcpy(nh->clave, clave);
        nh->siguiente = NULL;
        if(info){
						nh->info = info;

        } else{
	    	nh->info = nodo_crearElementoTablaSimbolos();
	        if (!nh->info){
	        	free(nh);
				return NULL;
	        }

    	}

    return nh;
}
void destruirNodoHash(NodoHash *nh){
	if (!nh){
		return;
	}
	free(nh->clave);
	nh->siguiente = NULL;
	nodo_free_ElementoTablaSimbolos(nh->info);
	free(nh);
	return;
}

int insertarNodoHash(TablaHash *th, char *clave, elementoTablaSimbolos *info) {
	int ind;
    NodoHash *n = NULL;
    NodoHash *n2 = NULL;

    if (th->nElem > 0) {
        if(buscarNodoHash(th, clave)){
    	printf("\tEl nodo con clave = %s ya existe... ", clave);
            return ERROR;
        }
    }
		printf("¡FUNCION HAS EN INSERTAR!\n");
    ind = funcionHash(clave) % th->tam;
		printf("\n\n\n\n\n");
	//printf("\t\tInsertar en la posicion: %d\n", ind);
	if (!(n = crearNodoHash(clave, info))) {
        return ERROR;
    }

    if(th->nElem > 0){
      if(th->tabla[ind]){
    		n2 = th->tabla[ind];
    		while(n2->siguiente){
    			n2 = n2->siguiente;
    		}
    		n2->siguiente = n;
      }else{
        th->tabla[ind] = n;
        }
    }else{
				th->tabla[ind] = (NodoHash*)malloc(sizeof(NodoHash));
      	th->tabla[ind] = n;
				    }

    th->lista[th->nElem] = clave;
    th->nElem++;
		printf("NODO INSERTADO\n\n");
    return OK;
}


NodoHash* buscarNodoHash(TablaHash *th, char *clave) {
	int ind, fh,i;
    NodoHash *n;
    if(!th || th->nElem==0){

        return NULL;
    }

		printf("¡FUNCION HAS EN BUSCAR!\n");
		fh = funcionHash(clave);
		printf("\n\n\n\n\n");
		//printf("\tFuncion Hash: %d\n", fh);
    ind = fh % th->tam;
		n = th->tabla[ind];
	 	if (!n){
        return NULL;
    }

    while (n && (!n->info || strcmp(n->clave, clave))) {
        n = n->siguiente;
    }
    return n;
}

/*MMMMAAAAAAAAAAAAAAAAAAZO TURBIOOOOOOOOOOOO*/

NodoHash* buscarNodoHash_aux(TablaHash *th, char *clave) {
	int ind, fh,i;
    NodoHash *n;
    if(!th || th->nElem==0){

        return NULL;
    }
		fh = funcionHash(clave);
		//printf("\tFuncion Hash: %d\n", fh);
    ind = fh % th->tam;
		n = th->tabla[ind];
		if (!n){
        return NULL;
    }

    while (n && (!n->info || strcmp(n->clave, clave))) {
        n = n->siguiente;
    }
    return n;
}



/********************************************/
bool printHashDot(FILE* fp, TablaHash* th){
	register int i;
	register int tam;
	elementoTablaSimbolos* elem_aux = NULL;
	NodoHash* nodo_aux = NULL;

	if(!fp || !th)
		return false;

	if((tam = th->tam) < 0)
		return false;

	for(i=0; i<tam; i++){
		if((nodo_aux = th->tabla[i])){
			while (nodo_aux) {
				elem_aux = nodo_aux->info;
				switch(elem_aux->categoria){
					case VARIABLE:
						switch(elem_aux->tipo_acceso){
							case ACCESO_CLASE:
								fprintf(fp, "secret ");
								break;
							case ACCESO_HERENCIA:
								fprintf(fp, "hidden ");
								break;
							case ACCESO_TODOS:
								fprintf(fp, "exposed ");
								break;
							default:
								break;
						}
						switch(elem_aux->tipo){
							case BOOLEAN:
								fprintf(fp, "bool ");
								break;
							case INT:
								fprintf(fp, "int ");
								break;
						}
						switch(elem_aux->clase){
							case VECTOR:
								fprintf(fp, "*%s\\l", elem_aux->clave);
								break;
							default:
								fprintf(fp, "%s\\l", elem_aux->clave);
								break;
						}
						break;
					case FUNCION:
						fprintf(fp, "func ");
						switch(elem_aux->tipo){
							case BOOLEAN:
								fprintf(fp, "bool %s\\l", elem_aux->clave);
								break;
							case INT:
								fprintf(fp, "int %s\\l", elem_aux->clave);
								break;
						}
						break;
					case METODO_SOBREESCRIBIBLE:
						switch(elem_aux->tipo_acceso){
							case ACCESO_CLASE:
								fprintf(fp, "secret ");
								break;
							case ACCESO_HERENCIA:
								fprintf(fp, "hidden ");
								break;
							case ACCESO_TODOS:
								fprintf(fp, "exposed ");
								break;
							default:
								break;
						}
						switch(elem_aux->tipo){
							case BOOLEAN:
								fprintf(fp, "bool %s\\l", elem_aux->clave);
								break;
							case INT:
								fprintf(fp, "int %s\\l", elem_aux->clave);
								break;
						}
						break;
					case METODO_NO_SOBREESCRIBIBLE:
						fprintf(fp, "static ");
						switch(elem_aux->tipo_acceso){
							case ACCESO_CLASE:
								fprintf(fp, "secret ");
								break;
							case ACCESO_HERENCIA:
								fprintf(fp, "hidden ");
								break;
							case ACCESO_TODOS:
								fprintf(fp, "exposed ");
								break;
							default:
								break;
						}
						switch(elem_aux->tipo){
							case BOOLEAN:
								fprintf(fp, "bool %s\\l", elem_aux->clave);
								break;
							case INT:
								fprintf(fp, "int %s\\l", elem_aux->clave);
								break;
						}
						break;
					case NINGUNO:
						break;
				}
				nodo_aux = nodo_aux->siguiente;
			}
		}
	}
	return true;
}
