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
if(per>=90)
{
printf("\nA");
}
else if (per>=70 && per<90)
{ 
 printf("\nB");
}
else if ( per>=35 && per<70)
{
 printf("\nC");
}
else 
{
 printf("\nfail");
}







}