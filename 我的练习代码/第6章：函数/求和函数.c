#include <stdio.h>
//���1��10��20��30��35��45��������   �����汾 
void sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin,sum=0;i<=end;i++){
		sum+=i;
	} 
	printf("%d��%d�ĺ���%d\n",begin,end,sum);
	
}

int main(){
	sum(1,10);
	sum(20,30);
	sum(35,45);
	return 0;
	
}
