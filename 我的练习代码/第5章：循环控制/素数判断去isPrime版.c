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
		printf("������\n");
	}else{
		printf("��������\n");
	}
	
	return 0;
}
