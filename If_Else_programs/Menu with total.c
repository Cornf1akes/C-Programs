#include<stdio.h>
main()
{
	int user,qty;
	
	printf("Press 1 for pizza(300)");
	printf("\nPress 2 for dosa(180)");
	printf("\nPress 3 for sandwich(165)");
	printf("\nPress 4 for paneer tikka(250)");
	printf("\nEnter =>");
	scanf("%d",&user);
	
	
	if(user==1)
	{
		printf("The price of pizza is 300 rupees");
		
		printf("\nEnter the qty of pizza=>");
		scanf("%d",&qty);
		printf("\nYour bill of Pizza = %d",qty*300);
		
	}
	else if(user==2)
	{
		printf("The price of dosa is 180 rupees");
		
		printf("\nEnter the qty of dosa=>");
		scanf("%d",&qty);
		printf("\nYour bill of dosa = %d",qty*180);
	}
	else if(user==3)
	{
		printf("The price of sandwich is 165 rupees");
		
		printf("\nEnter the qty of sandwich=>");
		scanf("%d",&qty);
		printf("\nYour bill of sandwich = %d",qty*165);
	}
	else if(user==4)
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
