#include "acllib.h"
 
//int x0 = 112, y0 = 110, x1 = 667, y1 = 665;
//int xArcS = 195, yArcS = 110, xArcE = 585, yArcE = 110;
 
int Setup()
{
    initWindow("Logo",DEFAULT,DEFAULT,390,390);
    //头
    beginPaint();
    setPenColor(RGB(160, 72, 58));
    setPenWidth(5);
    arc(200,50,340,200,0,0,0,0);
    setPenColor(WHITE);
    setBrushColor(WHITE);
    rectangle(225,50,340,180);
    setPenColor(RGB(160, 72, 58));
    setBrushColor(RGB(149,210,143));
    ellipse(207,10,237,70);
    ellipse(225,59,273,83);
//头上呆毛
    setPenColor(RGB(160, 72, 58));
    setPenWidth(5);
    setBrushColor(WHITE);
    ellipse(-83, 110, 472, 665);
//大脸
    endPaint();
 
    //西瓜与手
    beginPaint();
    setPenWidth(5);
    setPenColor(RGB(160, 72, 58));
    setBrushColor(RGB(77,149,67));//西瓜皮颜色
    ellipse(90,240,235,350);//西瓜皮
    setBrushColor(RGB(240,88,74));//西瓜瓤颜色
    ellipse(93,240,240,330);//西瓜瓤
    line(120,285,121,286);
    line(150,300,151,301);
    line(203,307,204,308);
 
 
    line(127,313,128,314);
    line(170,313,171,314);
 
    line(96,272,233,301);//分界线
    int x = 94, y;
    while(x<250){
        y = (29*x + 34480)/137-1;
        while(y>234){
            putPixel(x, y, WHITE);
            y--;
        }
        x++;
    }//遮盖多余部分
//西瓜
    setBrushColor(WHITE);
    ellipse(80,330,120,385);
    setPenColor(WHITE);
    for(y=350, x = 85; y<390; y+=3, x -= 2){
        line(x,y,x+35,y+20);
    }
    setPenColor(RGB(160, 72, 58));
    line(68,370,87,337);
//左手
    ellipse(195,335,235,390);
    setPenColor(WHITE);
    for(y=370, x = 195; y<450; y+=3){
        line(x,y,x+40,y-15);
    }
    setPenColor(RGB(160, 72, 58));
    line(229,344,245,376);
//右手
    endPaint();
 
 
    //五官
    beginPaint();
    setPenColor(RGB(215,231,244));
    setBrushColor(RGB(215,231,244));
    ellipse(220,253,225,268);//口水
    setPenColor(RGB(160, 72, 58));
    setBrushColor(RGB(160, 72, 58));
    ellipse(90, 170, 130, 205);//左眼
    ellipse(275, 185, 315, 220);//右眼
    arc(155,205,193,245,170,207,195,220);//左半嘴
    arc(188,212,235,255,192,217,226,217);//右半嘴
    setPenWidth(1);
    setPenStyle(PEN_STYLE_DASHDOTDOT);
    setPenColor(RGB(252,192,184));
    setBrushColor(RGB(252,192,184));
    ellipse(50,210,95,230);//左脸颊红晕
    ellipse(300,228,345,253);//右脸颊红晕
    endPaint();
 
    //太阳
    beginPaint();
    setPenColor(RGB(238,163,160));
    setPenWidth(7);
    arc(15,6,38,35,25,5,50,30);
    arc(9,5,55,52,35,55,28,3);
    line(60,10,68,10);
    line(65,31,75,35);
    line(55,50,61,58);
    line(26,58,25,65);
    line(5,50,12,42);
    line(0,8,5,9);
    //line(0,30,6,29);
    endPaint();
 
 
 
 
 
 
    return 0;
}
