#include <stdio.h>

int main()
{
	int a,b;
	int min;
	
	scanf("%d %d",&a,&b);
	if(a>b){
		min=a;
	}else{
		min=b;
	}          //ɸѡ��a��b��С��һ�� 
	
	int ret=0;
	int i;
	for(i=1;i<min;i++){    //i���ڵ���minѭ���������ó����Լ�� 
	   if(a%i==0){         //a�Ĺ�Լ�� 
	   	if(b%i==0){        //b�Ĺ�Լ�� 
	   		ret=i;         //����ab�Ĺ�Լ�� 
		   }
	   } 
	} 
	printf("%d��%d�����Լ����%d.\n",a,b,ret);
	return 0;
 } 
