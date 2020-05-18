#include "node.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct _node{
//	int value;
//	struct _node *next;
//	//���޿�ʼ������ô�о������������޾��ģ� 
//}Node;

typedef struct _list{
	Node* head;
//	Node* tail;
}List;

Node* add(Node** pHead,int number);

int main(int argc, char *argv[])
{
	//Node*head = NULL;   //��head��ָ������linked-listΪ�գ�
	List list;
	list.head = NULL;
	int number;
	do{//ֱ�ӽ���ѭ���� 
		scanf("%d",&number);
		if(number!=-1){
			head = add(&list,number);
		}
	}while(number != -1);
	
	Node *p;
	for(p=list.head;p;p=p->next){//���� p=p->next 
		printf("%d\t",p->value);//�������� 
	}
	printf("\n");
	
	return 0;
}


void add(List* pList,int number)
{
	//add to linked-list    ˵ʵ����������ô������ô���������ģ���̫���ף� 
	Node *p = (Node*)malloc(sizeof(Node));  
	p->value = number;  //��¼��Ԫֵ 
	p->next = NULL;		// ���൱��ÿ�ζ����¼�������鵥Ԫ��Ϊ���һ���� 
	
	//find the last�ҵ����һ�� 
	Node *last = pList->head;      //�����������ǲ���ֱ�Ӱ�head����NULLҲ�У����������� 
	if(last!= NULL){
		while(last->next ��= NULL){
			last = last->next;//���ӵĺ��Ĳ����� 
		}
		//ѭ������ last �͵���NULL 
		//attach���� 
		last->next = p;
	}else{
		pList->head = p;
	} 
//	return head;
}
