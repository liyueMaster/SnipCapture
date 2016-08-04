//
//  NSColor+Helper.h
//  Snip
//
//  Created by liyue on 15/2/5.
//  Copyright (c) 2015年 liyue. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSColor (Helper)
+ (NSColor *)colorFromInt:(int)colorValue;
+ (NSColor*)colorWithHex:(NSString *)hexValue alpha:(CGFloat)alphaValue;
@end
