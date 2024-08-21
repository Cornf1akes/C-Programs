#include<stdio.h>
main()
{
	char ch;
	int qty;
	
	printf("Press A for pizza");
	printf("\nPress B for dosa");
	printf("\nPress C for sandwich");
	printf("\nPress D for paneer tikka");
	printf("\n\nEnter =>");
	scanf("%c",&ch);
	
	
	if(ch=='A')
	{
		printf("The price of pizza is 300 rupees");
		
		printf("\nEnter the qty of pizza=>");
		scanf("%d",&qty);
		printf("\nYour bill of Pizza = %d",qty*300);
		
	}
	else if(ch=='B')
	{
		printf("The price of dosa is 180 rupees");
		
		printf("\nEnter the qty of dosa=>");
		scanf("%d",&qty);
		printf("\nYour bill of dosa = %d",qty*180);
	}
	else if(ch=='C')
	{
		printf("The price of sandwich is 165 rupees");
		
		printf("\nEnter the qty of sandwich=>");
		scanf("%d",&qty);
		printf("\nYour bill of sandwich = %d",qty*165);
	}
	else if(ch=='D')
	{
		printf("\nThe price of paneer tikka is 250 rupees");
		
		printf("\nEnter the qty of paneer tikka=>");
		scanf("%d",&qty);
		printf("\nYour bill of paneer tikka = %d",qty*250);
	}
	else
	{
		printf("Sorry we dont have that item on the menu!");
	}
}
