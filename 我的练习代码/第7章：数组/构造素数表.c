//构造素数表
#include <stdio.h>

int main ()
{
	const int maxNumber=25;       //这样就限定了前25个素数?并非这样，结合下面得知其实是限定了25以内的素数 
	int isPrime[maxNumber];
	int i;
	int x;
	
	for(i=0;i<maxNumber;i++){  //初始化数组 
		isPrime[i]=1;
	}
	
	{//for test
	printf("\t");
	for(i=2;i<maxNumber;i++){
		printf("%d\t",i);
		}
	}//test ending
	
	for(x=2;x<maxNumber;x++){
		if(isPrime[x]){                     //这个地方非常巧妙，遍历数组的同时，去掉了下面循环里的 isPrime[i*x]=0的数组 
			for(i=2;i*x<maxNumber;i++){    //i*x<maxNumber，这里限定了25以内的素数; 
				isPrime[i*x]=0;
			}
		}
	} 
	
	{//for test
	printf("%d\t",x);
	for(i=2;i<maxNumber;i++){
		printf("%d\t",isPrime[i]);
	}
	printf("\n");
	}//test ending
	
	for(i=2;i<maxNumber;i++){
		if(isPrime[i]){
			printf("%d\t",i);
		}
	} 
	printf("\n");
	
	return 0;
 } 
