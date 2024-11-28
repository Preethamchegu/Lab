#include<stdio.h>

int main()
{
 double a,b;
 char operator ;
 printf("\n enter operator like +,-,*,/ =");
 scanf("%c",&operator);
 printf("enter a=");
 scanf("%lf",&a);
 printf("\nenter b=");
 scanf("%lf",&b);
 
 
 switch(operator)
 {
 case '+':printf("result= %lf",a+b); 
        break;
 case '-':printf("result=%lf  ",a-b) ;
        break;
 case '*':printf("result=%lf",a*b) ;
        break;
 case '/':printf("result=%lf",a/b);
 }      

} 