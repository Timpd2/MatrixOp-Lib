#include <stdlib.h>
#include "vectorOp.h"

int** mAdd(int A[3][3], int B[3][3])
{
    int **C = malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        C[i] = malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

int** mSub(int A[3][3], int B[3][3])
{
    int **C = malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        C[i] = malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

int** mEW_Mul(int A[3][3], int B[3][3])
{
    int **C = malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        C[i] = malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] * B[i][j];
        }
    }
    return C;
}
