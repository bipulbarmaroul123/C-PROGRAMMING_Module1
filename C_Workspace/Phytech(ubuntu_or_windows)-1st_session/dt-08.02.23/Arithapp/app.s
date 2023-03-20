	.file	"app.c"
	.text
	.section	.rodata
.LC0:
	.string	"addition of two numbers: %d\n"
	.align 8
.LC1:
	.string	"substraction of two numbers: %d\n"
	.align 8
.LC2:
	.string	"multiplication of two numbers: %d\n"
.LC3:
	.string	"division of two numbers: %d\n"
.LC4:
	.string	"modulus of two numbers: %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$20, %esi
	movl	$10, %edi
	call	add@PLT
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %esi
	movl	$20, %edi
	call	sub@PLT
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %esi
	movl	$20, %edi
	call	mul@PLT
	movl	%eax, %esi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %esi
	movl	$20, %edi
	call	div@PLT
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$10, %esi
	movl	$20, %edi
	call	mod@PLT
	movl	%eax, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
