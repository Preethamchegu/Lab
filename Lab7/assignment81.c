#include<stdio.h>
void prime(int n)
{ int i ;
  if(n==1)
  { printf("neither prime nor composite");}
  else
{  for(i=2;i<=n;i++)
 {
  { if(n%i==0)
   break;
  }
 } 
  if(i<n)
  {printf("0");}
  else
  {
  printf("1");
  }
 } 

 
 
 }
int main()
{
  int n;
  printf("enter num=");
  scanf("%d",&n);
  prime(n);
}