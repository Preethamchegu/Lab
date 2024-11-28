#include<stdio.h>
int main()
{
    int n,c,i,j;
    printf(" elements you want to compare :");
    scanf("%d",&n);
    int A[n];
    printf(" enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {    for(j=0;j<n-1;j++)
         { 
           if(A[j]>A[j+1])
           { 
             c=A[j+1];
             A[j+1]=A[j];
             A[j]=c;
           }  
         }
    }  
        printf("after ascending order ");     
        for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    
    
    
    
    
    
    
    
    
    
}   
    