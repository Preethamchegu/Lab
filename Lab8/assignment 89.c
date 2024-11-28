#include<stdio.h>
int main()
{   int n,i,*ptr;
    printf("enter no of elements in array "); 
    scanf("%d",&n);
    printf("enter elements \n");
    int A[n],B[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<n;i++)
    {
        ptr=A+(n-1)-i;
        B[i]=*ptr;
    } 
    for(i=0;i<n;i++)
    {
        printf("\n %d",B[i]);
    }   
    
    
    
    
}   
    