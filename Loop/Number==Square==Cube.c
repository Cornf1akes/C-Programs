#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter the limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n %d == %d == %d",i,i*i,i*i*i);
	}
}
