#include<stdio.h>
int main()
{   int i,n,c;
    printf("no. of elements in array");
    scanf("%d",&n);
    int A[n];
    printf(" enter sorted and rotated array \n");
    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",A+i);

    }
     for(i=0;i<n;i++)
    {
       if(A[i]>A[i+1])
       {
          c=A[i+1];
          break;
       }

    }
    printf(" pivot element is %d",c);
    




}