#include <stdio.h>

int main()

{

	int j=9;
	int *p=&j;
	(*p)++;
	int a=88;
	p=&a;
	
  	printf("%d\n",*p);
	printf("%d\n",j);
	

}

//ָ����const

//ָ����const
//����ʾһ���õ���ĳ�������ĵ�ַ��������ָ����������
//��int* const q=&i;   //q��const��������ָ���������� 
//*q=26;           //OK 
// q++            //ERROR

//��ָ��const 
//��ʾ����ͨ�����ָ��ȥ�޸İ���������������ʹ�ñ��������Ϊconst��
//��const int *p=&i��  //int const *p����дҲ����
//*p=26   //ERROR!
//i=26     //OK
//p=&j     //OK
 
