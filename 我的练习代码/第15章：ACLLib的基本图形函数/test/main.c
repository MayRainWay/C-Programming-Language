#include "acllib.h"
#include <stdio.h>

int Setup()
{
	initConsole();//控制台？ 
	printf("输入宽度");
	int width;
	scanf("%d",&width); 
	
	initWindow("test",DEFAULT,DEFAULT,width,width);//在（100，100）位置创建一个width*width的窗口
	
	beginPaint();
	setPenColor(BLUE);
	setPenWidth(1);
	setPenStyle(PEN_STYLE_DASHDOTDOT);
	line(20,20,width-20,width-20);
	putPixel(100,150,RGB(255,0,255));
	putPixel(100,130,GREEN);
	endPaint();
	
	
	return 0;
}
