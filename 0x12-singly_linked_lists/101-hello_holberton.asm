	section .data
	message db "Hello, Holberton", 10, 0

	section .text
	global main

	extern printf

main:
	sub rsp, 8

	push message
	call printf
	add rsp, 16

	mov rax, 60
	xor rdi, rdi
	syscall
