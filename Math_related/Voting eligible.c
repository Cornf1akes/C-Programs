#include<stdio.h>
main()
{
	int age;
	
	printf("\nEnter ur age=");
	scanf("%d",&age);
	
	if(age>18)
	{
	printf("\nU can Vote now!");
	}
	
	else
	{
	printf("\nUr age is not eligible for voting!");
	}
}
