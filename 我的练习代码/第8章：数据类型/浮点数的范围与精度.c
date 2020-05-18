//浮点数的范围与精度

//超过范围的浮点数
//·printf输出inf表示超过范围的浮点数：正负无穷
//·printf输出nan表示不存在的浮点数

#include <stdio.h>

int main()
{
	printf("%f\n",12.0/0.0);   //inf 
	printf("%f\n",-12.0/0.0);  //-inf 
	printf("%f\n",0.0/0.0);   //nan 
	return 0;
 } 
 //输出结果存在不确定性，和编译器也有一定关系 
 
 //printf（“%d\n”,12.0/0）;编译会通不过，0不能做除数 
