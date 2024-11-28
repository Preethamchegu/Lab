#include<stdio.h>

int main()
{
    int p;
    double r ;
    int t ;
    printf("enter p=");
    scanf("%d",&p);
    printf("\nenter r=");
    scanf("%lf",&r);
    printf("\nenter t=");
    scanf("%d",&t);
    double SI;
    SI= p*t*r/100;
    printf("\nSI=%lf",SI);
}
