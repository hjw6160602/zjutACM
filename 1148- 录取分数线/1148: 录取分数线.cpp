//
//  1148: 录取分数线.cpp
//  ACM
//
//  Created by MAC on 15/3/18.
//  Copyright (c) 2015年 SaiDiCaprio. All rights reserved.
//

#include "1148: 录取分数线.h"
#include <vector>

AdmissionScores::AdmissionScores()
{
    fin.open(Input);
    fout.open(Output);
}

void AdmissionScores::find_Score(){
    int n,k;
    vector<int> a;
    fin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x = 0;
        fin>>x;
        a.push_back(x);
    }
    
    for(int i=0;i<n;i++){
        fout<<a[i];
    }
}

AdmissionScores::~AdmissionScores()
{
    fin.close();
    fin.close();
}