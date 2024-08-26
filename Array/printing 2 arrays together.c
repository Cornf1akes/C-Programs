#include<stdio.h>
int main()
{
    int a[5]={11,5,6,20,21};
    int b[3]={100,200,300};
    int c[8];
    int n1=5,n2=3,i;
    int k=0;

    for(i=0;i<n1;i++)
    {
        c[k]=a[i];
        k++;
    }

    for(i=0;i<n2;i++)
    {
        c[k]=b[i];
        k++;
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("    %d",c[i]);
    }
}