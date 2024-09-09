#include<stdio.h>
main()
{

FILE *f1;
char ch;

f1=fopen("c:\\log\\abc.txt","r");

while(ch!=EOF)
{
    ch=getc(f1);
    if(ch!='a'&& ch!='e'&& ch!='i'&& ch!='o'&& ch!='u')
    {
        printf("%c",ch);
    }
    else
    {
        printf("%d",7);
    }

}

fclose(f1);

}