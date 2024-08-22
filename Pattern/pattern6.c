#include<stdio.h>
main()
{
    int i,n,j,y;
    char ch;

    printf("\nEnter the limit here=>");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}