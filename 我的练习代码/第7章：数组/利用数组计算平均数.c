#include <stdio.h>

int main()
{
	int x;
	double sum=0;
	int cnt=0;
	printf("���������ֵ�����");
	scanf("%d",&cnt);
	if(cnt>0){
		int number[cnt];
		scanf("%d",&x);
		
		while (x!=1){
		   number[cnt]=x;  //C99 only
		   sum+=x;
	       cnt++;
		   scanf("%d",&x);
	}
	}
	
	
	return 0;
 } 
