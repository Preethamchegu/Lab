#include<stdio.h>

int main()
{
   float n,c;
   printf("no.of units=");
   scanf("%f",&n);
   if(n>0 && n<=200)
   { c=n*(0.5);
     printf("charge=%f",c);
   }  
   if(n>201 && n<=400)
   { c=100+0.65*(n-200);
     printf("charge=%f",c);
   }  
   if(n>401 && n<=600)
   { c=230+0.8*(n-400);
     printf("charge=%f",c);
   } 
   if(n>600)
   { c=425+1.25*(n-600);
     printf("charge=%f",c);
   }  



}