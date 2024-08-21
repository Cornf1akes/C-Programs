#include<stdio.h>
main()
{
	char ch;
	
	printf("\nEnter any character=>");
	scanf("%c",&ch);
	
	printf("\nU entered %c",ch);
	
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	printf("\nyes,it's a vowel");
	
	else
	printf("no, its not a vowel");
}
