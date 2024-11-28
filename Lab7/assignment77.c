#include<stdio.h>
void palindrome(int n)
{ 
 int i=0,temp;
 temp=n;
 while(n>0)
 {
  i=i*10+n%10;
  n=n/10;
 }
 if(temp==i)
 {printf("palindrome");}
 else
 {printf("not a palindrome");}
 
}
 


int main()
{
  int s;
  printf("enter num=");
  scanf("%d",&s);
  palindrome(s);
    
}