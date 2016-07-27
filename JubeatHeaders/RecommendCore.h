//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApplilinkURLConnectionDelegate-Protocol.h"
#import "ApplilinkViewDelegate-Protocol.h"
#import "InterstitiaViewDelegate-Protocol.h"
#import "SdkViewDelegate-Protocol.h"

@class ApplilinkParameters, RecommendFullScreenController, RecommendWebViewController;
@protocol ApplilinkViewDelegate, InterstitiaViewDelegate;

@interface RecommendCore : NSObject <ApplilinkViewDelegate, InterstitiaViewDelegate, ApplilinkURLConnectionDelegate, SdkViewDelegate>
{
    _Bool _reLoginStatus;
    _Bool _navigationBarHidden;
    _Bool _adScreenviewCloseFlg;
    _Bool _redirectFlg;
    int _initializeFlg;
    RecommendFullScreenController *_interstitialViewController;
    RecommendWebViewController *_adScreenViewController;
    id <ApplilinkViewDelegate> _applilinkDelegate;
    ApplilinkParameters *_applilinkParams;
    id <ApplilinkViewDelegate> _adAreaDelegate;
    id <InterstitiaViewDelegate> _adScreenDelegate;
    id <ApplilinkViewDelegate> _uniqueAdDelegate;
    ApplilinkParameters *_uniqueApplilinkParams;
}

+ (void)clearData;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) ApplilinkParameters *uniqueApplilinkParams; // @synthesize uniqueApplilinkParams=_uniqueApplilinkParams;
@property(nonatomic) __weak id <ApplilinkViewDelegate> uniqueAdDelegate; // @synthesize uniqueAdDelegate=_uniqueAdDelegate;
@property(nonatomic) __weak id <InterstitiaViewDelegate> adScreenDelegate; // @synthesize adScreenDelegate=_adScreenDelegate;
@property(nonatomic) __weak id <ApplilinkViewDelegate> adAreaDelegate; // @synthesize adAreaDelegate=_adAreaDelegate;
@property(nonatomic) _Bool redirectFlg; // @synthesize redirectFlg=_redirectFlg;
@property(nonatomic) _Bool adScreenviewCloseFlg; // @synthesize adScreenviewCloseFlg=_adScreenviewCloseFlg;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic) _Bool reLoginStatus; // @synthesize reLoginStatus=_reLoginStatus;
@property(copy, nonatomic) ApplilinkParameters *applilinkParams; // @synthesize applilinkParams=_applilinkParams;
@property(nonatomic) __weak id <ApplilinkViewDelegate> applilinkDelegate; // @synthesize applilinkDelegate=_applilinkDelegate;
@property(retain, nonatomic) RecommendWebViewController *adScreenViewController; // @synthesize adScreenViewController=_adScreenViewController;
@property(retain, nonatomic) RecommendFullScreenController *interstitialViewController; // @synthesize interstitialViewController=_interstitialViewController;
@property(nonatomic) int initializeFlg; // @synthesize initializeFlg=_initializeFlg;
- (void).cxx_destruct;
- (void)appStoreTransitionNoticeWithAppParam:(id)arg1;
- (void)appStoreFailLoadNoticeWithError:(id)arg1 appParam:(id)arg2;
- (void)appStoreClosedNoticeWithAppParam:(id)arg1;
- (void)appStoreCloseNoticeWithAppParam:(id)arg1;
- (void)appStoreOpenedNoticeWithAppParam:(id)arg1;
- (void)failLinkNoticeWithError:(id)arg1;
- (void)failOpenNoticeWithError:(id)arg1;
- (void)closeNotice;
- (void)openedNotice;
- (void)startedNotice;
- (void)appListFailWithError:(id)arg1;
- (void)appListFailLoadWithError:(id)arg1;
- (void)appListFailOpenWithError:(id)arg1;
- (void)appListDidDisappear;
- (void)appListDidAppear;
- (void)appListDidStart;
- (void)releaseInterstitialViewController;
- (void)releaseAdScreenViewController;
- (_Bool)redirectStartLoad:(id)arg1;
- (void)finishLoadWithResponse:(id)arg1;
- (void)failLoadWithError:(id)arg1;
- (id)getUniqueAdWithAdLocation:(id)arg1;
- (void)setUniqueAdWithAdLocation:(id)arg1 impressionId:(id)arg2;
- (void)linkActionWithDefaultScheme:(id)arg1 adIdTo:(id)arg2 adType:(id)arg3 adModel:(id)arg4 delegate:(id)arg5;
- (void)touchOwnAdWithAdLocation:(id)arg1 toAppliId:(id)arg2 creativeId:(id)arg3 requestCode:(id)arg4 delegate:(id)arg5;
- (void)showOwnAdWithAdLocation:(id)arg1 toAppliId:(id)arg2 creativeId:(id)arg3;
- (void)postAnalysisListRegistWithAdType:(int)arg1 AdModel:(int)arg2 adLocation:(id)arg3 impressionId:(id)arg4;
- (void)clearSession;
- (void)clearAdStatus;
- (_Bool)canUseBannerCache;
- (id)getTemporaryCacheWithAdModel:(int)arg1;
- (int)redirectWithRequest:(id)arg1 appParam:(id)arg2;
- (int)redirectWithRequest:(id)arg1;
- (int)redirectViewContollerWithRequest:(id)arg1;
- (void)rotateWithInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)closeAdScreen;
- (void)openFullViewControllerWithAdModel:(int)arg1 adLocation:(id)arg2 verticalAlign:(int)arg3 requestCode:(id)arg4 delegate:(id)arg5;
- (void)openAdAreaWithParentView:(id)arg1 rect:(struct CGRect)arg2 adModel:(int)arg3 adLocation:(id)arg4 verticalAlign:(int)arg5 requestCode:(id)arg6 delegate:(id)arg7;
- (void)openAdScreenWithParentView:(id)arg1 adModel:(int)arg2 adLocation:(id)arg3 verticalAlign:(int)arg4 requestCode:(id)arg5 delegate:(id)arg6;
- (void)reloadAllAdData;
- (void)clearAllAdData;
- (void)getAllAdStatusWithCallback:(CDUnknownBlockType)arg1;
- (void)getAdDisplayStatusWithAdModel:(int)arg1 adLocation:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getUnreadCountWithAdModel:(int)arg1 adLocation:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getAdStatusWithAdModel:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)appliListCacheWithCallBack:(CDUnknownBlockType)arg1;
- (void)appliListWithCallBack:(CDUnknownBlockType)arg1;
- (void)startSessionWithCallback:(CDUnknownBlockType)arg1;
- (void)startWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)isInstalledAppliWithScheme:(id)arg1;
- (void)clearInitialize;
- (_Bool)isInitialized;
- (id)init;

@end

