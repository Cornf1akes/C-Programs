#include<stdio.h>
main()
{
	int no,no1,no2,opt;
	printf("Press 1 for addition of the no");
	printf("\nPress 2 for subtraction of the no");
	printf("\nPress 3 for multiplication of the no");
	printf("\nPress 4 for  division of the no");
	printf("\n\nEnter option =>");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
		printf("Enter the first no=");
		scanf("%d",&no1);
		printf("Enter the second no=");
		scanf("%d",&no2);
		printf("The addition of the numbers is=%d",no1+no2);
		break;
		
		case 2:
		printf("Enter the first no=");
		scanf("%d",&no1);
		printf("Enter the second no=");
		scanf("%d",&no2);
		printf("The subtraction of the numbers is=%d",no1-no2);
		break;
		
		case 3:
		printf("Enter the first no=");
		scanf("%d",&no1);
		printf("Enter the second no=");
		scanf("%d",&no2);
		printf("The multiplication of the numbers is=%d",no1*no2);
		break;
		
		case 4:
		printf("Enter the first no=");
		scanf("%d",&no1);
		printf("Enter the second no=");
		scanf("%d",&no2);
		printf("The division of the numbers is=%d",no1/no2);
		break;
		
		default:
		printf("Wrong option");
		
	}
}
