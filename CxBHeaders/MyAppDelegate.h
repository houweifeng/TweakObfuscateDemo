//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "iOSAppDelegate.h"

@class UIWindow;

@interface MyAppDelegate : iOSAppDelegate
{
    UIWindow *window;
    int mCurrentOrient;
    _Bool mIsInitRotation;
    _Bool mIsInitTicketTime;
    _Bool myEnableOrientationNotification;
}

+ (id)getMyAppDelegate;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void)terminateApplication;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)appInactive;
- (void)appActive;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (long long)getMyDeviceOrientation;
- (void)setStatusBarOrientationHandle:(id)arg1;
- (void)resetStatusBar;
- (void)resetViewRotation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)myRotateNotification:(id)arg1;
- (void)viewOrientationSet:(id)arg1 screenWidth:(int)arg2 screenHeight:(int)arg3 screenRotation:(float)arg4 bBounds:(_Bool)arg5 bRotation:(_Bool)arg6;
- (void)showConflictDialog:(const MtTypedArray_8bae9f3c *)arg1;
- (void)showSystemDialog:(int)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (float)contentScale;
- (id)windowTitle;
- (_Bool)terminateWhenSuspending;
- (void)deleteMainWindow;
- (void)createMainWindow;
- (void)dealloc;
- (id)init;

@end

