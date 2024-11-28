#include<stdio.h>
int main()
{
int i,n1,n2,j,k;

printf("size of first array");
scanf("%d",&n1);
int a[999999];
for(i=0;i<n1;i++)
{printf("enter a number %d=",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
 {for(j=i+1;j<n1;j++)
{
if (a[i]>a[j])
 { k=a[i]; 
 a[i]=a[j]; 
 a[j]=k;}
 
}
}


printf("size of second array:");
scanf("%d",&n2);
int b[999999];
for(i=0;i<n2;i++)
{printf("enter a number %d=",i+1);
scanf("%d",&b[i]);
}
for(i=0;i<n2;i++)
 {for(j=i+1;j<n2;j++)
{
if (b[i]>b[j])
 { k=b[i]; 
 b[i]=b[j]; 
 b[j]=k;}
}
}

for(i=0;i<n2;i++)
{ a[n1+i]=b[i];}


 
for(i=0;i<n1+n2;i++)
{
  for(j=i+1;j<n1+n2;j++)
  {
if(a[i]>a[j])
 { k=a[i]; 
 a[i]=a[j]; 
 a[j]=k;}
  }
}

for(i=0;i<n1+n2;i++)
{
printf("%d ",a[i]);
}



}