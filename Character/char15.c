#include<Stdio.h>
#include<string.h>
main()
{
    
    int y,i=0;
    char name[200];
    int ch;

    
    printf("Enter name:");
    gets(name);
    y=strlen(name);

    for(i=0;i<y;i++)
    {
        if(i%2==0)
        {
        printf("%c",tolower(name[i]));
        }
        else
        {
        printf("%c",toupper(name[i]));
        }
    }
}
