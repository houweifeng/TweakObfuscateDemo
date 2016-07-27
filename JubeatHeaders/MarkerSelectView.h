//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CADisplayLink, MarkerTestView, NSMutableArray, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIScrollView;

@interface MarkerSelectView : UIView <UIScrollViewDelegate>
{
    double banner_span;
    _Bool paused;
    id _delegate;
    MarkerTestView *_markerTestView;
    UIScrollView *_bannerScrollView;
    NSMutableArray *_arrayMarkerBtn;
    UIImageView *_buttonImgView;
    UIImageView *_bgView;
    UIView *_loadingView;
    UIActivityIndicatorView *_indicator;
    UILabel *_labelLoading;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UILabel *labelLoading; // @synthesize labelLoading=_labelLoading;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *buttonImgView; // @synthesize buttonImgView=_buttonImgView;
@property(retain, nonatomic) NSMutableArray *arrayMarkerBtn; // @synthesize arrayMarkerBtn=_arrayMarkerBtn;
@property(retain, nonatomic) UIScrollView *bannerScrollView; // @synthesize bannerScrollView=_bannerScrollView;
@property(retain, nonatomic) MarkerTestView *markerTestView; // @synthesize markerTestView=_markerTestView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)close;
- (void)btnMarker:(id)arg1;
- (void)startLoadMarker:(_Bool)arg1;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)loop:(id)arg1;
- (id)getCurrentBanner;
- (id)soundName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

