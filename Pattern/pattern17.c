
#include<stdio.h>
main()
{
    int i,n,j,y;
    
    printf("\nEnter the limit here=>");
    scanf("%d",&n);

    int k=n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",k);
        }
        k--;
        {
            printf("\n");
        }
    }
}