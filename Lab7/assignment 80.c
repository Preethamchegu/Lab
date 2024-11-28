#include<stdio.h>
void fibonacci(int n)
{ int a=0,b=1,f,i;
  printf("%d ",a); 
  printf("%d ",b);
  for(i=2;i<n;i++)
  {
   f=a+b;
   a=b;
   b=f;
   printf("%d ",f);
  }
 }
int main()
{
  int n;
  printf("how many fibonacci terms you want");
  scanf("%d",&n);
  fibonacci(n);
}