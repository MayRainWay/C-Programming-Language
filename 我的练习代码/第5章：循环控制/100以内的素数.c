#include <stdio.h>

int main()
{
	int x;
	int i;
	int isPrime=1;
	
	for(x=1;x<=100;x++){
		//int i;
		//int isPrime=1;  //x������ 
		printf("��x����%d��",x);
		
		for(i=2;i<x;i++){
			printf("iΪ%d��\n",i); 
			if(x%i==0){
				isPrime=0;
				printf("%d��������\n",x);
				break;
			} 
		}printf("iSΪ%d��\n",isPrime); 
		if(isPrime==1){
			printf("%d������\n",x);
		}
	}
	return 0;
}
