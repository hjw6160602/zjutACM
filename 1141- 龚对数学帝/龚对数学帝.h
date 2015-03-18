//
//  龚对数学帝.h
//  ACM
//
//  Created by MAC on 15/3/17.
//  Copyright (c) 2015年 SaiDiCaprio. All rights reserved.
//

#ifndef __ACM_________
#define __ACM_________

#include "Globle.h"

struct ResultExp{
    char ch;
    ResultExp* next;
};


class GDMath
{
public:
    fstream fin,fout;
    ResultExp *listExp;
    GDMath();
    ~GDMath();
    void Problem1141_GDMath();
};
#endif /* defined(__ACM_________) */
