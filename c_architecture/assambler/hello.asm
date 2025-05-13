section .data
    hello db "Hello, World!",10, 0

section .text
    global main

main:

    ; write our string to stdout
    mov rax, 1              ; syscall number for write
    mov rdi, 1              ; file descriptor 1 is stdout
    mov rsi, hello          ; address of string to output
    mov rdx, 15             ; number of bytes
    syscall                 ; invoke operating system to do the write

    ; exit
    mov rax, 60             ; syscall number for exit
    xor rdi, rdi            ; exit code 0
    syscall                 ; invoke operating system to exit

