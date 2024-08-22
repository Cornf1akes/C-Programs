#include<stdio.h>
main()
{
	int i,n,d;
	
	printf("Enter the no=>");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
	printf("%d == %d",i,n,i*n);
	}
}
