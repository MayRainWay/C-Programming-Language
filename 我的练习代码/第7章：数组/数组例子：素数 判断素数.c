//�������ӣ�����
//�ж�����
#include <stdio.h> 
#include <math.h>

int isPrime (int x);  //��������ͷ 

int main()
{
	int x;
	scanf("%d",&x);
	if(isPrime(x)){
		printf("%d������"); 
	} else{
		printf("%d��������"); 
	}
	return 0;
}

/* 1 int isPirme(int x)  //��2��x-1�Ƿ�������� 
{
	int ret=1; 
	int i;
	if(x==1)ret=0;
	for(i=2;i<x;i++){  //����nҪѭ��n-1�飬��n�ܴ�ʱ����n�飡 
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
*/

/* 2 int isPrime(int x)   //ȥ��ż���󣬴�3��x-1��ÿ�μ�2 
{
   int ret=1;
   int i;
   if(x===1 || (x%2==0 && x!=2)) ret=0;
   for(i=3;i<x;i+=2){     //���x��ż�������̣� 
   	if(x%i==0){          //����Ҫѭ����n-3��/2+1 �� 
   		ret=0;           // ��n�ܴ�ʱ����n/2�� 
   		break;
	   }
   }
   return ret;
 } 
 */
 
 int isPrime (int x)
 {
 	int ret =1;
 	int i;
 	if(x==1 || (x%2 && x!=2))  ret =0;
 	for(i=3;i<sqrt(x);i+=2){    //ֻ��Ҫѭ��sqrt��x���飬���ڽ��ͣ���ȥ������ 
 			ret=0;             //�ú���ʹ�ñ����ڿ�ͷ���� #include <math.h> �����warning 
 		if(x%i==0){
 			ret=0; 
 			break;
		 }
	 }
	 return ret;
  } 
