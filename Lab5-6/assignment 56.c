#include<stdio.h>
int main()
{int i,n,l=0,m=0,p=0;
int a[15];
for(i=0;i<10;i++)
{printf("enter a number %d=",i+1);
scanf("%d",&n);
a[i]=n;}
for(i=0;i<10;i++)
{ if (a[i]>0)
 { l=l+1;}
else if (a[i]<0) 
{ m=m+1;}
 else
{p=p+1;}

}
printf("%d=positive number \n",l);
printf("%d=negative number \n",m);
printf("%d=zero\n", p);
}