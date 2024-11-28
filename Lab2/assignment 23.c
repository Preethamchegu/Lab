#include<stdio.h>

int main()
{
  float n ,i=1,t=1;
  int p;
  
  printf("enter a number=");
  scanf("%f",&n);
  printf("enter a power=");
  scanf("%d",&p);
  while (i<=p)
  { t=t*n;
    i++;
   }
   printf("%f",t);
   
}