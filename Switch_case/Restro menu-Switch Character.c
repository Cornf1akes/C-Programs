#include<stdio.h>
main()
{
	char ch;
	int qty;
	
	printf("Press A for pizza(300)");
	printf("\nPress B for dosa(180)");
	printf("\nPress C for sandwich(165)");
	printf("\nPress D for paneer tikka(250)");
	printf("\nEnter =>");
	scanf("%c",&ch);
	
	
	switch(ch)
	{
		case 'a':
		case 'A':
		printf("The price of pizza is 300 rupees");
		
		printf("\nEnter the qty of pizza=>");
		scanf("%d",&qty);
		printf("\nYour bill of Pizza = %d",qty*300);
		break;
		
	
		case 'b':
		case 'B':
		printf("The price of dosa is 180 rupees");
		
		printf("\nEnter the qty of dosa=>");
		scanf("%d",&qty);
		printf("\nYour bill of dosa = %d",qty*180);
		break;
	
		case 'c':
		case 'C':
		printf("The price of sandwich is 165 rupees");
		
		printf("\nEnter the qty of sandwich=>");
		scanf("%d",&qty);
		printf("\nYour bill of sandwich = %d",qty*165);
		break;
	
		case 'd':
		case 'D':
		printf("\nThe price of paneer tikka is 250 rupees");
		
		printf("\nEnter the qty of paneer tikka=>");
		scanf("%d",&qty);
		printf("\nYour bill of paneer tikka = %d",qty*250);
		break;
	
		default:
		printf("Sorry we dont have that item on the menu!");
	}
}
