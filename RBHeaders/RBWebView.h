//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UIView;

@interface RBWebView : UIWebView <UIWebViewDelegate>
{
    _Bool _isUseGrayView;
    id _parentView;
    UIView *_grayView;
    UIActivityIndicatorView *_indicatorView;
    NSMutableArray *_urlList;
}

@property(copy, nonatomic) NSMutableArray *urlList; // @synthesize urlList=_urlList;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) _Bool isUseGrayView; // @synthesize isUseGrayView=_isUseGrayView;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(nonatomic) __weak id parentView; // @synthesize parentView=_parentView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)setUseGrayView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 superView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

