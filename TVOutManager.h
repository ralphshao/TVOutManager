//
//  TVOutManager.h
//  TapCity
//
//  Created by Rob Terrell (rob@touchcentric.com) on 8/16/10.
//  Modified by Ralph Shao - The Tap Lab.
//  Copyright 2010 TouchCentric LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

#define TVOutManagerLoaded

@interface TVOutManager : NSObject {
	UIWindow *deviceWindow;
	UIWindow *tvoutWindow;
	NSTimer *updateTimer;
	UIImage *image;
	UIImageView *mirrorView;
	UIImageView *iphoneView;
	BOOL done;
	BOOL tvSafeMode;
	CGAffineTransform startingTransform;
}

@property (assign) BOOL tvSafeMode;

+ (TVOutManager *)sharedInstance;

- (void)changeMode:(UIScreenMode *)screenMode;
- (void)createTVWindow;
- (void)prepareTVView:(CGSize)screenSize;
- (void)startTVOut;
- (void)stopTVOut;
- (void)updateTVOut;
- (void)updateLoop;
- (void)screenDidConnectNotification:(NSNotification *)notification;
- (void)screenDidDisconnectNotification:(NSNotification *)notification;
- (void)screenModeDidChangeNotification:(NSNotification *)notification;
- (void)deviceOrientationDidChange:(NSNotification *)notification;

@end
