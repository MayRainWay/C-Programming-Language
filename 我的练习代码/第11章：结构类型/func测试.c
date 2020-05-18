#include <stdio.h>
#include <string.h>
#define TOUPPER(c) ('a'<=(c) && (c)<='z'?(c)-'a'+'A':(c))
int f();


int main()
{
	char s[4];
	strcpy(s, "abcd");
	int i = 0;
//	printf("%c\n",s[++i]);
//	putchar(TOUPPER(s[++i]));
	putchar(s[++i]);
	
	
//	printf("%s\n",__func__);
	
//	f();
	return 0;
 } 
 
int f()
{
	//printf("intº¯Êý±ØÐëÓÐreturnÂð£¿"); 
}
