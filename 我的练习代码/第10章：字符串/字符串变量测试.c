//×Ö·û´®±äÁ¿²âÊÔ
#include <stdio.h>

int main()

{
	int i=0;
	char  *s ="Hello World";
	char  *s2="Hello World";
	char s3[]="Hello World";
//	
	printf("&i=%p\n",&i);
	printf("s =%p\n",s);
	printf("s2=%p\n",s2);
	printf("s3=%p\n",s3);
	s3[0]='B';
	printf("Here s3[0]=%c\n",s3[0]);
	return 0;
 } 
