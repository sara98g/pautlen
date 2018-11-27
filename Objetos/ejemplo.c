#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabla_simbolos_ambitos.h"
#include "tabla_simbolos_clases.h"


FILE* fichero_ensamblador;			/* Fichero con el codigo ensamblador   */

tablaSimbolosAmbitos tabla_main;	/* Tabla de simbolos */
tablaSimbolosClases * tabla_clases;	/* PARA CLASES PUTO GRAFO */

/*******************************************************************************************/
int main(int argc, char* argv[])
{

	tablaSimbolosAmbitos tabla_aa;
	elementoTablaSimbolos * pelem;

	char id_ambito[100];
	char *id_clase;
	char *id_elem;

	FILE* fout=fopen("resultado.txt", "w");

	iniciarTablaSimbolosClases(&tabla_clases, "ejemplo");

	// *************************************
	// Abrimos el ambito de clase AA
	// class AA {
	id_clase = "AA";
	fprintf(fout,"Abrir:\tClase %s\n",id_clase);

	abrirClase(tabla_clases,id_clase);
	graph_enrouteParentsLastNode(tabla_clases);

	// *************************************
	// Declaramos los atributos de AA

	// secret int sa1;
	id_elem = "AA_sa1";
	if (buscarParaDeclararMiembroInstancia(tabla_clases, id_clase, id_elem, &pelem, id_ambito) == ERR)
	{
		insertarTablaSimbolosClases(tabla_clases, id_clase, id_elem, ATRIBUTO_INSTANCIA, INT, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, ACCESO_CLASE, MIEMBRO_NO_UNICO, 0, 0, 0, 0,  NULL );
	}
	else
		fprintf(fout,"Buscar: \t%s\t--> Error --> No deberia existir en el ambito: %s\n",id_elem,id_ambito);

	// exposed unique int xa1;
	id_elem = "AA_xa1";
	if (buscarParaDeclararMiembroClase(tabla_clases, id_clase, id_elem, &pelem, id_ambito) == ERR)
	{
		insertarTablaSimbolosClases(tabla_clases, id_clase, id_elem, ATRIBUTO_CLASE, INT, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, ACCESO_TODOS, MIEMBRO_UNICO, 0, 0, 0, 0,  NULL );
	}
	else
		fprintf(fout,"Buscar: \t%s\t--> Fallo --> Ya existe en el ambito: %s\n",id_elem,id_ambito);

	// *************************************
	// metodos

	// function hidden  unique int mA1 (int p1) { int v1; printf p1;}
	id_elem = "AA_ma1@1";
	if (buscarParaDeclararMiembroInstancia(tabla_clases, id_clase, id_elem, &pelem, id_ambito) == ERR)
	{
		tablaSimbolosClasesAbrirAmbitoEnClase(tabla_clases,id_clase,id_elem, METODO_SOBREESCRIBIBLE, ACCESO_HERENCIA, MIEMBRO_NO_UNICO,0,TAMANIO_TABLA);
	}
	else
		fprintf(fout,"Buscar: \t%s\t--> Existe en el ambito: %s\n",id_elem,id_ambito);

	// Parametros y variables locales del metodo
	insertarTablaSimbolosClases(tabla_clases,id_clase,"ma1@1_p1", PARAMETRO, INT, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0,  NULL );
	insertarTablaSimbolosClases(tabla_clases,id_clase,"ma1@1_v1", VARIABLE, INT, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0,  NULL );

	// Cerramos ambitos de la clase
	fprintf(fout,"Cerrar:\t\tAmbito %s\n",id_elem);
	tablaSimbolosClasesCerrarAmbitoEnClase(tabla_clases, id_clase);

	// *************************************
	// Fin de la clase AA
	fprintf(fout,"Cerrar:\tClase %s\n",id_clase);
	cerrarClase(tabla_clases,id_clase,0,0,0,0);

	// Fin de todo
	cerrarTablaSimbolosClases(tabla_clases);
	graph_destroy(tabla_clases);

	fclose(fout);
	return 0;
}
