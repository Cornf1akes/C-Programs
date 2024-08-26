#include<stdio.h>
main()
{
    int a[100];
    int n,i,s=0;

    printf("\nEnter limit=>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter value=>");
        scanf("%d",&a[i]);
    
    }
    printf("\n************************************************");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
        s=s+a[i];
        
    }
    printf("\nSum=%d",s);
    return 0;
}