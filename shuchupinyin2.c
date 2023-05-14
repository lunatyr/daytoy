#include <stdio.h>
#include <math.h>
main()
{
  int x,y,t,m=1,n,h,h1;
  scanf("%d",&x);
  if(x<0)
  { 
    printf("fu");
    x=-x;
  }//负数情况 
  t=x;
  y=x;
  t/=10;
  while(t!=0)
  {
  	t/=10;
  	m*=10;
  }
  for(h1=m;h1!=0;h++)
  {
  	h1/=10;
  }
  for(m=1000;m>0;m/=10)
  { y/=m;
    n=y;
    x%=m;
    y=x;
    switch(n)
    {
      case 0:
        printf("ling");
		break;
      case 1:
        printf("yi");
		break;
      case 2:
        printf("er");
		break;
      case 3:
        printf("san");
		break; 
      case 4:
        printf("si");
		break;
      case 5:
        printf("wu");
		break; 
      case 6:
        printf("liu");
		break;
      case 7:
        printf("qi");
		break;
      case 8:
        printf("ba");
		break;
      case 9:
        printf("jiu");
		break;
    }
    for(h;h!=0;h--)
	{
		printf(" ");//空格设置有问题 
	} 
  }
}
