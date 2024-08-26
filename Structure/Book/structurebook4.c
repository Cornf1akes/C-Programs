#include<stdio.h>

struct book{
    int bno,bprice;
    char bname[200];
    
};
main()

{
    struct book b[100];
    int n,i;
    int c=0;
    int c2=0;

    printf("\nEnter limit =>");
    scanf("%d",&n);
    printf("\n***************************");

    for(i=0;i<n;i++)
    {
        printf("\nEnter no=>");
        scanf("%d",&b[i].bno);
        fflush(stdin);
        printf("\nEnter sname=>");
        gets(b[i].bname);
        printf("\nEnter price=>");
        scanf("%d",&b[i].bprice);
        printf("\n***************************");
        printf("\n***************************");
        
    }

    printf("\nno\t\tbname\t\tbprice");
    printf("\n============================================================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t\t%s\t\t%d",b[i].bno,b[i].bname,b[i].bprice);
        if(b[i].bprice>50)
        {
            printf("\t\tToo expensive!");
            c++;
        }
        else
        {
            printf("\t\tOk! I can buy it!");
            c2++;
        }
        
    }
    printf("\nCount for Expensive books=>%d",c);

    printf("\nCount for Affordable books=>%d",c2);
    
    return 0;



}