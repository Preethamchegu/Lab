#include<stdio.h>
int main()
{
int i,n,j,k;
printf("enter how many numbers you have to compare");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{printf("enter a number %d=",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
 {for(j=i+1;j<n;j++)
{
if (a[i]<a[j])
 { k=a[i]; a[i]=a[j]; a[j]=k;}
}
}
printf("first max=%d\n", a[0]);
printf("second max=%d", a[1]);
}