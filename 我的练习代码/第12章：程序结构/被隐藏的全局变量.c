//�����ص�ȫ�ֱ���
#include <stdio.h>

int f(void);
int gAll=12; 

int main()
{
	printf("in %s gAll = %d\n",__func__,gAll);//���12 
	f();
	printf("agn in %s gAll = %d\n",__func__,gAll);//���12 
	return 0;
 } 
 
 int f(void)
 {
 	int gAll = 1;
 	{
 		int gAll=2;
 		printf("in %s gAll = %d\n",__func__,gAll);//���2 
 		gAll+=2;
 		printf("agn in %s gAll = %d\n",__func__,gAll);// ���4 
	 }
	printf("����%d\n",gAll);//���1 
	
 	return gAll;
 }
