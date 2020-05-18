#include <stdio.h>

int main()
{
	int x;
	int n=1;
	scanf("%d",&x);
	if(99>x>9){
		n=2;
	}if(999>x>99){
		n=3;
	}
	printf("%d",n);
	return 0;
}
