#include<stdio.h>
main()	
{
	int op;
	float h,b,r;
	printf("Press 1 for area of triangle ");
	printf("\nPress 2 for area of circle");
	printf("\n\nEnter option =>");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
		printf("\nEnter the value of h=>");
		scanf("%f",&h);
		printf("\nEnter the value of b=>");
		scanf("%f",&b);
		printf("The total value =%f",0.5*b*h);
		break;
	
		case 2:
		printf("\nEnter the value of r=>");
		scanf("%f",&r);
	
		printf("The total value =%f",3.14*r*r);
		break;
	
		default:
		printf("Wrong option");
	}
}
	

