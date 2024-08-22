#include<stdio.h>
int main()
{
int no;
int x=0,y;

printf("Enter the number=>");
scanf("%d",&no);

while(no>0)
{
    y=no%10;
    x=x*10+y;
    no=no/10;
}
printf("%d",x);
return 0;

}