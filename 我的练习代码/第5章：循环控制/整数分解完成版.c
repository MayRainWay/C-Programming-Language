#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int mask=1;   //mask������cnt�ƴ� 
	int t=x;      //���������м����t��������⣬������xֵ�ı仯 
	while(t>9){
		t/=10;    //��t���зֽ⣬t=t/10��ÿ��ȥ�����λ�� 
		mask*=10; //mask=mask*10 
	}
	printf("x=%d,mask=%d\n",x,mask);  //���x��mask��ֵ 
	
	do{
		int d=x/mask;    //��x�����λ���зֽ� ��d�͵���xĿǰ�����λ�� 
		printf("%d",d);   //ÿ�����dֵ�仯 
	    if(mask>9){
	    	printf(" ");//��֤ÿ������ո��ͬʱ�����һ�ֲ�����ո� 
		}
		x%=mask;        //x=x��maskȡ�࣬�൱��ȥ�� x���λ�� 
		mask/=10;       //mask=mask/10 
	}while(mask>0);
	printf("\n");       //��ʵ���㷨���޷��������007����� 
	return 0;
 } 
