#include<Stdio.h>
#include<string.h>
main()
{
    int y,i,k=0;
    char name[200];
    char name2[100]={""};
    

    printf("Enter name:");
    gets(name);
    y=strlen(name);

    for(i=0;i<y;i++)
    {
        name2[k]=name[i];
        k++;
    }
    printf(" %s",name2);
    
}