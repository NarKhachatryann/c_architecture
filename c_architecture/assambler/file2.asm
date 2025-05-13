section .data

	scfmt db "%c",0
	pfmt db "%c",10,0
	pfmt1 dd "Enter symbols: ",10,0
	size equ ($-ban-1)

section .bss

	ban resq 1

section .text

extern scanf
extern printf

	global main

main:

	push rbp
	mov rbp,rsp

	mov rax,0
	mov rdi,pfmt1
	call printf

	mov rax,0
	mov rdi,scfmt 
	mov rsi,ban
	call scanf

	cmp rbx,size
	movsx r10,qword[ban + rbx]
	mov rax,0
	sub r10,32

	mov rdi,pfmt
	mov rsi,r10
	call printf

	leave
	ret

