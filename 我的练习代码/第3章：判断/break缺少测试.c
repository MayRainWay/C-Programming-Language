#include <stdio.h>

int main()
{
	int type;
	scanf("%d",&type);
	
	switch(type){
		case 1:
		case 2:
		    printf("���Ϻ�") ;
			break;
		case 3:
		    printf("���Ϻ�"); 
		case 4:
			printf("�ټ�");
			break;
		default:
			printf("����ʲô����");
			break;
	}
	return 0;
}
