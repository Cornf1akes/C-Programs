#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *f1,*f2,*f3;

    char ch,ch1;

    f1=fopen("c:\\log\\try1.txt","r");
    f2=fopen("c:\\log\\try2.txt","r");
    f3=fopen("c:\\log\\try8.txt","w");

while(ch!=EOF)
{
    ch=getc(f1);
    putc(ch,f3);
}
while (ch1!=EOF)
{
    ch1=getc(f2);
    putc(ch1,f3);
}
fclose(f1);
printf("\nCopied!");
}