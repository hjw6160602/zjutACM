//
//  龚对数学帝.cpp
//  ACM
//
//  Created by MAC on 15/3/17.
//  Copyright (c) 2015年 SaiDiCaprio. All rights reserved.
//

#include "龚对数学帝.h"

//GDMath::GDMath(){
//    fin.open(Input);
//    fout.open(Output);
//    listExp =
//}
//
//void GDMath::Problem1141_GDMath(){
//
//    int x;
//    string result_String[1000];
//    while (!fin.eof()) {
//        fin>>x;
//        char *result;
//        //char result2[310]={'0'};
//        resultExp.ch='1';
//        
//        for (int index=0; index<1000; index++) {
//            bool carry_Bit[310]={false};
//            for (int k=0; k<310; k++) {
//                //ASSCCI码转化
//                int temp1 = result[k]-65;
//                int temp_result;
//                //如果 有进位
//                if (carry_Bit[k]){
//                    temp_result = 1+temp1*2;
//                    result[k] = temp_result+65;
//                }
//                //如果 无进位
//                else {
//                    temp_result = temp1*2;
//                    result[k] = temp_result+65;
//                }
//                
//                if (temp_result>=10) {
//                    carry_Bit[k+1] = true;
//                    temp_result -= 10;
//                    result[k] = temp_result+65;
//                }
//            }
//            
//            int index2 = 0;
//            for(int k=309;k>0;k--){
//                if (result[k]!='0') {
//                    index2 = k;
//                    break;
//                }
//            }
//            
//            for (int i = index; i>=0; i--) {
//                result[320-i] = result[i];
//            }
//            
//            result_String[index]=result;
//        }
//
//        fout<<endl;
//    }
//}
//
//GDMath::~GDMath(){
//    fin.close();
//    fout.close();
//}




