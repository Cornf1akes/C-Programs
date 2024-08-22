#include<stdio.h>
int main()
{
    int i;
    int a[5]={11,20,30,44,5};
    int *ptr;
    ptr=a;
    ptr++;
    for(i=0;i<5;i++)
    {
        printf("\n%d",*ptr);
    }
}