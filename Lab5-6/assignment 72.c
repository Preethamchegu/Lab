#include<stdio.h>

int main()
{ int n,a[99999],i,s,j,c,k;
printf("enter size of array=");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
 printf("enter num %d=",i+1);
 scanf("%d",&a[i]);
 }
 printf("before rotating \n");
 
 for(i=0;i<n;i++)
 {
 printf( "%d",a[i]);
 }
 printf("\nno. of shifts=");
 scanf("%d",&s);
 for(k=0;k<s;k++)
  { i=n-1;
  for(j=0;j<n;j++)
   { c=a[i];
     a[i]=a[j];
     a[j]=c;
   }
  }  
 printf("After rotating \n");
 printf("\n");
 for(i=0;i<n;i++)
 {
 printf( "%d",a[i]);
 }
} 