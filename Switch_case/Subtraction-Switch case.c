#include<stdio.h>
main()
{
	int no,no1,no2;
	char opt;
	printf("Press + for addition of the no");
	printf("\nPress - for subtraction of the no");
	printf("\nPress * for multiplication of the no");
	printf("\nPress / for  division of the no");
	printf("\n\nEnter option =>");
	scanf("%c",&opt);
	
	switch(opt)
	{
		case '+':
		printf("Enter the first no=");
		scanf("%d",&no1);
		printf("Enter the second no=");
		scanf("%d",&no2);
		printf("The addition of the numbers is=%d",no1+no2);
		break;
		
		case '-':
		printf("Enter the first no=");
		scanf("%d",&no1);
		printf("Enter the second no=");
		scanf("%d",&no2);
		printf("The subtraction of the numbers is=%d",no1-no2);
		break;
		
		case '*':
		printf("Enter the first no=");
		scanf("%d",&no1);
		printf("Enter the second no=");
		scanf("%d",&no2);
		printf("The multiplication of the numbers is=%d",no1*no2);
		break;
		
		case '/':
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
