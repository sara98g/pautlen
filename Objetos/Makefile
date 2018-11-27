CC = gcc
CFLAGS = -Wall -ansi -pedantic -g
LFLAGS = -o

LDLIBS1 =
LDLIBS2 =
LDLIBS3 =

DEPENDENCIAS1 = list.o functions.o
DEPENDENCIAS2 = grafo.o nodo.o list.o
DEPENDENCIAS3 = hash.o tabla_simbolo.o

EXE1 = test_lista
EXE2 = test_grafo
EXE3 = main_hash
EXE = $(EXE1) $(EXE2) $(EXE3)


all: $(EXE)


.PHONY : clean clear tar clean_tar

clean:
	rm -f *.o $(EXE)
clear:
	rm *.o

tar:
	tar -czvf pautlen.tar.gz Makefile *.c *.h Doc $(EXE)
clean_tar:
	rm pautlen.tar.gz


# Comandos de compilacion y linkeado

$(EXE1) : % : %.o $(DEPENDENCIAS1)
	@echo "#---------------------------"
	@echo "# Generando $@"
	@echo "# Depende de $^"
	@echo "# Ha cambiado $<"
	$(CC) $(LFLAGS) $@ $@.o $(DEPENDENCIAS1) $(LDLIBS1)
	@echo ""

$(EXE2) : % : %.o $(DEPENDENCIAS2)
	@echo "#---------------------------"
	@echo "# Generando $@"
	@echo "# Depende de $^"
	@echo "# Ha cambiado $<"
	$(CC) $(LFLAGS) $@ $@.o $(DEPENDENCIAS2) $(LDLIBS2)
	@echo ""

	$(EXE3) : % : %.o $(DEPENDENCIAS3)
		@echo "#---------------------------"
		@echo "# Generando $@"
		@echo "# Depende de $^"
		@echo "# Ha cambiado $<"
		$(CC) $(LFLAGS) $@ $@.o $(DEPENDENCIAS3) $(LDLIBS3)
		@echo ""

# Comandos de compilacion de ficheros objeto


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

# Comandos ejecutables

test_lista_exe:
	@echo Ejecutando test_lista
	@./test_lista
test_lista_test:
	@echo Ejecutando test_lista con valgrind
	@valgrind --trace-children=yes --leak-check=full --track-origins=yes --show-leak-kinds=all ./test_lista

test_grafo_exe:
	@echo Ejecutando test_grafo
	@./test_grafo
test_grafo_test:
	@echo Ejecutando test_grafo con valgrind
	@valgrind --trace-children=yes --leak-check=full --track-origins=yes --show-leak-kinds=all ./test_grafo
