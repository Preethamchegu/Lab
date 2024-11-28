#include<stdio.h>
int main()
{
int a[15],b[15],c,i,n;
printf(" 1st array \n");
for(i=0; i< 10 ;i++)
{printf("enter a number %d=", i + 1 );
scanf("%d",&n);
a[i]=n;}
printf(" 2nd array \n");
for(i=0;i<10;i++)
{printf("enter a number %d=", i + 1 );
scanf("%d",&n);
b[i]=n;}
for( i = 0 ; i< 10 ;i++)
{c=a[i];
 a[i]=b[i];
 b[i]=c;

}
printf(" 1st array after swapping \n");
for(i=0; i< 10 ;i++)
{printf(" %d", a[i] );}
printf("\n");
printf(" 2nd array after swapping ");
for(i=0; i< 10 ;i++)
{printf(" %d", b[i] );}

}
