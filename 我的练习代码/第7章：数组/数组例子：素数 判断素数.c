//数组例子：素数
//判断素数
#include <stdio.h> 
#include <math.h>

int isPrime (int x);  //声明函数头 

int main()
{
	int x;
	scanf("%d",&x);
	if(isPrime(x)){
		printf("%d是素数"); 
	} else{
		printf("%d不是素数"); 
	}
	return 0;
}

/* 1 int isPirme(int x)  //从2到x-1是否可以整除 
{
	int ret=1; 
	int i;
	if(x==1)ret=0;
	for(i=2;i<x;i++){  //对于n要循环n-1遍，当n很大时就是n遍！ 
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
}
*/

/* 2 int isPrime(int x)   //去掉偶数后，从3到x-1，每次加2 
{
   int ret=1;
   int i;
   if(x===1 || (x%2==0 && x!=2)) ret=0;
   for(i=3;i<x;i+=2){     //如果x是偶数，立刻； 
   	if(x%i==0){          //否则要循环（n-3）/2+1 遍 
   		ret=0;           // 当n很大时就是n/2遍 
   		break;
	   }
   }
   return ret;
 } 
 */
 
 int isPrime (int x)
 {
 	int ret =1;
 	int i;
 	if(x==1 || (x%2 && x!=2))  ret =0;
 	for(i=3;i<sqrt(x);i+=2){    //只需要循环sqrt（x）遍，至于解释，请去看高数 
 			ret=0;             //该函数使用必须在开头加上 #include <math.h> 否则会warning 
 		if(x%i==0){
 			ret=0; 
 			break;
		 }
	 }
	 return ret;
  } 
