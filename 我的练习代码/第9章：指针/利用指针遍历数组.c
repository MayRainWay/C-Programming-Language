//利用指针遍历数组

#include <stdio.h>

int main()

{
	char ac[]={0,1,2,3,4,5,6,7,8,9,-1,};
	char *p=&ac[0];
	int i=0;

/*	for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++){
		printf("%d\n",ac[i]);
		
	}
	
	for(p=ac;*p!=-1;p++){
		printf("%d\n",*p);
	}
	
	for(p=ac;*p!=-1;){
		printf("%d\n",*p++);
	}
	
	while(*p!=-1){
		printf("%d\n",*p++);
	
	
	}
	*/	
	while(ac[i]!=-1){
		printf("%d\n",ac[i++]);
	
		
	}


	return 0;
 } 
