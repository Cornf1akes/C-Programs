#include<stdio.h>
main()
{
int i,n,d;

printf("\nEnter limit =>");
scanf("%d",&n);
printf("\nEnter the no. you want to divide by=>");
scanf("%d",&d);

for(i=1;i<=10;i++)

if(i%d==0)
{
	printf("\n%d",i);
}
}

