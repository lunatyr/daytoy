#include <stdio.h>
main()
{ 
  int n;
  int o=0,j=0;
  while(scanf("%d",&n))
  {
   if(n==-1) break;
   if(n%2==0)
   {
    o++;
 }else
 {
  j++; 
 }
  }
  printf("%d %d",j,o);
  return 0;
}
