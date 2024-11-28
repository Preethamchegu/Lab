#include<stdio.h>

int main()

{

int A[3][3],i,j,k,l,c;

for(i=0;i<3;i++){

for(j=0;j<3;j++){

printf("enter number (%d,%d)",i,j); scanf("%d",&A[i][j]);

}

}

for(i=0;i<3;i++){

for(j=0;j<3;j++){

for(k=0;k<i;k++){

for(l=0;l<j;l++){

if(A[i][j]>A[k][l])

{ c=A[i][j]; A[i][j]=A[k][l]; A[k][l]=c; }

}

}

}
}

printf("maximum number=%d\n",A[0][0]); 
printf("minimum number=%d", A[2][2]);
}