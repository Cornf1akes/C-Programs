#include<stdio.h>
main()
{
	char ch;
	
	printf("\nEnter any character=>");
	scanf("%c",&ch);
	
	printf("\nU entered %c",ch);
	
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		
		printf("\nIt is a vowel");
		break;
	
	default:
	printf("\nIts not a vowel");
	}
}	
