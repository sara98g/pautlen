#include "hash.h"

int main () {
	TablaHash *th = NULL;
	th = crearTablaHash(5);
	
	if(th) {
		printf("\tTabla creada correctamente\n");
	} else {
		printf("\tTabla NO CREADA\n");
		return 1;
	}
	
	if(!insertarNodoHash(th, "Nodo1", (void*)11)){
		printf("\tNodo 1 no insertado\n");
	}
	
	if(!insertarNodoHash(th, "Nodo2", (void*)21)){
		printf("\tNodo 2 no insertado\n");
	}
	
	if(!insertarNodoHash(th, "Nodo3", (void*)31)){
		printf("\tNodo 3 no insertado\n");
	}
	
	if(!insertarNodoHash(th, "Nodo6", (void*)41)){
		printf("\tNodo 4 no insertado\n");
	}
	
	if(!insertarNodoHash(th, "Nodo3", (void*)1001)){
		printf("\tNodo 5 no insertado\n");
	}
	
	if(!insertarNodoHash(th, "Nodo4", (void*)10041)){
		printf("\tNodo 6 no insertado\n");
	}
	
	
	
	
	if(buscarNodoHash(th, "Nodo1")){
		printf("\tNodo1 encontrado en la tabla\n");
	} else {
		printf("\tNodo1 NO encontrado en la tabla\n");
	}
	
	if(buscarNodoHash(th, "Nodo6")){
		printf("\tNodo6 encontrado en la tabla\n");
	} else {
		printf("\tNodo6 NO encontrado en la tabla\n");
	}
	
	if(buscarNodoHash(th, "Nodo4")){
		printf("\tNodo4 encontrado en la tabla\n");
	} else {
		printf("\tNodo4 NO encontrado en la tabla\n");
	}
	
	
	if(eliminarTablaHash(th) == OK) {
		printf("\tTABLA ELIMINADA\n");
		return 0;
	}

	return 0;
}
