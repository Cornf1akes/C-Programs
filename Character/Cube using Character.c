	#include<stdio.h>
main()
{
	int no,opt;
	printf("Press 1 for square of the no");
	printf("\nPress 2 for cube of the no");
	printf("\n\nEnter option =>");
	scanf("%d",&opt);
	
	switch(opt)
	{
	case 1:
		printf("\nEnter the no.");
		scanf("%d",&no);
		printf("The square of the number is=%d",no*no);
		break;
	case 2:
		printf("\nEnter the no.");
		scanf("%d",&no);
		printf("The cube of the number is %d",no*no*no);
		break;
	
	default:
		printf("Wrong number");
	}
}
	
		
		

	
	

