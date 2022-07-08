;This is my very first program in assembler language
;It is very simple print hello world
;TheOwl
section .text
	global _start		;entry point declaration
_start				;entry point
	mov rdx,len		;length of message
	mov rcx,msg		;messsage
	mov rbx,1		;file descriptor output of the program
	mov rax,4		;system call number (sys_write)?
	int 0x80		;call kernel(?)

	mov rax,1		;system call number(sys_exit)?
	int 0x80		;call kernel

section .data
msg db 'Hello, Holberton', 0xa	;string to be printed
len equ $ - msg			;length of string
