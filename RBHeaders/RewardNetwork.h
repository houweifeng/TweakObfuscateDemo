//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RewardNetwork : NSObject
{
}

+ (id)getNavigationTitle;
+ (void)setNavigationBarHidden:(_Bool)arg1;
+ (void)getAdStatusWithBlock:(CDUnknownBlockType)arg1;
+ (void)getAdDisplayStatusWithCallback:(CDUnknownBlockType)arg1;
+ (void)allInstallFlgWithCallback:(CDUnknownBlockType)arg1;
+ (void)closeAdScreen;
+ (void)openAdScreenWithParentView:(id)arg1 adLocation:(id)arg2 requestCode:(id)arg3 delegate:(id)arg4;
+ (void)openAdScreenWithParentView:(id)arg1 adLocation:(id)arg2 delegate:(id)arg3;
+ (void)openAdScreenWithAdLocation:(id)arg1 requestCode:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

