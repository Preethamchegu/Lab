#include<stdio.h>

int main()
{
   int num,sum=0,temp;
   printf("enter num=");
   scanf("%d",&num);
   temp=num;
   
   while(num!=0)
   { sum=sum+(num%10)*(num%10)*(num%10);
     num=num/10;
   }
   printf("sum of its digits cube=%d",sum);
   if (temp==sum)
  { printf("\nnum is armstrong",sum);} 
  else
  {printf("\nnot a armstrong");}
     
}     