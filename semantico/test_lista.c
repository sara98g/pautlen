#include <stdlib.h>
#include <stdio.h>


#include "list.h"
#include "functions.h"


int main(int argc, char** argv){
    
    List* lista = NULL;
    int uno = 1;
    int dos = 2;
    int tres = 3;
    int cuatro = 4;
    int cinco = 5;
    int seis = 6;
    
    lista = linkedList_ini(destroy_intp_function, copy_intp_function, print_intp_function, cmp_intp_function, true);
    if(!lista){
        printf("lista es NULL.\n");
        return EXIT_FAILURE;
    }
    linkedList_print(stdout, lista);
    printf("\n");
        
        
    linkedList_insert_first(lista, &uno);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_insert_first(lista, &dos);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_insert_first(lista, &tres);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_insert_last(lista, &cuatro);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_insert_last(lista, &cinco);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_insert_last(lista, &seis);
    linkedList_print(stdout, lista);
    printf("\n");

    printf("Buscando 2. Posición %d\n", linkedList_find(lista, &dos));
    linkedList_print(stdout, lista);
    printf("\n");
    printf("Buscando 4. Posición %d\n", linkedList_find(lista, &cuatro));
    linkedList_print(stdout, lista);
    printf("\n");
    printf("Buscando 6. Posición %d\n", linkedList_find(lista, &seis));
    linkedList_print(stdout, lista);
    printf("\n");

    linkedList_remove_first(lista);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_remove_last(lista);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_remove(lista, 3);
    linkedList_print(stdout, lista);
    printf("\n");

    linkedList_free(lista);
    
    printf("\nCreando lista nueva ordenada.\n\n");
    
    lista = linkedList_ini(destroy_intp_function, copy_intp_function, print_intp_function, cmp_intp_function, true);
    if(!lista){
        printf("lista es NULL.\n");
        return EXIT_FAILURE;
    }
    linkedList_print(stdout, lista);
    printf("\n");
        
    linkedList_inser_inOrder(lista, &uno);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_inser_inOrder(lista, &dos);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_inser_inOrder(lista, &tres);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_inser_inOrder(lista, &cuatro);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_inser_inOrder(lista, &cinco);
    linkedList_print(stdout, lista);
    printf("\n");
    linkedList_inser_inOrder(lista, &seis);
    linkedList_print(stdout, lista);
    printf("\n");
    
    printf("Obteniendo el primer elemento:  %d\n", *(int*)linkedList_get_first(lista));
    linkedList_print(stdout, lista);
    printf("\n");
    printf("Obteniendo el último elemento:  %d\n", *(int*)linkedList_get_last(lista));
    linkedList_print(stdout, lista);
    printf("\n");
    printf("Obteniendo el cuarto elemento:  %d\n", *(int*)linkedList_get(lista, 3));
    linkedList_print(stdout, lista);
    printf("\n");
    
    
    linkedList_free(lista);
    
        
    return EXIT_SUCCESS;
}