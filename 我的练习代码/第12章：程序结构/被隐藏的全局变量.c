//被隐藏的全局变量
#include <stdio.h>

int f(void);
int gAll=12; 

int main()
{
	printf("in %s gAll = %d\n",__func__,gAll);//输出12 
	f();
	printf("agn in %s gAll = %d\n",__func__,gAll);//输出12 
	return 0;
 } 
 
 int f(void)
 {
 	int gAll = 1;
 	{
 		int gAll=2;
 		printf("in %s gAll = %d\n",__func__,gAll);//输出2 
 		gAll+=2;
 		printf("agn in %s gAll = %d\n",__func__,gAll);// 输出4 
	 }
	printf("函数%d\n",gAll);//输出1 
	
 	return gAll;
 }
