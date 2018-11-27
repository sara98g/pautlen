
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
extern FILE *yyin;

FILE* salida;

int main(int argc, char** argv){
	
	int ret;

	if(argc < 3){
		printf("Error de argumentos: ./omicron fich_entrada fich_salida\n");
		return 0;
	}
	
	yyin= fopen(argv[1],"r");
	salida = fopen(argv[2], "w+");
	
	
	while ((ret = yylex()) != 0);
	
	fclose(salida);
	fclose(yyin);
	return 0;
}