//
//  MotionActivity.h
//  ActivityDetectionTest
//
//  Created by Rameez Raja on 1/11/16.
//
//

#import <Cordova/CDVPlugin.h>

@interface MotionActivity : CDVPlugin

- (void)requestUpdates:(CDVInvokedUrlCommand*)command;
- (void)stopActivity:(CDVInvokedUrlCommand*)command;

@end
