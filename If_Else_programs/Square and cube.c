#include<stdio.h>
main()
{
	int no,opt;
	printf("Press 1 for square of the no");
	printf("\nPress 2 for cube of the no");
	printf("\n\nEnter option =>");
	scanf("%d",&opt);
	
	if(opt==1)
	{
	printf("\nEnter the no.");
	scanf("%d",&no);
	printf("The square of the number is=%d",no*no);
	}
	else if(opt==2)
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
