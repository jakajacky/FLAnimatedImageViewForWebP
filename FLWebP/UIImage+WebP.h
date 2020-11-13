//
//  UIImage+WebP.h
//  FLAnimatedImageDemo
//
//  Created by zhangxiaoqiang on 2020/11/13.
//  Copyright © 2020 Flipboard. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (WebP)

+ (nullable UIImage *)sd_imageWithWebPData:(nullable NSData *)data;

@end

NS_ASSUME_NONNULL_END

