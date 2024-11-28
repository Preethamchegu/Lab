#include<stdio.h>

int main()
{
    char X[15000],*ptr,i,w=0;
    printf("enter string:");
    gets(X);
    ptr=X;
    for(i=0; i<15000; i++)
    {
        if( *ptr != ' ' && *ptr != 0 && *(ptr+1) == ' ' )
        {
            w++;
        }
        ptr++;
        
        if(*ptr == 0 )
        {
            break;
        }
        if(*ptr == ' ' &&  *(ptr+1) == '\0' )
        {
            w--;
        }
    }
    printf("no. of words in sentence is=%d",w+1);

}