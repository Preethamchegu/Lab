#include<stdio.h>
void fact(int n,int r)
{ int q=1,p=1,m=1,i,ncr;
  for(i=0;i<n;i++)
  {
    q=q*(n-i);
  }
  for(i=0;i<r;i++)
  {
    p=p*(r-i);
  }
  for(i=0;i<n-r;i++)
  {
    m=m*(n-r-i);
  }
  ncr=q/(p*m);
  printf("%d",ncr);
  

  
}
int main()
{ int n,r;
 printf("enter n in ncr");
 scanf("%d",&n);
 printf("enter r in ncr");
 scanf("%d",&r);
 fact(n,r);
}