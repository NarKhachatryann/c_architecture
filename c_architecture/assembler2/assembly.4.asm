extern scanf
extern printf
global main

section .data
    sfmt db "%d",0
    pfmt db "%d", 10,0
    text db "Enter the numbers:", 10,0

section .bss
    num1 resd 1
    num2 resd 1

section .text

main:
    push rbp
    mov rbp,rsp

    mov rax,0
    mov rdi,text
    call printf

    mov rax,0
    mov rdi,sfmt
    mov rsi,num1
    call scanf

    mov rax,0
    mov rdi,sfmt
    mov rsi,num2
    call scanf

    mov r8,[num1]
    cmp r8,[num2]
    jge number_1
    jmp number_2

number_1:

    mov rax,0
    mov rdi,pfmt
    mov rsi,r8
    call printf
    jmp return

number_2:

    mov rax,0
    mov rdi,pfmt 
    mov rsi,[num2]
    call printf
    jmp return

return:

    leave
    ret
