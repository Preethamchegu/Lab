#include<stdio.h>
int main()
{
    int A[3][3],i,j,B[3][3],C[3][3],k;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {

            printf("enter number (%d,%d)",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("maitrice A=");
    printf("\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf(" now  matrix B \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("enter number (%d,%d)",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
    {   
        for(j=0; j<3; j++)
        { C[i][j]=0;
         for(k=0; k<3; k++)
           { C[i][j]=C[i][j]+A[i][k]*B[k][j];}
        }
        
    }
    
    
    printf("multiple of A×B");
    printf("\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }












}