#include "acllib.h"
 
int Setup()
{
    initWindow("by_zwt",DEFAULT,DEFAULT,400,400);
    // @ ̫�� 
     
    beginPaint();
    setBrushColor(RED);
    setPenColor(RED);
    chrod(40,40,80,80,0,0,0,0);
    setPenColor(BLACK);
    setPenWidth(3);
    // �������� 
    line(60,10,60,30);
    line(60,90,60,110);
    line(90,60,110,60);
    line(30,60,10,60);
    //  б�� 
    line(40,40,20,30);
    line(40,80,20,90);
    line(80,40,100,30);
    line(80,80,100,90);
    endPaint();
     
    // @ ��
    beginPaint();
    line(0,200,400,400);
    setPenWidth(5);
    line(0,250,280,400);
    line(160,340,180,280);
    setPenWidth(3);
    line(165,280,180,240);
    line(180,240,0,200);
    line(180,240,400,400);
    line(180,280,0,250);
    line(180,280,280,400);
    line(180,240,180,280);
    endPaint(); 
     
    // @ ��
    beginPaint();
    arc(360,200,380,180,380,180,360,200);
    arc(360,200,340,180,360,200,340,180);
    arc(320,200,340,190,340,190,320,200);
    arc(320,200,300,190,320,200,300,190);
    arc(300,180,310,160,310,160,300,180);
    arc(300,180,280,160,300,180,280,160);
     
    // @ �Ŷ�
    setPenWidth(2);
    arc(0,350,200,500,200,400,10,400); 
     
    endPaint();
     
    // @ ����
     beginPaint();
     setTextColor(RGB(181,169,128));
     setTextBkColor(RGB(228,132,52));
     setTextSize(20);
//     setTextFont("����");
     paintText(200,30,"����ֻ��Խ��Խ�ã�"); 
     endPaint();
     return 0;
}
