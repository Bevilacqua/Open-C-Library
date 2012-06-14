//
//  Mathematics.c
//  Open C Library
//
//  Created by Abhishek Munie on 23/09/11.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

int countDigit(int n){
    int count=0;
    while (n) {
        count++;
        n/=10;
    }
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
    char *s = malloc(decimalPlace+countDigit(dividend/divisor)+2);
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

int revnum(int n){
    static int pow=1;
    pow*=10;
    if(n>=10){
        return ((n%10)*pow/10)+revnum(n/10);
    }
    else{
        return (n%10)*pow/10;
    }
}

int CountDigits(int num) {
    if (num <10 || num >-10) 
        return(1);
    
    else if (num <100 || num >-100)
        return(2);
    
    else if (num <1000 || num >-1000)
        return(3);
        
    else if (num <10000 || num >-10000)
        return(4);
        
    else if (num <100000 || num >-100000)
        return(5);
        
    else if (num <1000000 || num >-1000000)
        return(6);
        
    else if (num <10000000 || num >-10000000)
        return(7);
        
    else if (num <100000000 || num >-100000000)
        return(8);
//If needed add additional else-ifs in same format        
    else
        return (1111111) //Denotes the error (Overflow)
}