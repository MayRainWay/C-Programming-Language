//������롮1 ������ַ� 
//��scanf("%c",&c);------> 1
//��scanf("%d",&i);----->49

#include <stdio.h>

int main()

/*
{
	char c;
	scanf("%c",&c);
	
	printf("c=%d\n",c);
	printf("c='%c'\n",c);
	
	return 0;
 } 
 */
 {
 	int i;   //��ʦ˵scanf����ֱ�Ӷ�ȡchar���͵�%d��������int��ת�ķ�ʽ������ֱ�Ӳ��Ժ���û���⡤���������� 
 	char c;
 	scanf("%d",&i);
 	c=i;
 	printf("c=%d\n",c);
	printf("c='%c'\n",c);
 	return 0;
 }
