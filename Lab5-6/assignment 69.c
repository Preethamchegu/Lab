#include<stdio.h>
int main()
{
int i,n,k;
 int a[999];
 printf("size of array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{printf("enter a number %d=",i+1);
scanf("%d",&a[i]);
}
printf("number you have to search=");
scanf("%d",&k);
for(i=0;i<n;i++){
 if(a[i]==k)
 { printf("your number %d in %d position ",k,i+1);}
 }
 }
