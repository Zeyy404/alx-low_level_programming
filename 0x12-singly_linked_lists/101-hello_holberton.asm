	section .data
message db "Hello, Holberton", 10, 0

	section .text

	global main

	extern printf

main:
	push 	rbp

	mov 	rdi, message
	call	printf

	pop 	rbp

	mov 	rax, 0
	ret
