CC = gcc
CFLAGS = -c -Wall -g -O0

OBJECTS = pruebaSintactico.o y.tab.o  tabla_simbolos.o nodo.o grafo.o hash.o list.o

.PHONY: all clean

all: pruebaSintactico

pruebaSintactico:  $(OBJECTS)
	$(CC) -o pruebaSintactico $(OBJECTS)

pruebaSintactico.o: pruebaSintactico.c tabla_simbolos.h generacion.h functions.h estructuras.h omicron.h
	$(CC) $(CFLAGS) pruebaSintactico.c

list.o: list.c list.h
	$(CC) $(CFLAGS)  list.c

hash.o: hash.c hash.h
	$(CC) $(CFLAGS) hash.c

nodo.o: nodo.c estructuras.h
	$(CC) $(CFLAGS)  nodo.c

grafo.o: grafo.c estructuras.h
	$(CC) $(CFLAGS)  grafo.c

tabla_simbolos.o: tabla_simbolos.c estructuras.h
	$(CC) $(CFLAGS) tabla_simbolos.c

lex.yy.o: lex.yy.c y.tab.h
	$(CC) $(CFLAGS) lex.yy.c

lex.yy.c: omicron.l
	flex omicron.l

y.tab.o: y.tab.c
	$(CC) $(CFLAGS) y.tab.c

y.tab.c: omicron.y
	bison -d -y -v omicron.y

clean:
	rm -f *.o pruebaSintactico lex.yy.c misalida*.txt y.*
