global	main
extern	printf

section	.text
main:
	push	rbp
	mov	rbp,rsp
	sub	rsp,16

	xor	eax,eax
	lea	rdi,[msg]
	call	printf

	add rsp,16
	leave
	ret

section	.rodata
msg:
	db "Hello, Holberton",10,0
