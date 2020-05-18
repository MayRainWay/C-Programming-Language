#include <stdio.h>
#include "student.h"

void read(FILE *fp,int index);

int main(int argc,char const *argv[])
{
	FILE *fp = fopen("student.data","r");
	if(fp){
		fseek(fp,0L,SEEK_END);//使读取位置移动到尾巴上！
		long size = ftell(fp);//ftell得到当前所在位置，这段代码 即表达的文件大小  
		int number = size/sizeof(Student);//得到文件中有几个这样的结构！ 
		int index=0;
		printf("有%d个数据，你要看第几个：",number);
		scanf("%d",&index);//这里很巧妙 
		read(fp,index-1);//同上，涉及数组单元从0开始的问题 
		fclose(fp);
	}
	
	return 0;
	
	
 } 

void read(FILE *fp,int index)
{
	fseek(fp,index*sizeof(Student),SEEK_SET);
	Student stu;//其实看到这里是有问题的
	//因为之前我们储存数据的时候
	//是 Student aStu，和这里是不一样的
	//这说明存储的时候是按结构储存而不是按照类型名称？ 
	if(fread(&stu,sizeof(Student),1,fp) == 1){
		printf("第%d个学生：",index+1);
		printf("\t姓名:%s\n",stu.name);
		printf("\t性别：");
		switch(stu.gender){
			case 0:printf("男\n");break;
			case 1:printf("女\n");break;
			case 2:printf("其他\n");break;
		}
		printf("\t年龄：%d\n",stu.age); 
	}
}
