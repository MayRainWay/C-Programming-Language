//字符类型
//char是一种整数，也是一种特殊的类型：字符。这是因为：
//·用单引号表示的字符字面量：‘a ’，‘1 ’
//·‘’也是一个字符
//·printf和scanf里用%c来输入和输出字符


//字符的输入输出
//·如何输入‘1 'z这个字符给char c ？
#include <stdio.h>

int main()
{
	char c;
	char d;
	c=1;
	d='1';
	if(c==d){
		printf("相等\n");
	} else{
		printf("不相等\n");
	}
	//输出：不相等
	printf("c=%d\n",c);     //c=1
	printf("d=%d",d);      //d=49
	return 0;
 } 
