//���ر��ر����ĵ�ַ��Σ�յ�
#include <stdio.h>

int* f(void)
{
	int i=12;
	return &i;
}

void g(void)
{
	int k=24;
	printf("k=%d\n",k);
}

int main()
{
	int *p=f();
	printf("*p=%d\n",*p);
	
	g();
	printf("*p=%d\n",*p);
	
	return 0;
 } 
