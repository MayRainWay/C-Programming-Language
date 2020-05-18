//Î»¶Î
#include <stdio.h>

void priBin(unsigned int number);

struct U0 {
	unsigned int leading : 3;
	unsigned int FLAG1: 1;
	unsigned int FLAG2: 1;
	int trailing: 27;
};

int main()
{
	struct U0 uu;
	uu.leading = 2;
	uu.FLAG1 = 0;
	uu.FLAG2 = 1;
	uu.trailing = 0;
	
	printf("sizeof(uu)= %lu\n",sizeof(uu));
	priBin(*(int*)&uu); //Ì×ÍÞ¿ªÊ¼£¡ 
	
	
	return 0; 
}    

void priBin(unsigned int number)
{
	unsigned mask = 1u<<31;
	
	for(;mask;mask>>=1){
		printf("%d",number&mask?1:0);
	}
	printf("\n");
}
