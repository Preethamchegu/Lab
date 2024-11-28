#include<stdio.h>
int main()
{   char X[15000],i,*ptr,count=0;
    printf("enter your string");
    gets(X);
    for(i=0; i<15000; i++)
    {
        ptr=X+i;
        if(*ptr=='\0')
        {
            break;
        }
       count++ ;
    }
    printf("%d",count);



}
