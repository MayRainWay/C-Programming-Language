//sizeof
//·是一个运算符，给出某个类型或变量在内存中所占据的字节数   PS：1字节=8比特    1byte=8bit
//.sizeof(int)    sizeof(i)

#include <stdio.h>

int main()
{
	int a = 6;
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(a)=%ld\n",sizeof(a));
	printf("sizeof(double)=%ld\n",sizeof(double));
	printf("sizeof(long double)=%ld\n",sizeof(long double));
	
	printf("sizeof(a++)=%ld\n",sizeof(a++));
	printf("a=%d\n",a);
	
	printf("sizeof(a+1.0)=%ld\n",sizeof(a+1.0));
	return 0;
 } 
 
 //sizeof 是静态运算符，它的结果在编译时刻就决定了
 //不要在sizeof的括号里做计算，这些运算不会做的 
