#include<stdio.h>

void add()
{
    
    int no1,no2;
    printf("\n*************************************");
    printf("\n\n\t\t Addition");
    printf("\nEnter the no1=>");
    scanf("%d",&no1);
    printf("\nEnter the no2=>");
    scanf("%d",&no2);

    printf("\n\nAddition of the no's=>%d",no1+no2);
    printf("\n*************************************");
}


void max2()
{
    
    int no1,no2;

    printf("\n*************************************");
    printf("\n\n\t\t Max between 2");
    printf("\nEnter the no1=>");
    scanf("%d",&no1);
    printf("\nEnter the no2=>");
    scanf("%d",&no2);

    no1>no2?printf("\nNo1 is greater") : printf("\nNo2 is greater");
    printf("\n*************************************");

}
void table()
{
    int no,i;
     printf("\n*************************************");
    printf("\n\n\t\tTable");
    printf("\nEnter the no.=>");
    scanf("%d",&no);

    for(i=1;i<=10;i++);
    {
      printf("\n %d X %d = %d",no,i,no*i);
    }
    printf("\n*************************************");
    
}
void max3()
{
    int no1,no2,no3;

    printf("\n*************************************");
    printf("\n\n\t\t Max between 3");

    printf("\nEnter the no1=>");
    scanf("%d",&no1);
    printf("\nEnter the no2=>");
    scanf("%d",&no2);
    printf("\nEnter the no3=>");
    scanf("%d",&no3);

    if(no1>no2 && no1>no3)
    {
        printf("\nNo1 is greater!");
    }
    else if(no2>no1 && no2>no3)
    {
        printf("\nNo2 is greater!");
    }
    else if(no3>no1 && no3>no2)
    {
        printf("\nNo3 is greater!");
    }
printf("\n*************************************");
}
void areaoftri()
{
    float h,b;

    printf("\n*************************************");
    printf("\n\n\t\t Area of Triangle");
    printf("\nEnter height of the triangle=>");
    scanf("%f",&h);
    printf("\nEnter breadth of the triangle=>");
    scanf("%f",&b);

    printf("\n\nArea of the triangle=>%f",0.5*b*h);
    printf("\n*************************************");
}
void areaofcir()
{
    float r;
    printf("\n*************************************");
    printf("\n\n\t\t Area of Circle");

    printf("\nEnter radius of the circle=>");
    scanf("%f",&r);

    printf("\n\nArea of the circle=>%f",3.14*r*r);
    printf("\n*************************************");
}
void oddeven()
{
    int no;

    printf("\n*************************************");
    printf("\n\n\t\t Odd and Even");
    printf("\nEnter the no1=>");
    scanf("%d",&no);
    
    if(no%2==0)
    {
        printf("\nThe no. is even");
    }
    else
    {
        printf("\nThe no. is odd");
    }   
    printf("\n*************************************");
}
void posneg()
{
    int no;

     printf("\n*************************************");
    printf("\n\n\t\tPositive and Negative");
    printf("\nEnter the no.=>");
    scanf("%d",&no);

    if(no>0)
    {
        printf("\nThe no. is negative");
    }
    else
    {
        printf("\nThe no. is positive");
    }
    printf("\n*************************************");
}
void cube()
{
    int no;

    printf("\n*************************************");
    printf("\n\n\t\t Cube of the number");
    printf("\nEnter the no.=>");
    scanf("%d",&no);

    printf("\nThe cube of the no. is=>%d",no*no*no);
    printf("\n*************************************");
}
void fact()
{
int no,i,m=1,n;

    printf("\n*************************************");
    printf("\n\n\t\tFactorial of the number");
    printf("\nEnter the no.=>");
    scanf("%d",&no);

for(i=1;i<n;i++)
{
    printf("%d X",i);
    m=m*i;
  
}
  printf("\nSum=%d",m);
  printf("\n*************************************");
}


main()
{

add();
max2();
table();
max3();
areaoftri();
areaofcir();
oddeven();
posneg();
cube();
fact();
add();

}