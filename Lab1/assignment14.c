#include<stdio.h>

int main()
{
 char a;
 printf("a=");
 scanf("%c",&a);
 if(a>=65 &&a<=90)
 {printf("\nupper case letter");}
 else if(a>=97 &&a<=122)
 {printf("\nlower case letter");}
 else if (a>=48 &&a<=57)
 {printf("\n digit");}
 else
 {printf("special symbol");}
 





}