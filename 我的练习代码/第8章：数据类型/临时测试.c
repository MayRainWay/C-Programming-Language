#include <stdio.h>
//ȡ��ַ����
//����� &
//scanf("%d",&i)���&
//��ñ����ĵ�ַ�����Ĳ����������Ǳ���

//��ַ�Ĵ�С�Ƿ���int��ͬȡ���ڱ�����
//int i; printf("%p",&i); 
int main()
{
	int i=0;
	int p;
	p=(int)&i; 
	
	printf("0x%x\n",p);
	printf("%p\n",&i);
	
	printf("%lu\n",sizeof(int));
	printf("%lu\n",sizeof(&i));
	return 0;
}
