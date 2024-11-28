#include<stdio.h>

int main()
{
    int A[1000],i,n,B[1000];
printf("size of array=");
scanf("%d",&n);
for ( i = 0 ; i < n ;i++){
printf("enter number % d = ", i + 1 ) ; 
scanf("%d",&A[i]); }
for( i = 0; i < n ;i++)
{ B[(n - 1) - i] = A[i] ; }
for(i=0;i<n;i++){
printf("number % d = ",i+1);
printf("%d \n", B[i] ) ;

}
}