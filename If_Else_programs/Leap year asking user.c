#include<stdio.h>
main()
{
	int year;
	
	printf("Enter the year=");
	scanf("%d",&year);
	
	if(year%4==0)
	{
	printf("\nThis Year is a leap year");
	}
	else
	{
	printf("\nThis year is not a leap year");
	}
}
