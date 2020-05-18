//整数的格式化
//整数的输入输出，对于printf和scanf而言
//·只有两种形式：int或long long     会把小于int的类型转换成int，大于int小于long long的类型转换成long long 
//·%d：int
//·%ld：long long

//·%u：unsigned
//·%lu：unsigned long long

//示例程序

#include <stdio.h>

int main()
{
	char c = -1;
	int i = -1;
	printf("c=%u,i=%u\n",c,i);
	
	return 0;
 } 
 //输出结果为：c=4294967295，i= 4294967295
 //这两个数是unsigned int所能表达的最大数
 //我的理解：-1=0-1；所以越界返回原点？ 
