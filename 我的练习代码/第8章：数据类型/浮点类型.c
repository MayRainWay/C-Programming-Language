//浮点类型

//浮点类型分为两种，float和double，float字长是32，有效数字是7位，double字长是64，有效数字是15位
//关于float和double的范围无需特意去记，double比float大！

//inf：无穷大
//nan：不是一个有效数字

//浮点的输入输出

//            scanf         printf
//float       %f            %f，%e
//double      %lf           %f，%e

//   %e是科学计数法

//关于 输出精度
//在%和f之间加上.n可以指定输出小数点后几位，这样的输出是做4舍5入的，
//for example：
#include <stdio.h>

int main()
{
	printf("%.3f\n",-0.0049);   //0.005
	printf("%.30f\n",-0.0049);  //0.0048999999999999999841792318991(具体数值和编译器也有关)   因为计算机内部数字不是连续的，有些无法表达 
	printf("%.3f\n",-0.00049);  //-0.000
	return 0 ;
} 

