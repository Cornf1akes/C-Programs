#include<stdio.h>
void add()
{   
    int no1,no2;
    printf("\n**************************");
    printf("\n\n\t\tAddition");

    printf("\nEnter the first number=>");
    scanf("%d",&no1);
    printf("\nEnter the second number=>");
    scanf("%d",&no2);

    printf("\n\nAddition of the no's=>%d",no1+no2);
    printf("\n**************************");
}
void max2()
{
    
    int no1,no2;

    printf("\n**************************");
    printf("\n\n\t\t Max between 2");
    printf("\nEnter the no1=>");
    scanf("%d",&no1);
    printf("\nEnter the no2=>");
    scanf("%d",&no2);

    no1>no2?printf("\nNo1 is greater") : printf("\nNo2 is greater");
    printf("\n***************************");

}
main()
{
    add();
    max2();
}