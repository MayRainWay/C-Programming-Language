//Ã¶¾Ù3
#include <stdio.h>

enum color{
	red,yellow,green,
};

void f(enum color t){
	printf("%d\n",t);
}

int main()
{
	enum color t=red;
	scanf("%d",&t);
	f(t);
		
	return 0;
 } 
