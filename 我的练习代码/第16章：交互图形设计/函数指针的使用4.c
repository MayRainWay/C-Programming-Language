#include <stdio.h>

void f(int i)
{
	printf("in f(),%d\n",i);
}

void g(int i)
{
	printf("in g(),%d\n",i);
}

void h(int i)
{
	printf("in h(),%d\n",i);
}

void k(int i)
{
	printf("in k(),%d\n",i);
}

int main(void)
{
	int i=0;
	
	void(*fa[])(int)= {f,g,h};//我们定义了一个函数指针数组
	
	printf("%d\n",sizeof(fa)/sizeof(fa[0]));
//	printf("%d\n",sizeof(*fa)/sizeof(*fa[0]));  //为什么这样写是错的？ 
	
	scanf("%d",&i); 
	if(i>=0 && i<sizeof(fa)/sizeof(fa[0])){
		(*fa[i])(0);
	//	(fa[i])(0);//为什么这样写是错的？ p和*p的区别? 
	} 
	
	
	return 0;
 } 
