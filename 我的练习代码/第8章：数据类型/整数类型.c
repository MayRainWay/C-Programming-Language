//整数类型
#include <stdio.h>

int main()
{
	printf("sizeiof(char)=%d\n",sizeof(char));
	printf("sizeiof(short)=%d\n",sizeof(short));
	printf("sizeiof(int)=%d\n",sizeof(int));
	printf("sizeiof(long)=%d\n",sizeof(long));
	printf("sizeiof(long long)=%d\n",sizeof(long long));
	return 0;
 } 
 
 //整数
 //·char：1字节（8比特）
 //·short：2字节
 //·int：取决于编译器（CPU），通常的意义是“1个字”
 //·long：取决于编译器（CPU），通常的意义是“1个字” 
 //·long long：8字节
 
 //int就是用来表达寄存器的 
