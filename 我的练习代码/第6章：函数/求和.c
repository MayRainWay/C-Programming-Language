#include <stdio.h>
//���1��10��20��30��35��45�������� 
int main()
{
	int i;
	int sum;
	
	for(i=1,sum=0;i<=10;i++){
		sum+=i;
	} 
	printf("%d��%d�ĺ���%d\n",1,10,sum);
	
	for(i=20,sum=0;i<=30;i++){
		sum+=i;
	} 
	printf("%d��%d�ĺ���%d\n",20,30,sum);
	
	for(i=35,sum=0;i<=45;i++){
		sum+=i;
	} 
	printf("%d��%d�ĺ���%d\n",35,45,sum);
	
	
	//���μ���һģһ���Ĵ��룬�����븴�ơ��ǳ������������ı��� 
	return 0;
}
