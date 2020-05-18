#include <stdio.h>

int main()
{
	int type;
	scanf("%d",&type);
	
	if(type==1)		
	   printf("你好");
	else if(type==2)
	   printf("早上好");    
	else if(type==3)
	   printf("晚上好"); 
	else if(type==4)
	   printf("再您妈的见！");
	else 
	   printf("啊？");
	   
	return 0;
 } 
