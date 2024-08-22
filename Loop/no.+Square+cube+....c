#include<stdio.h>
int main()
{
    int i,n;

printf("\nEnter limit =>");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
if(i%2==0)
{
    printf("%d+",i*i);
}
else 
{
    printf("%d+",i*i*i);
}
}
	
 return 0;	
}