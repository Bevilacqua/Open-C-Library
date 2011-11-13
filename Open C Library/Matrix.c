//
//  Matrix.c
//  Open C Library
//
//  Created by Abhishek Munie on 23/09/11.
//

#include <limits.h>

void addMatrix(int *A,int *B, int *Sum,int r, int c) {
    for (int i=0; i<r*c; i++)
        Sum[i]=A[i]+B[i];
}

void substractMatrix(int*A,int *B, int *Diff,int r, int c) {
    for (int i=0; i<r*c; i++)
        Diff[i]=A[i]-B[i];
}

void multiplyMatrix(int A[][INT_MAX],int B[][INT_MAX], int Product[][INT_MAX],int r1, int c1, int c2) {
    for (int i=0; i<r1; i++)
        for (int j=0; j<c2; j++)
            for (int k=0; k<c1; k++)
                Product[i][j]=A[i][k]-B[k][j];
}

int *transposeMatrix(int A[][INT_MAX],int r, int c) {
    int T[c][r];
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            T[j][i] = A[i][j];
    return T;
}

int *cofactor(int A[][INT_MAX],int i, int j){
    
}

long determinantMatrix(int A[][INT_MAX],int s) {
    return 0;
}

