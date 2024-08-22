#include<stdio.h>
int main()
{
int i,n,s=1;

printf("\nEnter limit =>");
scanf("%d",&n);

for(i=n;i>=1;i--)
{
    
	printf(" %d X ",i);	
    s=s*i;

}

printf("\n multi = %d",s);
  
    return 0;	
}