#include <stdio.h>
void sum(int x,int z)
{ int i;
  int sum=0;
  for(i=x;i<=z;i++)
  { sum+=i;
  } 
  printf("%d到%d的和是%d\n",x,z,sum);
}
main()
{
  sum(1,10);
  sum(20,30);
  sum(35,45);	 
}
