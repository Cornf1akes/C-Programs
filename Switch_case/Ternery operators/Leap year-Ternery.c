#include<stdio.h>
main()
{
	int year;
	
	printf("Enter the year=");
	scanf("%d",&year);
	
	year%4==0? printf("\nThis year is leap year"): printf("\nThis year is not a leap year");
}
