#include<stdio.h>
main()
{

FILE *f1;
char ch;
int c=0;

f1=fopen("c:\\log\\abc.txt","r");

while(ch!=EOF)
{
    ch=getc(f1);
    if(ch=='a'||'e'||'i'||'o'||'u')
    {
        c++;
    }
}

fclose(f1);
printf("\nVowels = %d",c);
}