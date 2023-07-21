#include <stdio.h>

struct point{
	int x;
	int y;
};

struct point getStruct(void);
void output(struct point);

int main(int argc,char const *argv[])
{
	struct point y;
	y=getStruct();
	output(y);
}

struct point getStruct(void)
{
	struct point p;
	scanf("%d",&p.x);
	sacnf("%d",&p.y);
	printf("%d, %d",p.x,p.y);
	return p;
}

void output(struct point p)
{
	printf("%d, %d",p.x,p.y);
}
