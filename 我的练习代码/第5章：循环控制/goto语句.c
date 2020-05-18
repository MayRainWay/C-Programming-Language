#include <stdio.h>

int main()
{
	int x;              //x单位是元 
	int one,two,five;   //one代表一角硬币个数 ，two代表两角个数，five代表5角个数
	scanf("%d",&x);
	
	for(one=1;one<x*10;one++){
		for(two=1;two<x*10/2;two++){
			for(five=1;five<x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",one,two,five,x);
					goto out;
				}
			}
		}
	} 
	out:
	return 0;
 } 
