#include <stdio.h>

int isPrime (int x,int knownPrimes[],int numberOfKnownPrimes)  //i��prime��count�� 
{
	int ret=1;
	int i;
	for(i=0;i<numberOfKnownPrimes;i++){  //�����i�Ǻ����ڵ�i����δ������˼�Ǳ���֮ǰ�����鵥Ԫ��ȫ�������� 
		if(x%knownPrimes[i]==0){
			ret=0;
			break;
		}
	}
	return ret;
 } 
 
int main(void)
{
	const int number = 100;   //���鵥Ԫ���� ,Ҳ����ǰ100������ 
	int prime[100] = {2};       //prime[0]=2,����ֵȫΪ0 ,��ط������number��dev c++�ᱨ��������̫���� C99only 
	int count = 1;
	int i = 3;               //��һ�������� 3 
	
	{//���Ե�2 
	int i;
	printf("\t\t\t\t");
	for(i=0;i<number;i++){
		printf("%d\t",i); 
	}
	printf("\n");  //���Խ��� 
	 } 
	 
	while(count<number){
		if(isPrime(i,prime,count)==1){
			prime[count++] = i;  //��ط��Ǹ�С��·  �ο���a=10;a++=10;a=11;Ҳ���ǵ�countΪ1��ʱ��1=1��1++=1��1=2 
		}                        //��ret�ķ���ֵΪ1ʱ�����������и�ֵ����������ĵ�Ԫ�Ų��䣬�����iֵ���ӽ�����һ�� 
	
		{//���Ե�1
		printf("i=%d\t cnt=%d\t",i,count) ;
		int i;
		for(i=0;i<number;i++){
			printf("%d\t",prime[i]);
		}
		printf("\n");  //���Խ��� 
		 } 
		 
		i++;
	}
	
	for(i=0;i<number;i++){
		printf("%d",prime[i]);    //�������� 
		if((i+1)%5 != 0) {
			printf("\t");     // �������� 
		}
		else printf("\n");   //ÿ5������һ�λ��� 
	}
	
	return 0;
 } 
