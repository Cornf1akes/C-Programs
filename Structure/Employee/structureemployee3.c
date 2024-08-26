#include<stdio.h>

struct employee{
    int eno,esalary;
    char ename[200];

};
main()

{
    struct employee e[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);
    printf("\n***************************");

    for(i=0;i<n;i++)
    {
        printf("\nEnter no=>");
        scanf("%d",&e[i].eno);
        fflush(stdin);
        printf("\nEnter ename=>");
        gets(e[i].ename);
        printf("\nEnter salary=>");
        scanf("%d",&e[i].esalary);
        printf("\n*******************************************");
        printf("\n*******************************************");
        
    }

    printf("\nno\t\tename\t\tesalary");
    printf("\n===========================================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t\t%s\t\t%d",e[i].eno,e[i].ename,e[i].esalary);
        if(e[i].esalary>=20000)
        {
            printf("\t\tGood!");
        }
        
    }
    return 0;



}