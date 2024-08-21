#include<Stdio.h>
#include<string.h>
main()
{
    
    int y,i;
    char name[200];
    int ch;
    
    printf("Enter name:");
    gets(name);
    y=strlen(name);
    
    for(i=y-1;i>=0;i--)
    {
    printf("%c",name[i]);
    }
    
}   