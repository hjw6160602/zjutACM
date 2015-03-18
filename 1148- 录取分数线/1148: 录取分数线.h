//
//  1148: 录取分数线.h
//  ACM
//
//  Created by MAC on 15/3/18.
//  Copyright (c) 2015年 SaiDiCaprio. All rights reserved.
//

#ifndef __ACM___148_________
#define __ACM___148_________

#include "Globle.h"

class AdmissionScores{
public:
    AdmissionScores();
    fstream fin,fout;
    void find_Score();
    ~AdmissionScores();
};

#endif /* defined(__ACM___148_________) */
