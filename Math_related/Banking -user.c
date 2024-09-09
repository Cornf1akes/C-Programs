#include<stdio.h>
main()
{
	int p,r,t,interest;
	p=20000;
	r=2;
	t=730;
	interest=(p*r*t)/100;
	
	printf("\nEnter p=");
	scanf("%d",&p);
	
	printf("\nEnter r=");
	scanf("%d",&r);
	
	printf("\nEnter t=");
	scanf("%d",&t);
	
	printf("\ninterest=%d",interest);
}
