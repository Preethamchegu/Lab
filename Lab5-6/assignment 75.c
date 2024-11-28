#include <stdio.h>

int main() 
{
    int A[10][5], i, j, tot, max, index;

    
    for (i = 0; i < 10; i++) {
        tot = 0;
        printf("Roll %d: \n", i + 1);
        for (j = 0; j < 3; j++) {
            A[i][0] = i + 1;
            printf("Enter sub %d marks: ", j + 1);
            scanf("%d", &A[i][j + 1]);
            tot += A[i][j + 1];
        }
        A[i][4] = tot;
    }

    
    for (i = 0; i < 10; i++) {
        printf("Total marks by roll %d = %d \n", i + 1, A[i][4]);
    }

    
    for (j = 1; j < 4; j++) {
        max = A[0][j];
        for (i = 0; i < 10; i++) {
            if (max < A[i][j]) {
                max = A[i][j];
            }
        }
        printf("High mark in sub %d = %d \n", j, max);
        for (i = 0; i < 10; i++) {
            if (A[i][j] == max) {
                printf("Roll no: %d \n", i + 1);
            }
        }
    }

    
    max = A[0][4];
    index = 1;
    for (i = 0; i < 10; i++) {
        if (max < A[i][4]) {
            max = A[i][4];
            index = i + 1;
        }
    }
    printf("Highest in total is roll no: %d", index);

    return 0;
}
