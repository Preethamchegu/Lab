#include<stdio.h>

int main()
{
    double c;
    double f;
    
    printf("enter temperature in farenheit");
    scanf("%lf",&f);
    c=5*(f-32)/9;
    printf("celsius= %lf",c);
    
    
}