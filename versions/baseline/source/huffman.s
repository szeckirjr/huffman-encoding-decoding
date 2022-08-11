	.arch armv4t
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 18, 4
	.file	"huffman.c"
	.global	currCount
	.bss
	.align	2
	.type	currCount, %object
	.size	currCount, 4
currCount:
	.space	4
	.global	alphabetFreq
	.section	.rodata
	.align	2
.LC0:
	.ascii	"a\000"
	.align	2
.LC1:
	.ascii	"b\000"
	.align	2
.LC2:
	.ascii	"c\000"
	.align	2
.LC3:
	.ascii	"d\000"
	.align	2
.LC4:
	.ascii	"e\000"
	.align	2
.LC5:
	.ascii	"f\000"
	.align	2
.LC6:
	.ascii	"g\000"
	.align	2
.LC7:
	.ascii	"h\000"
	.align	2
.LC8:
	.ascii	"i\000"
	.align	2
.LC9:
	.ascii	"j\000"
	.align	2
.LC10:
	.ascii	"k\000"
	.align	2
.LC11:
	.ascii	"l\000"
	.align	2
.LC12:
	.ascii	"m\000"
	.align	2
.LC13:
	.ascii	"n\000"
	.align	2
.LC14:
	.ascii	"o\000"
	.align	2
.LC15:
	.ascii	"p\000"
	.align	2
.LC16:
	.ascii	"q\000"
	.align	2
.LC17:
	.ascii	"r\000"
	.align	2
.LC18:
	.ascii	"s\000"
	.align	2
.LC19:
	.ascii	"t\000"
	.align	2
.LC20:
	.ascii	"u\000"
	.align	2
.LC21:
	.ascii	"v\000"
	.align	2
.LC22:
	.ascii	"w\000"
	.align	2
.LC23:
	.ascii	"x\000"
	.align	2
.LC24:
	.ascii	"y\000"
	.align	2
.LC25:
	.ascii	"z\000"
	.align	2
.LC26:
	.ascii	"A\000"
	.align	2
.LC27:
	.ascii	"B\000"
	.align	2
.LC28:
	.ascii	"C\000"
	.align	2
.LC29:
	.ascii	"D\000"
	.align	2
.LC30:
	.ascii	"E\000"
	.align	2
.LC31:
	.ascii	"F\000"
	.align	2
.LC32:
	.ascii	"G\000"
	.align	2
.LC33:
	.ascii	"H\000"
	.align	2
.LC34:
	.ascii	"I\000"
	.align	2
.LC35:
	.ascii	"J\000"
	.align	2
.LC36:
	.ascii	"K\000"
	.align	2
.LC37:
	.ascii	"L\000"
	.align	2
.LC38:
	.ascii	"M\000"
	.align	2
.LC39:
	.ascii	"N\000"
	.align	2
.LC40:
	.ascii	"O\000"
	.align	2
.LC41:
	.ascii	"P\000"
	.align	2
.LC42:
	.ascii	"Q\000"
	.align	2
.LC43:
	.ascii	"R\000"
	.align	2
.LC44:
	.ascii	"S\000"
	.align	2
.LC45:
	.ascii	"T\000"
	.align	2
.LC46:
	.ascii	"U\000"
	.align	2
.LC47:
	.ascii	"V\000"
	.align	2
.LC48:
	.ascii	"W\000"
	.align	2
.LC49:
	.ascii	"X\000"
	.align	2
.LC50:
	.ascii	"Y\000"
	.align	2
.LC51:
	.ascii	"Z\000"
	.align	2
.LC52:
	.ascii	" \000"
	.align	2
.LC53:
	.ascii	"\011\000"
	.align	2
.LC54:
	.ascii	"\012\000"
	.align	2
.LC55:
	.ascii	",\000"
	.align	2
.LC56:
	.ascii	".\000"
	.align	2
.LC57:
	.ascii	"!\000"
	.align	2
.LC58:
	.ascii	"?\000"
	.align	2
.LC59:
	.ascii	";\000"
	.align	2
.LC60:
	.ascii	":\000"
	.align	2
.LC61:
	.ascii	"\"\000"
	.align	2
.LC62:
	.ascii	"'\000"
	.align	2
.LC63:
	.ascii	"`\000"
	.align	2
.LC64:
	.ascii	"-\000"
	.align	2
.LC65:
	.ascii	"_\000"
	.align	2
.LC66:
	.ascii	"=\000"
	.align	2
.LC67:
	.ascii	"+\000"
	.align	2
.LC68:
	.ascii	"*\000"
	.align	2
.LC69:
	.ascii	"%\000"
	.align	2
.LC70:
	.ascii	"#\000"
	.align	2
.LC71:
	.ascii	"$\000"
	.align	2
.LC72:
	.ascii	"@\000"
	.align	2
.LC73:
	.ascii	"&\000"
	.align	2
.LC74:
	.ascii	"^\000"
	.align	2
.LC75:
	.ascii	"~\000"
	.align	2
.LC76:
	.ascii	"|\000"
	.align	2
.LC77:
	.ascii	"\\\000"
	.align	2
.LC78:
	.ascii	"<\000"
	.align	2
.LC79:
	.ascii	">\000"
	.align	2
.LC80:
	.ascii	"/\000"
	.align	2
