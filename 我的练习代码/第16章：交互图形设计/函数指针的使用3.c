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

int main(void)
{
	int i=0;
	scanf("%d",&i);
	
	switch(i)
	{
		case 0:f(0),break;
		case 1:g(0),break;
		case 2:h(0),break;
	}
	
//	if(i==0){
//		f(0);
//	}else if(i==1){
//		g(0);
//	}
	
	return 0;
 } 
