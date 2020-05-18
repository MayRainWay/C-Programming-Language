//带参数的宏&&像函数的宏
#include <stdio.h>

#define cube(x) ((x)*(x)*(x))

int main()
{
	int i;
	scanf("%d",&i);
	printf("%d\n",cube(i+2));
	return 0;
 } 
