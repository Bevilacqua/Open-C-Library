//
//  String.c
//  Open C Library
//
//  Created by Abhishek Munie on 19/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include<string.h>

int findWord(char* str, char *word){
    int i=0,k=-1,flag=1;
    for (;str[i]&&k==-1;i++,flag=1)
        if(str[i]==word[0]&&(i==0||str[i-1])&&(i+strlen(word)==strlen(str)||(i+strlen(word)<strlen(str)&&(str[i+strlen(word)]==' ')))){
            for (int j=0; j<strlen(word); j++)
                if (str[i+j]!=word[j]) {
                    flag=0;
                    break;
                }
            if (flag)
                k=i;
        }
    return k;
}

char *strConcat(char *s, char *ct){
    int i, lenS = strlen(s), lenCt = strlen(ct);
    for (i=0; i<lenCt; i++)
        s[lenS+i]=ct[i];
    return s;
}

char *strDel(char s[], int start, int n){
    int i, len = strlen(s);
    for (i=start+n; i<=len; i++)
        s[i-n]=s[i];
    return s;
}
