//强制类型转换
//·要把一个量强制转换成另一个类型（通常是较小的类型）
//需要：
//  （类型）值    
//比如：
//·   （int）10.2
//`     (short)32
//注意这时候的安全性，小的变量不总能表达大的量 
#include <stdio.h>

int main()
{
	(short)32768;
	printf("%d\n",(short)32768);//输出：-32768   因为short最大表达32767，越界了 
	
	printf("%d\n",(char)32768);//输出：0 ，因为char是一个字节，即8比特，也就是8位，
	                 //而32768换算成二进制是15个比特的0，16位是1，而char只能表达8位，所以等于0 
	                 
	int i=32768;
	short s=(short)i;
	printf("i=%d\n",i);
	printf("s=%d\n",s);
	
	double a=10.8;
	int b=(int)a;
	printf("a=%f\n",a);
	printf("b=%d\n",b);
	return 0;
 } 
 
