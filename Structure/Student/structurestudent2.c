#include<stdio.h>

struct student{
    int sno,smarksH,smarksE;
    char sname[200];

};
main()

{
    struct student s[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter s1's no=>");
        scanf("%d",&s[i].sno);
        fflush(stdin);
        printf("\nEnter s1's sname=>");
        gets(s[i].sname);
        printf("\nEnter s1's marks in hindi=>");
        scanf("%d",&s[i].smarksH);
        printf("\nEnter s1's marks in English=> ");
        scanf("%d",&s[i].smarksE);
        printf("\n\n********************************************");
    }

    printf("\nNo\tsname\tsmarksH\tsmarksE");
    printf("\n========================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t%s\t%d\t%d",s[i].sno,s[i].sname,s[i].smarksH,s[i].smarksE);
    }
    return 0;



}