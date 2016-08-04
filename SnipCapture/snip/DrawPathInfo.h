//
//  DrawPathInfo.h
//  Snip
//
//  Created by liyue on 15/2/4.
//  Copyright (c) 2015年 liyue. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SnipManager.h"

@interface DrawPathInfo : NSObject

@property NSPoint startPoint;
@property NSPoint endPoint;
@property DRAW_TYPE drawType;

- (instancetype)initWith:(NSPoint)startPoint andEndPoint:(NSPoint)endPoint andType:(DRAW_TYPE)drawType;

@end
