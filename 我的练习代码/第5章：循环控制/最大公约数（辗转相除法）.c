#include <stdio.h>
//相当巧妙的一个算法！！！ 
int main()
{
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	}
	printf("gcd=%d\n",a);
	return 0;
}
