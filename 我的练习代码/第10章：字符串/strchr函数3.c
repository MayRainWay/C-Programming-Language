//strchrº¯Êý3
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[]="hello";
	char *p=strchr(s,'l');
//	
	char c=*p;
	*p='\0';
	printf("1##%d\n",strlen(s));
	char*t=(char*)malloc(strlen(s)+1);

	strcpy(t,s);
	printf("%s\n",t);
	*p=c;
	printf("2##%d\n",strlen(s));
	free(t);
	return 0;
 } 
