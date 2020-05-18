#include "acllib.h"
#include <stdio.h>
 
int Setup()
{
    initWindow("te", 30,30,255,255); 
    beginPaint();
    int i, j;
    for ( i=0; i<255; i++ ) {
        for ( j=0; j<255; j++ ) {
            putPixel(i,j,RGB(i,j+i,j));
        }
    }
    endPaint();
    return 0;
}
