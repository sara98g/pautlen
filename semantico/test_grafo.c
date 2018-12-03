#include <stdio.h>
#include <stdlib.h>

#include "grafo.h"

int main(){
    Grafo* grafo = NULL;
    int info = 1;
    char* padres1 = {"A"};
    char* padres2 = {"B"};
    char* padres3[2] = {"C", "B"};
    char* padres4 = {"D"};

    if(!(grafo = grafo_ini()))
        return EXIT_FAILURE;

    if(grafo_insert_raiz(grafo, "A", &info) == false){
        grafo_free(grafo);
        printf("Ha fallado la inserción de una raiz.\n");
        return EXIT_FAILURE;
    }

    if(grafo_insert_node(grafo, "B", &info, &padres1, 1) == false){
        grafo_free(grafo);
        printf("Ha fallado la inserción de un nodo.\n");
        return EXIT_FAILURE;
    }

    if(grafo_insert_node(grafo, "C", &info, &padres2, 1) == false){
        grafo_free(grafo);
        printf("Ha fallado la inserción de un nodo.\n");
        return EXIT_FAILURE;
    }
    
    if(grafo_insert_node(grafo, "D", &info, padres3, 2) == false){
        grafo_free(grafo);
        printf("Ha fallado la inserción de un nodo.\n");
        return EXIT_FAILURE;
    }
    
    if(grafo_insert_node(grafo, "E", &info, &padres4, 1) == false){
        grafo_free(grafo);
        printf("Ha fallado la inserción de un nodo.\n");
        return EXIT_FAILURE;
    }

    grafo_print(stdout, grafo);
    printf("\n");

    nodo_print(stdout, grafo_find_nodo(grafo, "A"));
    printf("\t");
    linkedList_print(stdout, nodo_get_hijos(grafo_find_nodo(grafo, "A")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres(grafo_find_nodo(grafo, "A")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres_familia(grafo_find_nodo(grafo, "A")));
    printf("\n");


    nodo_print(stdout, grafo_find_nodo(grafo, "B"));
    printf("\t");
    linkedList_print(stdout, nodo_get_hijos(grafo_find_nodo(grafo, "B")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres(grafo_find_nodo(grafo, "B")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres_familia(grafo_find_nodo(grafo, "B")));
    printf("\n");
    
    
    nodo_print(stdout, grafo_find_nodo(grafo, "C"));
    printf("\t");
    linkedList_print(stdout, nodo_get_hijos(grafo_find_nodo(grafo, "C")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres(grafo_find_nodo(grafo, "C")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres_familia(grafo_find_nodo(grafo, "C")));
    printf("\n");
    
    
    nodo_print(stdout, grafo_find_nodo(grafo, "D"));
    printf("\t");
    linkedList_print(stdout, nodo_get_hijos(grafo_find_nodo(grafo, "D")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres(grafo_find_nodo(grafo, "D")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres_familia(grafo_find_nodo(grafo, "D")));
    printf("\n");
    
    
    
    nodo_print(stdout, grafo_find_nodo(grafo, "E"));
    printf("\t");
    linkedList_print(stdout, nodo_get_hijos(grafo_find_nodo(grafo, "E")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres(grafo_find_nodo(grafo, "E")));
    printf("\t\t");
    linkedList_print(stdout, nodo_get_padres_familia(grafo_find_nodo(grafo, "E")));
    printf("\n");


    grafo_free(grafo);

    return EXIT_SUCCESS;
}
