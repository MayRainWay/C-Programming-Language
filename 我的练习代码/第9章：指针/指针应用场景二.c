//指针应用场景二 
//·函数传入多个返回值，某些值就只能通过指针返回
//·传入的参数实际上是需要保存带回的结果的变量

#include <stdio.h>

void minmax(int a[],int len,int *min,int *max);

int main(void)



{
	int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d\n",min,max);
	
	return 0;
 } 
 
void minmax(int a[],int len,int *min,int *max)
{
	int i;
	*min=*max=a[0];  //初始化赋值，不然min和max初始值等于0， 而数组中没有0则容易出错 
	for(i=1;i<len;i++){
		if(*min>a[i]){
			*min=a[i];
		}
		if(*max<a[i]){
			*max=a[i];
		}
	}
}
