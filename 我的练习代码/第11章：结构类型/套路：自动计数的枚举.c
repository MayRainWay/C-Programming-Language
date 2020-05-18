//套路：自动计数的枚举
//枚举2
#include <stdio.h>

enum COLOR{
	RED,YELLOW,GREEN,NumCOLORS
};

int main()
{
	int color = -1;
	char *ColorNames[NumCOLORS]={"red","yellow","green",};
	char *colorName=NULL;
	
	printf("输入你喜欢的颜色的代码：");
	scanf("%d",&color);
	
	if(color>=0 && color<NumCOLORS){
		colorName=ColorNames[color];
	}else{
		colorName="unkonwn";
	}
	
	
	
	printf("你喜欢的颜色是 %s\n",colorName);
	
	return 0;
 }  
