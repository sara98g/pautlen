########################################################
CC=gcc
CFLAGS= -g -Wall
EJS= ej1 ej2 ej3 ej4 ej5
########################################################

generacion.o: generacion.c generacion.h
	$(CC) $(CFLAGS) -c generacion.c

ej1_asm:
	$(CC) $(CFLAGS) -o ej1_asm generacion.c ej1.c
	
ej2_asm:
	$(CC) $(CFLAGS) -o ej2_asm generacion.c ej2.c

ej3_asm:
	$(CC) $(CFLAGS) -o ej3_asm generacion.c ej3.c

ej4_asm:
	$(CC) $(CFLAGS) -o ej4_asm generacion.c ej4.c

ej5_asm:
	$(CC) $(CFLAGS) -o ej5_asm generacion.c ej5.c

run_ej1_asm:
	./ej1_asm ej1.asm

run_ej2_asm:
	./ej2_asm ej2.asm

run_ej3_asm:
	./ej3_asm ej3.asm

run_ej4_asm:
	./ej4_asm ej4.asm

run_ej5_asm:
	./ej5_asm ej5.asm

ej1.o:
	nasm -g -o ej1.o -f elf ej1.asm

ej2.o:
	nasm -g -o ej2.o -f elf ej2.asm

ej3.o:
	nasm -g -o ej3.o -f elf ej3.asm

ej4.o:
	nasm -g -o ej4.o -f elf ej4.asm

ej5.o:
	nasm -g -o ej5.o -f elf ej5.asm

ej1:
	$(CC) -m32 -o ej1 ej1.o olib.o

ej2:
	$(CC) -m32 -o ej2 ej2.o olib.o

ej3:
	$(CC) -m32 -o ej3 ej3.o olib.o

ej4:
	$(CC) -m32 -o ej4 ej4.o olib.o

ej5:
	$(CC) -m32 -o ej5 ej5.o olib.o

	
	
clean:
	rm -rf *_asm ej*.o generacion*o *.asm $(EJS) 

	
