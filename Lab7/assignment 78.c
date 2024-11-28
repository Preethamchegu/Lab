#include<stdio.h>
void palindrome(int n)
{ 
 int i=0,temp;
 temp=n;
 while(n>0)
 { int q=n%10;
  i=i+(q*q*q);
  n=n/10;
 }
 if(temp==i)
 {printf("armstrong number");}
 else
 {printf("not a armstrong number");}
 
}
 


int main()
{
  int s;
  printf("enter num=");
  scanf("%d",&s);
  palindrome(s);
    
}