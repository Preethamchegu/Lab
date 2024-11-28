#include<stdio.h>

int main()
{
   int num,sum=0,temp;
   printf("enter num");
   scanf("%d",&num);
   
   
   while(num!=0)
   { sum=sum+(num%10);
     num=num/10;
   }
   printf("sum of digits=%d",sum); 
     
}     