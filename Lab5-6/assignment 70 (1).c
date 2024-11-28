#include<stdio.h>
int main()
{
int i,n,k,f=0;
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
 { 
   f=f+1;}
   
 }
 if(f>0)
 {printf("your number %d is %d times in array \n",k,f);}
  if(f==0)
{ printf("your number is not 🚫 in array");}
 
 }
 
 