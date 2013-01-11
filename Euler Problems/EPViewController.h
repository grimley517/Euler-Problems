//
//  EPViewController.h
//  Euler problems
//
//  Created by Brian on 14/12/12.
//  Copyright (c) 2012 Brian Jones. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface EPViewController : NSViewController
@property (assign) IBOutlet NSWindow *resultWindow;
@property IBOutlet *title;
@property IBOutlet *description;
@property int progress;
@property int progMax;
@property IBOutlet *result;
@property int time;

- 

@end
