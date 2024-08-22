#include<stdio.h>
main()
{
    int i,n,j;
    char ch;

    printf("Enter the limit here=>");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}