#include<stdio.h>
int main()
{
int A[3][3],i,j,B[3][3];
for( i = 0 ;i<3;i++){
for(j=0;j<3;j++){
printf("enter number (%d,%d)",i,j); 
scanf("%d",&A[i][j]);
}
}
for(i = 0;i < 3;i++){
for(j=0;j<3;j++){
printf("%d", A[i][j]);
}
printf("\n");
}
printf("\n");
for(i = 0 ;i<3;i++)
{ for(j=0;j<3;j++)
{
B[j][i]=A[i][j];
}
}
for( i = 0 ; i < 3 ;i++){
for(j=0;j<3;j++){
printf("%d",B[i][j]);
}
printf("\n");
}

}