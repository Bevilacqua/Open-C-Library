//
//  Mathematics.h
//  Open C Library
//
//  Created by Abhishek Munie on 19/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef Open_C_Library_Mathematics_h
#define Open_C_Library_Mathematics_h

int lcm2(int num1,int num2);
int lcm2s(int num1,int num2);
int lcm(int a[],int n);
void printDivide(long dividend, long divisor, long decimalPlace);
char *getDivide(long dividend, long divisor, unsigned long decimalPlace);
int revnum(int n);
int countDigits(long int num);
int hexConvertdec(int number);
float interestCompound(float c,float r,float n,float time)

#endif