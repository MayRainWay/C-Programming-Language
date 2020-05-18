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
	return ret;   //或者直接去掉结尾return，直接在if函数种return a或者b，不过不是单一出口，并不推荐！ 
}
