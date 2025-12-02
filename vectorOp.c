#include<stdlib.h>
#include"vectorOp.h"
int* vAdd(int *A, int *B,int size)
{
    int *C=malloc(sizeof(int)*size);
    int i = 0;
    for(i = 0;i < size;i++){
        C[i]=A[i]+B[i];
    }
    return C;
}
int* vSub(int *A, int *B,int size)
{
    int *C=malloc(sizeof(int)*size);
    int i = 0;
    for(i = 0;i < size;i++){
        C[i]=A[i]-B[i];
    }
    return C;
}
int* vEW_Mul(int *A, int *B,int size) 
{
    int *C=malloc(sizeof(int)*size);
    int i = 0;
    for(i = 0;i < size;i++){
        C[i]=A[i] * B[i];
    }
    return C;
}