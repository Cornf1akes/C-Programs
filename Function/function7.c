#include<stdio.h>
void square(no)
{
    printf("\nSquare of the no is=>%d",no*no);
    printf("\n********************");
}
void cube(no)
{
    printf("\nCube of the no is=>%d",no*no*no);
}
main()
{
    int no;
   
    printf("\nEnter the number=>");
    scanf("%d",&no);
   
    
    square(no);
    cube(no);
}