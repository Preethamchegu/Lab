#include<stdio.h>
int main()
{int i,n,sum=0;
int a[15];
for(i=0;i<10;i++)
{printf("enter a number %d=",i+1);
scanf("%d",&n);
a[i]=n;}
for(i=0;i<10;i++)
{ sum=sum+a[i];}
printf("%d",sum);
}