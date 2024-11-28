#include<stdio.h>

int main()
{
    int n,*ptr;
    printf("enter num:");
    scanf("%d",&n);
    ptr=&n;
    printf("square of num=%d \n",(*ptr)*(*ptr));
    printf("cube of num=%d \n",(*ptr)*(*ptr)*(*ptr));
}