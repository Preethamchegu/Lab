#include <stdio.h>
int main() {
    int n,*p;
    p=&n;
    printf("enter num:");
    scanf("%d",&n);
    printf("before modification %d\n",n);
    *p=10;
    printf("after modification %d",n);
    
    



}