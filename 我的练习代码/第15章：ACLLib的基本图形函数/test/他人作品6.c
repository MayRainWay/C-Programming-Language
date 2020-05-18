#include"acllib.h"

#include<stdio.h>

int Setup()

{

 int width=600,height=400;

 initWindow("我的第一个作品",DEFAULT,DEFAULT,width,height);//画图窗口框架 

  

 beginPaint();

 

 setPenColor(BLUE);

 int i;

 for(i=0;i<height;i++)

  line(0,i,600,i);    //画背景 

  

 setPenColor(YELLOW);

 line(45,0,45,400);    //画四条线 

 line(0,45,600,45);

 line(600-45,0,600-45,400);

 line(0,400-45,600,400-45);

 

 int j,k;

  for(j=30,k=30;j<600-45;j+=30)

 {  ellipse(j,k,j+30,60);

     ellipse(j,340,j+30,370);//画两排小圆 

 }

	setPenColor(RED);    

	setPenWidth(3);

	rectangle(100,200,500,300);//以红笔3像素宽画长方形 

	setBrushColor(GREEN);

	ellipse(100,200,500,300);  //画绿色填充椭圆 

	setBrushStyle(BRUSH_STYLE_CROSS);

	ellipse(250,200,350,300);   //画绿色十字填充画圆 

	

	setTextColor(RGB(30,200,70));

      setTextBkColor(RGB(225,225,0));

      setTextSize(30);

      paintText(100,150,"☆这是我的第一个图画，谢谢鼓励!☆"); 

 



 endPaint();

 return 0;

}
