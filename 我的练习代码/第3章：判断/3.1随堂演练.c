#include <stdio.h>

int main()
{
    const int PASS=60;
    int score;
    
    printf("请输入成绩；");
    scanf("%d",&score);
	
	printf("你输入的成绩是%d.\n",score); 

    if(score<PASS)
	   printf("很遗憾，这个成绩没有及格。");
	else
	   {
	   printf("祝贺你，这个成绩及格了。");
	   
	   printf("再见\n"); 
	   }
	return 0;
}
