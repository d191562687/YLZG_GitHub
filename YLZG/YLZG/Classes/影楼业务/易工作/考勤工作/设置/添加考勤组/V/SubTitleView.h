//
//  SubTitleView.h
//  NewHXDemo
//
//  Created by Chan_Sir on 16/7/4.
//  Copyright © 2016年 陈振超. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SubTitleView : UIView

+ (SubTitleView *)sharedWithFrame:(CGRect)frame Week:(NSString *)week Date:(NSString *)date;

@end
