#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	int max=0;
	
	if(a>b){
		if(a>c){
			max=a;
		}else{
		max=c;
		}
	}else{
		if(b>c){
			max=b;
		}else{
			max=c;
		}
	}
	printf("The max is %d\n",max);
	return 0;
}
