#include<stdio.h>
#include<ctype.h>
main()
{

FILE *f1,*f2;
char ch;
int u=0;

f1=fopen("c:\\log\\abc.txt","r");
f2=fopen("c:\\log\\abc2.txt","w");

while(ch!=EOF)
{
    ch=getc(f1);
    putc(ch,f2);
}
printf("\nCopied!");

}