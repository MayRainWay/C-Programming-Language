#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
	int *array;
	int size;	
} Array;
//定义了名为Array的结构
//应该避免使用 *Array这种形式，因为如果定义本地变量会出现问题！ 

Array array_create(int init_size);				//创建数组 
void array_free(Array *a);						//回收数组空间 
int array_size(const Array *a);					//告诉我们数组空间有多少数组单元可以使用 
int* array_at(Array *a,int index);				//访问数组具体单元 
void array_inflate(Array *a,int more_size);	//让数组大小可变   核心！！！ 

#endif
