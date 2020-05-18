#include <stdio.h>

int main()
{
	int x;
	int i;
	int isPrime=1;
	
	for(x=1;x<=100;x++){
		//int i;
		//int isPrime=1;  //x是素数 
		printf("当x等于%d，",x);
		
		for(i=2;i<x;i++){
			printf("i为%d。\n",i); 
			if(x%i==0){
				isPrime=0;
				printf("%d不是素数\n",x);
				break;
			} 
		}printf("iS为%d。\n",isPrime); 
		if(isPrime==1){
			printf("%d是素数\n",x);
		}
	}
	return 0;
}
