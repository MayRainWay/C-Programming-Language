#include <stdio.h>

int main()
{
	int n;
	int i;
	double sum=0.0;
	
	scanf("%d",&n);  //ÊäÈënµÄÖµ 
	for(i=1;i<=n;i++){
		sum+=1.0/i;
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}
