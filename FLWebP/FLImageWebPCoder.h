//
//  FLImageWebPCoder.h
//  FLAnimatedImageDemo
//
//  Created by zhangxiaoqiang on 2020/11/13.
//  Copyright © 2020 Flipboard. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDImageCoder.h"

NS_ASSUME_NONNULL_BEGIN

@interface FLImageWebPCoder : NSObject <SDProgressiveImageCoder, SDAnimatedImageCoder>

@property (nonatomic, class, readonly, nonnull) FLImageWebPCoder *sharedCoder;

@end

NS_ASSUME_NONNULL_END
