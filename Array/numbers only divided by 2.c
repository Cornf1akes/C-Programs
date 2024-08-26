#include<stdio.h>
int main()
{
    int a[]={11,50,6,9,23,45,11,70,11,22,20,7,55,21};
    int b[10];
    int n=14,i;
    int k=0;

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[k]=a[i];
            k++;

        }   
    }
    for(i=0;i<k;i++)
    {
       
        printf(" %d",b[i]);
        
    }
    return 0;
}