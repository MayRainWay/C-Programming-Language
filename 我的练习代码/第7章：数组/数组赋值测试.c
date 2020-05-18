#include <stdio.h>

int main()
{
	int count[10];
	int i=0;
	for(i=0;i<10;i++){
		count[i]=0;  
		printf("count[%d]=%d\n",i,count[i]);
		
	}
	
	count[2]++;
	printf("count[2]=%d\n",count[2]);
	return 0;
 } 
