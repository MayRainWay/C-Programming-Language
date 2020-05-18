//可变数组 
#include <stdio.h>
#include "array.h"
#include <stdlib.h> 

const BLOCK_SIZE = 20;

//typedef struct {
//	int *array;
//	int size;	
//}Array;

Array array_create(int init_size)//创建数组   init_size只是个变量名字，不是函数！ 
{
	Array a;
	a.size = init_size;
	a.array=(int*)malloc(sizeof(int)*a.size);
	//这里似乎是使用malloc更方便？ 
	return a;
}
				
void array_free(Array *a)//回收数组空间	
{
	free(a->array); 
	a->array = 0;
	a->size = 0;
	//多次保障 
	//防止多次free
	//因为free 0和free NULL是无效的 
}
		
int array_size(const Array *a)//告诉我们数组空间有多少数组单元可以使用
{
	return a->size;
	//封装！ 
	//方便以后拓展维护！ 
}	
		
int* array_at(Array *a,int index)//访问数组具体单元   index是数组具体目录，即编号！ 
{
	if(index >= a->size){
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
		//计算具体在第几个BLOCK单元上 
	}
	return &(a->array[index]); 
	//返回值是指针这样能方便后续修改赋值！ 
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
	
void array_inflate(Array *a,int more _size)//让数组大小可变   核心！！！
{
	int *p = (int*)malloc(sizeof(int)(a->size + more_size));
	int i;
	for(i=0;i<a->size;i++){
		p[i] = a->array[i];
	}
	free(a->array);//返还空间 
	a->array = p;// 释放原来的a->array之后重新让a获得p数组的全部值 
	a->size += more_size;//重新调整数组a->array的大小 
}

int main()
{
	Array a= array_create(100);
	
	printf("%d\n",array_size(&a)) ;//封装 
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
	//这里因为a是本地变量其实本可以不用释放
	//但是由于a里面含有Array结构里的*array
	//所以需要回收内存！ 
	
	return 0;
 } 
