#include <stdio.h>
#include "student.h"

void read(FILE *fp,int index);

int main(int argc,char const *argv[])
{
	FILE *fp = fopen("student.data","r");
	if(fp){
		fseek(fp,0L,SEEK_END);//ʹ��ȡλ���ƶ���β���ϣ�
		long size = ftell(fp);//ftell�õ���ǰ����λ�ã���δ��� �������ļ���С  
		int number = size/sizeof(Student);//�õ��ļ����м��������Ľṹ�� 
		int index=0;
		printf("��%d�����ݣ���Ҫ���ڼ�����",number);
		scanf("%d",&index);//��������� 
		read(fp,index-1);//ͬ�ϣ��漰���鵥Ԫ��0��ʼ������ 
		fclose(fp);
	}
	
	return 0;
	
	
 } 

void read(FILE *fp,int index)
{
	fseek(fp,index*sizeof(Student),SEEK_SET);
	Student stu;//��ʵ�����������������
	//��Ϊ֮ǰ���Ǵ������ݵ�ʱ��
	//�� Student aStu���������ǲ�һ����
	//��˵���洢��ʱ���ǰ��ṹ��������ǰ����������ƣ� 
	if(fread(&stu,sizeof(Student),1,fp) == 1){
		printf("��%d��ѧ����",index+1);
		printf("\t����:%s\n",stu.name);
		printf("\t�Ա�");
		switch(stu.gender){
			case 0:printf("��\n");break;
			case 1:printf("Ů\n");break;
			case 2:printf("����\n");break;
		}
		printf("\t���䣺%d\n",stu.age); 
	}
}
