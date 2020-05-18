//混合输入 

//·有何不同？ 

//·scanf("%d %c",&i,&c);
//·scanf("%d%c",&i,&c);     会将空格读入当值！

#include <stdio.h>

int main()

{
	int i;
	char c;
	scanf("%d %c",&i,&c);
	printf("i=%d,c=%d,c='%c'\n",i,c,c);
	
	return 0;
	
 } 
