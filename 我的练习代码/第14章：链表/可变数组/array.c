//�ɱ����� 
#include <stdio.h>
#include "array.h"
#include <stdlib.h> 

const BLOCK_SIZE = 20;

//typedef struct {
//	int *array;
//	int size;	
//}Array;

Array array_create(int init_size)//��������   init_sizeֻ�Ǹ��������֣����Ǻ����� 
{
	Array a;
	a.size = init_size;
	a.array=(int*)malloc(sizeof(int)*a.size);
	//�����ƺ���ʹ��malloc�����㣿 
	return a;
}
				
void array_free(Array *a)//��������ռ�	
{
	free(a->array); 
	a->array = 0;
	a->size = 0;
	//��α��� 
	//��ֹ���free
	//��Ϊfree 0��free NULL����Ч�� 
}
		
int array_size(const Array *a)//������������ռ��ж������鵥Ԫ����ʹ��
{
	return a->size;
	//��װ�� 
	//�����Ժ���չά���� 
}	
		
int* array_at(Array *a,int index)//����������嵥Ԫ   index���������Ŀ¼������ţ� 
{
	if(index >= a->size){
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
		//��������ڵڼ���BLOCK��Ԫ�� 
	}
	return &(a->array[index]); 
	//����ֵ��ָ�������ܷ�������޸ĸ�ֵ�� 
}	

//int array_get(const Array *a,int index)
//{
//	return a->array[index];
//}
//
//void array_set(Array *a,int index,int value)
//{
//	a->array[index] = value;
//}
	
void array_inflate(Array *a,int more _size)//�������С�ɱ�   ���ģ�����
{
	int *p = (int*)malloc(sizeof(int)(a->size + more_size));
	int i;
	for(i=0;i<a->size;i++){
		p[i] = a->array[i];
	}
	free(a->array);//�����ռ� 
	a->array = p;// �ͷ�ԭ����a->array֮��������a���p�����ȫ��ֵ 
	a->size += more_size;//���µ�������a->array�Ĵ�С 
}

int main()
{
	Array a= array_create(100);
	
	printf("%d\n",array_size(&a)) ;//��װ 
//	printf("%d\n",a.size);

	*array_at(&a,0) = 10;
	printf("%d\n",*array_at(&a,0));
	
	int number;
	int cnt;
	while(number != -1){
		scanf("%d\n",&number);
		if(number != -1) {
			*array_at(&a,cnt++) = number;
		}
		
		//scanf("%d\n",array_at(&array,cnt++));
	}
	
	
	array_free(&a);
	//������Ϊa�Ǳ��ر�����ʵ�����Բ����ͷ�
	//��������a���溬��Array�ṹ���*array
	//������Ҫ�����ڴ棡 
	
	return 0;
 } 
