#include<stdio.h>
int main()
{
int a[15],b[15],c[15],i,n;
for(i=0; i< 10 ;i++)
{printf("enter a number %d=", i + 1 );
scanf("%d",&n);
a[i]=n;}
for(i=0;i<10;i++)
{printf("enter a number %d=", i + 1 );
scanf("%d",&n);
b[i]=n;}
for( i = 0 ; i< 10 ;i++)
{c[i]=a[i]+b[i];
printf("sum of number %d=%d\n", i + 1 ,c[i]);
}
}
