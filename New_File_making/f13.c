#include<stdio.h>
main()
{

FILE *f1,*f2;
char ch;

f1=fopen("c:\\log\\try1.txt","r");
f2=fopen("c:\\log\\try7.txt","w");

while(ch!=EOF)
{
    ch=getc(f1);
    

    if(ch!='a'&& ch!='e'&& ch!='i'&& ch!='o'&& ch!='u')
    {
    putc(ch,f2);
    
    }

}
fclose(f1);
printf("\nCopied!");
}