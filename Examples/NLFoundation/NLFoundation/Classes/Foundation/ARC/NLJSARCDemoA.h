//
//  ARCDemo.h
//  iOSGuide
//
//  Created by Rake Yang on 2017/10/9.
//  Copyright © 2017年 BinaryParadise. All rights reserved.
//

#import "NLJSModel.h"

//自动内存管理演示
@interface NLJSARCDemoA : NLJSModel<NSCopying>

@property (nonatomic, assign) NLJSARCDemoA *assignDemo;
@property (nonatomic, weak) NLJSARCDemoA *weakDemo;
@property (nonatomic, strong) id strongDemo;

- (void)testAssign;
- (void)testWeak;
- (void)testStrong;

- (void)doSomething:(void (^)(void))block;
- (void)doNothing;

@end
