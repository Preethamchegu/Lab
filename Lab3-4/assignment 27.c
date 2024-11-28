#include<stdio.h>

int main()
{ int n,t,i;
   printf("enter number");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   { 
    if(n%i==0)
    {
    break;
    }
    
   } 
    if(i<n)
    {
    printf(" not a prime number");
    }
    else
    {printf("  prime number");}
    
     
    
   
   

}