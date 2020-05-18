#include <stdio.h>

int main()
{
	int x;
	int cnt=0;
	x=1;
	while(cnt<50){
		int i;
		int isPrime=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			cnt++;
			printf("%d\t",x);
			if(cnt%5==0){
			printf("\n");
		}
		}
		x++;
	}
	return 0;
}
