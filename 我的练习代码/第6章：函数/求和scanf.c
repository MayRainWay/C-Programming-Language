#include <stdio.h>
//���1��10��20��30��35��45�������� 
int main()
{
	int i;
	int sum;
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(i=a,sum=0;i<=b;i++){
		sum+=i;
	} 
	printf("%d��%d�ĺ���%d\n",1,10,sum);
	
	
	return 0;
}
