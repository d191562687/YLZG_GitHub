//
//  AddMemberView.h
//  YLZG
//
//  Created by Chan_Sir on 2016/11/17.
//  Copyright © 2016年 陈振超. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddMemberView : UIView

@property (copy,nonatomic) NSArray *memberArr;

@property (copy,nonatomic) void (^DidSelectBlock)(NSIndexPath *indexPath);

- (void)reloadData;

@end
