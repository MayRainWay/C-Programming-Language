//ָ��
//������ֵ��ʵ�ʴ��ڵĵ�ַ����ͨ������ֵ��ʵ�ʵ�ֵ 
#include <stdio.h>

void f(int *p);
//�ڱ����õ�ʱ��õ���ĳ�������ĵ�ַ��
//�ں����������ͨ�����ָ���������������i
void g(int k); 

int main()
{
	int i=6;
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	printf("i=%d\n",i);
	return 0;
 }  
 
 void f(int *p)
 {
 	printf(" p=%p\n",p);
 	printf(" *p=%d\n",*p);
 	*p=26;
 	
 }
 
 void g(int k)
 {
 	printf("k=%d\n",k);
 }
 
 
 //ָ�������� &* ���෴���� 
