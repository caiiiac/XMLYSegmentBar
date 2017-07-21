//
//  XMGSegmentBarConfig.h
//  XMGSegmentBar
//
//  Created by 小码哥 on 2016/11/26.
//  Copyright © 2016年 王顺子. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface XMGSegmentBarConfig : NSObject


+ (instancetype)defaultConfig;

/** 背景颜色 */
@property (nonatomic, strong) UIColor *segmentBarBackColor;


@property (nonatomic, strong) UIColor *itemNormalColor;
@property (nonatomic, strong) UIColor *itemSelectColor;
@property (nonatomic, strong) UIFont *itemFont;

@property (nonatomic, strong) UIColor *indicatorColor;

@property (nonatomic, assign) CGFloat indicatorHeight;
@property (nonatomic, assign) CGFloat indicatorExtraW;

//链式编程实践
@property (nonatomic, copy, readonly) XMGSegmentBarConfig *(^itemNC) (UIColor *color);

@property (nonatomic, copy, readonly) XMGSegmentBarConfig *(^itemSC) (UIColor *color);
@end
