#include<stdio.h>
#include<string.h>
main()
{
    int y;
    char ch;
    int i;
    char name[200];
    printf("Enter name:");
    gets(name);

    printf("\n name=%s",name);

    y=strlen(name);
    printf("\n len=%d",y);

    for(i=0;i<y;i++)
    {
        ch=name[i];
        printf("\n %c",ch);

    }
}