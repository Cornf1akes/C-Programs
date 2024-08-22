#include<stdio.h>
int main()
{
    int i,n,y,j;
    printf("\nEnter the limit here=>");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",i%2);
        }
        printf("\n");
    }
    
}
