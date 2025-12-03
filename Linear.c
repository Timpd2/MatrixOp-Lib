#include <stdlib.h>
#include "vectorOp.h"

int** mMult(int A[3][3], int B[3][3])
{
    int **C = malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        C[i] = malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int** mTranspose(int A[3][3])
{
    int **C = malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; i++) {
        C[i] = malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[j][i];
        }
    }
    return C;
}
//這是廖詠頡的部分(Linear)，因電腦損毀無法使用，故與組員共用電腦撰寫 ID:bigdman67676767