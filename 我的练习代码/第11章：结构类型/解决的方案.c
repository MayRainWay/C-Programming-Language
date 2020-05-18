//解决的方案
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point getStruct(void);
void output(struct point p);

int main()
{
	struct point y={0,0};
	y=getStruct();
	output(y);
	
	return 0;
} 

struct point getStruct(void){
	struct point p;
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	printf("1#函数 %d,%d\n",p.x,p.y);
	return p;
}

void output(struct point p){
	printf("2#函数 %d,%d\n",p.x,p.y);
} 
