#include<stdio.h>
#include<string.h>
main()
{
    int y;
    char name[200];
    printf("Enter name:");
    gets(name);

    printf("\n name=%s",name);

    y=strlen(name);
    printf("\n len=%d",y);
}