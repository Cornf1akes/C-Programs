#include<stdio.h>

struct book{
    int bno,bprice;
    char bname[200];

};
main()

{
    struct book b[100];
    int n,i;

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
    printf("\n========================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t\t%s\t\t%d",b[i].bno,b[i].bname,b[i].bprice);
    }
    return 0;



}