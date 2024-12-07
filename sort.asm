	.file	"sort.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii " arr [%d] :: before sorting = %d\12\0"
	.align 8
.LC1:
	.ascii " **********************************\12*******************************\0"
	.align 8
.LC2:
	.ascii " arr [%d] :: after sorting = %d \12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	movw	$5, -32(%rbp)
	movw	$6, -30(%rbp)
	movw	$2, -28(%rbp)
	movw	$9, -26(%rbp)
	movw	$1, -24(%rbp)
	movw	$12, -22(%rbp)
	movw	$55, -20(%rbp)
	movw	$65, -18(%rbp)
	movw	$2, -16(%rbp)
	movw	$10, -14(%rbp)
	movw	$0, -2(%rbp)
	jmp	.L2
.L3:
	movswl	-2(%rbp), %eax
	cltq
	movzwl	-32(%rbp,%rax,2), %eax
	movswl	%ax, %edx
	movswl	-2(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movzwl	-2(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -2(%rbp)
.L2:
	cmpw	$9, -2(%rbp)
	jle	.L3
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movw	$0, -4(%rbp)
	jmp	.L4
.L8:
	movw	$0, -6(%rbp)
	jmp	.L5
.L7:
	movswl	-6(%rbp), %eax
	cltq
	movzwl	-32(%rbp,%rax,2), %edx
	movswl	-6(%rbp), %eax
	addl	$1, %eax
	cltq
	movzwl	-32(%rbp,%rax,2), %eax
	cmpw	%ax, %dx
	jle	.L6
	movswl	-6(%rbp), %edx
	leaq	-32(%rbp), %rax
	movl	$43, %r8d
	movq	%rax, %rcx
	call	sort
.L6:
	movzwl	-6(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -6(%rbp)
.L5:
	movswl	-6(%rbp), %ecx
	movswl	-4(%rbp), %eax
	movl	$9, %edx
	subl	%eax, %edx
	cmpl	%edx, %ecx
	jl	.L7
	movzwl	-4(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -4(%rbp)
.L4:
	cmpw	$8, -4(%rbp)
	jle	.L8
	movw	$0, -8(%rbp)
	jmp	.L9
.L10:
	movswl	-8(%rbp), %eax
	cltq
	movzwl	-32(%rbp,%rax,2), %eax
	movswl	%ax, %edx
	movswl	-8(%rbp), %eax
	movl	%edx, %r8d
	movl	%eax, %edx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movzwl	-8(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -8(%rbp)
.L9:
	cmpw	$9, -8(%rbp)
	jle	.L10
	nop
	nop
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	sort
	.def	sort;	.scl	2;	.type	32;	.endef
	.seh_proc	sort
sort:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, %eax
	movl	%r8d, %edx
	movw	%ax, 24(%rbp)
	movl	%edx, %eax
	movb	%al, 32(%rbp)
	movzbl	32(%rbp), %eax
	cmpl	$43, %eax
	je	.L12
	cmpl	$94, %eax
	jne	.L13
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %r8d
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %ecx
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	%r8d, %edx
	xorl	%ecx, %edx
	movw	%dx, (%rax)
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %r8d
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %ecx
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	%r8d, %edx
	xorl	%ecx, %edx
	movw	%dx, (%rax)
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %r8d
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %ecx
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	%r8d, %edx
	xorl	%ecx, %edx
	movw	%dx, (%rax)
	jmp	.L14
.L12:
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movl	%eax, %ecx
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	addl	%eax, %ecx
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	%ecx, %edx
	movw	%dx, (%rax)
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movl	%eax, %ecx
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	subl	%eax, %ecx
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	%ecx, %edx
	movw	%dx, (%rax)
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movl	%eax, %ecx
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	subl	%eax, %ecx
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movl	%ecx, %edx
	movw	%dx, (%rax)
	jmp	.L14
.L13:
	movswq	24(%rbp), %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzwl	(%rax), %eax
	movw	%ax, -2(%rbp)
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movswq	24(%rbp), %rdx
	leaq	(%rdx,%rdx), %rcx
	movq	16(%rbp), %rdx
	addq	%rcx, %rdx
	movzwl	(%rax), %eax
	movw	%ax, (%rdx)
	movswq	24(%rbp), %rax
	addq	$1, %rax
	leaq	(%rax,%rax), %rdx
	movq	16(%rbp), %rax
	addq	%rax, %rdx
	movzwl	-2(%rbp), %eax
	movw	%ax, (%rdx)
	nop
.L14:
	nop
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-mcf-seh, built by Brecht Sanders) 13.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
