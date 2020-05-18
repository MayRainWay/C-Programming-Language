#include <stdio.h>

int isPrime (int x,int knownPrimes[],int numberOfKnownPrimes)  //i，prime，count； 
{
	int ret=1;
	int i;
	for(i=0;i<numberOfKnownPrimes;i++){  //这里的i是函数内的i，这段代码的意思是遍历之前的数组单元（全是素数） 
		if(x%knownPrimes[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
 } 
 
int main(void)
{
	const int number = 100;   //数组单元长度 ,也就是前100个素数 
	int prime[100] = {2};       //prime[0]=2,其余值全为0 ,这地方如果填number，dev c++会报错，编译器太老了 C99only 
	int count = 1;
	int i = 3;               //第一个素数是 3 
	
	{//调试点2 
	int i;
	printf("\t\t\t\t");
	for(i=0;i<number;i++){
		printf("%d\t",i); 
	}
	printf("\n");  //调试结束 
	 } 
	 
	while(count<number){
		if(isPrime(i,prime,count)==1){
			prime[count++] = i;  //这地方是个小套路  参考：a=10;a++=10;a=11;也就是当count为1的时候，1=1；1++=1；1=2 
		}                        //当ret的返回值为1时，会对数组进行赋值，否则数组的单元号不变，下面的i值增加进入下一轮 
	
		{//调试点1
		printf("i=%d\t cnt=%d\t",i,count) ;
		int i;
		for(i=0;i<number;i++){
			printf("%d\t",prime[i]);
		}
		printf("\n");  //调试结束 
		 } 
		 
		i++;
	}
	
	for(i=0;i<number;i++){
		printf("%d",prime[i]);    //遍历数组 
		if((i+1)%5 != 0) {
			printf("\t");     // 缩进对齐 
		}
		else printf("\n");   //每5个进行一次换行 
	}
	
	return 0;
 } 
