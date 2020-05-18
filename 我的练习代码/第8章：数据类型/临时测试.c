#include <stdio.h>
//取地址运算
//运算符 &
//scanf("%d",&i)里的&
//获得变量的地址，它的操作数必须是变量

//地址的大小是否与int相同取决于编译器
//int i; printf("%p",&i); 
int main()
{
	int i=0;
	int p;
	p=(int)&i; 
	
	printf("0x%x\n",p);
	printf("%p\n",&i);
	
	printf("%lu\n",sizeof(int));
	printf("%lu\n",sizeof(&i));
	return 0;
}
