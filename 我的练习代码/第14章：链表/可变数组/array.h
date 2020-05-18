#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
	int *array;
	int size;	
} Array;
//��������ΪArray�Ľṹ
//Ӧ�ñ���ʹ�� *Array������ʽ����Ϊ������屾�ر�����������⣡ 

Array array_create(int init_size);				//�������� 
void array_free(Array *a);						//��������ռ� 
int array_size(const Array *a);					//������������ռ��ж������鵥Ԫ����ʹ�� 
int* array_at(Array *a,int index);				//����������嵥Ԫ 
void array_inflate(Array *a,int more_size);	//�������С�ɱ�   ���ģ����� 

#endif
