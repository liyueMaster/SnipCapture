//
//  DrawPathView.h
//  Snip
//
//  Created by liyue on 15/2/5.
//  Copyright (c) 2015年 liyue. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DrawPathInfo.h"

@interface DrawPathView : NSView
@property NSMutableArray *rectArray;
@property DrawPathInfo *currentInfo;

- (void)drawFinishCommentInRect:(NSRect)imageRect;
@end
