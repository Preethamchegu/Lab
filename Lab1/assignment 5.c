#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    
    
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    c=a;//now a valu goes to c ,a becomes empty//
    a=b;// now b value goes to a ,b becomes empty//
    b=c;//as above//
    printf("\nafter swapping a=%d",a);
    printf("\nafter swapping b=%d",b);
    
}