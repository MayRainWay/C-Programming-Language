#include <stdio.h>

int main()
{
	printf("请分别输入小时和分钟，"
	       "如输入\"1 23\"表示1小时23分：");
	       
	int hour1,minute1;
	int hour2,minute2; 
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t1=hour1*60+minute1; 
	int t2=hour2*60+minute2;
	
	int t=t2-t1;
	
	printf("时间差是%d小时%d分。\n",t/60,t%60);
	
	return 0;
}
