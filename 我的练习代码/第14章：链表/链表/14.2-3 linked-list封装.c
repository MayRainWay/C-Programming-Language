#include "node.h"
#include <stdio.h>
#include <stdlib.h>

//typedef struct _node{
//	int value;
//	struct _node *next;
//	//���޿�ʼ������ô�о������������޾��ģ� 
//}Node;

Node* add(Node** pHead,int number);

int main(int argc, char *argv[])
{
	Node*head = NULL;   //��head��ָ������linked-listΪ�գ�
	 
	int number;
	do{//ֱ�ӽ���ѭ���� 
		scanf("%d",&number);
		if(number!=-1){
			head = add(&head,number);
		}
	}while(number != -1);
	
	return 0;
}


Node* add(Node** pHead,int number)
{
	//add to linked-list    ˵ʵ����������ô������ô���������ģ���̫���ף� 
	Node *p = (Node*)malloc(sizeof(Node));  
	p->value = number;  //��¼��Ԫֵ 
	p->next = NULL;		// ���൱��ÿ�ζ����¼�������鵥Ԫ��Ϊ���һ���� 
	
	//find the last�ҵ����һ�� 
	Node *last = *pHead;      //�����������ǲ���ֱ�Ӱ�head����NULLҲ�У����������� 
	if(last!= NULL){
		while(last->next ��= NULL){
			last = last->next;//���ӵĺ��Ĳ����� 
		}
		//ѭ������ last �͵���NULL 
		//attach���� 
		last->next = p;
	}else{
		head = p;
	} 
	return head;
}

