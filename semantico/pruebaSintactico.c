#include <stdio.h>
#include <string.h>
#include "tabla_simbolos.h"

#include "omicron.h"

extern int yyparse();
extern void yyerror(char *e);

extern FILE *yyin;
extern FILE *salida;
char idclase[] = "ClasePrincipal";

int main(int argc, char** argv)
{


    if (argc != 3) {
      fprintf (stdout, "Error de argumentos: ./pruebaSintactico entrada salida\n");
      return -1;
    }

    salida = fopen(argv[2],"w");
    if(!salida){
        fprintf(stdout,"No se pudo abrir el fichero de salida \n");
    }
    yyin =fopen(argv[1],"r");
    if(!yyin){
        fprintf(stdout,"No se pudo abrir el fichero de entrada \n");
        return 1;
    }

    tablaSimbolosClases* ts_c;
    if(iniciarTablaSimbolosClases(ts_c, "main") == ERROR){
        printf("Error creando el grafo\n");
        exit(Error);
    }
    if(abrirClase(ts_c, idclase) == ERROR){
      printf("Error abriendo tabla de simbolos\n");
      exit(Error);
    }
     do
    {
        yyparse();
    }while (!feof(yyin));

    if(cerrarClase(ts_c, idclase, 0, 0, 0,0) == ERROR){
      printf("Error cerrando tabla simbolos\n");
      exit(Error);
    }
    if(cerrarTablaSimbolosClases(tablaSimbolosClases* t) == ERROR){
      printf("Error cerrando grafo\n");
      exit(Error);
    }

    fclose(yyin);
    fclose(salida);
    return 0;

}
