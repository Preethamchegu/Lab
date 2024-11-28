#include<stdio.h>

int main()
{
    int a;
    int b;
    
    
    
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping a=%d",a);
    printf("\nafter swapping b=%d",b);
    
}