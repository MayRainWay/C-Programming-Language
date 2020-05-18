#include <stdio.h>
//该程序有着明显的安全隐患 ，当键入数字超过100时，，超过了number的上限！
//运气好，无影响，运气不好，出bug或者程序崩溃 ！ 
int main()
{
	int x;         
	double sum=0;     //sum是输入数字的总和 ； 
	int cnt=0;        //cnt变量计次； 
	int number[100];  //定义数组，这里表示有一百个数组单元，数组比较特别，其第一位单元从0开始，所以100个单元=0~99
	scanf("%d",&x); 
	
	while(x!=1){   //x≠-1时进行循环，也就是说，输入-1表示输入结束 
		number[cnt]=x;   //对数组进行赋值；
		
		/*调试代码
		{
		   int i;
		   printf（"%d\t",cnt）;
		   for(i=0;i<=cnt;i++){
		       printf("%d\t",number[i]);
		   }
		   printf("\n"); 
	    }
		*/
		
		sum+=x;
		cnt++; 
		scanf("%d",&x);
	} 
	if(cnt>0){
		printf("%f\n",sum/cnt);
		int i;
		for(i=0;i<cnt;i++){   //利用i值进行number数组数值的调出！ 
			if(number[i]>sum/cnt){
				printf("%d\n",number[i]);   //输出大于平均数的数组单元 
			}
		}
	}
	return 0;
 } 
