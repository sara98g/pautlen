;D:	main
;D:	{
;D:	int
;R:	modificadores_acceso:
;R:	tipo: TOK_INT
;R:	clase_escalar: tipo
;R:	clase: clase_escalar
;D:	x
;R:	identificador: TOK_IDENTIFICADOR;D:	;
;R:	identificadores: identificador
;R:	declaracion: modificadores_acceso clase identificadores ';'
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
;D:	z
;R:	identificador: TOK_IDENTIFICADOR;D:	;
;R:	identificadores: identificador
;R:	declaracion: modificadores_acceso clase identificadores ';'
;D:	x
;R:	declaraciones: declaracion
;R:	declaraciones: declaracion declaraciones
;R:	declaraciones: declaracion declaraciones

; --- Funcion escribir_subseccion_data---
segment .data
	ErrorDiv0 db "Error division por cero", 0

; --- Funcion escribir_cabecera .bss---
segment .bss
	 __esp resd 1

; ---Funcion declarar_variable---
	_x resd 1

; ---Funcion declarar_variable---
	_y resd 1

; ---Funcion declarar_variable---
	_z resd 1

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
;D:	2
;R:	constante_entera: TOK_CONSTANTE_ENTERA

; ---Funcion escribir_operando---
	push dword 2
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
;D:	1
;R:	constante_entera: TOK_CONSTANTE_ENTERA

; ---Funcion escribir_operando---
	push dword 1
;R:	constante: constante_entera
;R:	exp: constante 
;D:	;
;R:	asignacion: TOK_IDENTIFICADOR '=' exp

; ---Funcion asignar---
	pop dword eax
	mov dword [_y], eax
;R:	sentencia_simple: asignacion
;R:	sentencia: sentencia_simple ';'
;D:	z
;D:	=
;D:	5
;R:	constante_entera: TOK_CONSTANTE_ENTERA

; ---Funcion escribir_operando---
	push dword 5
;R:	constante: constante_entera
;R:	exp: constante 
;D:	;
;R:	asignacion: TOK_IDENTIFICADOR '=' exp

; ---Funcion asignar---
	pop dword eax
	mov dword [_z], eax
;R:	sentencia_simple: asignacion
;R:	sentencia: sentencia_simple ';'
;D:	if
;D:	(
;D:	x
;D:	<
;R:	exp: TOK_IDENTIFICADOR

; ---Funcion escribir_operando---
	push dword _x

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
