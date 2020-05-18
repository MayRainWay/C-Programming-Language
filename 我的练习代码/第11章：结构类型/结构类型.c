//结构类型
#include <stdio.h>

int main()
{
	struct date{
		int month;
		int day;
		int year;
	};
	
	struct date today;
	
	today.month=07;
	today.day=31;
	today.year=2014;
	
	printf("Today's date is %d-%d-%d.\n",today.year,today.month,today.day);
	
	return 0;
 } 
