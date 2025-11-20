; 64-bit program that prints "Hello, World" followed by a new line
; using only the write syscall.

section .data
    msg db "Hello, World", 10   ; newline at the end
    len equ $ - msg

section .text
    global main                 ; GCC looks for main

main:
    ; write(1, msg, len)
    mov     rax, 1              ; syscall number: write
    mov     rdi, 1              ; stdout (file descriptor)
    mov     rsi, msg            ; pointer to message
    mov     rdx, len            ; length of message
    syscall

    ; exit(0)
    mov     rax, 60             ; syscall number: exit
    xor     rdi, rdi            ; return code = 0
    syscall
