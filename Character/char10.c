#include<stdio.h>
#include<string.h>
main()
{
    int y,i;
    
    char name[200],ch;
    printf("Enter name:");
    gets(name);
    
    y=strlen(name);
    for(i=0;i<y;i++)
    {
        ch=name[i];

        if(ch==' ')
        {
        
        }
        else
        {
            printf("%c",ch);
        }
    }return 0;
}