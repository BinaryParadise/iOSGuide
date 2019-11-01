//
//  TestModel1+Addition.m
//  iOSGuide
//
//  Created by Rake Yang on 2017/10/10.
//  Copyright © 2017年 BinaryParadise. All rights reserved.
//

#import "TestModel1+Addition.h"
#import <objc/runtime.h>

static void *exstensionKey = &exstensionKey;

@implementation TestModel1 (Addition)

- (NSString *)exstension {
    return objc_getAssociatedObject(self, exstensionKey);
}

- (void)setExstension:(NSString *)exstension {
    objc_setAssociatedObject(self, exstensionKey, exstension, OBJC_ASSOCIATION_COPY);
}

- (void)testMethod {
    MCLogWarn(@"覆盖方法");
}

@end
