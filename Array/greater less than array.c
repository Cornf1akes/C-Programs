#include<stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int b[]={21,22,23,24};
    int c[]={5,6,7,8};
    int n=4,i;

    for(i=0;i<=n;i++)
    {
        if(a[i]>b[i]&&a[i]>c[i])
        {
            printf("\nArray 'A' is greater ");
        }
        else if(b[i]>a[i] && b[i]>c[i])
        {
            printf("\nArray 'B' is greater");
        }
        else if(c[i]>a[i] && c[i]>b[i])
        {
            printf("\nArray 'C' is greater");
        }
    }
    return 0;

}