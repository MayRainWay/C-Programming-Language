//��·���Զ�������ö��
//ö��2
#include <stdio.h>

enum COLOR{
	RED,YELLOW,GREEN,NumCOLORS
};

int main()
{
	int color = -1;
	char *ColorNames[NumCOLORS]={"red","yellow","green",};
	char *colorName=NULL;
	
	printf("������ϲ������ɫ�Ĵ��룺");
	scanf("%d",&color);
	
	if(color>=0 && color<NumCOLORS){
		colorName=ColorNames[color];
	}else{
		colorName="unkonwn";
	}
	
	
	
	printf("��ϲ������ɫ�� %s\n",colorName);
	
	return 0;
 }  
