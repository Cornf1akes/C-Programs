#include<stdio.h>
main()
{

FILE *f1;
char ch;
int c=0,k=0;

f1=fopen("c:\\log\\abc.txt","r");

while(ch!=EOF)
{
    ch=getc(f1);
    if(isupper(ch))
    {
        c++;
    }
    else if(islower(ch))
    {
        k++;
    }
}

fclose(f1);
printf("\nUpper case = %d",c);
printf("\nLower case=%d",k);
}