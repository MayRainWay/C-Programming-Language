//结构数组
//struct date dates[100];
//struct date dates[] = {
//	{4,5,2005},{2,4,2005},
//}; 

#include <stdio.h>

struct time{  //声明外部全局变量结构   declare structure
	int hour;
	int minutes;
	int seconds;
};
	
struct time timeUpdate(struct time now);//声明函数 announce function 
	
int main()
{
	struct time testTimes[5] = {
		{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19.12,27},
	}; 

	int i;
	for(i=0;i<5;i++){
		printf("现在的时间是   %.2i:%.2i:%.2i\n",testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
		
		testTimes[i]=timeUpdate(testTimes[i]);
		
		printf("一秒钟后时间是 %.2i:%.2i:%.2i\n",testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
	}
	
	return 0;
}

struct time timeUpdate(struct time now)
{
	now.seconds++;
	if(now.seconds == 60){
		now.seconds=0;
		now.minutes++;
		
		if(now.minutes == 60){
			now.minutes=0;
			now.hour++;
			
			if(now.hour==24){
				now.hour=0;
			}
		}
	} 
	return now; 
} 
