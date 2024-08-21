
#include<stdio.h>
void add(int n1,int n2,int n3,int n4,int n5)
{   
    printf("\n\nAddition of the no's=>%d",n1+n2+n3+n4+n5);
    printf("\n**************************");
}
main()
{
    int n1,n2,n3,n4,n5;
   
    printf("\nEnter the first number=>");
    scanf("%d",&n1);
    printf("\nEnter the second number=>");
    scanf("%d",&n2);
    printf("\nEnter the third number=>");
    scanf("%d",&n3);
    printf("\nEnter the fourth number=>");
    scanf("%d",&n4);
    printf("\nEnter the fifth number=>");
    scanf("%d",&n5);
    
    add(n1,n2,n3,n4,n5);

}