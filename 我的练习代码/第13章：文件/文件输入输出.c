//�ļ��������
//���ļ��ı�׼���룡 
#include <stdio.h>

int main()
{
	FILE* fp = fopen("test.txt","r");  //���ļ�������fpָ��ָ���ļ� 
	
	if(fp!=NULL){
		int num;
		fscanf(fp,"%d",&num);    //��fpָ����ָ���ļ��е�����ֵд��num�� 
		
		printf("%d\n",num);      //���numд�����ֵ�� 
		fclose(fp);             //�ر��ļ� 
	}else{
		printf("�޷����ļ�\n");
	} 
	
	return 0;
 } 
