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
 (a>c && a>b)? printf("\na"):printf(" ");
 (b>c && b>a)? printf("\nb"):printf(" ");
 (c>b && c>a)? printf("\nc"):printf(" ");
 
  return 0;



} 