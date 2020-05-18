//浮点运算的精度 
#include <stdio.h>

int main()
{
	float a,b,c;
	
	a=1.345f;
	b=1.123f;
	c=a+b;
	if(c==2.468){
		printf("相等");
	}else{
		printf("不相等！c=%.10f,或%f\n",c,c);
	} 
	//结果输出不相等！c=2.4679999352，或2.468000 
	return 0;
}

//为什么小数后面要加f？
//因为小数点的字面量是double而非float
//float需要用f或F后缀来表明身份！
 
