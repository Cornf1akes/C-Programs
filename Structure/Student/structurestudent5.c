#include<stdio.h>

struct student{
    int sno,smarksH,smarksE;
    char sname[200];

};
main()

{
    struct student s[100];
    int n,i;
    int c=0;
    int c2=0;

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

    printf("\nNo\t\tsname\t\tsmarksH\t\tsmarksE");
    printf("\n========================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t\t%s\t\t%d\t\t%d",s[i].sno,s[i].sname,s[i].smarksH,s[i].smarksE);
        
        if(s[i].smarksH+s[i].smarksE>50)
        {
            printf("\t\tPass :D");
            c++;
        }
        else 
        {
            printf("\t\tFail :(");
            c2++;
        }
    }
    printf("\n\nNo. of Students failed=>%d",c2);
    printf("\nNo. of Students passed=>%d",c);
    return 0;



}