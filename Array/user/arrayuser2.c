#include<stdio.h>
main()
{
    int a[100];
    int n,i;

    printf("\nEnter limit=>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter value=>");
        scanf("%d",&a[i]);
    
    }
    printf("\n************************************************");
    for(i=0;i<1;i++)
    {
        printf("\n%d",a[0]);
        printf(" %d",a[4]);
    }
    return 0;
}