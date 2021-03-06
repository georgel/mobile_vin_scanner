//
//  B4HVINScannerPluginClass.h
//	ScannerLibrary
//
//	Created by bees4honey developer.
//  Copyright (c) 2014 bees4honey. All rights reserved.
//

#import <Cordova/CDV.h>

//plugin class
@interface B4HVINScannerPluginClass : CDVPlugin {}

- (NSString*)isAVFoundationAvailable;
- (void)scan:(CDVInvokedUrlCommand*)command;
- (void)returnSuccess:(NSString*)scannedCode cancelled:(BOOL)cancelled callback:(NSString*)callback;
- (void)returnError:(NSString*)message callback:(NSString*)callback;

@end