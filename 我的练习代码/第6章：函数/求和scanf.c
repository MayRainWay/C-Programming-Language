#include <stdio.h>
//求出1到10、20到30和35到45的三个和 
int main()
{
	int i;
	int sum;
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(i=a,sum=0;i<=b;i++){
		sum+=i;
	} 
	printf("%d到%d的和是%d\n",1,10,sum);
	
	
	return 0;
}
