#include<stdio.h>

int main()
{
   int n,i,e=0,f,o=0;
   
   printf("number="); 
   scanf("%d",&n);
   for(i=0;i<=n;i=i+2)
      {e=e+i;}
      printf("sum of even numbers=%d",e);
   for(f=1;f<=n;f=f+2)
      {o=o+f;}
      printf("\nsum of even numbers=%d",o);
   
   
     
     
}     