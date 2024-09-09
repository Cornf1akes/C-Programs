#include<stdio.h>
main()
{
	int eng,ss,maths,total;
	
	printf("Enter the marks of english=>");
	scanf("%d",&eng);
	printf("Enter the marks of SS=>");
	scanf("%d",&ss);
	printf("Enter the marks of Maths=>");
	scanf("%d",&maths);
	
	total=eng+ss+maths;
	
	printf("\ntotal=%d",total);
	
	if(total>0 &&total<50)
	{
		printf("\nC grade :c");
	}
	else if(total>=50 && total<100)
	{
		printf("\nB grade :O");
	}
	else if(total>=100 && total<150)
	{
		printf("\nA grade :P");
	}
	else
	{
		printf("\nA+ grade :D");
	}
}
