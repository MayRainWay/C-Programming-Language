//����������
#include <stdio.h>

int main ()
{
	const int maxNumber=25;       //�������޶���ǰ25������?������������������֪��ʵ���޶���25���ڵ����� 
	int isPrime[maxNumber];
	int i;
	int x;
	
	for(i=0;i<maxNumber;i++){  //��ʼ������ 
		isPrime[i]=1;
	}
	
	{//for test
	printf("\t");
	for(i=2;i<maxNumber;i++){
		printf("%d\t",i);
		}
	}//test ending
	
	for(x=2;x<maxNumber;x++){
		if(isPrime[x]){                     //����ط��ǳ�������������ͬʱ��ȥ��������ѭ����� isPrime[i*x]=0������ 
			for(i=2;i*x<maxNumber;i++){    //i*x<maxNumber�������޶���25���ڵ�����; 
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
