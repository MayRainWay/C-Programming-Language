//��һ������������У�����ҳ�ĳ�������Ƿ���ڣ� 
#include <stdio.h>

/*
�ҳ�key������a�е�λ��
         key:       ҪѰ�ҵ�����
	     a  :      ҪѰ�ҵ�����
	length  :     ����a�ĳ��� 
	         ����ҵ�����������a�е�λ�ã�����Ҳ����򷵻�-1�� 
*/ 

int search(int key,int a[],int length);    
 
int main(void)
{
	int a[]= {2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	int loc;
	printf("������һ������");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d��%d��λ����\n",x,loc);
	}else{
		printf("%d������\n",x);
	}
	return 0;
 } 
 
 int search(int key,int a[],int length)
 {
 	int ret=-1;      //����ֵΪ-1˵��û���ҵ���keyһ����ֵ 
 	int i;
 	for(i=0;i<length;i++){   //���������ҳ���keyһ����ֵ 
 		if(a[i]==key){
 			ret =i;
 			break;
		 }
	 }
 }
