//typedef
#include <stdio.h>

int main()
{
	typedef struct adata{
		int month;
		int date;
		int year;
	}date;
//	typedef struct adata date;
	
	date a={1,2,3};

	typedef struct node{
		int data;
		
	}node;
	
//	typedef *char[10] strings;   *char[10]是个什么东西？ 
	
	
	return 0;
}
