#include<stdio.h>
void swap(int x,int y)
{ 
 int c;
 c=x;
 x=y;
 y=c;
 printf("x=%d \n",x);
 printf("y=%d",y);
 }
int main()
{
  int x,y;
  printf("enter x=");
  scanf("%d",&x);
  printf("enter y=");
  scanf("%d",&y);
  swap(x,y);
    
}