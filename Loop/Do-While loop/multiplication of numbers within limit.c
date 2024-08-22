#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the limit=>");
    scanf("%d",&n);

    i=1;
    
    do{
        printf("\n%dX%d=%d",n,i,i*n);
        i++;
    }while(i<=10);
}