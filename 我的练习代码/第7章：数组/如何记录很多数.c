#include <stdio.h>
//�ó����������Եİ�ȫ���� �����������ֳ���100ʱ����������number�����ޣ�
//�����ã���Ӱ�죬�������ã���bug���߳������ �� 
int main()
{
	int x;         
	double sum=0;     //sum���������ֵ��ܺ� �� 
	int cnt=0;        //cnt�����ƴΣ� 
	int number[100];  //�������飬�����ʾ��һ�ٸ����鵥Ԫ������Ƚ��ر����һλ��Ԫ��0��ʼ������100����Ԫ=0~99
	scanf("%d",&x); 
	
	while(x!=1){   //x��-1ʱ����ѭ����Ҳ����˵������-1��ʾ������� 
		number[cnt]=x;   //��������и�ֵ��
		
		/*���Դ���
		{
		   int i;
		   printf��"%d\t",cnt��;
		   for(i=0;i<=cnt;i++){
		       printf("%d\t",number[i]);
		   }
		   printf("\n"); 
	    }
		*/
		
		sum+=x;
		cnt++; 
		scanf("%d",&x);
	} 
	if(cnt>0){
		printf("%f\n",sum/cnt);
		int i;
		for(i=0;i<cnt;i++){   //����iֵ����number������ֵ�ĵ����� 
			if(number[i]>sum/cnt){
				printf("%d\n",number[i]);   //�������ƽ���������鵥Ԫ 
			}
		}
	}
	return 0;
 } 
