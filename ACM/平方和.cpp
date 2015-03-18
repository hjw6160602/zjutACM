//
//  平方和.cpp
//  ACM
//
//  Created by MAC on 15/3/18.
//  Copyright (c) 2015年 SaiDiCaprio. All rights reserved.
//



#include "平方和.h"


Exp_2::Exp_2()
{
    fin.open(Input);
    fout.open(Output);
}

void Exp_2::ExpofTwo(){
    int x,y=0;
    for (int i=0; i<10; i++) {
        fin>>x;
        y += x*x;
    }
    fout<<y;
}

Exp_2::~Exp_2()
{
    fin.close();
    fout.close();
}