//º¯Êýstrcpy 
#include <stdio.h>
#include <string.h>
 
int main(int argc,char const *argv[])
{
	char s1[]="abc";
	char s2[]="def";
	strcpy(s1,s2);
	
	printf("#%s#\n",s1);
	printf("#%s#\n",s2);
	printf("#%s#\n",strcpy(s1,s2));
	printf("#%s#\n",s1);
	return 0;
}
