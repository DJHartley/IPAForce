//
//  ViewController.h
//  IPAForce
//
//  Created by Lakr Sakura on 2018/9/25.
//  Copyright © 2018 Lakr Sakura. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Extension.h"

@interface initVCWindowController : NSWindowController<NSWindowDelegate>
@end

@interface SetupViewController : NSViewController
@property (weak) IBOutlet NSProgressIndicator *setupMacProgress;

@end


