#include<stdio.h>

int main()
{
    char A[15000],*ptr,i;
    int j;
    gets(A);
    j=strlen(A);
    ptr=A+j-1;
    char B[j];
    for(i=0;i<j;i++)
    {
        B[i]=*ptr; 
        ptr--; 
    }
    for(i=0;i<j;i++)
    {
        printf("%c",B[i]);
    }
}