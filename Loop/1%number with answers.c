#include<stdio.h>
int main()
{
int i,n,s=1;

printf("\nEnter limit =>");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	 printf(" 1/%d  ",i);	
	s=s/i;
}
printf("\n Divide =%d",s);

    return 0;	
}
