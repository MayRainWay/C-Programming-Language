//ö��1
#include <stdio.h>

const int red = 0;
const int yellow = 1;
const int green = 2;

int main()
{
	int color = -1;
	char *colorName=NULL;
	
	printf("������ϲ������ɫ�Ĵ��룺");
	scanf("%d",&color);
	
	switch(color){
		case 0:
			colorName="red";
			break; 
		case 1:
			colorName="yellow";
			break;
		case 2:
			colorName="green";
			break;
		default:
			colorName="unknown";
			break;
	}
	
	printf("��ϲ������ɫ�� %s\n",colorName);
	
	return 0;
 } 
