//
//  EPAppDelegate.h
//  Euler problems
//
//  Created by Brian on 13/12/12.
//  Copyright (c) 2012 Brian Jones. All rights reserved.
//
# import <Cocoa/Cocoa.h>


@class EulerDelegate;

@interface EPAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;


- (IBAction)buttonPressed:(id)sender;



@end
