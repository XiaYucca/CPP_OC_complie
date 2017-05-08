//
//  CPP_test.hpp
//  UIDynamic
//
//  Created by RainPoll on 16/1/30.
//  Copyright © 2016年 821469369@qq.com. All rights reserved.
//

#ifndef CPP_test_hpp
#define CPP_test_hpp

#include <stdio.h>


typedef enum{
    start,
    end
} state;


class CPP_test{
    private :

    void test_Private();
    public:
    int value;
    CPP_test();
    virtual ~CPP_test();
    void test_Public();
    
    state test_enum();
};


class CPP_test_child:public CPP_test
{
    private :
    int childValue;
    void test_privare_child();
   
    
public:
    
    CPP_test_child();
    void test_public_child();

};



#endif /* CPP_test_hpp */
