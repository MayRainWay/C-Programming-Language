#include <stdio.h>
//求出1到10、20到30和35到45的三个和 
int main()
{
	int i;
	int sum;
	
	for(i=1,sum=0;i<=10;i++){
		sum+=i;
	} 
	printf("%d到%d的和是%d\n",1,10,sum);
	
	for(i=20,sum=0;i<=30;i++){
		sum+=i;
	} 
	printf("%d到%d的和是%d\n",20,30,sum);
	
	for(i=35,sum=0;i<=45;i++){
		sum+=i;
	} 
	printf("%d到%d的和是%d\n",35,45,sum);
	
	
	//三段几乎一模一样的代码，“代码复制”是程序质量不良的表现 
	return 0;
}
