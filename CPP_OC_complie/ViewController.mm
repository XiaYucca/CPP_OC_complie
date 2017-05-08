//
//  ViewController.m
//  CPP_OC_complie
//
//  Created by RainPoll on 16/1/30.
//  Copyright © 2016年 RainPoll. All rights reserved.
//

#import "ViewController.h"
#import "TestCpp.hpp"
#import "CPP_test.hpp"


@interface ViewController ()

@end

@implementation ViewController


void test()
{
    //Test *test = new Test();
    CPP_test *testO = new CPP_test();
    
    
    testO->test_Public();
    
    delete testO;
    
    CPP_test_child *child = new CPP_test_child();
    
    CPP_test_child test ;
    test.test_Public();
    
}



- (void)viewDidLoad {
    [super viewDidLoad];
    
    test();
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}




@end
