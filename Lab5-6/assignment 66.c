#include<stdio.h>
int main()
{
int A[3][3],i,j,B[3][3],C[3][3];
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("enter number (%d,%d)",i,j); 
scanf("%d",&A[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d ", A[i][j]);
}
printf("\n");
}
printf(" now 2nd matrix\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){ 
printf("enter number (%d,%d)",i,j); 
scanf("%d",&B[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d ",B[i][j]);
}
printf("\n");
}
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 { C[i][j]=A[i][j]+B[i][j];}
 
 printf("addition of matrices1&2=");
 printf("\n");
 
 for(i=0;i<3;i++){
for(j=0;j<3;j++){ 
printf("%d ",C[i][j]); 
}
printf("\n");
}
 
 
 
 
 
 
 
 
 
 
}