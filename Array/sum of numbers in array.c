#include<Stdio.h>
int main()
{
    int ar[]={3,5,6,9,8,12,0,52,61,55};
    int n=10,i,s=0;

    for(i=0;i<n;i++)
    {
        printf(" %d",ar[i]);
        s=s+ar[i];
    }
    printf("\nSum = %d",s);

}