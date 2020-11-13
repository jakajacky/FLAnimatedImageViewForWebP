//
//  UIImage+WebP.m
//  FLAnimatedImageDemo
//
//  Created by zhangxiaoqiang on 2020/11/13.
//  Copyright © 2020 Flipboard. All rights reserved.
//

#import "UIImage+WebP.h"
#import "FLImageWebPCoder.h"

@implementation UIImage (WebP)

+ (nullable UIImage *)sd_imageWithWebPData:(nullable NSData *)data {
    if (!data) {
        return nil;
    }
    return [[FLImageWebPCoder sharedCoder] decodedImageWithData:data options:0];
}

@end
