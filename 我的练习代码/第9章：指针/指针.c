//指针
//变量的值是实际存在的地址，普通变量的值是实际的值 
#include <stdio.h>

void f(int *p);
//在被调用的时候得到了某个变量的地址：
//在函数里面可以通过这个指针来访问外面这个i
void g(int k); 

int main()
{
	int i=6;
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	printf("i=%d\n",i);
	return 0;
 }  
 
 void f(int *p)
 {
 	printf(" p=%p\n",p);
 	printf(" *p=%d\n",*p);
 	*p=26;
 	
 }
 
 void g(int k)
 {
 	printf("k=%d\n",k);
 }
 
 
 //指针的运算符 &* 互相反作用 
