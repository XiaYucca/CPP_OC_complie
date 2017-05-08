//
//  CPP_test.cpp
//  UIDynamic
//
//  Created by RainPoll on 16/1/30.
//  Copyright © 2016年 821469369@qq.com. All rights reserved.
//

#include "CPP_test.hpp"

CPP_test :: CPP_test():value(1)
{
    printf("value -- %d   对象开始创建\n",this->value);
    if (this->value == end) {
        printf("枚举类型可用\n");
    }
}

void CPP_test:: test_Private()
{
    printf("私有方法开始调用\n");
}

 void CPP_test :: test_Public()
{
    this->test_Private();
    printf("共有方法开始调用\n");
}

CPP_test :: ~CPP_test()
{
    printf("value -- %d  DUIXIANG 对象开始销毁\n",this->value);
}


state CPP_test :: test_enum()
{
    return end;
}


CPP_test_child ::CPP_test_child():CPP_test(), childValue(4)
{
   // CPP_test();
    printf("super=%d chile=%d 子类的构造方法",this->value ,this->childValue);
    
}
