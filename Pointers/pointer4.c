#include<stdio.h>
int main()
{
    int a=200;
    int *b;
    b=&a;
    printf("\n A=%d *B=%d",a,*b);
    *b=7;
    printf("\n A=%d *B=%d",a,*b);
    a=20;
    printf("\n A=%d *B=%d",a,*b);
}