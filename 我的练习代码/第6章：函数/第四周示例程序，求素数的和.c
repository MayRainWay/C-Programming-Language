#include <stdio.h>

int main()
{
	int m,n;
	int sum=0;
	int cnt=0;
	int i;
	scanf("%d %d",&m,&n);
	
	if(m==1)m=2;  //����ط�Դ�㷨û�б�ע�����ţ��������Ի󣬽��鲻Ҫ�ٶ����㷨���ȥ������ 
	for(i=m;i<=n;i++){
		int isPrime=1;
		int k;
		for(k=2;k<i-1;k++){
			if(i%k==0){
				isPrime=0;
				break;
			}
		}
	 if(isPrime){   //isPrime���ڼ��� ���Ͻ����� 
		sum+=i;
		cnt++;
	 }
    }
	printf("%d %d\n",cnt,sum);	
	
	
	return 0;
}
