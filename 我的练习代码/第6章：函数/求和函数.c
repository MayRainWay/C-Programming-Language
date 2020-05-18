#include <stdio.h>
//求出1到10、20到30和35到45的三个和   函数版本 
void sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin,sum=0;i<=end;i++){
		sum+=i;
	} 
	printf("%d到%d的和是%d\n",begin,end,sum);
	
}

int main(){
	sum(1,10);
	sum(20,30);
	sum(35,45);
	return 0;
	
}
