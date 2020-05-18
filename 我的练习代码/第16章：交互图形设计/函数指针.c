#include <stdio.h>

void f()
{
	printf("in f()\n");
}

int main(void)
{
	int i=0;
	int *p = &i;
	*p=20;
	int a[]={1,2};
	void (*pf)(void)=f;
	f();
	(*pf)();
	printf("%p\n",main);
	printf("%p\n",pf);
	printf("%p\n",f);
	printf("%p\n",a);
	
	return 0;
 } 
