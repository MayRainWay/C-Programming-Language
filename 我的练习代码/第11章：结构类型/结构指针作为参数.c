//�ṹָ����Ϊ���� 
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
	output(*getStruct(&y));     //��ʵ�Ҹ��˺ܲ���������д�����������ɣ� 
	
	print(getStruct(&y));    //ʵ��֤����ȷʵ���Ҳ²���ǰ㣬�����ޣ�������������ε���getstruct�����Ա�Ȼ���������룡 
	
	getStruct(&y)->x = 0;
	*getStruct(&y)=(struct point){1,2};//��������׷�ӵ����ݾ�����ε���getStruct������������ˣ� 
	
	printf("5#���� %d %d",y.x,y.y);
	 
	return 0;
} 

struct point* getStruct(struct point *p){
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("1#���� %d,%d\n",p->x,p->y);
	return p;
}

void output(struct point p){
	printf("2#���� %d,%d\n",p.x,p.y);
} 

void print(const struct point *p)
{
	printf("3#���� %d %d\n",p->x,p->y);
}
