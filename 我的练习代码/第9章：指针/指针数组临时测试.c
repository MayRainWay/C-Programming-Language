#include <stdio.h>
int t(int a[],int x,int y);

int main()
{
	int a[]={88,2,3,4};
	printf("函数外a的大小%d\n",sizeof(a));
	
	int *b = a;
	printf("*b=%d\n",b[3]);
	
	int f=4,g=5;
	t(a,f,g); 
	
	int r=9;
	int *e=&r;
	
	
	printf("e的大小%d\n",sizeof(e));
	printf("int *的大小%d\n",sizeof(int*));
}

int t(int a[],int x,int y)
{
	printf("函数内a的大小 %d\n",sizeof(a));
	printf("函数内int *%d\n",sizeof(int *));
	printf("x=%d\n",x);
	printf("y=%d\n",y);
} 
