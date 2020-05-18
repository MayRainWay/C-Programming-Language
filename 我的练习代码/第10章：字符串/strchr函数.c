//strchrº¯Êý
#include <stdio.h>
#include <string.h>
int main()
{
	char s[]="hello";
	char *p=strchr(s,'l');
	printf("%d\n",strlen(p));
	p=strchr(p+1,'l');
	printf("%s\n",p);
	printf("%d\n",strlen(p));
	
	
	int a[]={0,1,23,4};
	int b[]={5,6,7,8};
	//b[0]=a[0];
	printf("²â%d",b[0]); 
	return 0;
 } 
