#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int mask=1;   //mask类似与cnt计次 
	int t=x;      //巧妙引入中间变量t来解决问题，避免了x值的变化 
	while(t>9){
		t/=10;    //对t进行分解，t=t/10，每次去掉最低位次 
		mask*=10; //mask=mask*10 
	}
	printf("x=%d,mask=%d\n",x,mask);  //输出x和mask的值 
	
	do{
		int d=x/mask;    //对x从最高位进行分解 ，d就等于x目前的最高位数 
		printf("%d",d);   //每轮输出d值变化 
	    if(mask>9){
	    	printf(" ");//保证每轮输出空格的同时且最后一轮不输出空格 
		}
		x%=mask;        //x=x除mask取余，相当于去掉 x最高位数 
		mask/=10;       //mask=mask/10 
	}while(mask>0);
	printf("\n");       //其实该算法仍无法面对诸如007的情况 
	return 0;
 } 
