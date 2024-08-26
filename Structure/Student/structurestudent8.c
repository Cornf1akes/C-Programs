#include<stdio.h>

struct student{
    int srollno,smarksH,smarksE,stotal;
    char sname[200];

};
main()

{
    struct student s[100];
    int n,i,y;
    int x=0;

    printf("\nEnter limit =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter s's roll no=>");
        scanf("%d",&s[i].srollno);
        fflush(stdin);
        printf("\nEnter s's sname=>");
        gets(s[i].sname);
        printf("\nEnter s's marks in hindi=>");
        scanf("%d",&s[i].smarksH);
        printf("\nEnter s's marks in English=> ");
        scanf("%d",&s[i].smarksE);
        printf("\n\n********************************************");    
    }

        printf("\nEnter roll no.=>");
        scanf("%d",&y); 

        printf("\nRoll No\t\tName\t\tHindi\t\tEnglish\t\tTotal\t\tStatus");
        printf("\n\n================================================================================================");
            
            
            for(i=0;i<n;i++)
            {
               
                if(y==s[i].srollno)
                {
                s[i].stotal=s[i].smarksH+s[i].smarksE;
                printf("\n%d\t\t%s\t\t%d\t\t%d\t\t%d",s[i].srollno,s[i].sname,s[i].smarksH,s[i].smarksE,s[i].stotal);
                x=1;
                }
                if(s[i].smarksE+s[i].smarksH>50)
                {
                    printf("\t\tPass :D");
                }
                else
                {
                    printf("\t\tFail ;(");
                }    
            }
            if(x==0)
            {
                printf("\nSorry!\t\tRecord not found!");
            }
    }

        






    
