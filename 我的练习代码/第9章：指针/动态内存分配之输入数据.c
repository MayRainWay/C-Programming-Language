//动态内存分配之输入数据
#include <stdio.h>
#include <stdlib.h>
 
int main()

{
	int number;
	int *a;
	int i;
	printf("输入数量：");
	scanf("%d",&number);
	a=(int*)malloc(number*sizeof(int));
	for(i=0;i<number;i++){
		scanf("%d",&a[i]);
	}

	for(i=number-1;i>=0;i--){
		printf("%d",a[i]);
	}
	
	free(a);
	
	return 0;
 } 
