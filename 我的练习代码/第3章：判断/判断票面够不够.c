#include <stdio.h>

int main()
{
	//��ʼ��
	int price=0;
	int bill=0;
	
	//�������Ʊ��
	printf("�������");
	scanf("%d",&price);
	printf("������Ʊ�棺"); 
	scanf("%d",&bill);
	
	//��������
	if(bill>=price){
		printf("Ӧ��������%d\n",bill-price);
	}
	
	else{
		printf("���Ǯ������Ӧ��֧��%dԪ��\n",price-bill);
	}
	 
	return 0;
}
