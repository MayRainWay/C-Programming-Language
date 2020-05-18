//mycpy1
#include <stdio.h>
char *mycpy(char *dst,const char *src)
{
	int idx=0;
	while(src[idx]!='\0'){
		dst[idx]=src[idx];
		idx++;
	}
	dst[idx]='\0';
	return dst;
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
