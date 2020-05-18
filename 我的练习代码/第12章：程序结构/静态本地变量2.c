//静态本地变量2
#include <stdio.h>

int f(void);
int gAll=12;


int main()
{
	f();
	
	return 0;
 } 
 
int f(void)
{
	int k=0;
	static int all=1;
	
	printf("&gAll=%p\n",&gAll);
	printf("&all =%p\n",&all);
	
	printf("&k   =%p\n",&k);
	
	printf("in %s all = %d\n",__func__,all);
 	all+=2;
 	printf("agn in %s all = %d\n",__func__,all);
 	return all;
	
}
