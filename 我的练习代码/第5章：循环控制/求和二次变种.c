#include <stdio.h>

int main()
{
	int n;
	int i;
	double sum=0.0;
	double sign=1.0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign/i;
		sign=-sign;
	}
	printf("f(%d)=%f\n",n,sum); 
	return 0;
 } 
