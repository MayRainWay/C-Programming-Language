#include <stdio.h> 

int main()
{
	int x;
	scanf("%d",&x);
	
	int i;
	int isPrime=1; //x是素数 
	
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime=0;
			continue;
		}
		printf("此时i的值为%d\n",i);
	}
	
	if(isPrime==1){
		printf("是素数\n");
	}else{
		printf("不是素数\n");
	}
	
	return 0;
}
