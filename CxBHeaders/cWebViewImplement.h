//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface cWebViewImplement : UIViewController <UIWebViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isFullscreen;
    _Bool _isInit;
    CDUnknownBlockType _viewDidCloseCompletion;
    UIWebView *_webView;
    UIViewController *_vc;
    char *_currentURL;
    char *_beforeURL;
    struct CGAffineTransform _transform;
}

@property(nonatomic) char *beforeURL; // @synthesize beforeURL=_beforeURL;
@property(nonatomic) char *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) _Bool isInit; // @synthesize isInit=_isInit;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(nonatomic) UIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType viewDidCloseCompletion; // @synthesize viewDidCloseCompletion=_viewDidCloseCompletion;
- (id).cxx_construct;
- (void)clearCache;
- (void)setScale:(float)arg1;
- (void)setRot:(float)arg1;
- (void)setTrans:(struct CGPoint)arg1;
- (void)close;
- (void)resetRotate:(id)arg1;
- (void)showCapcomAccount:(_Bool)arg1;
- (void)_show:(id)arg1;
- (void)show:(id)arg1;
- (void)resize:(float)arg1:(float)arg2;
- (void)resize:(float)arg1;
- (void)videoExit:(id)arg1;
- (void)videofullScreen:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onTapped:(id)arg1;
- (void)_initWebView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

