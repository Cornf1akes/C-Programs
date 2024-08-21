#include<stdio.h>
main()
{
	char ch;
	int no;
	printf("Press A for square of the no");
	printf("\nPress B for cube of the no");
	printf("\nEnter option =>");
	scanf("%c",&ch);
	
	if(ch=='A')
	{
	printf("\nEnter the no.");
	scanf("%d",&no);
	printf("The square of the number is=%d",no*no);
	}
	else if(ch=='B')
	{
	printf("\nEnter the no.");
	scanf("%d",&no);
	printf("The cube of the number is=%d",no*no*no);
	}
	else
	{
		printf("Wrong option");
	}
}

