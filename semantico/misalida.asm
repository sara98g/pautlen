;D:	main
;D:	{
;D:	int
;R:	modificadores_acceso:
;R:	tipo: TOK_INT
;R:	clase_escalar: tipo
;R:	clase: clase_escalar
;D:	y
;R:	identificador: TOK_IDENTIFICADOR;D:	;
;R:	identificadores: identificador
;R:	declaracion: modificadores_acceso clase identificadores ';'
;D:	int
;R:	modificadores_acceso:
;R:	tipo: TOK_INT
;R:	clase_escalar: tipo
;R:	clase: clase_escalar
;D:	x
;R:	identificador: TOK_IDENTIFICADOR;D:	;
;R:	identificadores: identificador
;R:	declaracion: modificadores_acceso clase identificadores ';'
;D:	x
;R:	declaraciones: declaracion
;R:	declaraciones: declaracion declaraciones

; --- Funcion escribir_subseccion_data---
segment .data
	ErrorDiv0 db "Error division por cero", 0

; --- Funcion escribir_cabecera .bss---
segment .bss
	 __esp resd 1

; ---Funcion declarar_variable---
	_y resd 1

; ---Funcion declarar_variable---
	_x resd 1

; --- Funcion segmento codigo---
segment .text
	global main
	extern scan_int, print_int, print_boolean, scan_boolean
	extern print_blank, print_endofline, print_string
;R:	funciones:

;---Funcion escribir_inicio_main---
main:
	mov dword [__esp], esp
;D:	=
;D:	3
;R:	constante_entera: TOK_CONSTANTE_ENTERA

; ---Funcion escribir_operando---
	push dword 3
;R:	constante: constante_entera
;R:	exp: constante 
;D:	;
;R:	asignacion: TOK_IDENTIFICADOR '=' exp

; ---Funcion asignar---
	pop dword eax
	mov dword [_x], eax
;R:	sentencia_simple: asignacion
;R:	sentencia: sentencia_simple ';'
;D:	y
;D:	=
;D:	6
;R:	constante_entera: TOK_CONSTANTE_ENTERA

; ---Funcion escribir_operando---
	push dword 6
;R:	constante: constante_entera
;R:	exp: constante 
;D:	;
;R:	asignacion: TOK_IDENTIFICADOR '=' exp

; ---Funcion asignar---
	pop dword eax
	mov dword [_y], eax
;R:	sentencia_simple: asignacion
;R:	sentencia: sentencia_simple ';'
;D:	while
;D:	(

;---Funcion while_inicio---
inicio_while0:
;D:	(
;D:	x
;D:	<
;R:	exp: TOK_IDENTIFICADOR

; ---Funcion escribir_operando---
	push dword _x
;D:	y
;D:	)
;R:	exp: TOK_IDENTIFICADOR

; ---Funcion escribir_operando---
	push dword _y
;R:	comparacion: exp < exp 

;---Funcion menor---
	pop dword ecx
	pop dword eax
	mov dword eax, [eax]
	mov dword ecx, [ecx]
	cmp eax, ecx
	jl near true_1
	mov dword eax, 0
	push dword eax
	jmp near continua_1
	true_1:
		mov dword eax, 1
		push dword eax
	continua_1:
;R:	exp:'(' comparacion ')' 
;D:	)
;D:	{

;---Funcion while_exp_pila---
	pop eax
	cmp eax, 0
	je near fin_while0
;D:	printf
;D:	3
;R:	constante_entera: TOK_CONSTANTE_ENTERA

; ---Funcion escribir_operando---
	push dword 3
;R:	constante: constante_entera
;R:	exp: constante 
;D:	;
;R:	escritura: TOK_PRINTF exp

;---Funcion escribir---
	call print_int
	add esp, 4
	call print_endofline
;R:	sentencia_simple: escritura
;R:	sentencia: sentencia_simple ';'
;D:	x
;D:	=
;D:	x
;D:	+
;R:	exp: TOK_IDENTIFICADOR

; ---Funcion escribir_operando---
	push dword _x
;D:	1
;R:	constante_entera: TOK_CONSTANTE_ENTERA

; ---Funcion escribir_operando---
	push dword 1
;R:	constante: constante_entera
;R:	exp: constante 
;D:	;
;R:	exp: exp '+' exp 

;---Funcion suma---
	pop dword eax
	pop dword ecx
	mov dword ecx, [ecx]
	add eax, ecx
	push dword eax
;R:	asignacion: TOK_IDENTIFICADOR '=' exp

; ---Funcion asignar---
	pop dword eax
	mov dword [_x], eax
;R:	sentencia_simple: asignacion
;R:	sentencia: sentencia_simple ';'
;D:	}
;R:	sentencias: sentencia
;R:	sentencias: sentencia sentencias
;R:	bucle: TOK_WHILE exp '{' sentencias '}' 

;---Funcion while_fin---
jmp near inicio_while0
fin_while0:
;R:	bloque: bucle
;R:	sentencia: bloque
;D:	printf
;D:	10
;R:	constante_entera: TOK_CONSTANTE_ENTERA

; ---Funcion escribir_operando---
	push dword 10
;R:	constante: constante_entera
;R:	exp: constante 
;D:	;
;R:	escritura: TOK_PRINTF exp

;---Funcion escribir---
	call print_int
	add esp, 4
	call print_endofline
;R:	sentencia_simple: escritura
;R:	sentencia: sentencia_simple ';'
;D:	}
;R:	sentencias: sentencia
;R:	sentencias: sentencia sentencias
;R:	sentencias: sentencia sentencias
;R:	sentencias: sentencia sentencias
;R:	programa: TOK_MAIN '{' declaraciones funciones sentencias '}'

; ---Funcion fin---
	jmp near fin
	fin_error_division:
		push dword ErrorDiv0
		call print_string
		add esp, 4
		call print_endofline
	fin:
		mov dword esp, [__esp]
		ret
