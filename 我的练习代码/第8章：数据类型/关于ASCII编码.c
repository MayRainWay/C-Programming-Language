//关于ASCII编码
//·  ‘1 ’的ASCII编码是49，所以当c==49时，它代表‘1 ’

#include <stdio.h>

int main()

{
	if(49=='1'){
		printf("OK\n");
	}
	//输出：OK
	int c=49;
	printf("%i %c\n",c,c); 
	return 0;
 } 
 //注：  关于%i和%d
 
// %i在scanf里会识别八进制、十六进制，并且转换成十进制
//%d在scanf里，无论输入什么，都当十进制处理

//但是在printf中%i和%d没有区别，都会识别出八进制、十六进制，并输出成十进制 
