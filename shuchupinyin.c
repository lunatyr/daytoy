#include <stdio.h>
#include <math.h>
int main()
{
  int x,y,t;
  y=0;
  scanf("%d",&x);
  if(x<0)
  { 
    printf("fu ");
    x=-x;
  }
  while(x!=0)
  { t=x%10;
   x=x/10;
   y=y*10+t;
  }
  while(y!=0)
  { t=y%10;
   y=y/10;
   switch(t)
    { case 0:printf("ling");break;
      case 1:printf("yi");break;
      case 2:printf("er");break;
      case 3:printf("san");break; 
      case 4:printf("si");break;
      case 5:printf("wu");break; 
      case 6:printf("liu");break;
      case 7:printf("qi");break;
      case 8:printf("ba");break;
      case 9:printf("jiu");break;
    }
 if(y) printf(" ");
  }printf("#");
}
