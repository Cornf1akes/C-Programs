#include<Stdio.h>
int main()
{
    int ar[]={11,50,6,9,23,45,11,70,11,22,20,7,55,21};
    int n=14,i,s=0,c1=0,c2=0;
    
    for(i=0;i<n;i++)

    if(ar[i]%2==0)
    {
    printf("\nThe no is even");
    c1++;
    s=s+ar[i];
    
    }
    else 
    {
    printf("\nThe no is odd");
    c2++;
    s=s+ar[i];
    }
    printf("\n***********************************");
    printf("\n\nThe sum of the numbers =%d",s);
    printf("\n\nThe number of even numbers =%d",c1);
    printf("\n\nThe number of odd numbers =%d",c2);
}
