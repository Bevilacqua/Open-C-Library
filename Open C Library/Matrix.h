//
//  Matrix.h
//  Open C Library
//
//  Created by Abhishek Munie on 19/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Open_C_Library_Matrix_h
#define Open_C_Library_Matrix_h

void addMatrix(int *A,int *B, int *Sum,int r, int c);
void substractMatrix(int*A,int *B, int *Diff,int r, int c);
void multiplyMatrix(int A[][INT_MAX],int B[][INT_MAX], int Product[][INT_MAX],int r1, int c1, int r2);
int *transposeMatrix(int A[][INT_MAX],int r, int c);
void mirrorMatrix(int A[][INT_MAX],int r, int c);
int *cofactor(int A[][INT_MAX],int i, int j);
long determinantMatrix(int A[][INT_MAX],int s);

#endif