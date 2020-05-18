 #include "acllib.h"
#include<stdio.h>
#include<math.h>

int Setup() {
    initWindow("Ôç³¿µÄÌ«Ñô", 0,0,640,479);            
 beginPaint();
      setBrushColor(RGB(112,146,190));
      rectangle(0,0,640,380);
      setBrushColor(RGB(0,255,0));
      rectangle(0,380,640,479);
      setPenColor(RGB(255,255,0));
      setPenWidth(2);
      line(0,380,640,380);
      line(0,390,640,390);
      line(0,410,640,410);
      line(0,440,640,440);
      line(0,479,640,479);
      line(0,400,60,380);
      line(0,430,130,380);
      line(0,479,200,380);
      line(120,479,245,380);
      line(210,479,280,380);
      line(280,479,310,380);
      line(360,479,330,380);
      line(430,479,360,380);
      line(520,479,395,380);
      line(639,479,450,380);
      line(639,430,520,380);
      line(639,400,590,380);
      setBrushColor(RGB(255,0,0));
      setBrushStyle(BRUSH_STYLE_SOLID);
      ellipse(250,250,340,340);
      setTextColor(RGB(163,73,164));
      setTextBkColor(RGB(255,255,255));
      setTextSize(48);
      paintText(90,150,"Tomorrow will be better!"); 
    endPaint();                        
    return 0;
}
