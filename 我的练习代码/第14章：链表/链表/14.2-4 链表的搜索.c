#include "node.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct _node{
//	int value;
//	struct _node *next;
//	//套娃开始，我怎么感觉链表是无穷无尽的？ 
//}Node;

typedef struct _list{
	Node* head;
//	Node* tail;
}List;

Node* add(Node** pHead,int number);

int main(int argc, char *argv[])
{
	//Node*head = NULL;   //让head所指的整个linked-list为空！
	List list;
	list.head = NULL;
	int number;
	do{//直接进入循环体 
		scanf("%d",&number);
		if(number!=-1){
			head = add(&list,number);
		}
	}while(number != -1);
	
	Node *p;
	for(p=list.head;p;p=p->next){//核心 p=p->next 
		printf("%d\t",p->value);//遍历链表 
	}
	printf("\n");
	
	return 0;
}


void add(List* pList,int number)
{
	//add to linked-list    说实话，这里怎么究竟怎么连接起来的，不太明白！ 
	Node *p = (Node*)malloc(sizeof(Node));  
	p->value = number;  //记录单元值 
	p->next = NULL;		// 这相当于每次都让新加入的数组单元成为最后一个！ 
	
	//find the last找到最后一个 
	Node *last = pList->head;      //！！！这里是不是直接把head换成NULL也行？？？好像不行 
	if(last!= NULL){
		while(last->next ！= NULL){
			last = last->next;//连接的核心操作！ 
		}
		//循环结束 last 就等于NULL 
		//attach连接 
		last->next = p;
	}else{
		pList->head = p;
	} 
//	return head;
}
