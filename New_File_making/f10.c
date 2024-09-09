#include<stdio.h>
main()
{

FILE *f1,*f2,*f3;
char ch;

f1=fopen("c:\\log\\try1.txt","r");
f2=fopen("c:\\log\\try2.txt","w");
f3=fopen("c:\\log\\try3.txt","w");

while(ch!=EOF)
{
    ch=getc(f1);
    

    if(ch!='a'&& ch!='e'&& ch!='i'&& ch!='o'&& ch!='u')
    {
    putc(ch,f2);
    
    }
    else
    {
    putc(ch,f3);

    }

}
fclose(f1);
printf("\nCopied!");
}