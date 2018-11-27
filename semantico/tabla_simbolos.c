#include "tabla_simbolos.h"



/*******************************************************/
/*Funciones de gestion de tablas y ambitos*/
/*******************************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int iniciarTablaSimbolosClases(tablaSimbolosClases** t, char * nombre){
  int i;

  
  if (!t ||!nombre){
    return ERROR;
  }
  t = (tablaSimbolosClases**)malloc(sizeof(tablaSimbolosClases*)*MAX_TAB);
  for (i = 0; i < MAX_TAB; i++){
  	t = (tablaSimbolosClases*)malloc(sizeof(tablaSimbolosClases));
  }	
  
  t->grafo = grafo_ini();
  t->nombre = (char*)malloc(sizeof(char)*(strlen(nombre)+1));
  strcpy(t->nombre, nombre);
  

  return OK;

}

/**
* iniciarTablaSimbolosAmbitos
*
* Reserva todos los recursos para crear una tsa
* que tenga dos tablas hash por cada ambito local/global.
**/
int iniciarTablaSimbolosAmbitos(tablaSimbolosAmbitos **t){
	int i;

  
  if (!t ||!nombre){
    return ERROR;
  }
  *t = (tablaSimbolosAmbitos**)malloc(sizeof(tablaSimbolosAmbitos*)*MAX_TAB);
  for (i = 0; i < MAX_TAB; i++){
  	t = (tablaSimbolosAmbitos*)malloc(sizeof(tablaSimbolosAmbitos));
  }	
  *t->global = crearTablaHash(MAX_TAB);
  *t->local = crearTablaHash(MAX_TAB);
  *t->idAmbito = GLOBAL;
  
  return OK;
  
}

void destruirTablaSimbolosAmbitos(tablaSimbolosAmbitos *t){
	if (!t){
		return;
	}
	
	eliminarTablaHash(t->global);
	eliminarTablaHash(t->local);
	free(t);
	return;
}

/**
* abrirClase
*
* Realiza las tareas de añadir al grafo una nueva raíz
**/
int abrirClase(tablaSimbolosClases* t, char* id_clase){
	tablaSimbolosAmbitos *tA;
	
	if (!t || !id_clase){
		return ERROR;
	}
	if (iniciarTablaSimbolosAmbitos(tA) == ERROR){
		return ERROR;
	}
	if (grafo_insert_raiz(t->grafo, id_clase, tA) == ERROR){
		destruirTablaSimbolosAmbitos(tA);
		return ERROR;
	}
	return OK;
	
}

/**
* abrirClaseHeredaN
*
* Realiza las tareas de añadir al grafo un nuevo nodo 
* que debe conectarse a los nombres identificados mediante los últimos argumentos
* 
*/
int abrirClaseHeredaN (tablaSimbolosClases* t, char *id_clase, int num_padres, char** nombres_padres){
	int i;
	tablaSimbolosAmbitos *tA;
	
	if (!t){
		return ERROR;
	}
	
	for (i = 0; i < num_padres; i++){
		if (grafo_find_nodo(t->grafo, id_clase) == NULL){
			return ERROR;
		}
	}
	if (iniciarTablaSimbolosAmbitos(tA) == ERROR){
		return ERROR;
	}
	if (grafo_insert_node(t->grafo, t->nombre, tA, nombres_padres, num_padres) == FALSE){
		destruirTablaSimbolosAmbitos(tA);
		return ERROR;
	}
	return OK;
}

/**
* cerrarClase
*
* Realiza tareas asociadas con el final de la clase identificada mediante el segundo argumento.
*
*/
int cerrarClase(tablaSimbolosClases* t,
                 char *id_clase,
                 int num_atributos_clase,
                 int num_atributos_instancia,
                 int num_metodos_sobreescribibles,
                 int num_metodos_no_sobreescribibles){
	Nodo* nodo;
	elementoTablaSimbolos* e;
   
	if(!t || !id_clase)
		return ERROR;
	
	if(!(nodo = grafo_find_nodo(t->grafo), id_clase))
		return ERROR;
	
	if(!(e = nodo_get_ElementoTablaSimbolos(nodo)))
		return ERROR;
	
	e->numero_atributos_clase = num_atributos_clase;
	e->numero_atributos_instancia = num_atributos_instancia;
	e->numero_metodos_sobreescribibles = num_metodos_sobreescribibles;
	e->numero_metodos_no_sobreescribibles = num_metodos_no_sobreescribibles;
 
   
   return OK;
}

/**
* cerrarTablaSimbolosClases
*
* Realiza tareas asociadas con el final de la clase identificada 
* mediante el segundo argumento
*
*/
int cerrarTablaSimbolosClases(tablaSimbolosClases* t){
	if (!t){
		return ERROR;
	}
	
	grafo_free(t->grafo);
	free(t->nombre);
	free(t);
}

