#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int max=0;
	
	if(a>b)
	  if(a>c)
	    max=a;
	  else
	    max=c;
	else if(b>c)
	    max=b;
    else 
        max=c;
        
    printf("the max is %d",max);
    
//缺少大括号，精简的算法并不利于别人读懂    
	
	return 0;
 } 
