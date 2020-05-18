//ÒÆÎ»ÔËËãÖ®×óÒÆ<<

#include <stdio.h>

int main()
{
	unsigned char c = 0xA5;
	printf(" c   = %hhx\n",c);		//c=a5	
	printf("c<<2 = %x\n",c<<2);		//c<<2=294
	printf("c    = %d\n",c);		//c=165
	printf("c<<2 = %d\n",c<<2);		//c<<2=660
	return 0; 
} 
