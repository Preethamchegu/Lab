#include<stdio.h>

int main()
{
   int n,s=0,t=0;
   printf("enter num");
   scanf("%d",&n);
   
   while(n!=0)
   {s=s+(n%10);
     n=n/10;}
    while(s!=0)
    {t=t+(s%10);
     s=s/10;} 
  
   printf("sum of the digits=%d",t);  
   
     
}     