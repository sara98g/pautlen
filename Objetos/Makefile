CC = gcc
CFLAGS = -Wall -g
LFLAGS = -o

LDLIBS1 =
LDLIBS2 =
LDLIBS3 =
LDLIBS4 =

DEPENDENCIAS1 = list.o functions.o
DEPENDENCIAS2 = grafo.o nodo.o list.o tabla_simbolos.o
DEPENDENCIAS3 = hash.o tabla_simbolos.o tabla_simbolos.o
DEPENDENCIAS4 = tabla_simbolos.o hash.o grafo.o nodo.o list.o


EXE4 = pruebaTS
EXE = $(EXE4)


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
	
$(EXE4) : % : %.o $(DEPENDENCIAS4)
	@echo "#---------------------------"
	@echo "# Generando $@"
	@echo "# Depende de $^"
	@echo "# Ha cambiado $<"
	$(CC) $(LFLAGS) $@ $@.o $(DEPENDENCIAS4) $(LDLIBS4)
	@echo ""

# Comandos de compilacion de ficheros objeto


list.o : list.c list.h
	$(CC) $(CFLAGS) -c -o $@ $<

functions.o : functions.c functions.h
	$(CC) $(CFLAGS) -c -o $@ $<

grafo.o : grafo.c grafo.h nodo.h list.h tabla_simbolos.h
	$(CC) $(CFLAGS) -c -o $@ $<

nodo.o : nodo.c nodo.h list.h tabla_simbolos.h
	$(CC) $(CFLAGS) -c -o $@ $<

hash.o : hash.c hash.h tabla_simbolos.h
	$(CC) $(CFLAGS) -c -o $@ $<

tabla_simbolos.o : tabla_simbolos.c tabla_simbolos.h grafo.h hash.h list.h
	$(CC) $(CFLAGS) -c -o $@ $<

# Comandos ejecutables

	
pruebaTS_exe:
	@echo Ejecutando pruebaTS
	@./pruebaTS entrada.txt
pruebaTS_test:
	@echo Ejecutando pruebaTS con valgrind
	@valgrind --trace-children=yes --leak-check=full --track-origins=yes --show-leak-kinds=all ./pruebaTS entrada.txt