#include <stdio.h>
int t(int a[],int x,int y);

int main()
{
	int a[]={88,2,3,4};
	printf("������a�Ĵ�С%d\n",sizeof(a));
	
	int *b = a;
	printf("*b=%d\n",b[3]);
	
	int f=4,g=5;
	t(a,f,g); 
	
	int r=9;
	int *e=&r;
	
	
	printf("e�Ĵ�С%d\n",sizeof(e));
	printf("int *�Ĵ�С%d\n",sizeof(int*));
}

int t(int a[],int x,int y)
{
	printf("������a�Ĵ�С %d\n",sizeof(a));
	printf("������int *%d\n",sizeof(int *));
	printf("x=%d\n",x);
	printf("y=%d\n",y);
} 
