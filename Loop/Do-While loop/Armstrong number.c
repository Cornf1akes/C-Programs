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
    x=x+(y*y*y);
    no=no/10;
}
printf("%d",x);
if(x==z)
{
    printf("\nNumber is armstrong no.!");
}
else
{
    printf("\nNumber is not an armstrong no.!");
}
return 0;

}

