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
	
	if(total>50)
	{
		printf("\nCongrats,U have passed ur exams!");
	}
	else
	{
		printf("\nI m sorry to say but, u have failed ur exams!");
	}

}
