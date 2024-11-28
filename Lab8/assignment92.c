#include<stdio.h>

int main()
{
    int *max,n,i;
    printf("enter no. of elements:");
    scanf("%d",&n);
    int A[n];
    printf("enter numbers:");
    for(i=0; i<n; i++)
    {
        scanf("%d",A+i);
    }
    max=A+0;
    for(i=0; i<n; i++)
    {
        if(*max<A[i])
        {
            max=A+i;
        }
    }
    printf("max value=%d",*max);


}