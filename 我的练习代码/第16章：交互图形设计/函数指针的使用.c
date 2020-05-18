#include <stdio.h>

void f(int i)
{
	printf("in f(),%d\n",i);
}

int main(void)
{
	int i=0;
	int *p = &i;
	*p=20;
	int a[]={1,2};
	void (*pf)(int)=f;
	f(20);
	(*pf)(10);
	printf("%p\n",main);
	printf("%p\n",pf);
	printf("%p\n",a);
	
	return 0;
 } 
