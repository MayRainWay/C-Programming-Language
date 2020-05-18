//结构的初始化
#include <stdio.h>

struct date{
		int month;
		int day;
		int year;
	};

int main()
{
	
	struct date today={07,31,2014};
	struct date thismonth={.month=07,.year=2014};

	
	printf("Today's date is %i-%i-%i.\n",today.year,today.month,today.day);
	
	printf("Today's date is %i-%i-%i.\n",thismonth.year,thismonth.month,thismonth.day);
	
	return 0;
 }   
