//指针与数组
//传入函数的数组成了什么？
//·函数参数表中的数组实际上是指针
//	·sizeof（a）==sizeof（int*）
//	·但是可以用数组的运算符[]进行运算

//数组参数
//·以下四种函数原型是等价的 
//·int sum (int *ar,int n) ;
//·int sum (int *,int ) ;
//·int sum (int ar[],int n) ;
//·int sum (int [],int ) ;

#include <stdio.h>

void minmax(int *a,int len,int *min,int *max);

int main(void)



{
	int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min,max;
	printf("main sizeof(a)=%lu\n",sizeof(a));
	printf("main a=%p\n",a);
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("a[0]=%d\n",a[0]);
	printf("min=%d,max=%d\n",min,max);
	int *p=&min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);
	printf("*a=%d\n",*a);
	int *q=a;
	return 0;
 } 
 
void minmax(int *a,int len,int *min,int *max)
{
	int i;
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
	printf("minmax a=%p\n",a);
	a[0]=1000;
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

//数组变量是特殊的指针
//·数组变量本身表达地址，所以
//	·int a[10];int *p=a;//无需用&取地址
//	·但是数组的单元表达的是变量，需要用&取地址
//	·a==&a[0];

//·[]运算符可以对数组做，也可以对指针做
//	·p[0] <==> a[0]

//·*运算符可以对指针做，也可以对数组做
//	·*a=25;

//·数组变量是const的指针，所以不能被赋值
//	·int a[]  <==>  int *const a=... 
