section .data
    message db "Hello, Holberton", 10, 0 ; message to print (newline added for readability)

section .text
    global main
    extern printf

main:
    ; call printf to print the message
    mov edi, message ; set the message address as the first argument to printf
    xor eax, eax     ; clear the return value register
    call printf      ; call printf
    mov eax, 0       ; set the return value to 0 (success)
    ret              ; return from main

; the message format string
format:
    db "Hello, Holberton", 10, 0
