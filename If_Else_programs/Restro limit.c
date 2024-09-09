#include<stdio.h>
main()
{
	int rupees;
	
	printf("Enter the amount of money u have=");
	scanf("%d",&rupees);
	
	if(rupees>1000)
	{
	printf("OH thats great, u can buy a pizza");
	}
	else
	{
		printf("U can buy only panipuri");
	}
}
