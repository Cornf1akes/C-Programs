#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the limit=>");
    scanf("%d",&n);

    i=1;
    do
    {
        printf("\n%d-%d",i,i*i);
        i++;

    }while(i<=n);

    return 0;
}