#include<stdio.h>
int main()
{
int no,z,i;
int x=0,y,f=1;

printf("Enter the number=>");
scanf("%d",&no);
z=no;
while(no>0)
{
    y=no%10;
    f=1;
    for( i=1 ;i<=y;i++)
    {
        f=f*i;
    }
    x=x+f;
    no=no/10;
}
printf("%d",x);
if(z==x)
{
    printf("\nNumber is Krishnamurthy no.!");
}
else
{
    printf("\nNumber is not an Krishnamurthy no.!");
}
return 0;

}