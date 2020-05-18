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
	
	void(*fa[])(int)= {f,g,h};//���Ƕ�����һ������ָ������
	
	printf("%d\n",sizeof(fa)/sizeof(fa[0]));
//	printf("%d\n",sizeof(*fa)/sizeof(*fa[0]));  //Ϊʲô����д�Ǵ�ģ� 
	
	scanf("%d",&i); 
	if(i>=0 && i<sizeof(fa)/sizeof(fa[0])){
		(*fa[i])(0);
	//	(fa[i])(0);//Ϊʲô����д�Ǵ�ģ� p��*p������? 
	} 
	
	
	return 0;
 } 
