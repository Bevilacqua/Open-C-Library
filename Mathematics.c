000//
//  Mathematics.c
//  Open C Library
//
//  Created by Abhishek Munie on 23/09/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "Mathematics.h"

int lcm2(int num1,int num2) {
    int lcm = 1, i=2;
    while (num1!=1||num2!=1) {
        if (num1%i==0||num2%i==0) {
            lcm *=i;
            if (num1%i==0)
                num1 /= i;
            if (num2%i==0)
                num2 /= i;
            
        }
        if (num1%i&&num2%i)
            i++;
    }
    return lcm;
}

int lcm2s(int num1,int num2) {
    int lcm=0,i=1;
    while (!lcm){
        if (num1*i%num2==0){
            lcm=num1*i;
            break;
        }
        i++;
    }
    return lcm;
}


int lcm(int a[],int n){
    int lcm = a[0];
    for(int i=1;i<n;i++)
        lcm = lcm2(lcm, a[i]);
    return lcm;
}


int countDigits(long int n) {
    int digit = 0;
    while(n){
        digit++;
        n/=10;
    }
    return digit;
}

void printDivide(long dividend, long divisor, long decimalPlace) {
    long a,b,c,d;
    bool h=false;
    bool r=false;
    long f=1;
    while (dividend < divisor) {
        if (!r) {
            printf("0.");
            h = r = true;
        } else {
            printf("0");
            dividend = dividend * 10;
            f++;
        }
    }    a = dividend / divisor;
    if (!h)
        printf("%ld.",a);
    else {
        printf("%ld",a);
        f++;
    }
    b = dividend % divisor;
    while (f <= decimalPlace) {
        c = b * 10;
        while((c < divisor) && (f < decimalPlace)) {
            c = c * 10;
            printf("0");
            f++;
        }
        d = c / divisor;
        printf("%ld",d);
        b = c % divisor;
        f++;
    }
}

char *getDivide(long dividend, long divisor, unsigned long decimalPlace) {
    long a,b,c,d;
    bool h=false;
    bool r=false;
    long f=1;
    char *s = malloc(decimalPlace+countDigits(dividend/divisor)+2);
    while (dividend < divisor) {
        if (!r) {
            sprintf(s,"0.");
            h = r = true;
        } else {
            sprintf(s,"0");
            dividend = dividend * 10;
            f++;
        }
    }    a = dividend / divisor;
    if (!h)
        sprintf(s,"%ld.",a);
    else {
        sprintf(s,"%ld",a);
        f++;
    }
    b = dividend % divisor;
    while (f <= decimalPlace) {
        c = b * 10;
        while((c < divisor) && (f < decimalPlace)) {
            c = c * 10;
            sprintf(s,"0");
            f++;
        }
        d = c / divisor;
        sprintf(s,"%ld",d);
        b = c % divisor;
        f++;
    }
    
    return s;
}

int revnum(int n) {
    int rev = 0;
    while (n) {
        rev = (rev*10) + (n%10);
        n/=10;
    }
    return rev;
}

//This is a WIP COnverts a Hexadecimal into a decimal
int HEX2DEC(int number) {
    int power=0,r1,r2,r3,final;
    int A = number / 100;
    int B = (number % 100) / 10;
    int C = (number % 100) % 10;
    /*DEBUG PURPOUSES:printf("%d , %d , %d\n",A,B,C); */
    
    r1 = C * 1;
    r2 = B * 16;
    r3 = A * 256;
    //TODO: take r4 and D so i can have 4 digit hexs
    final = r1 + r2 + r3;
    
    /*DEBUG PURPOUSES:printf("0x%03d = %d in decimal!",number,final);*/
    return final;
}