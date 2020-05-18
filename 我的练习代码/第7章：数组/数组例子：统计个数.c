#include <stdio.h>

/*
写一个程序，输入 数量不确定 的[0，9]范围内的整数，
统计每一种数字出现的次数，
输入-1表示结束
*/

int main()
{
	const int number=10; 
	int count[number];    
	/*定义数组恒定为10； 相当于目前的数组只能存10个数字？？？
	是的，但是这里数组并不用来储存x的输入值，所以不会影响后续的对count[x]赋值工作，
	所以，理论上，可以输入很多数！*/ 
	int x;
	int i;
	
	for(i=0;i<number;i++){
		count[i]=0;   //初始化数组，对数组进行了赋值 count 0=0;count 1=0······count 9=0; 
	}
	
	scanf("%d",&x);    //读入x值 
	while(x!=-1){      //x≠-1时进行循环，也就是说，输入-1表示输入结束 //也就是说这里可以直接用do循环？？？不能！ 
		if(0<x<=9){
			count[x]++;  //举例说明：如果输入一次2，那么count[2]=1，如果再输入一次2，那么count[2]=2，利用此法计数 
		}
	    scanf("%d",&x);
	}
	
	for(i=0;i<number;i++){      //利用i值将数组全部导出一遍，即 遍历数组 ！ 
		printf("%d:%d\n",i,count[i]);
	}
	return 0;
}
