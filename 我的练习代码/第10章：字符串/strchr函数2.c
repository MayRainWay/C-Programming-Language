//strchrº¯Êý2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[]="hello";
	char *p=strchr(s,'l');
//	printf("%d\n",strlen(p));

	char*t=(char*)malloc(strlen(p)+1);

	strcpy(t,p);
	printf("%s\n",t);
	
	free(t);
	return 0;
 } 
