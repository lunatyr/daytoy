#include<stdio.h>
int main()
{
	int x;
	double sum=0;
	int cnt=0;
	int num[200];
	scanf("%d",&x);
	while(x!=-1)
	{  num[cnt]=x;
	   printf("%d\n",cnt); 
	   sum+=x;
	   cnt++;
	   scanf("%d",&x);
	}
	if(cnt>0)
	{  int i;
	   double aver=sum/cnt;
	   printf("%lf\n",aver);
	   for(i=0;i<cnt;i++)
	   {  if(num[i]>aver)
	      {  printf("%d ",num[i]);
		  }
	   }
	}
}
