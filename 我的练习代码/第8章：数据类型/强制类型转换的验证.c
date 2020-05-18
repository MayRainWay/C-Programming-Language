//强制类型转换的验证
//强制类型转换：
 //只是从那个变量计算出了一个新的类型的值，它并不改变那个变量，无论是值还是类型都不改变 
 
#include <stdio.h>

int main()
{
	double a=1.0;
	double b=2.0;
	int i=(int)a/b;
	printf("%d\n",i);
	
	int j=(int)(a/b);
	printf("%d\n",j);
	return 0;
 } 
 
 //强制类型转换的优先级高于四则运算 
