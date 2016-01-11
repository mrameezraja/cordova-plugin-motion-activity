//
//  MotionActivitySensor.h
//  ActivityDetectionTest
//
//  Created by Rameez Raja on 1/11/16.
//
//

#import <Cordova/CDVPlugin.h>

@interface MotionActivitySensor : CDVPlugin

- (void)startActivity:(CDVInvokedUrlCommand*)command;
- (void)stopActivity:(CDVInvokedUrlCommand*)command;

@end
