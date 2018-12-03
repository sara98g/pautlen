#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tabla_simbolos.h"


char* categoria_to_char(int c){
	switch(c){
		case VARIABLE:
			return "VARIABLE";
		case PARAMETRO:
			return "PARAMETRO";
		case FUNCION:
			return "FUNCION";
		case CLASE:
			return "CLASE";
		case METODO_SOBREESCRIBIBLE:
			return "METODO SOBREESCRIBIBLE";
		case METODO_NO_SOBREESCRIBIBLE:
			return "METODO NO SOBREESCRIBIBLE";
		case ATRIBUTO_CLASE:
			return "ATRIBUTO CLASE";
		case ATRIBUTO_INSTANCIA:
			return "ATRIBUTO INSTANCIA";
	}
	
	return "ERROR";
}

char* tipo_to_char(int c){
	switch(c){
		case BOOLEAN:
			return "BOOLEAN";
		case INT:
			return "ENTERO";
	}
	
	return "ERROR";
}

char* clase_to_char(int c){
	switch(c){
		case ESCALAR:
			return "ESCALAR";
		case VECTOR:
			return "VECTOR";
	}
	
	return "ERROR";
}

char* acceso_to_char(int c){
	switch(c){
		case NINGUNO:
			return "NINGUNO";
		case ACCESO_CLASE:
			return "ACCESO_CLASE";
		case ACCESO_HERENCIA:
			return "ACCESO_HERENCIA";
		case ACCESO_TODOS:
			return "ACCESO_TODOS";
	}
	
	return "ERROR";
}

char* miembro_to_char(int c){
	switch(c){
		case MIEMBRO_UNICO:
			return "MIEMBRO_UNICO";
		case MIEMBRO_NO_UNICO:
			return "MIEMBRO_NO_UNICO";
	}
	
	return "ERROR";
}

void printTSA(FILE *salida, tablaSimbolosAmbitos *tsa){
	int i=0;
	char* clave=NULL;
	NodoHash *n=NULL;
	TablaHash *th=NULL;
	elementoTablaSimbolos *e=NULL;
	
	fprintf(salida, "=================== main =================\n\n");

	if(tsa->idAmbito == GLOBAL){
		th = tsa->global;
		for(i=0; i<linkedList_size(th->lista); i++){
			clave = linkedList_extract_last(th->lista);
			n = buscarNodoHash(th, clave);
			e = nodo_get_ElementoTablaSimbolos(n);
			
			if(e->tipo_acceso == ACCESO_CLASE){
				//IMPRIMIR CLASE PRINCIPAL
				fprintf(salida, "%s\tCLASE\tES CLASE CON %d ATR CLASE, %d ATR INSTANCIA, %d MET. SOBR.\n", e->clave, e->numero_atributos_clase, e->numero_atributos_instancia, e->numero_metodos_sobreescribibles);
				fprintf(salida, "%d MET. NO SOBR. %d ACUM ATR INS Y %d ACUM MET SOBR.\n\n", e->numero_metodos_no_sobreescribibles, e->num_acumulado_atributos_instancia, e->num_acumulado_metodos_sobreescritura);
			} else {
				//IMPRIMIR INFO ELEMENTO MAIN
				fprintf(salida, "%s\t%s\tPOS_LOCAL: %d\tPOS ATR. INSTANCIA %d Y ACUMULADA %d\tCLASE: %s\n", e->clave, categoria_to_char(e->categoria), 0, 0, 0, clase_to_char(e->clase));
				fprintf(salida, "TIPO: %s\t DIR: %d\tACCESO: %d\tMIEMBRO: %d\n\n", tipo_to_char(e->tipo), 0, e->tipo_acceso, e->tipo_miembro);
			}
		}
	} else if(tsa->idAmbito == LOCAL){
		th = tsa->local;
		for(i=0; i<linkedList_size(th->lista); i++){
			clave = linkedList_extract_last(th->lista);
			n = buscarNodoHash(th, clave);
			e = nodo_get_ElementoTablaSimbolos(n);
			
			if(e->tipo_acceso == ACCESO_CLASE){
				//IMPRIMIR CLASE PRINCIPAL
				fprintf(salida, "%s\tCLASE\tES CLASE CON %d ATR CLASE, %d ATR INSTANCIA, %d MET. SOBR.\n", e->clave, e->numero_atributos_clase, e->numero_atributos_instancia, e->numero_metodos_sobreescribibles);
				fprintf(salida, "%d MET. NO SOBR. %d ACUM ATR INS Y %d ACUM MET SOBR.\n\n", e->numero_metodos_no_sobreescribibles, e->num_acumulado_atributos_instancia, e->num_acumulado_metodos_sobreescritura);
			} else {
				//IMPRIMIR INFO ELEMENTO MAIN
				fprintf(salida, "%s\t%s\tPOS_LOCAL: %d\tPOS ATR. INSTANCIA %d Y ACUMULADA %d\tCLASE: %s\n", e->clave, categoria_to_char(e->categoria), 0, 0, 0, clase_to_char(e->clase));
				fprintf(salida, "TIPO: %s\t DIR: %d\tACCESO: %d\tMIEMBRO: %d\n\n", tipo_to_char(e->tipo), 0, e->tipo_acceso, e->tipo_miembro);
			}
		}
	} else {
		fprintf(salida, "ERROR AL IMPRIMIR LA PILA DEL MAIN (AMBITO CERRADO)\n\n");
		return;	
	}
	
	return;
}

