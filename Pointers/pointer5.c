#include<stdio.h>
int main()
{
    int a=20,b=2;
    int *pa,*pb;
    pa=&a;
    pb=&b;

    printf("\nAdd =%d",*pa + *pb);
    printf("\nSub =%d",*pa - *pb);
    printf("\nMulti =%d",*pa * *pb);
    printf("\nDiv =%d",*pa / *pb);

}