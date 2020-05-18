//错误定义的宏
#include <stdio.h>

#define RADTODEG1(x) (x * 57.29578)
#define RADTODEG2(x) (x) * 57.29578

int main()
{
	printf("%f\n",RADTODEG1(5+2));
	printf("%f\n",180/RADTODEG2(1));
	
	return 0;
 } 
 
//带参数宏的原则！
//一切都要括号
//参数出现的每个地方都要括号
//#define RADTODEG(x) ((x)*57.29578) 

//宏也可带多个参数，比如：
//#define MIN(a,b)  ((a)>(b)?(b):(a))
//宏也可以组合嵌套使用其他宏

//关于宏的分号问题，最好不要在宏的结尾加分号！！！ 
