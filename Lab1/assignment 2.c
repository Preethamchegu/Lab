#include<stdio.h>

int main()
{
int math;
int phy;
double che;
int bio;
int eng;
int total;
double per;
printf("enter math phy che bio eng marks ");
scanf("%d%d%d%d",&math, &phy,&bio, &eng);
printf("enter chemistry marks");
scanf("%lf",&che);
total=math+phy+che+bio+eng;
printf("total=%d", total);
per=total/5;
printf("\npercentage=%1f", per);

}