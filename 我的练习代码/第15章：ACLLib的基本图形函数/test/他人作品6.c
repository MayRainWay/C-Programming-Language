#include"acllib.h"

#include<stdio.h>

int Setup()

{

 int width=600,height=400;

 initWindow("�ҵĵ�һ����Ʒ",DEFAULT,DEFAULT,width,height);//��ͼ���ڿ�� 

  

 beginPaint();

 

 setPenColor(BLUE);

 int i;

 for(i=0;i<height;i++)

  line(0,i,600,i);    //������ 

  

 setPenColor(YELLOW);

 line(45,0,45,400);    //�������� 

 line(0,45,600,45);

 line(600-45,0,600-45,400);

 line(0,400-45,600,400-45);

 

 int j,k;

  for(j=30,k=30;j<600-45;j+=30)

 {  ellipse(j,k,j+30,60);

     ellipse(j,340,j+30,370);//������СԲ 

 }

	setPenColor(RED);    

	setPenWidth(3);

	rectangle(100,200,500,300);//�Ժ��3���ؿ������� 

	setBrushColor(GREEN);

	ellipse(100,200,500,300);  //����ɫ�����Բ 

	setBrushStyle(BRUSH_STYLE_CROSS);

	ellipse(250,200,350,300);   //����ɫʮ����仭Բ 

	

	setTextColor(RGB(30,200,70));

      setTextBkColor(RGB(225,225,0));

      setTextSize(30);

      paintText(100,150,"�������ҵĵ�һ��ͼ����лл����!��"); 

 



 endPaint();

 return 0;

}
