//宏定义4  && 预定义的宏 
#include <stdio.h>

#define PI 3.14159
#define PI2 2*PI         //PI*2
#define FORMAT "%f\n"
#define PRT printf("%f\n",PI); \
			printf("%f\n",PI2)

int main()
{
	printf(FORMAT,PI2*3.0);
	PRT;
	
	printf("%s#####%d\n",__FILE__,__LINE__); 
	printf("%s*****%s\n",__DATE__,__TIME__); 
	
	return 0;
 }   
