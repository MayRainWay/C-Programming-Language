//如何输入‘1 ’这个字符 
//·scanf("%c",&c);------> 1
//·scanf("%d",&i);----->49

#include <stdio.h>

int main()

/*
{
	char c;
	scanf("%c",&c);
	
	printf("c=%d\n",c);
	printf("c='%c'\n",c);
	
	return 0;
 } 
 */
 {
 	int i;   //老师说scanf不能直接读取char类型的%d，必须用int中转的方式，可我直接测试好像没问题······ 
 	char c;
 	scanf("%d",&i);
 	c=i;
 	printf("c=%d\n",c);
	printf("c='%c'\n",c);
 	return 0;
 }
