extern printf
extern scanf
global main

section .data
    ques db "What your name?", 10,0
    text db "Hello ", 0
    scfm db "%s", 0
    pfmt db "%s", 10,0

section .bss
    text1 resb 256

section .text

main:

    push rbp
    mov rbp,rsp

    mov rax, 0
    mov rdi,ques
    call printf

    mov rax, 0
    mov rdi,scfm
    mov rsi,text1
    call scanf

    mov rax, 0
    mov rdi,text
    call printf

    mov rax, 0
    mov rdi,pfmt
    mov rsi,text1
    call printf

    leave
    ret
