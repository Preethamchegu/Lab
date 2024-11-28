#include<stdio.h>
int main()
{   int n,i,*ptr;
    printf("enter elements in array"); 
    scanf("%d",&n);
    printf("enter elements");
    int A[n],B[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<n;i++)
    {
        ptr=A+i;
        B[i]=*ptr;
    } 
    for(i=0;i<n;i++)
    {
        printf("%d",B[i]);
    }   
    
    
    
    
}   
    
