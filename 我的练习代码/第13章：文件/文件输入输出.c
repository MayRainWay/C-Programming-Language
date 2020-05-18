//文件输入输出
//打开文件的标准代码！ 
#include <stdio.h>

int main()
{
	FILE* fp = fopen("test.txt","r");  //打开文件，定义fp指针指向文件 
	
	if(fp!=NULL){
		int num;
		fscanf(fp,"%d",&num);    //从fp指针所指的文件中调出数值写入num！ 
		
		printf("%d\n",num);      //输出num写入的数值！ 
		fclose(fp);             //关闭文件 
	}else{
		printf("无法打开文件\n");
	} 
	
	return 0;
 } 
