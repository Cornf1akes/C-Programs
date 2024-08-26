#include<stdio.h>

struct employee
{
    int eno,esalary;
    char ename[200];
};

int main()
{
    struct employee e1,e2,e3;
    printf("\nEnter e1's no =>");
    scanf("%d",&e1.eno);
    fflush(stdin);
    printf("\nEnter b1's ename =>");
    gets(e1.ename);
    printf("\nEnter e1's esalary=>");
    scanf("%d",&e1.esalary);
    
    
    printf("\n***********************************************");

    printf("\n\nEnter e2's no =>");
    scanf("%d",&e2.eno);
    fflush(stdin);
    printf("\nEnter b2's ename =>");
    gets(e2.ename);
    printf("\nEnter e2's salary=>");
    scanf("%d",&e2.esalary);
    
    
    printf("\n***********************************************");

    printf("\n\nEnter e3's no =>");
    scanf("%d",&e3.eno);
    fflush(stdin);
    printf("\nEnter e3's ename =>");
    gets(e3.ename);
    printf("\nEnter e3's salary=>");
    scanf("%d",&e3.esalary);
    
    
    printf("\n***********************************************");
    printf("\ne1's no = %d \t\t\tesalary = %d \t\t\tename =%s",e1.eno,e1.esalary,e1.ename);
    printf("\ne2's no = %d \t\t\tesalary = %d \t\t\tename =%s",e2.eno,e2.esalary,e2.ename);
    printf("\ne3's no = %d \t\t\tesalary = %d \t\t\tename =%s",e3.eno,e3.esalary,e3.ename);

    return 0;
}