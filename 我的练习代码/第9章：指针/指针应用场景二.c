//ָ��Ӧ�ó����� 
//����������������ֵ��ĳЩֵ��ֻ��ͨ��ָ�뷵��
//������Ĳ���ʵ��������Ҫ������صĽ���ı���

#include <stdio.h>

void minmax(int a[],int len,int *min,int *max);

int main(void)



{
	int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d\n",min,max);
	
	return 0;
 } 
 
void minmax(int a[],int len,int *min,int *max)
{
	int i;
	*min=*max=a[0];  //��ʼ����ֵ����Ȼmin��max��ʼֵ����0�� ��������û��0�����׳��� 
	for(i=1;i<len;i++){
		if(*min>a[i]){
			*min=a[i];
		}
		if(*max<a[i]){
			*max=a[i];
		}
	}
}
