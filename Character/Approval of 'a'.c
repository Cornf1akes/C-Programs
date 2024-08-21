#include<stdio.h>
main()
{
	char ch;
	
	printf("\nEnter any character=>");
	scanf("%c",&ch);
	
	printf("\nU entered %c",ch);
	
	if(ch=='a'||ch=='A')
	printf("\nyes,it's a");
	
	else
	printf("\nno, its not A");
}
