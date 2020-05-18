#include <stdio.h>

int main()

{

	int j=9;
	int *p=&j;
	(*p)++;
	int a=88;
	p=&a;
	
  	printf("%d\n",*p);
	printf("%d\n",j);
	

}

//指针与const

//指针是const
//·表示一旦得到了某个变量的地址，不能再指向其他变量
//·int* const q=&i;   //q是const，不能再指向其他变量 
//*q=26;           //OK 
// q++            //ERROR

//所指是const 
//表示不能通过这个指针去修改按个变量（并不能使得变量自身成为const）
//·const int *p=&i；  //int const *p这样写也可以
//*p=26   //ERROR!
//i=26     //OK
//p=&j     //OK
 
