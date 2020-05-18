//结构与函数
#include <stdio.h>
#include <stdbool.h>

struct date{
		int month;
		int day;
		int year;
	};
	
bool isLeap(struct date d);
int numberOfDays(struct date d);//判断是否闰年函数 

int main(int argc,char const* argvv[])
{
	struct date today,tomorrow;
	
	printf("今天日期 (年 月 日)：");
	scanf("%i %i %i",&today.year,&today.month,&today.day);//输入日期 
	
	if(today.day != numberOfDays(today)){
		tomorrow.day=today.day+1;
		tomorrow.month=today.month;
		tomorrow.year=today.year;
	}else if(today.month==12){
		tomorrow.day=1;
		tomorrow.month=1;
		tomorrow.year=today.year+1;
	}else{
		tomorrow.day=1;
		tomorrow.month=today.month+1;
		tomorrow.year=today.year;
	}
	
	printf("明天日期是 %i-%i-%i.\n",tomorrow.year,tomorrow.month,tomorrow.day);
	
	return 0;
 } 
 
 int numberOfDays(struct date d)
 {
 	int days;
 	const int dayPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 	if(d.month==2&&isLeap(d)){
 		days=29;
	 }else{
	 	days=dayPerMonth[d.month-1];
	 }
	 return days;
 }
 
bool isLeap(struct date d)
{
	bool leap=false;
	if((d.year%4==0 && d.year%100 != 0) || d.year%400==0){
		leap=true;
	}
	return leap;
}