.LC81:
	.ascii	"{\000"
	.align	2
.LC82:
	.ascii	"}\000"
	.align	2
.LC83:
	.ascii	"[\000"
	.align	2
.LC84:
	.ascii	"]\000"
	.align	2
.LC85:
	.ascii	"(\000"
	.align	2
.LC86:
	.ascii	")\000"
	.align	2
.LC87:
	.ascii	"0\000"
	.align	2
.LC88:
	.ascii	"1\000"
	.align	2
.LC89:
	.ascii	"2\000"
	.align	2
.LC90:
	.ascii	"3\000"
	.align	2
.LC91:
	.ascii	"4\000"
	.align	2
.LC92:
	.ascii	"5\000"
	.align	2
.LC93:
	.ascii	"6\000"
	.align	2
.LC94:
	.ascii	"7\000"
	.align	2
.LC95:
	.ascii	"8\000"
	.align	2
.LC96:
	.ascii	"9\000"
	.data
	.align	2
	.type	alphabetFreq, %object
	.size	alphabetFreq, 776
alphabetFreq:
	.word	.LC0
	.word	161216
	.word	.LC1
	.word	27295
	.word	.LC2
	.word	55511
	.word	.LC3
	.word	77756
	.word	.LC4
	.word	260939
	.word	.LC5
	.word	51802
	.word	.LC6
	.word	38874
	.word	.LC7
	.word	119201
	.word	.LC8
	.word	141803
	.word	.LC9
	.word	1851
	.word	.LC10
	.word	12249
	.word	.LC11
	.word	84822
	.word	.LC12
	.word	50353
	.word	.LC13
	.word	143273
	.word	.LC14
	.word	154556
	.word	.LC15
	.word	36920
	.word	.LC16
	.word	2807
	.word	.LC17
	.word	123461
	.word	.LC18
	.word	131583
	.word	.LC19
	.word	190634
	.word	.LC20
	.word	57127
	.word	.LC21
	.word	20852
	.word	.LC22
	.word	38441
	.word	.LC23
	.word	3340
	.word	.LC24
	.word	37622
	.word	.LC25
	.word	1452
	.word	.LC26
	.word	4427
	.word	.LC27
	.word	2701
	.word	.LC28
	.word	2774
	.word	.LC29
	.word	1614
	.word	.LC30
	.word	2869
	.word	.LC31
	.word	2072
	.word	.LC32
	.word	1137
	.word	.LC33
	.word	3603
	.word	.LC34
	.word	9450
	.word	.LC35
	.word	944
	.word	.LC36
	.word	526
	.word	.LC37
	.word	1971
	.word	.LC38
	.word	3274
	.word	.LC39
	.word	2371
	.word	.LC40
	.word	1864
	.word	.LC41
	.word	2097
	.word	.LC42
	.word	85
	.word	.LC43
	.word	2153
	.word	.LC44
	.word	3837
	.word	.LC45
	.word	6688
	.word	.LC46
	.word	548
	.word	.LC47
	.word	836
	.word	.LC48
	.word	2603
	.word	.LC49
	.word	548
	.word	.LC50
	.word	1032
	.word	.LC51
	.word	152
	.word	.LC52
	.word	465226
	.word	.LC53
	.word	0
	.word	.LC54
	.word	0
	.word	.LC55
	.word	42934
	.word	.LC56
	.word	21884
	.word	.LC57
	.word	1110
	.word	.LC58
	.word	1222
	.word	.LC59
	.word	2909
	.word	.LC60
	.word	1169
	.word	.LC61
	.word	3095
	.word	.LC62
	.word	1918
	.word	.LC63
	.word	0
	.word	.LC64
	.word	6143
	.word	.LC65
	.word	4822
	.word	.LC66
	.word	111
	.word	.LC67
	.word	11
	.word	.LC68
	.word	320
	.word	.LC69
	.word	19
	.word	.LC70
	.word	0
	.word	.LC71
	.word	7
	.word	.LC72
	.word	0
	.word	.LC73
	.word	32
	.word	.LC74
	.word	9
	.word	.LC75
	.word	0
	.word	.LC76
	.word	6
	.word	.LC77
	.word	0
	.word	.LC78
	.word	0
	.word	.LC79
	.word	0
	.word	.LC80
	.word	7
	.word	.LC81
	.word	0
	.word	.LC82
	.word	0
	.word	.LC83
	.word	287
	.word	.LC84
	.word	287
	.word	.LC85
	.word	985
	.word	.LC86
	.word	985
	.word	.LC87
	.word	1017
	.word	.LC88
	.word	2516
	.word	.LC89
	.word	1200
	.word	.LC90
	.word	741
	.word	.LC91
	.word	690
	.word	.LC92
	.word	723
	.word	.LC93
	.word	783
	.word	.LC94
	.word	642
	.word	.LC95
	.word	909
	.word	.LC96
	.word	665
	.text
	.align	2
	.global	intToStringBinary
	.type	intToStringBinary, %function
