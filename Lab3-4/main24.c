#include<stdio.h>

int main()
{
   int n;
   double y,x;
   printf("x="); 
   scanf("%lf",&x);
   printf("n="); 
   scanf("%d",&n);
   switch(n)
   {
   case 1:y=1+x;
         printf("y=%lf", y);
         break;
   case 2:y=1+x/2;
         printf("y=%lf",y);
         break;
   case 3:y=1+(x*x*x);
         printf("y=%lf",y);
         break;
   }
   if(n>3 || n<1)
   { 
   y=1+n*x;
   printf("y=%lf",y); 
   }
    return 0;
}
