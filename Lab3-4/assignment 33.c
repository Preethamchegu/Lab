#include<stdio.h>

int main()
{   int N,num,max,min;
    printf("enter how many numbers you want to check: ");
    scanf("%d",&N);
    printf("enter num 1:");
    scanf("%d",&num);
    max=min=num;
    for(int i=2;i<=N;i++)
    {printf("\nenter num %d:",i);
     scanf("%d",&num);
     if(num>=max)
     { max=num;}
     else if (num<min)
     { min=num;}
     }
     printf("\nmax=%d",max);
     printf("\nmin=%d",min);
     
}