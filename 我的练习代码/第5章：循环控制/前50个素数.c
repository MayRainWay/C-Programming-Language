#include <stdio.h>

int main()
{
	int x;
	int cnt=0;
	
	
	for(x=1;cnt<50;x++){
		int i;
		int isPrime=1;//x是素数，可以保证isPrime每次循环都能被初始化，确保不会出现值为零，循环出错的情况 
		
		for(i=2;i<x;i++){
			if(x%i==0){
				isPrime=0;
				break;
			}
		} 
		if(isPrime==1){
			cnt++;
			printf("%d ",x);
		    /*if(cnt%5==0){
				printf("cnt是%d\n",cnt);
			}*/
		}if(cnt%5==0){
				printf("cnt是%d\n",cnt);
			}	
	}
	return 0;
}
