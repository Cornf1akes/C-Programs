#include<stdio.h>
main()
{
    int a[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter value =>");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);   
    }
}