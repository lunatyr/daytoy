#include <stdio.h>
#include <math.h>
int Prime(int x)
{
	int i,n2;
	n2=sqrt(x);
	for(i=2;i<=n2;i++)
	  if(x%i==0) return 0;
	return 1;
} //x是素数，值为1，否则为0

main()
{
	
	int i,n,m,s,j,o;
	int a[205]={0};
	scanf("%d %d",&n,&m);
	s=0;
	for(i=2,j=1;j<=m;i++)
	{
	    if(Prime(i)==1){
		a[j]=i;
		j++;
	    }
	}
    for(j=n;j<=m;j++){
	  s+=a[j];
	} 
	printf("%d",s);
} 
