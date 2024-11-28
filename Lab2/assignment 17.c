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
 if(a>c && a>b)
 {printf("\na");}
 else  if(b>c && b>a)
 {printf("\nb");}
 else
 {printf("\nc");}
  return 0;



} 