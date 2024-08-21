#include<stdio.h>
main()
{
	char ch;
	printf("Enter any character=");
	scanf("%c",&ch);
	
	if(isupper(ch))
	{
		printf("Its in upper case!");
	}
	else if(islower(ch))
	{
	printf("Its in lower case!");
	}
	else 
	{
		printf("Others!");
	}
}
