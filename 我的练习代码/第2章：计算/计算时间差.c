#include <stdio.h>

int main()
{
	printf("��ֱ�����Сʱ�ͷ��ӣ�"
	       "������\"1 23\"��ʾ1Сʱ23�֣�");
	       
	int hour1,minute1;
	int hour2,minute2; 
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int t1=hour1*60+minute1; 
	int t2=hour2*60+minute2;
	
	int t=t2-t1;
	
	printf("ʱ�����%dСʱ%d�֡�\n",t/60,t%60);
	
	return 0;
}