void printTSC(FILE *salida, tablaSimbolosClases *tsc, char *nombre_clase){
	Nodo *n=NULL;
	NodoHash *nh =NULL;
	tablaSimbolosAmbitos *tsa=NULL;
	int i=0;
	char* clave=NULL;
	TablaHash *th=NULL;
	elementoTablaSimbolos *e=NULL;
	
	fprintf(salida, "=================== %s =================\n\n", nombre_clase);
	
	n = grafo_find_nodo(tsc->grafo, nombre_clase);
	if (!n){
		return;
	}
	tsa = nodo_get_info(n);
	
	if(tsa->idAmbito == GLOBAL){
		th = tsa->global;
		for(i=0; i<linkedList_size(th->lista); i++){
			clave = linkedList_extract_last(th->lista);
			nh = buscarNodoHash(th, clave);
			e = nodo_get_ElementoTablaSimbolos(nh);
			
			if(e->categoria == CLASE){
				//IMPRIMIR CLASE PRINCIPAL
				fprintf(salida, "%s\tCLASE\tES CLASE CON %d ATR CLASE, %d ATR INSTANCIA, %d MET. SOBR.\n", e->clave, e->numero_atributos_clase, e->numero_atributos_instancia, e->numero_metodos_sobreescribibles);
				fprintf(salida, "%d MET. NO SOBR. %d ACUM ATR INS Y %d ACUM MET SOBR.\n\n", e->numero_metodos_no_sobreescribibles, e->num_acumulado_atributos_instancia, e->num_acumulado_metodos_sobreescritura);
			} else {
				//IMPRIMIR INFO ELEMENTO MAIN
				fprintf(salida, "%s\t%s\tPOS_LOCAL: %d\tPOS ATR. INSTANCIA %d Y ACUMULADA %d\tCLASE: %s\n", e->clave, categoria_to_char(e->categoria), 0, 0, 0, clase_to_char(e->clase));
				fprintf(salida, "TIPO: %s\t DIR: %d\tACCESO: %d\tMIEMBRO: %d\n\n", tipo_to_char(e->tipo), 0, e->tipo_acceso, e->tipo_miembro);
			}
		}
	} else if(tsa->idAmbito == LOCAL){
		th = tsa->local;
		for(i=0; i<linkedList_size(th->lista); i++){
			clave = linkedList_extract_last(th->lista);
			nh = buscarNodoHash(th, clave);
			e = nodo_get_ElementoTablaSimbolos(nh);
			
			if(e->categoria == CLASE){
				//IMPRIMIR CLASE PRINCIPAL
				fprintf(salida, "%s\tCLASE\tES CLASE CON %d ATR CLASE, %d ATR INSTANCIA, %d MET. SOBR.\n", e->clave, e->numero_atributos_clase, e->numero_atributos_instancia, e->numero_metodos_sobreescribibles);
				fprintf(salida, "%d MET. NO SOBR. %d ACUM ATR INS Y %d ACUM MET SOBR.\n\n", e->numero_metodos_no_sobreescribibles, e->num_acumulado_atributos_instancia, e->num_acumulado_metodos_sobreescritura);
			} else {
				//IMPRIMIR INFO ELEMENTO MAIN
				fprintf(salida, "%s\t%s\tPOS_LOCAL: %d\tPOS ATR. INSTANCIA %d Y ACUMULADA %d\tCLASE: %s\n", e->clave, categoria_to_char(e->categoria), 0, 0, 0, clase_to_char(e->clase));
				fprintf(salida, "TIPO: %s\t DIR: %d\tACCESO: %d\tMIEMBRO: %d\n\n", tipo_to_char(e->tipo), 0, e->tipo_acceso, e->tipo_miembro);
			}
		}
	} else {
		fprintf(salida, "ERROR AL IMPRIMIR LA PILA DEL MAIN (AMBITO CERRADO)\n\n");
		return;	
	}
	
	
	
	return;
}

