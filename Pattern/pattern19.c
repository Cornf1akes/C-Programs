
#include<stdio.h>
main()
{
    int i,n,j,k;
    
    printf("\nEnter the limit here=>");
    scanf("%d",&n);
    k=n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf("%d",k);
             
        }
        k--;
        printf("\n");
        
    }
}