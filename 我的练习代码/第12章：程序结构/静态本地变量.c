//静态本地变量
#include <stdio.h>

int f(void)
{
	static int all=1;
	printf("in %s all = %d\n",__func__,all);
 	all+=2;
 	printf("agn in %s all = %d\n",__func__,all);
 	return all;
}
int main()
{
	f();
	f();
	f();
	
//	printf("in %s all = %d\n",__func__,all);
	return 0;
 } 
