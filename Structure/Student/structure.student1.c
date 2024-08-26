#include<stdio.h>

    struct student
    {
    int sno,smarksH,smarksE;
    char sname[200];
    };

int main()
{
    struct student s1,s2,s3;

    printf("\nEnter s1's no =>");
    scanf("%d",&s1.sno);
    fflush(stdin);
    printf("\nEnter s1's sname =>");
    gets(s1.sname);
    printf("\nEnter s1's marks of Hindi=>");
    scanf("%d",&s1.smarksH);
    printf("\nEnter s1's marks in English=>");
    scanf("%d",&s1.smarksE);
    
    printf("\n***********************************************");

    printf("\n\nEnter s2's no =>");
    scanf("%d",&s2.sno);
    fflush(stdin);
    printf("\nEnter s2's sname =>");
    gets(s2.sname);
    printf("\nEnter s2's marks of Hindi=>");
    scanf("%d",&s2.smarksH);
    printf("\nEnter s2's marks in English=>");
    scanf("%d",&s2.smarksE);
    
    printf("\n***********************************************");

    printf("\n\nEnter s3's no =>");
    scanf("%d",&s3.sno);
    fflush(stdin);
    printf("\nEnter s3's sname =>");
    gets(s3.sname);
    printf("\nEnter s3's marks of Hindi=>");
    scanf("%d",&s3.smarksH);
    printf("\nEnter s3's marks in English=>");
    scanf("%d",&s3.smarksE);
    
    printf("\n***********************************************");
    printf("\ns1's no = %d \t\t\tsname = %s \t\t\tsmarksH =%d \t\t\tsmarksE",s1.sno,s1.sname,s1.smarksH,s1.smarksE);
    printf("\ns2's no = %d \t\t\tsname = %s \t\t\tsmarksH =%d \t\t\tsmarksE",s2.sno,s2.sname,s2.smarksH,s2.smarksE);
    printf("\ns3's no = %d \t\t\tsname = %s \t\t\tsmarksH =%d \t\t\tsmarksE",s3.sno,s3.sname,s3.smarksH,s3.smarksE);

    return 0;
}