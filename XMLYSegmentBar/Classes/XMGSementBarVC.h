//
//  XMGSementBarVC.h
//  XMGSegmentBar
//
//  Created by 小码哥 on 2016/11/26.
//  Copyright © 2016年 王顺子. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XMGSegmentBar.h"
@interface XMGSementBarVC : UIViewController


@property (nonatomic, weak) XMGSegmentBar *segmentBar;


- (void)setUpWithItems: (NSArray <NSString *>*)items childVCs: (NSArray <UIViewController *>*)childVCs;


@end
