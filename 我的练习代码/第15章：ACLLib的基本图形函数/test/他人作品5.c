#include "acllib.h"

#include <stdio.h>

int Setup()

{

	initWindow("test",DEFAULT,DEFAULT,400,400);

	beginPaint();

	setBrushColor(RGB(0,0,0));

	rectangle(0,0,400,400);

    setPenColor(RGB(255,0,0));   

	setPenWidth(8);

	setBrushColor(GREEN);

	arc(0,0,400,400,0,0,0,0);

	setPenWidth(4);

	arc(30,30,370,370,0,0,0,0);

	setPenWidth(7);

	setPenColor(RGB(255,0,0));

	setBrushColor(GREEN);

	line(200,400,80,39);

	line(200,400,320,39);

	line(10,260,390,260);

	line(80,39,390,260);

	line(320,39,10,260);

	setPenWidth(6);

	setPenColor(RGB(0,255,0));

	arc(145,145,255,255,200,145,200,255);

	setPenWidth(5);

	setPenColor(RGB(0,0,255));

	arc(155,155,245,245,155,215,245,165);

	setPenWidth(4);

	setPenColor(RGB(255,0,0));

	arc(165,165,235,235,211,235,188,165);

	setPenWidth(5);

	setPenColor(RGB(255,255,255));

	setBrushColor(RGB(255,255,0));

	ellipse(185,185,215,215);

	endPaint();

	return 0;

}
