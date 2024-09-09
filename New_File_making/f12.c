#include<stdio.h>
#include<ctype.h>
main()
{

FILE *f1,*f2;
char ch;
int u=0;

f1=fopen("c:\\log\\try1.txt","r");
f2=fopen("c:\\log\\try6.txt","w");

while(ch!=EOF)
{
    ch=getc(f1);
    if(ch!=' ')
    {
    putc(ch,f2);
    }
    else
    {
    putc('7',f2);
    }
}
printf("\nCopied!");

}