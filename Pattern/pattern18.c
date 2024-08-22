#include<stdio.h>
main()
{
    int i,n,j,y;
    int k=n;
    printf("\nEnter the limit here=>");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            k--;
        }
        {
            printf("\n");
        }
    }
}