//
//  UIImage+fixOrientation.h
//  WowoMerchant
//
//  Created by kaiwei Xu on 2018/9/13.
//  Copyright © 2018年 NanjingYunWo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (fixOrientation)

/**
 修复照片方向
 
 @return return value description
 */
- (UIImage *)fixOrientation;

+ (UIImage *)imageWithColor:(UIColor *)color;

@end
