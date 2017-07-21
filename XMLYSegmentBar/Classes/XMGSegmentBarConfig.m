//
//  XMGSegmentBarConfig.m
//  XMGSegmentBar
//
//  Created by 小码哥 on 2016/11/26.
//  Copyright © 2016年 王顺子. All rights reserved.
//

#import "XMGSegmentBarConfig.h"

@implementation XMGSegmentBarConfig

+ (instancetype)defaultConfig {
    
    XMGSegmentBarConfig *config = [[XMGSegmentBarConfig alloc] init];
    config.segmentBarBackColor = [UIColor clearColor];
    config.itemFont = [UIFont systemFontOfSize:15];
    config.itemNormalColor = [UIColor lightGrayColor];
    config.itemSelectColor = [UIColor redColor];
    
    config.indicatorColor = [UIColor redColor];
    config.indicatorHeight = 2;
    config.indicatorExtraW = 10;
    
    return config;
    
}


- (XMGSegmentBarConfig *(^)(UIcolor *))itemNC {
    return ^(UIcolor * color) {
        self.itemNormalColor = color;
        return self;
    }
}

- (XMGSegmentBarConfig *(^)(UIcolor *))itemSC {
    return ^(UIcolor * color) {
        self.itemSelectColor = color;
        return self;
    }
}

@end
