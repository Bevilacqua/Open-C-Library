//
//  MathematicsTEST.c
//  Open C Library
//
//  Created by Abhishek Munie on 29/10/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <assert.h>
#include "Mathematics.h"
#include "MathematicsTEST.h"


void lcm2TEST(void){
    assert(lcm2(2,6)==6);
}

void lcm2sTEST(void){
    assert(lcm2s(2,6)==6);
}

void getDivideTEST(void){
    //assert(getDivide(22, 7, 14)=="3.14285714285714");
}

void revnumTEST(void){
    printf("%d\n",revnum(542284));
    printf("%d\n",revnum(1024));
    //assert(revnum(1024)==4201);
    //assert(revnum(1020)==201);
    //assert(revnum(1200)==21);
}

void MathematicsTEST(void){
    lcm2TEST();
    lcm2sTEST();
    getDivideTEST();
    revnumTEST();
}