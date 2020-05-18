//关于二维数组的遍历 

/*for(i=0;i<3;i++){
	for(j=0;j<5;j++){
		a[i][j]=i*j;
	}
} 

a[i][j]是一个int
表示第i行第i列上的单元 
*/
#include  <stdio.h>

int main()
{
	int a[3][5];
	
	int i,j;
	
	for(i=0;i<3;i++){
	for(j=0;j<5;j++){
		a[i][j]=i*j;
	}
} 

	return 0;
}
