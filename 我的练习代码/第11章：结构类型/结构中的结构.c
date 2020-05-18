//结构中的结构
#include <stdio.h> 

int main()
{
	struct date{
		int x;
		int y;
	}sdate;
	sdate.x=2;
	
	struct time{
		int x;
		int y;
	}stime;
	stime.x=3;
		
	printf("%d %d\n",sdate.x,stime.x);
	
	struct DateAndTime{
		struct date sdate;
		struct time stime;
	};
	
	return 0;
}
