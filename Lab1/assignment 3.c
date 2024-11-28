#include<stdio.h>

int main()
{
    int BS;
    int HRA;
    int OA;
    int GS;
    
    printf("enter basic salary");
    scanf("%d",&BS);
    printf("enter HRA");
    scanf("%d",&HRA);
    printf("enter Other allowances");
    scanf("%d",&OA);
    GS=BS+HRA+OA;
    printf("GROSS SALARY= %d",GS);





}