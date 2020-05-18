//÷∏’Î‘ÀÀ„
#include <stdio.h>

int main()

{
	int ac[10]={23,11,2,3,4,55,6,7,8,9,};
	int *p=ac;
	printf("p  =%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*(p+1)=%d\n",*(p+1));
	
	
	
	int ai[]={0,11,2,3,4,5,6,7,8,9,};
	int *q=ai;
	printf("q  =%p\n",q);
	printf("q+1=%p\n",q+1);
	printf("*(q+1)=%d\n",*(q+1));
	
	
	printf("q  =%d\n",*q);
	q=p;
	printf("q  =%d\n",*q);
	return 0;
 } 
