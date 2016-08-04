//
//  MouseEventProtocol.h
//  Snip
//
//  Created by liyue on 15/2/5.
//  Copyright (c) 2015年 liyue. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MouseEventProtocol <NSObject>

- (void)mouseDown:(NSEvent *)theEvent;

- (void)mouseUp:(NSEvent *)theEvent;

- (void)mouseDragged:(NSEvent *)theEvent;

- (void)mouseMoved:(NSEvent *)theEvent;
@end
