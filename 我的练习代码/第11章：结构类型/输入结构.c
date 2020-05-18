//输入结构
#include <stdio.h>

struct point {
	int x;
	int y;
};

void getStruct(struct point *P);
void output(struct point p);

int main()
{
	struct point y={0,0};
	getStruct(&y);
	output(y);
	
	return 0;
} 

void getStruct(struct point *p){
	scanf("%d",&(*p).x);
	scanf("%d",&(*p).y);
	printf("1#函数 %d,%d\n",p->x,p->y);
}

void output(struct point p){
	printf("2#函数 %d,%d\n",p.x,p.y);
}
