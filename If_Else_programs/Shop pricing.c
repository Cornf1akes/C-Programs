#include<stdio.h>
main()
{
	int price;
	
	printf("Enter the price of the mobile phone=");
	scanf("%d",&price);
	
	if(price>20000)
	{
		printf("\nIts too costly, i cant buy that phone!");
	}
	else
	{
		printf("\nOh thats nice, I would like to buy it!");
	}
}
