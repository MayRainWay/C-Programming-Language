//Ƕ�׵Ľṹ

#include <stdio.h>

int main()
{
	struct point {
		int x;
		int y;
	};
	struct point pt1={999,333};
	
	struct rectangle{
		struct point pt1;
		struct point pt2;
	}r,s;
//	r.pt1.x=9;
	printf("%d\n",pt1.x);
	printf("%d\n",s.pt1.x);
	
	return 0;
 } 
