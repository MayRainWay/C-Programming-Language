//在一组给定的数据中，如何找出某个数据是否存在？ 
#include <stdio.h>

/*
找出key在数组a中的位置
         key:       要寻找的数字
	     a  :      要寻找的数组
	length  :     数组a的长度 
	         如果找到，返回其在a中的位置；如果找不到则返回-1； 
*/ 

int search(int key,int a[],int length);    
 
int main(void)
{
	int a[]= {2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	int loc;
	printf("请输入一个数字");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d在%d个位置上\n",x,loc);
	}else{
		printf("%d不存在\n",x);
	}
	return 0;
 } 
 
 int search(int key,int a[],int length)
 {
 	int ret=-1;      //返回值为-1说明没有找到和key一样的值 
 	int i;
 	for(i=0;i<length;i++){   //遍历数组找出和key一样的值 
 		if(a[i]==key){
 			ret =i;
 			break;
		 }
	 }
 }
