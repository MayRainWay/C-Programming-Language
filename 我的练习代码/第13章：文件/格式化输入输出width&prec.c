//格式化输入输出
#include <stdio.h>

int main()
{
	printf("%9.2f\n",123.0);
	
	printf("%*d\n",6,123);
	printf("%6d\n",123);
	int len=6;
	printf("%*d\n",len,123);
	
	
	return 0;
 } 
