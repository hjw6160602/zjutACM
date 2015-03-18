//
//  A+B.cpp
//  ACM
//
//  Created by MAC on 15/3/16.
//  Copyright (c) 2015年 SaiDiCaprio. All rights reserved.
//

#include "A+B.h"

void SumAB::Problem1001_SumAB(){
    int x,y,sum;
    
    fstream fin,fout;
    fin.open(Input);
    fout.open(Output);
    
    while (!fin.eof()) {
        fin>>x>>y;
        
        if (!(x==0 && y==0)) {
            sum = x+y;
            fout<<sum<<endl;
        }
    }
    
    fin.close();
    fout.close();
    
}