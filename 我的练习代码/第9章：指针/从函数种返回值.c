#include <stdio.h>
int max(int a,int b);

int main()
{
	int a,b,c;
	a=5;
	b=6;
	
	c=max(10,12) ;
	c=max(a,b);
	c=max(c,23);
	c=max(max(a,c),5);
	printf("%d\n",max(a,b));
	return 0;
 } 
 
 int max(int a,int b)
{
	int ret;
	if(a>b){
		ret=a;   
	}else{
		ret=b;
	}
	return ret;   //����ֱ��ȥ����βreturn��ֱ����if������return a����b���������ǵ�һ���ڣ������Ƽ��� 
}
