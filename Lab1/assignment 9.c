#include<stdio.h>

int main()
{
double hr;
double min;
double sec;
double tot;

printf("enter time in hours min sec  ");
scanf("%lf%lf%lf",&hr, &min,&sec);
tot=hr*3600+min*60+sec;
printf("total time in seconds=%lf", tot);

}