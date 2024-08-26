#include<stdio.h>
main()
{
    int a[100];
    int n,i,s=0;
    int c1=0;
    int c2=0;

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
        if(a[i]%2==0)
        {
        printf("\neven",a[i]);
        c1++;
        s=s+a[i];
        }
        else
        {
        printf("\nodd",a[i]);
        c2++;
        s=s+a[i];
        }
       
    }
    printf("\n\nThe sum of the numbers=%d",s);
    printf("\n even numbers=%d",c1);
    printf("\n odd numbers=%d",c2);
    return 0;
}