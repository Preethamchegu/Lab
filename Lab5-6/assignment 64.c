#include<stdio.h>
int main()
{
int A[3][3],i,j,k;
for(i=0;i<3;i++){ for(j=0;j<3;j++){
printf("enter number (%d,%d)",i,j);
 scanf("%d",&A[i][j]);
}
}
for(i=0;i<3;i++){
k=0;
for(j=0;j<3;j++){
k=k+A[i][j]; }
printf("sum of row %d %d \n",i+1,k);
}

}