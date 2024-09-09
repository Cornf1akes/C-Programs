#include<stdio.h>
main()
{
	int no1,no2,no3,no4;
	
	printf("Enter the first number=");
	scanf("%d",&no1);
	
	printf("\nEnter the second number");
	scanf("%d",&no2);
	
	printf("\nEnter the third number");
	scanf("%d",&no3);
	
	printf("\nEnter the fourth number");
	scanf("%d",&no4);
	
	if(no1>no2 && no1>no3 && no1>no4)
	{
		printf("NO1 is greater than NO2, NO3 and NO4!!");
	}
	else if(no2>no1 && no2>no3 && no2>no4)
	{
		printf("NO2 is greater than NO1, NO3 and NO4!!");
	}
	else if(no3>no1 && no3>no2 && no3>no4)
	{
		printf("NO3 is greater than NO1, NO2 and NO4!!");
	}
	else if(no4>no1 && no4>no2 && no4>no1)
	{
		printf("NO4 is greater than NO1, NO2 and NO3!!");
	}
	else
	{
	printf("All are equal!!");
	}
}
