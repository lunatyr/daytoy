#include <stdio.h>
main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	int m=-1;
	int ret[200]={0};
	int i=0;
	while(m!=0 && i<200)
	{
		ret[i]=a*10/b;
		m=a*10%b;
		i++;
		a=m;
	}
	printf("0.");
	int j=0;
	for(j;j<i;j++)
	{
		printf("%d",ret[j]);
	}
	printf("\n");
	return 0;
}
