#include<Stdio.h>
int main()
{
    int ar[]={11,50,6,9,23,45,11,70,11,22,20,7,55,21};
    int no,n=14,i,s=0,c1=0,c2=0;

    printf("Enter any number=>");
    scanf("%d",&no);
    
    for(i=0;i<n;i++)

    if(ar[i]%no==0)
    {
        printf("\n%d",ar[i]);
        c1++;
        s=s+ar[i];
        
    }  
    printf("\nTotal=%d",s); 
    return 0; 
}  