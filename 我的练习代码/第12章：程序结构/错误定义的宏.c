//������ĺ�
#include <stdio.h>

#define RADTODEG1(x) (x * 57.29578)
#define RADTODEG2(x) (x) * 57.29578

int main()
{
	printf("%f\n",RADTODEG1(5+2));
	printf("%f\n",180/RADTODEG2(1));
	
	return 0;
 } 
 
//���������ԭ��
//һ�ж�Ҫ����
//�������ֵ�ÿ���ط���Ҫ����
//#define RADTODEG(x) ((x)*57.29578) 

//��Ҳ�ɴ�������������磺
//#define MIN(a,b)  ((a)>(b)?(b):(a))
//��Ҳ�������Ƕ��ʹ��������

//���ں�ķֺ����⣬��ò�Ҫ�ں�Ľ�β�ӷֺţ����� 
