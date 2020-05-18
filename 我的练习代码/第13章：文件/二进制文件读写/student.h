#ifndef _STUDENT_H_
#define _STUDENT_H_

const int STR_LEN = 20;
 
typedef struct _student{
	char name[20];  //定义字符串数组及长度 由于个人编译器问题，我并不能采取 char name[STR_LEN]的写法!!! 编译过不了 
	int gender;    		//性别 
	int age;			//年龄 
}Student;   //定义了一个名为Student的结构 ！ 

#endif
