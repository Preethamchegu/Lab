#include<stdio.h>

int main()
{
    int i=0,t=1,f;
    printf("%d,%d",i,t);
    while(f<=300)
    { f=i+t;
      printf(",%d",f);
      i=t;
      t=f;}
      
     
    return 0;

}   