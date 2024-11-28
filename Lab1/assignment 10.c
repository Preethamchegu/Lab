#include<stdio.h>

int main()
{
double math;
double phy;
double che;
double ent;
double CM;
printf("enter math phy che entrance ");
scanf("%lf%lf%lf%lf",&math, &phy,&che, &ent);
CM=math/2+phy/2+che/2+ent;
printf("cut off marks=%lf", CM);

}