#include "acllib.h"
#include <stdio.h>

int Setup()
{
	initConsole();//����̨�� 
	printf("������");
	int width;
	scanf("%d",&width); 
	
	initWindow("test",DEFAULT,DEFAULT,width,width);//�ڣ�100��100��λ�ô���һ��width*width�Ĵ���
	
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
