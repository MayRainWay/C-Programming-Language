//if ��д���ʽ���� 
#include <stdio.h>

int main ()
{
	int a = 10;
	if(a%2==0) {
		printf("����1 %d\n",a);
	}
	
	if(a%2) {
		printf("����2 %d\n",a);
	}
	
	if(a%2 != 0) {
		printf("����3 %d\n",a);
	}
	
	return 0;
 } 
 
 //�ܽᣬҲ����˵ if(���ʽ���ߵ�������ʽ�ӻ��ߺ���)  ����  if�����ʽ==1�� 
