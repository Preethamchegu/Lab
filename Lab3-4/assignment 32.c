

#include<stdio.h>

int main()
{int num, N,i,max1, max2 ;
printf("enter how many numbers you want to compare=");
scanf("%d",&N);
printf("enter num 1=");
scanf("%d",&num);
max1=num;
max2=-2147483648;
for(i=2;i<=N;i++)
{
printf("enter num %d=",i);
scanf("%d",&num);
if(num>max1)
{max2 = max1;
 max1=num;

}

else if (num>max2 && num<max1)
{
max2=num;}
 }

printf("maximum 1=%d\n", max1);
printf("maximum 2=%d\n", max2);

}