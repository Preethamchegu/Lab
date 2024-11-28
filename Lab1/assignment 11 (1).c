#include<stdio.h>

int main()
{
    int a;
    printf("enter time in seconds:");
    scanf("%d",&a);
    int b=a%3600/60;
    int c=a%86400/3600 ;
    int d=a/86400;
    int e=a%60;
    printf("time taken by earth for one revolution ");
    printf("\nDays hours minutes seconds %d %d %d %d",d,c,b,e);
    




}