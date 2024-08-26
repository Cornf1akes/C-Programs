#include<stdio.h>
int main()
{
    int a[]={-11,50,-6,9,-23,45};
    int b[8];
    int n=6,i;
    int k=0;

    for(i=0;i<n;i++)
    {
        b[k]=a[i];
        k++;
    }
    
    
    for(i=0;i<k;i++)
    {
       if(a[i]<0)
       {
        printf("\n%d",b[i]);
       }
    }
    return 0;
}