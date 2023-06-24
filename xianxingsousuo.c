#include <stdio.h>
int search(int key,int a[],int len)//len用来表示数组大小 
{
    int ret=-1;
    for(int i=0;i<len;i++)
    {
        if(key==a[i])
	    {
	    	ret=i;
	    	break;//不在这里直接return i，因为要保持函数是单一出口，方便以后修改 
	    }   
  }
  return ret; 
} 

int main()
{
	int a[]={1,2,3,4,5,6,7,15,10,66};
	int x=search(10,a,sizeof(a)/sizeof(a[0]));
	printf("%d",x);
	return 0; 
}

//编译时要避免一专多能，一个变量最好只承担一个责任 
