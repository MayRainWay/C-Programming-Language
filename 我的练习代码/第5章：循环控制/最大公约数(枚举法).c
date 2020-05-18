#include <stdio.h>

int main()
{
	int a,b;
	int min;
	
	scanf("%d %d",&a,&b);
	if(a>b){
		min=a;
	}else{
		min=b;
	}          //筛选出a和b最小的一个 
	
	int ret=0;
	int i;
	for(i=1;i<min;i++){    //i大于等于min循环结束，得出最大公约数 
	   if(a%i==0){         //a的公约数 
	   	if(b%i==0){        //b的公约数 
	   		ret=i;         //满足ab的公约数 
		   }
	   } 
	} 
	printf("%d和%d的最大公约数是%d.\n",a,b,ret);
	return 0;
 } 
