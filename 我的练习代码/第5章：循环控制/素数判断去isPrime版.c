#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int i;
	
	
	for(i=2;i<x;i++){
		if(x%i==0){
			
			break;
		}
	}
	
	if(i>=x){
		printf("是素数\n");
	}else{
		printf("不是素数\n");
	}
	
	return 0;
}
