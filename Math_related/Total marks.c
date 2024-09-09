#include<stdio.h>
main()
{
	int eng,ss,maths,total;
	
	printf("Enter marks of English=");
	scanf("%d",&eng);
	
	printf("Enter marks of SS=");
	scanf("%d",&ss);
	
	printf("Enter marks of Maths=");
	scanf("%d",&maths);
	
	total=eng+ss+maths;
	
	printf("\ntotal marks=%d",total);
	
}
