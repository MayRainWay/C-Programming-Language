#include <stdio.h>
#include "student.h"

void getList(Student aStu[],int number);
int save(Student aStu[],int number);

int main(int argc,char const *argv[])
{
	int number = 0;
	printf("输入学生数量：");
	scanf("%d",&number);
	Student aStu[number];  //这里是创建一个结构数组！ 
	
	getList(aStu,number); //调用getlist函数！
	 
	if(save(aStu,number)){
		printf("保存成功\n");
	}else{
		printf("保存失败\n");
	}
	
	return 0;
	
	
 } 
 
 void getList(Student aStu[],int number)
 {
 	char format[STR_LEN];//为什么不直接写成strlen？因为strlen是个函数！！！
	//创建了一个名为format的字符数组 
	sprintf(format,"%%%ds",STR_LEN-1);  // 这样format就相当于 “%19s ” 
	
	 int i;
	 for(i=0;i<number;i++){
	 	printf("第%d个学生：\n",i+1);//确保输出第一个学生字样 
	 	
	 	printf("\t姓名：");
	 	scanf(format,aStu[i].name);
//相当于scanf（“%19s”，aStu[i].name）; 
//scanf("%s",aStu[i].name)
//就是读入字符串啦！ 所以这里也可以用其他形式？没要用19？ 
	 	
	 	printf("\t性别(0-男，1-女，2-其他):");
	 	scanf("%d",&aStu[i].gender);
	 	
	 	printf("\t年龄：");
		 scanf("%d",&aStu[i].age); 
		  
	 	
	 } 
 }
 
 int save(Student aStu[],int number)
 {
 	int ret = 1;
 	FILE *fp = fopen("student.data","w");   //改成txt类型？打开是乱码！ 
 	if(fp){
 		ret = fwrite(aStu,sizeof(Student),number,fp);
 		fclose(fp);
 		
 		return ret == number;//?????感觉有些复杂 
	 }
 }
