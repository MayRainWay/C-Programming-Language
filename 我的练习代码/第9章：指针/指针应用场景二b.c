//ָ��Ӧ�ó�����b
//���������������״̬�����ͨ��ָ�뷵��
//�����õ���·���ú�����������Ĳ�������Ч��Χ�ڵ�ֵ����ʾ����
        //��  -1��0�����ļ������ῴ�����������ӣ�
//�����ǵ��κ���ֵ������Ч�Ŀ��ܽ��ʱ���͵÷ֿ�������
	//�����������ԣ�C++��Java���������쳣����������������

#include <stdio.h>
/* 
@return ��������ɹ�������1�����򷵻�0
*/

int divide(int a,int b,int *result);
 
int main()

{
	int a=5;
	int b=2;
	int c;
	
	if(divide(a,b,&c)!=0){
		printf("%d/%d=%d\n",a,b,c);
	}
	
	return 0;
 } 
 
int divide(int a,int b,int *result)
{
	int ret=1;
	if(b==0){
		ret=0;
	 }
	else{
	 	*result=a/b;
	 	printf("%d/%d=%d\n",a,b,*result);
	 }
	 return ret;
}

//ָ�볣������
//��������ָ���������û��ָ���κα������Ϳ�ʼʹ��ָ�� 
