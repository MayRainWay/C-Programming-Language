//mycpy3
#include <stdio.h>
char *mycpy(char *dst,const char *src)
{
	char *ret=dst;
	while(*src){
		*dst++=*src++;
	
	}
	*dst='\0';
	return  ret;
}
 
int main(int argc,char const *argv[])
{
	char s1[]="abc";
	char s2[]="def";
	mycpy(s1,s2);
	
	printf("#%s#\n",s1);
	printf("#%s#\n",s2);
//	printf("#%s#\n",mycpy(s1,s2));
	printf("#%s#\n",s1);
	return 0;
}
