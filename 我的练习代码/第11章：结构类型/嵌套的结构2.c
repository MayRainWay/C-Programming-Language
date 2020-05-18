//Ƕ�׵Ľṹ2
#include <stdio.h>

int main()
{
	struct point {
		int x;
		int y;
	};
	
	struct rectangle{
		struct point pt1;
		struct point pt2;
	}r,*rp;
	rp=&r;
	
    r=(struct rectangle){44,2,3,4
	};
	
	printf("%d\n",r.pt1.x);
	printf("%d\n",(r.pt1).x);
	printf("%d\n",(r).pt1.x);
	
	printf("%d\n",(*rp).pt1.x);
	printf("%d\n",rp->pt1.x);
	printf("%d\n",(rp->pt1).x);
	
	return 0;
 }  
