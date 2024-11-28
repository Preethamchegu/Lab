#include<stdio.h>
#define MAX(a,b) ((a>b)? a:b)

int main()
{   
    int a,b;
    printf("enter two numbers a & b");
    scanf("%d %d",&a,&b);
    printf("MAX=%d",MAX(a,b));    
    
}    