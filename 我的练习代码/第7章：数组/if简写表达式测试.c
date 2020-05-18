//if 简写表达式测试 
#include <stdio.h>

int main ()
{
	int a = 10;
	if(a%2==0) {
		printf("测试1 %d\n",a);
	}
	
	if(a%2) {
		printf("测试2 %d\n",a);
	}
	
	if(a%2 != 0) {
		printf("测试3 %d\n",a);
	}
	
	return 0;
 } 
 
 //总结，也就是说 if(表达式或者单纯运算式子或者函数)  等于  if（表达式==1） 
