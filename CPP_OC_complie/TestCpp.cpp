//
//  TestCpp.cpp
//  UIDynamic
//
//  Created by RainPoll on 16/1/30.
//  Copyright © 2016年 821469369@qq.com. All rights reserved.
//

#include "TestCpp.hpp"
//#include <iostream>

Test::Test():value(0)
{
    printf("构造函数开始执行\n");
}

Test::~Test()
{
    printf("析构函数执行\n");
}

void Test::func()
{
    printf("共有函数开始执行\n");
}

void Test::func_p()
{
    this->func();
    printf("共有函数开始执行\n");
}


