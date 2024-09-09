#include<stdio.h>
main()
{
	int mango,apple;
	
	printf("Enter price of mango->");
	scanf("%d",&mango);
	
	printf("Enter price of apple->");
	scanf("%d",&apple);
	
	if(mango>apple)
	{
		printf("Mango is costlier than apple!");
	}
	else
	{
		printf("Apple is costlier than mango!");
	}
}
