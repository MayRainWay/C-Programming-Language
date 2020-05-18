//自定义数据类型（typedef）
//  typedef 

#include <stdio.h>

void f();
typedef int len;
int main()
{
	
	len a=10;
	printf("%d\n",a);
	f();
	int b=90;
	return 0;
}

void f(){
	len a=99;
	printf("%d\n",a);
}
