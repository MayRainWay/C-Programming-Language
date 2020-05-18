//按位运算
//按位取反~ 
#include <stdio.h>

int main()
{
	unsigned char c = 0xAA;
	printf(" c= %hhx\n",c);			//c=aa
	printf("~c= %hhx\n",(char)~c);//~c=55;
	printf("-c= %hhx\n",(char)-c);//-c=56
	return 0;
}
