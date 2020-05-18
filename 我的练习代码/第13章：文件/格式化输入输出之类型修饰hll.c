//格式化输入输出之类型修饰hll
#include <stdio.h>

int main(int argc,char const *argv[])
{
	printf("%d\n",12345);
	printf("%hhd\n",12345);//视具体编译器而定，报错并非一定！ 
	printf("%hhd\n",(char)12345);
	printf("%d\n",(char)12345);
	
	return 0;
 } 
