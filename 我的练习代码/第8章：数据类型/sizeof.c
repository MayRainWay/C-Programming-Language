//sizeof
//����һ�������������ĳ�����ͻ�������ڴ�����ռ�ݵ��ֽ���   PS��1�ֽ�=8����    1byte=8bit
//.sizeof(int)    sizeof(i)

#include <stdio.h>

int main()
{
	int a = 6;
	printf("sizeof(int)=%ld\n",sizeof(int));
	printf("sizeof(a)=%ld\n",sizeof(a));
	printf("sizeof(double)=%ld\n",sizeof(double));
	printf("sizeof(long double)=%ld\n",sizeof(long double));
	
	printf("sizeof(a++)=%ld\n",sizeof(a++));
	printf("a=%d\n",a);
	
	printf("sizeof(a+1.0)=%ld\n",sizeof(a+1.0));
	return 0;
 } 
 
 //sizeof �Ǿ�̬����������Ľ���ڱ���ʱ�̾;�����
 //��Ҫ��sizeof�������������㣬��Щ���㲻������ 
