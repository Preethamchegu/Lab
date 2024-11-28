#include<stdio.h>
void comp(int r,int A[r])
{ int i,c;
 for(i=1;i<r;i++)
 {
  if(A[0]<A[i])
  {
   c=A[0];
   A[0]=A[i];
   A[i]=c;
  }
 }
 printf("max number=%d",A[0]);
   
}  
int main()
{ int r;
  printf("enter no of element want to  compare:");
  scanf("%d",&r);
  int i,A[r];
 
 for(i=0;i<r;i++)
 { 
  scanf("%d",&A[i]);
 }
 comp(r,A);
}