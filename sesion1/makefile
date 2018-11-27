CC = gcc
CFLAGS = -c -Wall -g -O0

.PHONY: all clean

all: pruebaSintactico

pruebaSintactico: pruebaSintactico.o y.tab.o lex.yy.o
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
