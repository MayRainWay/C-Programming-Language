# include "acllib.h"
#include <stdio.h>

int Setup()
{
    
    
 initWindow("painting",100,100,800,600);
 initConsole();
 printf("Hello to you, my dear friends!\n");
 beginPaint();
 int x0=40,y0=550,i=20,j=10,k=0;
 setPenColor(RGB(200,200,240));
 setPenWidth(10);

 do
 {
 arc(x0,y0,x0+120,y0+20,x0,y0,x0+120,y0);
 x0+=i;y0-=j;
 i+=20;j+=10;
 k++;
 }while(k<7);
 
 
 int x1=560,y1=275,h=230,d=180,h0=20;
 setPenColor(BLACK);
 setPenWidth(5);
 
 line(x1,y1-h0,x1,y1-h-h0);
 line(x1,y1-h0,x1+d,y1+h0);
 line(x1+d,y1+h0,x1+d,y1-h+h0);
 line(x1,y1-h-h0,x1+d,y1-h+h0);
 line(x1,y1-h+40-h0,x1+d,y1-h+40+h0);
 
 setPenColor(RGB(120,20,20));
 setPenWidth(2);
 POINT p[]=
 {
  {x1,y1-h+40-h0+70-5},
  {x1+90,y1-h+40-h0+70-5},
  {x1,y1-h+40-5},
  {x1+90,y1-h+40-5}, 
 };
 polyBezier(p,4);
 
  POINT q[]=
 {
  {x1+d,y1-h+40-h0+70+h0},
  {x1+d-90,y1-h+40-h0+70+h0},
  {x1+d,y1-h+40},
  {x1+d-90,y1-h+40}, 
 };
 polyBezier(q,4);
 
 setTextColor(BLACK);
 setTextSize(20);
 paintText(x1+90-3,y1-h+40-5+25,"吾");
 paintText(x1+90-6,y1-h+40-5+25+50,"学");
 paintText(x1+90-9,y1-h+40-5+25+95,"有");
 paintText(x1+90-12,y1-h+40-5+25+140,"涯");
  
  setTextSize(50);
 paintText(x0-400,y0+100,"吾");
 paintText(x0-400+150,y0+100-80,"学");
 paintText(x0-400+50,y0+100+175,"无");
 paintText(x0-400+50+150,y0+100+175-80,"止");
  
 
 endPaint(); 
 return 0;
}
