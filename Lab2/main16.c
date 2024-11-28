#include<stdio.h>

int main()
{
 int a,b,c;
 printf("enter a=");
 scanf("%d",&a);
 printf("\nenter b=");
 scanf("%d",&b);
 printf("\nenter c=");
 scanf("%d",&c);
 if(a>b)
 {
 if(a>c)
 {printf("\na");} // this all only when 1 statement true
 else 
 {printf("\nc");} // this also
  }
  else if (b>c)
  {printf("b");} // this all when 1 is false
  
  else 
  {printf("c");}// this also



} 
