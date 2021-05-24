.class public Hello2
.super javax/swing/JPanel

.field private static _sysin Ljava/util/Scanner;
.field private  grid [[I
.field private static final rnd Ljava/util/Random;
.field private  generationCounter I
.field private static frame Ljava/lang/String;
.field private static i I
.field private static j I
.field private static k I

;
; Runtime input scanner
;
.method static <clinit>()V

	new	java/util/Scanner
	dup
	getstatic	java/lang/System/in Ljava/io/InputStream;
	invokespecial	java/util/Scanner/<init>(Ljava/io/InputStream;)V
	putstatic	Hello2/_sysin Ljava/util/Scanner;
	return

.limit locals 0
.limit stack 3
.end method

;
; Main class constructor
;
.method public <init>(II)V
.var 0 is this LHello2;

	aload_0
	invokespecial	javax/swing/JPanel/<init>()V
	aload_0
	iload_1
	iconst_4
	idiv
	iload_2
	iconst_4
	idiv
	multianewarray	[[I 2
	putfield	Hello2/grid [[I
	return

.limit locals 50
.limit stack 50
.end method

;
; DIEMENSION
;
.method public getPreferredSize()Ljava/awt/Dimension;
	new	java/awt/Dimension
	dup
	aload_0
	getfield	Hello2/grid [[I
	arraylength
	iconst_4
	imul
	aload_0
	getfield	Hello2/grid [[I
	iconst_0
	aaload
	arraylength
	iconst_4
	imul
	invokespecial	java/awt/Dimension/<init>(II)V
	areturn

.limit locals 50
.limit stack 50
.end method

;
; PROCEDURE paint
;
.method public paint(Ljava/awt/Graphics;)V

.var 0 is z Ljava/lang/String;
;
; 010 graphicsframepainting
;
	aload_0
	aload_1
	invokespecial	javax/swing/JPanel/paintComponent(Ljava/awt/Graphics;)V
	aload_1
	invokevirtual	java/awt/Graphics/getColor()Ljava/awt/Color;
	astore_2
;
; 011 COLORframeSETred
;
	aload_1
	getstatic	java/awt/Color/red Ljava/awt/Color;
	invokevirtual	java/awt/Graphics/setColor(Ljava/awt/Color;)V
;
; 012 fori=0(60)[write(1);]
;
	iconst_0
	putstatic	Hello2/i I
L001:
	getstatic	Hello2/i I
	bipush	60
	if_icmpgt	L002
;
; 014 write(1)
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	iconst_1
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	getstatic	Hello2/i I
	iconst_1
	iadd
	putstatic	Hello2/i I
	goto	L001
L002:
;
; 016 IFk==1(j=3)
;
	getstatic	Hello2/k I
	iconst_1
	iconst_0
	goto	L006
L005:
	iconst_1
L006:
	ifeq	L003
;
; 016 j=3
;
	iconst_3
	putstatic	Hello2/j I
L003:
;
; 017 j=4
;
	iconst_4
	putstatic	Hello2/j I
;
; 018 write(j)
;
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"%d"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	Hello2/j I
	invokestatic	java/lang/Integer/valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
;
; 019 shapeframepositionx50positiony50width60height60rectangle
;
	aload_1
	bipush	50
	bipush	50
	bipush	60
	bipush	60
	invokevirtual	java/awt/Graphics/fillRect(IIII)V
;
; 020 shapeframepositionx60positiony60width50height50rectangle
;
	aload_1
	bipush	60
	bipush	60
	bipush	50
	bipush	50
	invokevirtual	java/awt/Graphics/fillRect(IIII)V
;
; 021 shapeframepositionx70positiony70width10height10rectangle
;
	aload_1
	bipush	70
	bipush	70
	bipush	10
	bipush	10
	invokevirtual	java/awt/Graphics/fillRect(IIII)V
;
; 022 shapeframepositionx80positiony80width10height10circle
;
	aload_1
	bipush	80
	bipush	80
	bipush	10
	bipush	10
	invokevirtual	java/awt/Graphics/fillOval(IIII)V
;
; 023 FILLframeWINDOW
;
	aload_1
	aload_2
	invokevirtual	 java/awt/Graphics/setColor(Ljava/awt/Color;)V

	return

.limit locals 50
.limit stack 50
.end method

;
; MAIN
;
.method public static main([Ljava/lang/String;)V
.var 0 is args [Ljava/lang/String;
.var 1 is _start Ljava/time/Instant;
.var 2 is _end Ljava/time/Instant;
.var 3 is _elapsed J

;
; 026 screenframesizex640sizey480addgraphics
;
	new	Hello2
	dup
	sipush	640
	sipush	480
	invokespecial	Hello2/<init>(II)V
	astore_1
	new	javax/swing/JFrame
	dup
	invokespecial	javax/swing/JFrame/<init>()V
	astore_2
	aload_2
	invokevirtual	javax/swing/JFrame/getContentPane()Ljava/awt/Container;
	aload_1
	invokevirtual	java/awt/Container/add(Ljava/awt/Component;)Ljava/awt/Component;
	pop
	aload_2
	invokevirtual	javax/swing/JFrame/pack()V
	aload_2
	iconst_3
	invokevirtual	javax/swing/JFrame/setDefaultCloseOperation(I)V
	aload_2
	iconst_1
	invokevirtual	javax/swing/JFrame/setLocationByPlatform(Z)V
	aload_2
	iconst_1
	invokevirtual	javax/swing/JFrame/setVisible(Z)V

	invokestatic	java/time/Instant/now()Ljava/time/Instant;
	astore_2
	aload_1
	aload_2
	invokestatic	java/time/Duration/between(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)Ljava/time/Duration;
	invokevirtual	java/time/Duration/toMillis()J
	lstore_3
	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc	"\n[%,d milliseconds execution time.]\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	lload_3
	invokestatic	java/lang/Long/valueOf(J)Ljava/lang/Long;
	aastore
	invokevirtual	java/io/PrintStream/printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	return

.limit locals 50
.limit stack 50
.end method
