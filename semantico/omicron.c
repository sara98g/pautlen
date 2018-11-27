#include <stdio.h>
#include <string.h>

extern int yyparse();
extern void yyerror(char *e);

extern FILE *yyin;
extern FILE *salida;

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
    
    tablaSimbolosAmbitos** tabla;
    if(iniciarTablaSimbolosAmbitos(tabla) == ERROR){
        printf("Error abriendo tabla de simbolos\n");
    }
     do
    {
        yyparse();
    }while (!feof(yyin));
    destruirTablaSimbolosAmbitos(tabla);

    fclose(yyin);
    fclose(salida);
    return 0;

}
