#include<stdio.h>
main()
{
	int no,next,prev;
	printf("\nEnter the number=");
	scanf("%d",&no);
	next=no+1;
	prev=no-1;
	printf("\nNextno = %d",next);
	printf("\nPrevno = %d",prev);
}
