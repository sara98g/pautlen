CC = gcc
CFLAGS = -g -Wall


.PHONY: all clean

all: bis lex pruebaSemantico ejecuta prueba.o prueba

parte1: bis lex pruebaSemantico ejecuta

parte2: prueba.o prueba

bis:
	bison -dyv omicron.y

lex:
	flex omicron.l

pruebaSemantico:
	$(CC) $(CFLAGS) -o pruebaSemantico *.c

ejecuta:
		./pruebaSemantico entrada.txt misalida.asm

prueba.o:
	nasm -g -o prueba.o -f elf misalida.asm

prueba: 
	gcc -m32 -o prueba prueba.o olib.o


clean:
	rm -f prueba.o pruebaSemantico lex.yy.c *.asm y.*
