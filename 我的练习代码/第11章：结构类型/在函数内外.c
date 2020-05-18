//在函数内外
#include <stdio.h>

struct date{
		int month;
		int day;
		int year;
	};

int main()
{
	
	struct date today;
	
	today.month=07;
	today.day=31;
	today.year=2014;
	
	printf("Today's date is %d-%d-%d.\n",today.year,today.month,today.day);
	
	return 0;
 }  
