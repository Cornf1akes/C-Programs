#include<stdio.h>
main()
{
	int b,h,area;
	printf("enter the height=");
	scanf("%d",&h);
	
	printf("enter the breadth=");
	scanf("%d",&b);
	
	area=h*b*0.5;
	printf("\nArea of triangle=%d",area);
}
