#ifndef _STUDENT_H_
#define _STUDENT_H_

const int STR_LEN = 20;
 
typedef struct _student{
	char name[20];  //�����ַ������鼰���� ���ڸ��˱��������⣬�Ҳ����ܲ�ȡ char name[STR_LEN]��д��!!! ��������� 
	int gender;    		//�Ա� 
	int age;			//���� 
}Student;   //������һ����ΪStudent�Ľṹ �� 

#endif
