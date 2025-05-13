section .data 

	scfmt db "%s",0
	fmt db "%s",10,0
	pf db "Hello, ",0

section .rodata

	pf1 db "What is your name?",10,0

section .bss

	name resq 1

section .text

	global main
	extern printf
	extern scanf

main:

	push rbp
	mov rbp,rsp

	mov rax,0
	mov rdi,pf1
	call printf
	
	mov rax,0
	mov rdi,scfmt
	mov rsi,name
	call scanf

	mov rax,1
	mov rdi,scfmt
	mov rsi,pf
	call printf

	mov rax,0
	mov rdi,fmt
	mov rsi,name
	call printf

	leave
	ret
