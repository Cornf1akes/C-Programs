#include<stdio.h>
int main()
{
int no,z;
int x=0,y;

printf("Enter the number=>");
scanf("%d",&no);
z=no;
while(no>0)
{
    y=no%10;
    x=x*10+y;
    no=no/10;
}
printf("%d",x);
if(x==z)
{
    printf("\nNumber is palindrome!");
}
else
{
    printf("\nNumber is not palindrome!");
}
return 0;

}

