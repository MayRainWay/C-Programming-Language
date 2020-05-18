#include <stdio.h>
//通过测试得知两种表达方式都一致！ 
int main()
{
	int x=4;
	if(0<x<=9){
			printf("%d\n",x);
		}
	
	int y=6;	
	if(y>0 && y<=9){
			printf("%d\n",y);
		}	
	return 0;
 } 
