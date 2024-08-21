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
void sub()
{   
    int no1,no2;
    printf("\n**************************");
    printf("\n\n\t\tSubtraction");

    printf("\nEnter the first number=>");
    scanf("%d",&no1);
    printf("\nEnter the second number=>");
    scanf("%d",&no2);

    printf("\n\nSubtraction of the no's=>%d",no1-no2);
    printf("\n**************************");
}
void mult()
{   
    int no1,no2;
    printf("\n**************************");
    printf("\n\n\t\tMultiplication");

    printf("\nEnter the first number=>");
    scanf("%d",&no1);
    printf("\nEnter the second number=>");
    scanf("%d",&no2);

    printf("\n\nMultiplication of the no's=>%d",no1*no2);
    printf("\n**************************");
}
void div()
{   
    int no1,no2;
    printf("\n**************************");
    printf("\n\n\t\tDivision");

    printf("\nEnter the first number=>");
    scanf("%d",&no1);
    printf("\nEnter the second number=>");
    scanf("%d",&no2);

    printf("\n\nDivision of the no's=>%d",no1/no2);
    printf("\n**************************");
}
main()
{
    add();
    sub();
    mult();
    div();

}



