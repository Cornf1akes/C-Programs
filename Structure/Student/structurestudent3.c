#include<stdio.h>

struct student{
    int sno;
    char sname[200];

};
main()

{
    struct student s[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);
    printf("\n***************************");

    for(i=0;i<n;i++)
    {
        printf("\nEnter no.=>");
        scanf("%d",&s[i].sno);
        fflush(stdin);
        printf("\nEnter Name=>");
        gets(s[i].sname);
        printf("\n*******************************************");
        printf("\n*******************************************");
        
    }

    printf("\nno\t\tename");
    printf("\n===========================================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t\t%s",s[i].sno,s[i].sname);
    }
    return 0;



}