intToStringBinary:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	ldr	r3, [fp, #-20]
	mov	r0, r3
	bl	malloc
	mov	r3, r0
	str	r3, [fp, #-8]
	ldr	r3, [fp, #-20]
	sub	r2, r3, #1
	mov	r3, #1
	mov	r3, r3, asl r2
	str	r3, [fp, #-12]
	b	.L2
.L5:
	ldr	r3, [fp, #-16]
	ldr	r2, [fp, #-12]
	and	r3, r3, r2
	cmp	r3, #0
	beq	.L3
	ldr	r0, [fp, #-8]
	bl	strlen
	mov	r2, r0
	ldr	r3, [fp, #-8]
	add	r3, r3, r2
	mov	r0, r3
	ldr	r1, .L7
	mov	r2, #2
	bl	memcpy
	b	.L4
.L3:
	ldr	r0, [fp, #-8]
	bl	strlen
	mov	r2, r0
	ldr	r3, [fp, #-8]
	add	r3, r3, r2
	mov	r0, r3
	ldr	r1, .L7+4
	mov	r2, #2
	bl	memcpy
.L4:
	ldr	r3, [fp, #-12]
	mov	r3, r3, lsr #1
	str	r3, [fp, #-12]
.L2:
	ldr	r3, [fp, #-12]
	cmp	r3, #0
	bne	.L5
	ldr	r3, [fp, #-8]
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
.L8:
	.align	2
.L7:
	.word	.LC88
	.word	.LC87
	.size	intToStringBinary, .-intToStringBinary
	.align	2
	.global	newHuffmanNode
	.type	newHuffmanNode, %function
newHuffmanNode:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	mov	r0, #20
	bl	malloc
	mov	r3, r0
	str	r3, [fp, #-8]
	ldr	r3, [fp, #-8]
	mov	r0, r3
	ldr	r1, [fp, #-16]
	bl	strcpy
	ldr	r2, [fp, #-20]
	ldr	r3, [fp, #-8]
	str	r2, [r3, #8]
	ldr	r2, [fp, #-8]
	mov	r3, #0
	str	r3, [r2, #12]
	ldr	r2, [fp, #-8]
	mov	r3, #0
	str	r3, [r2, #16]
	ldr	r3, [fp, #-8]
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
	.size	newHuffmanNode, .-newHuffmanNode
	.align	2
	.global	swapMinHuffmanNodes
	.type	swapMinHuffmanNodes, %function
swapMinHuffmanNodes:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #20
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #0]
	str	r3, [fp, #-8]
	ldr	r3, [fp, #-20]
	ldr	r2, [r3, #0]
	ldr	r3, [fp, #-16]
	str	r2, [r3, #0]
	ldr	r2, [fp, #-20]
	ldr	r3, [fp, #-8]
	str	r3, [r2, #0]
	add	sp, fp, #0
	ldmfd	sp!, {fp}
	bx	lr
	.size	swapMinHuffmanNodes, .-swapMinHuffmanNodes
	.align	2
	.global	minHeapify
	.type	minHeapify, %function
minHeapify:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #24
	str	r0, [fp, #-24]
	str	r1, [fp, #-28]
	ldr	r3, [fp, #-28]
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-28]
	mov	r3, r3, asl #1
	add	r3, r3, #1
	str	r3, [fp, #-12]
	ldr	r3, [fp, #-28]
	add	r3, r3, #1
	mov	r3, r3, asl #1
	str	r3, [fp, #-8]
	ldr	r2, [fp, #-12]
	ldr	r3, [fp, #-24]
	ldr	r3, [r3, #0]
	cmp	r2, r3
	bcs	.L14
	ldr	r3, [fp, #-24]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-12]
	mov	r3, r3, asl #2
	add	r3, r2, r3
	ldr	r3, [r3, #0]
	ldr	r1, [r3, #8]
	ldr	r3, [fp, #-24]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-16]
	mov	r3, r3, asl #2
	add	r3, r2, r3
	ldr	r3, [r3, #0]
	ldr	r3, [r3, #8]
	cmp	r1, r3
	bcs	.L14
	ldr	r3, [fp, #-12]
	str	r3, [fp, #-16]
.L14:
	ldr	r3, [fp, #-8]
	ldr	r2, [fp, #-24]
	ldr	r2, [r2, #0]
	cmp	r3, r2
	bcs	.L15
	ldr	r3, [fp, #-24]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-8]
	mov	r3, r3, asl #2
	add	r3, r2, r3
	ldr	r3, [r3, #0]
	ldr	r1, [r3, #8]
	ldr	r3, [fp, #-24]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-16]
	mov	r3, r3, asl #2
	add	r3, r2, r3
	ldr	r3, [r3, #0]
	ldr	r3, [r3, #8]
	cmp	r1, r3
	bcs	.L15
	ldr	r3, [fp, #-8]
	str	r3, [fp, #-16]
.L15:
	ldr	r2, [fp, #-16]
	ldr	r3, [fp, #-28]
	cmp	r2, r3
	beq	.L17
	ldr	r3, [fp, #-24]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-16]
	mov	r3, r3, asl #2
	add	r1, r2, r3
	ldr	r3, [fp, #-24]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-28]
	mov	r3, r3, asl #2
	add	r3, r2, r3
	mov	r0, r1
	mov	r1, r3
	bl	swapMinHuffmanNodes
	ldr	r0, [fp, #-24]
	ldr	r1, [fp, #-16]
	bl	minHeapify
.L17:
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
	.size	minHeapify, .-minHeapify
	.align	2
	.global	buildMinHuffman
	.type	buildMinHuffman, %function
buildMinHuffman:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #0]
	sub	r3, r3, #1
	str	r3, [fp, #-12]
	ldr	r3, [fp, #-12]
	sub	r2, r3, #1
	mov	r3, r2, lsr #31
	add	r3, r3, r2
	mov	r3, r3, asr #1
	str	r3, [fp, #-8]
	b	.L19
.L20:
	ldr	r0, [fp, #-16]
	ldr	r1, [fp, #-8]
	bl	minHeapify
	ldr	r3, [fp, #-8]
	sub	r3, r3, #1
	str	r3, [fp, #-8]
.L19:
	ldr	r3, [fp, #-8]
	cmp	r3, #0
	bge	.L20
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
	.size	buildMinHuffman, .-buildMinHuffman
	.align	2
	.global	extractMin
	.type	extractMin, %function
extractMin:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #8]
	ldr	r3, [r3, #0]
	str	r3, [fp, #-8]
	ldr	r3, [fp, #-16]
	ldr	r1, [r3, #8]
	ldr	r3, [fp, #-16]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #0]
	rsb	r3, r3, #1
	mov	r3, r3, asl #2
	rsb	r3, r3, #0
	add	r3, r2, r3
	ldr	r3, [r3, #0]
	str	r3, [r1, #0]
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #0]
	sub	r2, r3, #1
	ldr	r3, [fp, #-16]
	str	r2, [r3, #0]
	ldr	r0, [fp, #-16]
	mov	r1, #0
	bl	minHeapify
	ldr	r3, [fp, #-8]
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
	.size	extractMin, .-extractMin
	.align	2
	.global	insertMinHuffman
	.type	insertMinHuffman, %function
insertMinHuffman:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #20
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #0]
	add	r2, r3, #1
	ldr	r3, [fp, #-16]
	str	r2, [r3, #0]
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #0]
	sub	r3, r3, #1
	str	r3, [fp, #-8]
	b	.L25
.L27:
	ldr	r3, [fp, #-16]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-8]
	mov	r3, r3, asl #2
	add	r0, r2, r3
	ldr	r3, [fp, #-16]
	ldr	r1, [r3, #8]
	ldr	r3, [fp, #-8]
	sub	r2, r3, #1
	mov	r3, r2, lsr #31
	add	r3, r3, r2
	mov	r3, r3, asr #1
	mov	r3, r3, asl #2
	add	r3, r1, r3
	ldr	r3, [r3, #0]
	str	r3, [r0, #0]
	ldr	r3, [fp, #-8]
	sub	r2, r3, #1
	mov	r3, r2, lsr #31
	add	r3, r3, r2
	mov	r3, r3, asr #1
	str	r3, [fp, #-8]
.L25:
	ldr	r3, [fp, #-8]
	cmp	r3, #0
	beq	.L26
	ldr	r3, [fp, #-20]
	ldr	r0, [r3, #8]
	ldr	r3, [fp, #-16]
	ldr	r1, [r3, #8]
	ldr	r3, [fp, #-8]
	sub	r2, r3, #1
	mov	r3, r2, lsr #31
	add	r3, r3, r2
	mov	r3, r3, asr #1
	mov	r3, r3, asl #2
	add	r3, r1, r3
	ldr	r3, [r3, #0]
	ldr	r3, [r3, #8]
	cmp	r0, r3
	bcc	.L27
.L26:
	ldr	r3, [fp, #-16]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-8]
	mov	r3, r3, asl #2
	add	r2, r2, r3
	ldr	r3, [fp, #-20]
	str	r3, [r2, #0]
	add	sp, fp, #0
	ldmfd	sp!, {fp}
	bx	lr
	.size	insertMinHuffman, .-insertMinHuffman
	.align	2
	.global	createMinHuffman
	.type	createMinHuffman, %function
createMinHuffman:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	mov	r0, #12
	bl	malloc
	mov	r3, r0
	str	r3, [fp, #-8]
	ldr	r2, [fp, #-8]
	mov	r3, #0
	str	r3, [r2, #0]
	ldr	r2, [fp, #-8]
	ldr	r3, [fp, #-16]
	str	r3, [r2, #4]
	ldr	r3, [fp, #-16]
	mov	r3, r3, asl #2
	mov	r0, r3
	bl	malloc
	mov	r3, r0
	mov	r2, r3
	ldr	r3, [fp, #-8]
	str	r2, [r3, #8]
	ldr	r3, [fp, #-8]
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
	.size	createMinHuffman, .-createMinHuffman
	.align	2
	.global	createAndBuildMinHuffman
	.type	createAndBuildMinHuffman, %function
createAndBuildMinHuffman:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {r4, fp, lr}
	add	fp, sp, #8
	sub	sp, sp, #12
	mov	r0, #97
	bl	createMinHuffman
	mov	r3, r0
	str	r3, [fp, #-16]
	mov	r3, #0
	str	r3, [fp, #-20]
	b	.L32
.L33:
	ldr	r3, [fp, #-16]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-20]
	mov	r3, r3, asl #2
	add	r4, r2, r3
	ldr	r2, [fp, #-20]
	ldr	r3, .L35
	ldr	r0, [r3, r2, asl #3]
	ldr	r3, [fp, #-20]
	ldr	r2, .L35
	mov	r1, #4
	mov	r3, r3, asl #3
	add	r3, r2, r3
	add	r3, r3, r1
	ldr	r3, [r3, #0]
	mov	r1, r3
	bl	newHuffmanNode
	mov	r3, r0
	str	r3, [r4, #0]
	ldr	r3, [fp, #-20]
	add	r3, r3, #1
	str	r3, [fp, #-20]
.L32:
	ldr	r3, [fp, #-20]
	cmp	r3, #96
	ble	.L33
	ldr	r2, [fp, #-16]
	mov	r3, #97
	str	r3, [r2, #0]
	ldr	r0, [fp, #-16]
	bl	buildMinHuffman
	ldr	r3, [fp, #-16]
	mov	r0, r3
	sub	sp, fp, #8
	ldmfd	sp!, {r4, fp, lr}
	bx	lr
.L36:
	.align	2
.L35:
	.word	alphabetFreq
	.size	createAndBuildMinHuffman, .-createAndBuildMinHuffman
	.section	.rodata
	.align	2
.LC97:
	.ascii	"TEMP\000"
	.text
	.align	2
	.global	buildHuffmanTree
	.type	buildHuffmanTree, %function
buildHuffmanTree:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	bl	createAndBuildMinHuffman
	mov	r3, r0
	str	r3, [fp, #-8]
	b	.L38
.L39:
	ldr	r0, [fp, #-8]
	bl	extractMin
	mov	r3, r0
	str	r3, [fp, #-20]
	ldr	r0, [fp, #-8]
	bl	extractMin
	mov	r3, r0
	str	r3, [fp, #-16]
	ldr	r3, [fp, #-20]
	ldr	r2, [r3, #8]
	ldr	r3, [fp, #-16]
	ldr	r3, [r3, #8]
	add	r3, r2, r3
	ldr	r0, .L41
	mov	r1, r3
	bl	newHuffmanNode
	mov	r3, r0
	str	r3, [fp, #-12]
	ldr	r2, [fp, #-12]
	ldr	r3, [fp, #-20]
	str	r3, [r2, #12]
	ldr	r2, [fp, #-12]
	ldr	r3, [fp, #-16]
	str	r3, [r2, #16]
	ldr	r0, [fp, #-8]
	ldr	r1, [fp, #-12]
	bl	insertMinHuffman
.L38:
	ldr	r3, [fp, #-8]
	ldr	r3, [r3, #0]
	cmp	r3, #1
	bne	.L39
	ldr	r0, [fp, #-8]
	bl	extractMin
	mov	r3, r0
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
.L42:
	.align	2
.L41:
	.word	.LC97
	.size	buildHuffmanTree, .-buildHuffmanTree
	.align	2
	.global	buildCodeTable
	.type	buildCodeTable, %function
buildCodeTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {r4, fp, lr}
	add	fp, sp, #8
	sub	sp, sp, #36
	str	r0, [fp, #-32]
	str	r1, [fp, #-36]
	str	r2, [fp, #-40]
	str	r3, [fp, #-44]
	ldr	r3, [fp, #-32]
	ldr	r3, [r3, #16]
	cmp	r3, #0
	beq	.L44
	ldr	r3, [fp, #-40]
	orr	r3, r3, #1
	str	r3, [fp, #-40]
	ldr	r3, [fp, #-40]
	mov	r3, r3, asl #1
	str	r3, [fp, #-40]
	ldr	r3, [fp, #-44]
	mov	r2, r3, asl #2
	ldr	r3, [fp, #-36]
	add	r2, r3, r2
	mov	r3, #1
	str	r3, [r2, #0]
	ldr	r3, [fp, #-32]
	ldr	r2, [r3, #16]
	ldr	r3, [fp, #-44]
	add	r3, r3, #1
	mov	r0, r2
	ldr	r1, [fp, #-36]
	ldr	r2, [fp, #-40]
	bl	buildCodeTable
.L44:
	ldr	r3, [fp, #-32]
	ldr	r3, [r3, #12]
	cmp	r3, #0
	beq	.L45
	ldr	r3, [fp, #-40]
	mov	r3, r3, asl #1
	str	r3, [fp, #-40]
	ldr	r3, [fp, #-44]
	mov	r2, r3, asl #2
	ldr	r3, [fp, #-36]
	add	r2, r3, r2
	mov	r3, #0
	str	r3, [r2, #0]
	ldr	r3, [fp, #-32]
	ldr	r2, [r3, #12]
	ldr	r3, [fp, #-44]
	add	r3, r3, #1
	mov	r0, r2
	ldr	r1, [fp, #-36]
	ldr	r2, [fp, #-40]
	bl	buildCodeTable
.L45:
	ldr	r3, [fp, #-32]
	ldr	r3, [r3, #12]
	cmp	r3, #0
	bne	.L46
	ldr	r3, [fp, #-32]
	ldr	r3, [r3, #16]
	cmp	r3, #0
	bne	.L46
	ldr	r3, [fp, #-32]
	mov	r0, r3
	bl	strlen
	mov	r3, r0
	str	r3, [fp, #-28]
	ldr	r3, .L51
	ldr	r4, [r3, #0]
	ldr	r3, [fp, #-28]
	mov	r0, r3
	bl	malloc
	mov	r3, r0
	mov	r0, r3
	ldr	r1, .L51+4
	mov	r3, r4
	mov	r2, r3, asl #2
	mov	r3, r2, asl #2
	rsb	r3, r2, r3
	add	r3, r1, r3
	str	r0, [r3, #0]
	ldr	r3, .L51
	ldr	r3, [r3, #0]
	ldr	r1, .L51+4
	mov	r2, r3, asl #2
	mov	r3, r2, asl #2
	rsb	r3, r2, r3
	add	r3, r1, r3
	ldr	r3, [r3, #0]
	ldr	r2, [fp, #-32]
	mov	r0, r3
	mov	r1, r2
	bl	strcpy
	mov	r3, #0
	str	r3, [fp, #-24]
	mov	r3, #0
	str	r3, [fp, #-20]
	mov	r3, #0
	str	r3, [fp, #-16]
	b	.L47
.L49:
	ldr	r3, [fp, #-16]
	mov	r2, r3, asl #2
	ldr	r3, [fp, #-36]
	add	r3, r3, r2
	ldr	r3, [r3, #0]
	mov	r2, r3
	ldr	r3, [fp, #-24]
	orr	r3, r3, r2
	str	r3, [fp, #-24]
	ldr	r3, [fp, #-44]
	sub	r2, r3, #1
	ldr	r3, [fp, #-16]
	cmp	r2, r3
	ble	.L48
	ldr	r3, [fp, #-24]
	mov	r3, r3, asl #1
	str	r3, [fp, #-24]
.L48:
	ldr	r3, [fp, #-20]
	add	r3, r3, #1
	str	r3, [fp, #-20]
	ldr	r3, [fp, #-16]
	add	r3, r3, #1
	str	r3, [fp, #-16]
.L47:
	ldr	r2, [fp, #-16]
	ldr	r3, [fp, #-44]
	cmp	r2, r3
	blt	.L49
	ldr	r3, .L51
	ldr	r3, [r3, #0]
	ldr	r1, .L51+4
	mov	r0, #4
	mov	r2, r3, asl #2
	mov	r3, r2, asl #2
	rsb	r3, r2, r3
	add	r3, r1, r3
	add	r2, r3, r0
	ldr	r3, [fp, #-24]
	str	r3, [r2, #0]
	ldr	r3, .L51
	ldr	r3, [r3, #0]
	ldr	r1, .L51+4
	mov	r0, #8
	mov	r2, r3, asl #2
	mov	r3, r2, asl #2
	rsb	r3, r2, r3
	add	r3, r1, r3
	add	r2, r3, r0
	ldr	r3, [fp, #-20]
	str	r3, [r2, #0]
	ldr	r3, .L51
	ldr	r3, [r3, #0]
	add	r2, r3, #1
	ldr	r3, .L51
	str	r2, [r3, #0]
.L46:
	ldr	r3, .L51+4
	mov	r0, r3
	sub	sp, fp, #8
	ldmfd	sp!, {r4, fp, lr}
	bx	lr
.L52:
	.align	2
.L51:
	.word	currCount
	.word	CharCodeTable
	.size	buildCodeTable, .-buildCodeTable
	.align	2
	.global	getCode
	.type	getCode, %function
getCode:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #20
	mov	r3, r0
	strb	r3, [fp, #-13]
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L54
.L57:
	ldr	r3, [fp, #-8]
	ldr	r1, .L59
	mov	r2, r3, asl #2
	mov	r3, r2, asl #2
	rsb	r3, r2, r3
	add	r3, r1, r3
	ldr	r3, [r3, #0]
	ldrb	r2, [r3, #0]	@ zero_extendqisi2
	ldrb	r3, [fp, #-13]	@ zero_extendqisi2
	cmp	r3, r2
	bne	.L55
	ldr	r3, [fp, #-8]
	ldr	r1, .L59
	mov	r0, #4
	mov	r2, r3, asl #2
	mov	r3, r2, asl #2
	rsb	r3, r2, r3
	add	r3, r1, r3
	add	r3, r3, r0
	ldr	r3, [r3, #0]
	str	r3, [fp, #-20]
	b	.L56
.L55:
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L54:
	ldr	r3, .L59+4
	ldr	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	cmp	r3, r2
	blt	.L57
	mvn	r3, #0
	str	r3, [fp, #-20]
.L56:
	ldr	r3, [fp, #-20]
	mov	r0, r3
	add	sp, fp, #0
	ldmfd	sp!, {fp}
	bx	lr
.L60:
	.align	2
.L59:
	.word	CharCodeTable
	.word	currCount
	.size	getCode, .-getCode
	.align	2
	.global	getCodeLength
	.type	getCodeLength, %function
getCodeLength:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #20
	mov	r3, r0
	strb	r3, [fp, #-13]
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L62
.L65:
	ldr	r3, [fp, #-8]
	ldr	r1, .L67
	mov	r2, r3, asl #2
	mov	r3, r2, asl #2
	rsb	r3, r2, r3
	add	r3, r1, r3
	ldr	r3, [r3, #0]
	ldrb	r2, [r3, #0]	@ zero_extendqisi2
	ldrb	r3, [fp, #-13]	@ zero_extendqisi2
	cmp	r3, r2
	bne	.L63
	ldr	r3, [fp, #-8]
	ldr	r1, .L67
	mov	r0, #8
	mov	r2, r3, asl #2
	mov	r3, r2, asl #2
	rsb	r3, r2, r3
	add	r3, r1, r3
	add	r3, r3, r0
	ldr	r3, [r3, #0]
	str	r3, [fp, #-20]
	b	.L64
.L63:
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L62:
	ldr	r3, .L67+4
	ldr	r2, [r3, #0]
	ldr	r3, [fp, #-8]
	cmp	r3, r2
	blt	.L65
	mvn	r3, #0
	str	r3, [fp, #-20]
.L64:
	ldr	r3, [fp, #-20]
	mov	r0, r3
	add	sp, fp, #0
	ldmfd	sp!, {fp}
	bx	lr
.L68:
	.align	2
.L67:
	.word	CharCodeTable
	.word	currCount
	.size	getCodeLength, .-getCodeLength
	.section	.rodata
	.align	2
.LC98:
	.ascii	"Generated %d codes\012\000"
	.align	2
.LC99:
	.ascii	"Character %c not found in code table, so it was ign"
	.ascii	"ored\012\000"
	.text
	.align	2
	.global	encodeFile
	.type	encodeFile, %function
encodeFile:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 456
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #456
	str	r0, [fp, #-448]
	str	r1, [fp, #-452]
	str	r2, [fp, #-456]
	mov	r3, #0
	str	r3, [fp, #-44]
	sub	r3, fp, #444
	ldr	r0, [fp, #-456]
	mov	r1, r3
	mov	r2, #0
	mov	r3, #0
	bl	buildCodeTable
	ldr	r3, .L75
	ldr	r3, [r3, #0]
	ldr	r0, .L75+4
	mov	r1, r3
	bl	printf
	ldr	r0, [fp, #-448]
	ldr	r1, .L75+8
	bl	fopen
	mov	r3, r0
	str	r3, [fp, #-40]
	ldr	r0, [fp, #-452]
	ldr	r1, .L75+12
	bl	fopen
	mov	r3, r0
	str	r3, [fp, #-36]
	ldr	r0, [fp, #-36]
	bl	fclose
	ldr	r0, [fp, #-452]
	ldr	r1, .L75+16
	bl	fopen
	mov	r3, r0
	str	r3, [fp, #-32]
	ldr	r0, [fp, #-40]
	bl	fgetc
	mov	r3, r0
	str	r3, [fp, #-28]
	mov	r3, #0
	str	r3, [fp, #-24]
	mov	r3, #0
	str	r3, [fp, #-20]
	b	.L70
.L73:
	ldr	r3, [fp, #-28]
	and	r3, r3, #255
	mov	r0, r3
	bl	getCode
	mov	r3, r0
	str	r3, [fp, #-12]
	ldr	r3, [fp, #-28]
	and	r3, r3, #255
	mov	r0, r3
	bl	getCodeLength
	mov	r3, r0
	str	r3, [fp, #-8]
	ldr	r3, [fp, #-12]
	cmn	r3, #1
	bne	.L71
	ldr	r0, .L75+20
	ldr	r1, [fp, #-28]
	bl	printf
	b	.L72
.L71:
	ldr	r2, [fp, #-20]
	ldr	r3, [fp, #-8]
	add	r3, r2, r3
	str	r3, [fp, #-20]
	ldr	r2, [fp, #-24]
	ldr	r3, [fp, #-8]
	mov	r3, r2, asl r3
	str	r3, [fp, #-24]
	mov	r2, #1
	ldr	r3, [fp, #-8]
	mov	r3, r2, asl r3
	sub	r3, r3, #1
	mov	r2, r3
	ldr	r3, [fp, #-12]
	and	r3, r2, r3
	mov	r0, r3
	ldr	r1, [fp, #-8]
	bl	intToStringBinary
	mov	r3, r0
	mov	r0, r3
	ldr	r1, [fp, #-32]
	bl	fputs
	mov	r2, #1
	ldr	r3, [fp, #-8]
	mov	r3, r2, asl r3
	sub	r3, r3, #1
	mov	r2, r3
	ldr	r3, [fp, #-12]
	and	r2, r2, r3
	ldr	r3, [fp, #-24]
	orr	r3, r3, r2
	str	r3, [fp, #-24]
.L72:
	ldr	r0, [fp, #-40]
	bl	fgetc
	mov	r3, r0
	str	r3, [fp, #-28]
.L70:
	ldr	r3, [fp, #-28]
	cmn	r3, #1
	bne	.L73
	mov	r0, #12
	bl	malloc
	mov	r3, r0
	str	r3, [fp, #-16]
	ldr	r2, [fp, #-16]
	ldr	r3, [fp, #-24]
	str	r3, [r2, #0]
	ldr	r2, [fp, #-16]
	ldr	r3, [fp, #-20]
	str	r3, [r2, #4]
	ldr	r0, [fp, #-32]
	bl	fclose
	ldr	r3, [fp, #-16]
	mov	r0, r3
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
.L76:
	.align	2
.L75:
	.word	currCount
	.word	.LC98
	.word	.LC17
	.word	.LC22
	.word	.LC0
	.word	.LC99
	.size	encodeFile, .-encodeFile
	.section	.rodata
	.align	2
.LC100:
	.ascii	"%c is not an accepted format for decoding, so it wa"
	.ascii	"s ignored\012\000"
	.text
	.align	2
	.global	decodeFile
	.type	decodeFile, %function
decodeFile:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 40
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #40
	str	r0, [fp, #-32]
	str	r1, [fp, #-36]
	str	r2, [fp, #-40]
	ldr	r0, [fp, #-32]
	ldr	r1, .L85
	bl	fopen
	mov	r3, r0
	str	r3, [fp, #-24]
	ldr	r0, [fp, #-36]
	ldr	r1, .L85+4
	bl	fopen
	mov	r3, r0
	str	r3, [fp, #-20]
	ldr	r0, [fp, #-20]
	bl	fclose
	ldr	r0, [fp, #-36]
	ldr	r1, .L85+8
	bl	fopen
	mov	r3, r0
	str	r3, [fp, #-16]
	ldr	r0, [fp, #-24]
	bl	fgetc
	mov	r3, r0
	str	r3, [fp, #-12]
	ldr	r3, [fp, #-40]
	str	r3, [fp, #-8]
	b	.L78
.L83:
	ldr	r3, [fp, #-12]
	cmp	r3, #49
	bne	.L79
	ldr	r3, [fp, #-8]
	ldr	r3, [r3, #16]
	str	r3, [fp, #-8]
.L79:
	ldr	r3, [fp, #-12]
	cmp	r3, #48
	bne	.L80
	ldr	r3, [fp, #-8]
	ldr	r3, [r3, #12]
	str	r3, [fp, #-8]
.L80:
	ldr	r3, [fp, #-8]
	ldr	r3, [r3, #12]
	cmp	r3, #0
	bne	.L81
	ldr	r3, [fp, #-8]
	ldr	r3, [r3, #16]
	cmp	r3, #0
	bne	.L81
	ldr	r3, [fp, #-8]
	mov	r0, r3
	ldr	r1, [fp, #-16]
	bl	fputs
	ldr	r3, [fp, #-40]
	str	r3, [fp, #-8]
.L81:
	ldr	r3, [fp, #-12]
	cmp	r3, #49
	beq	.L82
	ldr	r3, [fp, #-12]
	cmp	r3, #48
	beq	.L82
	ldr	r0, .L85+12
	ldr	r1, [fp, #-12]
	bl	printf
.L82:
	ldr	r0, [fp, #-24]
	bl	fgetc
	mov	r3, r0
	str	r3, [fp, #-12]
.L78:
	ldr	r3, [fp, #-12]
	cmn	r3, #1
	bne	.L83
	ldr	r0, [fp, #-24]
	bl	fclose
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
.L86:
	.align	2
.L85:
	.word	.LC17
	.word	.LC22
	.word	.LC0
	.word	.LC100
	.size	decodeFile, .-decodeFile
	.section	.rodata
	.align	2
.LC101:
	.ascii	"Starting generating codes...\000"
	.align	2
.LC102:
	.ascii	"Huffman Tree Created\000"
	.align	2
.LC103:
	.ascii	"Encoding file %s\012\000"
	.align	2
.LC104:
	.ascii	"Decoding file %s\012\000"
	.align	2
.LC105:
	.ascii	"\012Done!\000"
	.text
	.align	2
	.global	HuffmanCodes
	.type	HuffmanCodes, %function
HuffmanCodes:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 24
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #24
	str	r0, [fp, #-16]
	str	r1, [fp, #-20]
	str	r2, [fp, #-24]
	ldr	r0, .L91
	bl	puts
	bl	buildHuffmanTree
	mov	r3, r0
	str	r3, [fp, #-8]
	ldr	r0, .L91+4
	bl	puts
	ldr	r3, [fp, #-16]
	cmp	r3, #0
	bne	.L88
	ldr	r0, .L91+8
	ldr	r1, [fp, #-20]
	bl	printf
	ldr	r0, [fp, #-20]
	ldr	r1, [fp, #-24]
	ldr	r2, [fp, #-8]
	bl	encodeFile
.L88:
	ldr	r3, [fp, #-16]
	cmp	r3, #1
	bne	.L89
	ldr	r0, .L91+12
	ldr	r1, [fp, #-20]
	bl	printf
	ldr	r0, [fp, #-20]
	ldr	r1, [fp, #-24]
	ldr	r2, [fp, #-8]
	bl	decodeFile
.L89:
	ldr	r0, .L91+16
	bl	puts
	ldr	r2, .L91+20
	mov	r3, #0
	str	r3, [r2, #0]
	sub	sp, fp, #4
	ldmfd	sp!, {fp, lr}
	bx	lr
.L92:
	.align	2
.L91:
	.word	.LC101
	.word	.LC102
	.word	.LC103
	.word	.LC104
	.word	.LC105
	.word	currCount
	.size	HuffmanCodes, .-HuffmanCodes
	.comm	CharFreqTable,776,4
	.comm	CharCodeTable,1164,4
	.ident	"GCC: (Sourcery G++ Lite 2008q3-72) 4.3.2"
	.section	.note.GNU-stack,"",%progbits
