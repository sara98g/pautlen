CC = gcc
CFLAGS = -c -Wall -g -O0

DEPENDENCIAS1 = list.o functions.o
DEPENDENCIAS2 = grafo.o nodo.o list.o
DEPENDENCIAS3 = hash.o tabla_simbolo.o

.PHONY: all clean

all: pruebaSintactico

pruebaSintactico: pruebaSintactico.o y.tab.o lex.yy.o $(DEPENDENCIAS1) $(DEPENDENCIAS2) $(DEPENDENCIAS3)
	$(CC) $^ -o $@

lex.yy.o: lex.yy.c y.tab.h
	$(CC) $(CFLAGS) $< -o $@

lex.yy.c: omicron.l
	flex $^

y.tab.o: y.tab.c
	$(CC) $(CFLAGS) $< -o $@

y.tab.h: omicron.y
	bison -d -y -v $<

y.tab.c: omicron.y
	bison -d -y -v $<

clean:
	rm -f *.o pruebaSintactico lex.yy.c misalida*.txt y.*


list.o : list.c list.h
	$(CC) $(CFLAGS) -c -o $@ $<

functions.o : functions.c functions.h
	$(CC) $(CFLAGS) -c -o $@ $<

grafo.o : grafo.c grafo.h nodo.h list.h
	$(CC) $(CFLAGS) -c -o $@ $<

nodo.o : nodo.c nodo.h list.h
	$(CC) $(CFLAGS) -c -o $@ $<

hash.o : hash.c hash.h
	$(CC) $(CFLAGS) -c -o $@ $<

tabla_simbolo.o : tabla_simbolo.c tabla_simbolo.h
	$(CC) $(CFLAGS) -c -o $@ $<
