all: flex pruebaMorfo

lex:
	flex omicron.l
	
pruebaMorfo:
	gcc -g -Wall -o pruebaMorfo lex.yy.c omicron.c
	
run:
	./pruebaMorfo entrada1.ol salida.txt

clean:
	rm -rf pruebaMorfo lex.yy.c