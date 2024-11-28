#include<stdio.h>

int main()
{
   float n,c;
   printf("enter sales price=");
   scanf("%f",&n);
   if(n>0 && n<=500)
   { c=n*(0.05);
     printf("commision=%f",c);
   }  
   if(n>500 && n<=2000)
   { c=35+0.1*(n-500);
     printf("commision=%f",c);
   }  
   if(n>2000 && n<=5000)
   { c=185+0.12*(n-2000);
     printf("commision=%f",c);
   } 
   if(n>5000)
   { c=0.125*n;
     printf("commision=%f",c);
   }  



}