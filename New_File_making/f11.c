#include<stdio.h>
main()
{

FILE *f1,*f2,*f3;
char ch;

f1=fopen("c:\\log\\try1.txt","r");
f2=fopen("c:\\log\\try4.txt","w");
f3=fopen("c:\\log\\try5.txt","w");

while(ch!=EOF)
{
    ch=getc(f1);
    

    if(isupper(ch))
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