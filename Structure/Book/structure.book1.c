#include<stdio.h>

struct book
{
    int bno,bprice;
    char bname[200];
};

int main()
{
    struct book b1,b2,b3;
    printf("\nEnter b1's no =>");
    scanf("%d",&b1.bno);
    printf("\nEnter b1's price=>");
    scanf("%d",&b1.bprice);
    fflush(stdin);
    printf("\nEnter b1's sname =>");
    gets(b1.bname);
    
    printf("\n***********************************************");

    printf("\n\nEnter b2's no =>");
    scanf("%d",&b2.bno);
    printf("\nEnter b2's price=>");
    scanf("%d",&b2.bprice);
    fflush(stdin);
    printf("\nEnter b2's sname =>");
    gets(b2.bname);
    
    printf("\n***********************************************");

    printf("\n\nEnter b3's no =>");
    scanf("%d",&b3.bno);
    printf("\nEnter b3's price=>");
    scanf("%d",&b3.bprice);
    fflush(stdin);
    printf("\nEnter b3's sname =>");
    gets(b3.bname);
    
    printf("\n***********************************************");
    printf("\nb1's no = %d \t\t\tbname = %s \t\t\tbprice =%d",b1.bno,b1.bname,b1.bprice);
    printf("\nb2's no = %d \t\t\tbname = %s \t\t\tbprice =%d",b2.bno,b2.bname,b2.bprice );
    printf("\nb3's no = %d \t\t\tbname = %s \t\t\tbprice =%d",b3.bno,b3.bname,b3.bprice);

    return 0;
}
