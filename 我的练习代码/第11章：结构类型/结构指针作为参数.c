//结构指针作为参数 
#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point* getStruct(struct point *p);
void output(struct point p);
void print(const struct point *p);

int main()
{
	struct point y={0,0};
	getStruct(&y);
	output(y);
	output(*getStruct(&y));     //其实我个人很不建议这样写，有套娃嫌疑！ 
	
	print(getStruct(&y));    //实测证明后，确实如我猜测的那般，是套娃！这个函数有三次调用getstruct，所以必然有三次输入！ 
	
	getStruct(&y)->x = 0;
	*getStruct(&y)=(struct point){1,2};//算上这里追加的内容就是五次调用getStruct函数五次输入了！ 
	
	printf("5#函数 %d %d",y.x,y.y);
	 
	return 0;
} 

struct point* getStruct(struct point *p){
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("1#函数 %d,%d\n",p->x,p->y);
	return p;
}

void output(struct point p){
	printf("2#函数 %d,%d\n",p.x,p.y);
} 

void print(const struct point *p)
{
	printf("3#函数 %d %d\n",p->x,p->y);
}
