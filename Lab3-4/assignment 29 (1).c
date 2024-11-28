#include<stdio.h>

int main()
{
   int num,sum=0,temp;
   printf("enter num=");
   scanf("%d",&num);
   temp=num;
   
   while(num!=0)
   { sum=sum*10+(num%10);
     num=num/10;
   }
   printf("reverse number=%d",sum);
   if (temp==sum)
  { printf("\nnum is palindrome",sum);} 
  else
  {printf("\nnot a palindrome");}
     
}     