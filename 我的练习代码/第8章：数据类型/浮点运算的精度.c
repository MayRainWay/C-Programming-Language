//��������ľ��� 
#include <stdio.h>

int main()
{
	float a,b,c;
	
	a=1.345f;
	b=1.123f;
	c=a+b;
	if(c==2.468){
		printf("���");
	}else{
		printf("����ȣ�c=%.10f,��%f\n",c,c);
	} 
	//����������ȣ�c=2.4679999352����2.468000 
	return 0;
}

//ΪʲôС������Ҫ��f��
//��ΪС�������������double����float
//float��Ҫ��f��F��׺��������ݣ�
 
