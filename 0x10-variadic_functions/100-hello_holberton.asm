section .data
	text db "Hello, Holberton\n", 10

section .text
	global main
	main:
	mov rax, 1        ; write(
	mov rdi, 1        ;   STDOUT_FILENO,
	mov rsi, text      ;   "Hello, world!\n",
	mov rdx, 17   ;   sizeof("Hello, world!\n")
	syscall           ; );

	mov rax, 60       ; exit(
	mov rdi, 0        ;   EXIT_SUCCESS
	syscall           ; );
