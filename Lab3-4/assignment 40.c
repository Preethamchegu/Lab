#include<stdio.h>

int main()
{
   int n,i=0;
   printf("enter num");
   scanf("%d",&n);
   
   while(n>=0)
   {i=i+n;
   printf("enter num");
   scanf("%d",&n);
   }
   printf("sum of numbers %d",i);
     
}     