#include<stdio.h>
int main()
{
    int a[]={11,50,6,9,23,45,11,70,11,22,20,7,55,21};
    int no,n=14,i,c1=0;

    printf("Enter any number=>");
    scanf("%d",&no);

    for(i=0;i<n;i++)
    {
        if(a[i]==no)
        {
            printf("\n%d",a[i]);
            c1++;
        }
        
    }
    if(c1==0)
    {
        printf("\nRecord not found");
    }
    else
    {
        printf("\nCount of the numbers=>%d",c1);
    }
}