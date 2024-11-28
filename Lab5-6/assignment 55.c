#include<stdio.h>
int main()
{
int i,n,k=0,f=0;
 int a[15];
 for(i=0;i<10;i++)
{printf("enter a number %d=",i+1);
scanf("%d",&n);
a[i]=n;}
for(i=0;i<10;i++)
{ if (a[i]%2==0)
 { 
   k=k+1;}
 
else
{
  f=f+1;

}

}
printf("even number=%d \n",k);
printf("odd number=%d \n",f);
}