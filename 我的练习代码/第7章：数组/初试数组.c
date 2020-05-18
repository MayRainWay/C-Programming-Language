#include <stdio.h>

int main()
{
	int x;
	double sum=0;
	int cnt=0;
	scanf("%d",&x);
	
	while (x!=1){
		
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	if(cnt>0){
		printf("%f\n",sum/cnt);
	}
	return 0;
 } 
