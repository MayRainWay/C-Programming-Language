//ö��2
#include <stdio.h>

enum COLOR{
	RED,YELLOW,GREEN
};

int main()
{
	int color = -1;
	char *colorName=NULL;
	
	printf("������ϲ������ɫ�Ĵ��룺");
	scanf("%d",&color);
	
	switch(color){
		case RED:
			colorName="red";
			break; 
		case YELLOW:
			colorName="yellow";
			break;
		case GREEN:
			colorName="green";
			break;
		default:
			colorName="unknown";
			break;
	}
	
	printf("��ϲ������ɫ�� %s\n",colorName);
	
	return 0;
 } 
