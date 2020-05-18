//指针应用场景二b
//·函数返回运算的状态，结果通过指针返回
//·常用的套路是让函数返回特殊的不属于有效范围内的值来表示出错：
        //·  -1或0（在文件操作会看到大量的例子）
//·但是当任何数值都是有效的可能结果时，就得分开返回了
	//·后续的语言（C++，Java）采用了异常机制来解决这个问题

#include <stdio.h>
/* 
@return 如果除法成功，返回1；否则返回0
*/

int divide(int a,int b,int *result);
 
int main()

{
	int a=5;
	int b=2;
	int c;
	
	if(divide(a,b,&c)!=0){
		printf("%d/%d=%d\n",a,b,c);
	}
	
	return 0;
 } 
 
int divide(int a,int b,int *result)
{
	int ret=1;
	if(b==0){
		ret=0;
	 }
	else{
	 	*result=a/b;
	 	printf("%d/%d=%d\n",a,b,*result);
	 }
	 return ret;
}

//指针常见错误
//·定义了指针变量，还没有指向任何变量，就开始使用指针 
