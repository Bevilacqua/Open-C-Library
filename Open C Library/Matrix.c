//
//  Matrix.c
//  Open C Library
//
//  Created by Abhishek Munie on 23/09/11.
//

#include <limits.h>

void addMatrix(int A[][INT_MAX],int B[][INT_MAX], int Sum[][INT_MAX],int r, int c);
void substractMatrix(int A[][INT_MAX],int B[][INT_MAX], int Diff[][INT_MAX],int r, int c);
void multiplyMatrix(int A[][INT_MAX],int B[][INT_MAX], int Product[][INT_MAX],int r1, int c1, int r2);
void transposeMatrix(int A[][INT_MAX],int r, int c);
void mirrorMatrix(int A[][INT_MAX],int r, int c);
void determinantMatrix(int A[][INT_MAX],int r, int c);

void addMatrix(int A[][INT_MAX],int B[][INT_MAX], int Sum[][INT_MAX],int r, int c) {
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            Sum[i][j]=A[i][j]+B[i][j];
}

void substractMatrix(int A[][INT_MAX],int B[][INT_MAX], int Diff[][INT_MAX],int r, int c) {
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++)
            Diff[i][j]=A[i][j]-B[i][j];
}

void multiplyMatrix(int A[][INT_MAX],int B[][INT_MAX], int Product[][INT_MAX],int r1, int c1, int c2) {
    for (int i=0; i<r1; i++)
        for (int j=0; j<c2; j++)
            for (int k=0; k<c1; k++)
                Product[i][j]=A[i][k]-B[k][j];
}

void transposeMatrix(int A[][INT_MAX],int r, int c) {
    int temp;
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++){
            temp = A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
}

void determinantMatrix(int A[][INT_MAX],int r, int c) {
    int temp;
    for (int i=0; i<r; i++)
        for (int j=0; j<c/2; j++){
            temp = A[i][j];
            A[i][j]=A[i][c-1-j];
            A[i][c-1-j]=temp;
        }
}