int main (int argc, char *argv[ ]) {
	FILE *entrada, *salida;
	char linea[512];
	char *tok, *tok2, *token;
	
	tablaSimbolosClases *tsc = NULL;
	tablaSimbolosAmbitos *tsa = NULL;
	elementoTablaSimbolos *e = NULL;
	char * id_ambito = NULL;

	if(argc != 2){
		printf("ERROR. Ejemplo de ejecucion -> ./pruebaTS entrada.txt\n");
		return 1;
	}
	
	entrada = fopen (argv[1], "r");
	if(!entrada){
		printf("Error al abrir el fichero\n");
		return 1;
	}
	
	entrada = fopen ("salida.txt", "w");
	if(!entrada){
		printf("Error al crear fichero de salida\n");
		return 1;
	}
	
	fgets(linea, 512, entrada);
	
	while(feof(entrada) == 0){

		tok = strtok(linea, "\t");
		
		if(!strcmp(tok, "inicia_tsc\n")){
			char *nombre_id = strtok(NULL, "\n");
			tsc = iniciarTablaSimbolosClases(nombre_id);
			if(tsc != NULL){
				fprintf(salida, "inicia_tsc\n");
			} else {
				fprintf(salida, "inicia_tsc... ERROR\n");	
			}
		}
		
		if(!strcmp(tok, "inicia_tsa_main\n")){
			tsa = iniciarTablaSimbolosAmbitos();
			if(tsa != NULL){
				fprintf(salida, "inicia_tsa_main\n");
			} else {
				fprintf(salida, "inicia_tsa_main... ERROR\n");			
			}
		}
		
		if(!strcmp(tok, "abrir_ambito_ppal_main\n")){
			if(abrirAmbitoPpalMain(tsa) == OK){
				fprintf(salida, "abrir_ambito_ppal_main\n");
			} else {
				fprintf(salida, "abrir_ambito_ppal_main... ERROR\n");
			}
		}
		
		if(!strcmp(tok, "buscar")){
		
			tok2 = strtok(NULL, "\t");
			
			if(!strcmp(tok2, "declarar_main")){
				char *nombre_id = strtok(NULL, "\n");
				
				if(buscarParaDeclararIdTablaSimbolosAmbitos(tsa, nombre_id, e, id_ambito) == ERROR){
					fprintf(salida, "buscar declarar_main %s: No encontrado: se puede declarar\n", nombre_id);
				} else {
					fprintf(salida, "buscar declarar_main %s: Encontrado: no se puede declarar\n", nombre_id);
				}
			}
			
			if(!strcmp(tok2, "declarar_miembro_instancia")){
				char *nombre_clase_desde = strtok(NULL, "\t");
				char *nombre_miembro = strtok(NULL, "\n");
				
				if(buscarParaDeclararMiembroInstancia(tsc, nombre_clase_desde, nombre_miembro, e, id_ambito) == ERROR){
					fprintf(salida, "buscar declarar_miembro_instancia %s %s: No encontrado: se puede declarar\n", nombre_clase_desde, nombre_miembro);
				} else {
					fprintf(salida, "buscar declarar_miembro_instancia %s %s: Encontrado: no se puede declarar\n", nombre_clase_desde, nombre_miembro);
				}
			}
			
	   		if(!strcmp(tok2, "declarar_miembro_clase")){
				char *nombre_clase_desde = strtok(NULL, "\t");
				char *nombre_miembro = strtok(NULL, "\n");
				
				if(buscarParaDeclararMiembroClase(tsc, nombre_clase_desde, nombre_miembro, e, id_ambito) == ERROR){
					fprintf(salida, "buscar declarar_miembro_clase %s %s: No encontrado: se puede declarar\n", nombre_clase_desde, nombre_miembro);
				} else {
					fprintf(salida, "buscar declarar_miembro_clase %s %s: Encontrado: no se puede declarar\n", nombre_clase_desde, nombre_miembro);
				}
			}
			
			if(!strcmp(tok2, "declarar_id_local_metodo")){
				char *nombre_clase = strtok(NULL, "\t");
				char *nombre_id = strtok(NULL, "\n");
				
				//FALTA IMPLEMENTAR LA FUNCION
				if(buscarParaDeclararIdLocalEnMetodo(tsc, nombre_clase, nombre_id, e, id_ambito) == ERROR){
					fprintf(salida, "buscar declarar_id_local_metodo %s %s: No encontrado: se puede declarar\n", nombre_clase, nombre_id);
				} else {
					fprintf(salida, "buscar declarar_id_local_metodo %s %s: Encontrado: no se puede declarar\n", nombre_clase, nombre_id);
				}
			}
			
			if(!strcmp(tok2, "id_no_cualificado")){
				char *nombre_id = strtok(NULL, "\t");
				char *nombre_clase_desde = strtok(NULL, "\n");
				
				if(buscarIdNoCualificado(tsc, tsa, nombre_id, nombre_clase_desde, e, id_ambito) == OK){
					fprintf(salida, "buscar id_no_cualificado %s %s: Encontrado en %s\n", nombre_clase_desde, nombre_id, id_ambito);
				} else {
					fprintf(salida, "buscar id_no_cualificado %s %s: Encontrado en %s\n", nombre_clase_desde, nombre_id, "NO ENCONTRADO");
				}
			}
			
	   		if(!strcmp(tok2, "id_cualificado_instancia")){
				char *nombre_instancia = strtok(NULL, "\t");
				char *nombre_id = strtok(NULL, "\t");
				char *nombre_clase_desde = strtok(NULL, "\n");
				
				if(buscarIdCualificadoInstancia(tsc, tsa, nombre_instancia, nombre_id, nombre_clase_desde, e, id_ambito) == OK){
					fprintf(salida, "buscar id_cualificado_instancia %s %s: Encontrado en %s %s", nombre_instancia, nombre_id, nombre_clase_desde, id_ambito);
				} else {
					fprintf(salida, "buscar id_cualificado_instancia %s %s: Encontrado en %s %s", nombre_instancia, nombre_id, nombre_clase_desde, "NO ENCONTRADO");
				}
			}
			
			if(!strcmp(tok2, "id_cualificado_clase")){
				char *nombre_clase_cualificada = strtok(NULL, "\t");
				char *nombre_id = strtok(NULL, "\t");
				char *nombre_clase_desde = strtok(NULL, "\n");
				
				if(buscarIdIDCualificadoClase(tsc, nombre_clase_cualificada, nombre_id, nombre_clase_desde, e, id_ambito) == OK){
					fprintf(salida, "buscar id_cualificado_clase %s %s: Encontrado en %s %s", nombre_clase_cualificada, nombre_id, nombre_clase_desde, id_ambito);
				} else {
					fprintf(salida, "buscar id_cualificado_clase %s %s: Encontrado en %s %s", nombre_clase_cualificada, nombre_id, nombre_clase_desde, "NO ENCONTRADO");
				}
			}
			
			if(!strcmp(tok2, "jerarquia")){
				char *nombre_id = strtok(NULL, "\t");
				char *nombre_clase = strtok(NULL, "\n");
				
				//FALTA
				//buscarIdEnJerarquiaDesdeClase
			}			
		}
		
		if(!strcmp(tok, "insertar_tsa_main")){
			char *nombre_id = strtok(NULL, "\t");
			char *categoria = strtok(NULL, "\t");
			char *tipo_basico = strtok(NULL, "\t");
			char *clase = strtok(NULL, "\t");
			char *tipo_acceso = strtok(NULL, "\t");
			char *tipo_miembro = strtok(NULL, "\n");
			
			CATEGORIA cat = atoi(categoria);
			TIPO tipo = atoi(tipo_basico);
			TIPO_CLASE cls = atoi(clase);
			TIPO_ACCESO t_acceso = atoi(tipo_acceso);
			TIPO_MIEMBRO t_miembro = atoi(tipo_miembro);
			
			char* _cat = categoria_to_char(cat);
			char* _tipo = tipo_to_char(tipo);
			char* _cls = clase_to_char(cls);
			char* _t_acceso = acceso_to_char(t_acceso);
			char* _t_miembro = miembro_to_char(t_miembro);
			
			e = nodo_crearElementoTablaSimbolos();
			/*tercer param revisar*/
			e = nodo_set_ElementoTablaSimbolos(e, nombre_id, 0, cat, tipo, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, t_acceso, t_miembro, 0, 0, 0, 0, 0, 0, NULL);
			
			if(insertarTablaSimbolosAmbitos(tsa, nombre_id, e) == OK){
				fprintf(salida, "insertar_tsa_main %s %s %s %s %s %s\n\n", nombre_id, categoria, tipo_basico, clase, tipo_acceso, tipo_miembro);
				printTSA(salida, tsa);
			} else {
				fprintf(salida, "insertar_tsa_main %s %s %s %s %s %s\n\n", nombre_id, categoria, tipo_basico, clase, tipo_acceso, tipo_miembro);
				fprintf(salida, "ERROR, ELEMENTO NO INSERTADO\n\n");
			}
		}
		
		if(!strcmp(tok, "abrir_ambito_tsa_main")){
			char *nombre_ambito = strtok(NULL, "\t");
			char *tipo_basico = strtok(NULL, "\n");
			
			/*abrirAmbitoMain*/
		}
		
		if(!strcmp(tok, "abrir_clase")){
			char *nombre_clase = strtok(NULL, "\n");
			
			if(abrirClase(tsc, nombre_clase) == OK){
				abrirAmbitoMain(tsa, nombre_clase, CLASE, GLOBAL);
				fprintf(salida, "abrir_clase %s.\n", nombre_clase);
			} else {
				fprintf(salida, "abrir_clase %s... ERROR\n", nombre_clase);
			}
		}
		
		if(!strcmp(tok, "insertar_tsc")){
			char *nombre_clase = strtok(NULL, "\t");
			char *nombre_simbolo = strtok(NULL, "\t");
			
			char *categoria = strtok(NULL, "\t");
			char *tipo_basico = strtok(NULL, "\t");
			char *clase = strtok(NULL, "\t");
			char *tipo_acceso = strtok(NULL, "\t");
			char *tipo_miembro = strtok(NULL, "\n");
			
			CATEGORIA cat = atoi(categoria);
			TIPO tipo = atoi(tipo_basico);
			TIPO_CLASE cls = atoi(clase);
			TIPO_ACCESO t_acceso = atoi(tipo_acceso);
			TIPO_MIEMBRO t_miembro = atoi(tipo_miembro);
			
			if(insertarTablaSimbolosClases(tsc, nombre_clase, nombre_simbolo, cls, cat, tipo, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, t_acceso, t_miembro, 0, 0, 0, 0, 0, 0, NULL) == OK){
				fprintf(salida, "insertar_tsc %s %s %s %s %s %s %s\n\n", nombre_clase, nombre_simbolo, categoria, tipo_basico, clase, tipo_acceso, tipo_miembro);
				printTSC(salida, tsc, nombre_clase);
			} else {
				fprintf(salida, "insertar_tsc %s %s %s %s %s %s %s\n\n", nombre_clase, nombre_simbolo, categoria, tipo_basico, clase, tipo_acceso, tipo_miembro);
				fprintf(salida, "ERROR, ELEMENTO NO INSERTADO\n\n");
			}
		}
		
		if(!strcmp(tok, "abrir_ambito_tsc")){
			char *nombre_clase = strtok(NULL, "\t");
			char *nombre_ambito = strtok(NULL, "\t");
			
			char *categoria = strtok(NULL, "\t");
			char *tipo_basico = strtok(NULL, "\t");
			char *tipo_acceso = strtok(NULL, "\t");
			char *tipo_miembro = strtok(NULL, "\n");
			
			CATEGORIA cat = atoi(categoria);
			TIPO tipo = atoi(tipo_basico);
			TIPO_ACCESO t_acceso = atoi(tipo_acceso);
			TIPO_MIEMBRO t_miembro = atoi(tipo_miembro);
			
			//NO ENTIENDO...
			/*ultimo arg*/
			if(tablaSimbolosClasesAbrirAmbitoEnClase(tsc, nombre_clase, nombre_ambito, cat, tipo, t_acceso, t_miembro, 0) == OK){
				fprintf(salida, "abrir_ambito_tsc %s %s %s %s %s %s %s\n\n", nombre_clase, nombre_ambito, categoria, tipo_basico, tipo_acceso, tipo_miembro);
				printTSC(salida, tsc, nombre_clase);
			} else {
				fprintf(salida, "abrir_ambito_tsc %s %s %s %s %s %s %s\n\n", nombre_clase, nombre_ambito, categoria, tipo_basico, tipo_acceso, tipo_miembro);
				fprintf(salida, "ERROR, ELEMENTO NO INSERTADO\n\n");
			}
		}
		
		if(!strcmp(tok, "cerrar_ambito_tsc\n")){
			char *nombre_clase = strtok(NULL, "\n");
			
			if(tablaSimbolosClasesCerrarAmbitoEnClase(tsc, nombre_clase) == OK){
				fprintf(salida, "cerrar_ambito_tsc %s.\n", nombre_clase);
			} else {
				fprintf(salida, "cerrar_ambito_tsc %s... ERROR\n", nombre_clase);
			}
		}
		
		if(!strcmp(tok, "cerrar_clase")){
			char *nombre_clase = strtok(NULL, "\n");
			
			if(cerrarClase(tsc, nombre_clase, 0, 0, 0, 0) == OK){
				fprintf(salida, "cerrar_clase %s.\n", nombre_clase);
			} else {
				fprintf(salida, "cerrar_clase %s... ERROR\n", nombre_clase);
			}
		}
		
		if(!strcmp(tok, "abrir_clase_hereda")){
			char *nombre_clase = strtok(NULL, "\t");
			int num_padres = 0;
			char ** nombres_padres = NULL;
			while((token=strtok(NULL," \n\t"))!=NULL){
                num_padres++;
                nombres_padres = (char **) realloc(nombres_padres, sizeof(char*)*num_padres);                     
                nombres_padres[num_padres-1] = (char*)malloc((strlen(token)+1)*sizeof(char));
                strcpy(nombres_padres[num_padres-1], token);
       		}
        	abrirClaseHeredaN(tsc, nombre_clase, num_padres, nombres_padres);
       		//graph_enrouteParentsLastNode(tsc);
		}
		
		if(!strcmp(tok, "cerrar_tsa_main\n")){
			if(cerrarAmbitoMain(tsa) == OK){
				fprintf(salida, "cerrar_tsa_main .\n");
			} else {
				fprintf(salida, "cerrar_tsa_main ... ERROR\n");
			}
		}
		
		if(!strcmp(tok, "cerrar_ambito_tsa_main\n")){
			//No se
		}
		
		if(!strcmp(tok, "cerrar_tsc\n")){
			if(cerrarTablaSimbolosClases(tsc) == OK){
				fprintf(salida, "cerrar_tsc .\n");
			} else {
				fprintf(salida, "cerrar_tsc ... ERROR\n");
			}
		}
		
		fgets(linea, 512, entrada);
	}
	
	fclose(entrada);
	return 0;
}
