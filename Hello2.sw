swing program Hello2;



string frame ;
integer i, j, k ;

public paint(z:string);
	[
		graphics frame painting;
		COLOR frame SET red ;
		for i = 0(60) 
		[
			write(1);
		];
		IF k == 1(j = 3);
		j = 4;
		write(j);
		shape frame positionx 50 positiony 50 width 60 height 60 rectangle;
		shape frame positionx 60 positiony 60 width 50 height 50 rectangle;
		shape frame positionx 70 positiony 70 width 10 height 10 rectangle;
		shape frame positionx 80 positiony 80 width 10 height 10 circle;
		FILL frame WINDOW;
	];
[  
	screen frame sizex 640 sizey 480 addgraphics;
].