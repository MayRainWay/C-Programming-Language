//mystrlen
#include <stdio.h>
int mylen(const char *s)
{
	int cnt=0;
	int idx=0;
	while(s[idx]!='\0'){
		idx++;
		cnt++;
	}
	return cnt;
}

int main(int argc,char const *argv[])
{
	char line[]="hello";
	printf("strlen=%li\n",mylen(line));
	printf("sizeof=%lu\n",sizeof(line));
	
	return 0;
 } 
