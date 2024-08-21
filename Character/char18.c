#include<Stdio.h>
#include<string.h>
main()
{
    int y,i,k=0,m=0;
    char name[200];
    char name2[100]={""};
    char name3[100]={""};
    char ch;
    

    printf("Enter name:");
    gets(name);
    y=strlen(name);

    for(i=0;i<y;i++)
    {
        ch=name[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
        name2[k]=ch;
        k++;
        }
        else
        {
        name3[m]=ch;
        m++;
        }
            
    }
        printf("\n Old=%s",name);
        printf("\n New=%s",name2);
        printf("\n Others=%s",name3);
    
}