/**
* abrirAmbitoPpalMain
*
* Realiza tareas asociadas con la apertura del ámbito principal de la tabla de símbolos por ámbitos de main.
**/
int abrirAmbitoPpalMain(tablaSimbolosAmbitos** t){
	if (!t){
		return ERROR;
	}
	return OK;
}

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int abrirAmbitoMain(tablaSimbolosAmbitos ** t,
                    char* id_ambito,
                    int categoria_ambito,
                    int tipo_ambito,
                    int tamanio){
    return OK;                	
}
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int cerrarAmbitoMain(tablaSimbolosAmbitos* t){
	return OK;
}
/**
* tablaSimbolosClasesAbrirAmbitoEnClase
*
* Realiza tareas asociadas con la apertura del ámbito asociado con un metodo
*
**/
/*HACER*/
int tablaSimbolosClasesAbrirAmbitoEnClase(tablaSimbolosClases * grafo,
						char * id_clase,
						char* id_ambito,
						int categoria_ambito,
						int tipo_ambito,
						int acceso_ambito,
						int tipo_miembro,
						int posicion_metodo_sobre,
						int tamanio){
	if (!grafo){
		return ERROR;
	}
	return OK;							
}
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int tablaSimbolosClasesCerrarAmbitoEnClase(tablaSimbolosClases * grafo, char * id_clase){
	return OK;
}

/*******************************************************/
/*Busqueda de identificadores en la parte de sentencias*/
/*******************************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/

int buscarIdEnJerarquiaDesdeClase(tablaSimbolosClases *t,
					char * nombre_id,
					char * nombre_clase_desde,
					elementoTablaSimbolos ** e,
					char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/

/* TODO */
int buscarIdNoCualificado(	tablaSimbolosClases *t,
          					tablaAmbitos *tabla_main,
          	        char * nombre_id,
          					char * nombre_clase_desde,
          					elementoTablaSimbolos ** e,
          					char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/

/* TODO */
int buscarIdIDCualificadoClase(	tablaSimbolosClases *t,
                    					char * nombre_clase_cualifica,
                    					char * nombre_id,
                    					char * nombre_clase_desde,
                    					elementoTablaSimbolos ** e,
                    					char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/

int buscarIdCualificadoInstancia(	tablaSimbolosClases *t,
                        					tablaSimbolosAmbitos * tabla_main,
                        					char * nombre_instancia_cualifica,
                        					char * nombre_id,
                        					char * nombre_clase_desde,
                        					elementoTablaSimbolos ** e,
                        					char * nombre_ambito_encontrado);

/**********************************************************/
/*Busqueda de identificadores en la parte de declaraciones*/
/**********************************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarParaDeclararMiembroClase( tablaSimbolosClases *t,
					  char * nombre_clase_desde,
					  char * nombre_miembro,
					  elementoTablaSimbolos ** e,
					  char * nombre_ambito_encontrado);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarParaDeclararMetodoClase(	tablaSimbolosClases *t,
						char * nombre_clase_desde,
						char * nombre_miembro,
						elementoTablaSimbolos ** e,
						char * nombre_ambito_encontrado);
						
int buscarParaDeclararMiembroInstancia(tablaSimbolosClases *t,
						char * nombre_clase_desde,
						char * nombre_miembro,
						elementoTablaSimbolos ** e,
						char * nombre_ambito_encontrado);						
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int buscarTablaSimbolosAmbitoActual(tablaAmbitos * t,
                                    char* id,
                                    elementoTablaSimbolos** e,
                                    char* id_ambito){
	return OK;                                    	
}
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
/*int buscarTablaSimbolosClasesAmbitoActual( tablaSimbolosClases *t,
						  char * nombre_clase,
						  char * nombre_id,
						  elementoTablaSimbolos ** e,
						  char * nombre_ambito_encontrado);*/

/********************************************************************/
/*Funciones insercion simbolos que no involucren creacion de ambitos*/
/********************************************************************/

/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int insertarTablaSimbolosClases(tablaSimbolosClases * grafo,
					char* id_clase,
					char* id,
					int clase,
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
	
	Nodo* nodo;
	elementoTablaSimbolos* e;
	tablaSimbolosAmbitos *tA;
	
	if (!grafo || !id_clase || !id){
		return ERROR;
	}
	
	if(!(nodo = grafo_find_nodo(t->grafo), id_clase))
		return ERROR;
		
	
	/*No fiarse de momento*/
	e = nodo_get_ElementoTablaSimbolos(nodo);
	tA = e->info;
	/*Falta insertar en hash TA*/
	
	strcpy(e->clave, id);
	e->tipo_args = tipo_args;
	//e->categoria = VARIABLE;
	e->tipo = tipo;
	e->clase = ESCALAR;
	e->tamanio = tamanio;
	e->numero_parametros = numero_parametros;
	e->posicion_parametro = posicion_parametro;
	e->numero_variables_locales = numero_variables_locales;
	e->posicion_variable_local = posicion_variable_local;
	e->direcciones = direcciones; /*mayor o igual a 1 si es variable*/
	e->numero_atributos_clase = numero_atributos_clase;
	e->numero_atributos_instancia = numero_atributos_instancia;
	e->numero_metodos_sobreescribibles = numero_metodos_sobreescribibles;
	e->numero_metodos_no_sobreescribibles = numero_metodos_no_sobreescribibles;
	e->tipo_acceso = tipo_acceso;
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
	
	return OK;					
}
/***********************/
/*Funcionalidad variada*/
/**********************/
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
int aplicarAccesos( tablaSimbolosClases *t,
			char * nombre_clase_ambito_actual,
			char * clase_declaro,
			elementoTablaSimbolos * pelem);
/**
* iniciarTablaSimbolosClases
*
* Reserva todos los recursos para crear una tabla de símbolos
* basada en un grafo e identificada con el nombre proporcionado como argumento.
**/
tablaSimbolosClases * tablaSimbolosClasesToDot(tablaSimbolosClases * grafo);
