#include<stdio.h>
#include<string.h>
int main()
{
    char X[15000],*ptr,i,j,count=0;
    printf("enter string:");
    gets(X);
    ptr=X;
    j=strlen(X);
    for(i=0;i<j;i++)
    {
         if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u')
         {count++;} 
          
         ptr++;   
    }
    printf("no.of vowels in given string is:%d",count);
    
}    