########################################################
CC=gcc
CFLAGS= -g -Wall
EJS = pruebaTS
########################################################
OBJECTSP1 = pruebaTS.o tabla_simbolos.o grafo.o nodo.o hash.o list.o
########################################################

all: $(EJS) clear

pruebaTS: $(OBJECTSP1)
	$(CC) $(CFLAGS) -o pruebaTS $(OBJECTSP1)

list.o: list.c list.h
	$(CC) $(CFLAGS) -c list.c

hash.o: hash.c hash.h
	$(CC) $(CFLAGS) -c hash.c

nodo.o: nodo.c estructuras.h
	$(CC) $(CFLAGS) -c nodo.c
	
grafo.o: grafo.c estructuras.h
	$(CC) $(CFLAGS) -c grafo.c

tabla_simbolos.o: tabla_simbolos.c estructuras.h
	$(CC) $(CFLAGS) -c tabla_simbolos.c

pruebaTS.o: pruebaTS.c estructuras.h
	$(CC) $(CFLAGS) -c pruebaTS.c


	
clear:
	rm -rf *.o 

clean:
	rm -rf *.o $(EJS)

pruebaTStest:
	@echo ">>>>>>Running prueba1"
	./pruebaTS entrada.txt

pruebaTStestv:
	@echo ">>>>>>Running prueba1 with valgrind"
	valgrind --leak-check=full ./pruebaTS entrada.txt
