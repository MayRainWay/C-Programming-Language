#include"acllib.h"
 
int Setup()
{
    initWindow("Brief strokes",0,0,400,350);//�趨���ڴ�С 
    beginPaint();
     
    setBrushColor(RGB(176,224,212));   //�趨����ˢ����ɫ 
    setBrushStyle(BRUSH_STYLE_SOLID);  //��䴿ɫ 
    rectangle(0,0,400,350); 
 
    setBrushColor(RGB(255,255,255));    //�� 
    setBrushStyle(BRUSH_STYLE_SOLID);  
    ellipse(20,20,100,50);
    ellipse(50,30,150,60);
    ellipse(35,60,110,80);
     
    setBrushColor(RGB(126,137,54));    //ɽ 
    ellipse(140,50,330,800);           
     
    setPenColor(RGB(220,1,32));        //�ʺ� 
    setPenWidth(8);                   
    setPenStyle(PEN_STYLE_SOLID);    
    arc(-50,110,450,590,400,350,0,350);
    setPenColor(RGB(246,235,0));
    arc(-50,118,450,598,400,350,0,350);
    setPenColor(RGB(12,177,52)); 
    arc(-50,126,450,606,400,350,0,350);
    setPenColor(RGB(119,198,219));
    arc(-50,134,450,614,400,350,0,350);
    setPenColor(RGB(0,144,211));  
    arc(-50,142,450,622,400,350,0,350);
    setPenColor(RGB(97,11,124));
    arc(-50,150,450,630,400,350,0,350);
 
    endPaint();
     
    return 0;
}
