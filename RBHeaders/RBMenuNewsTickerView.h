//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSURL, UIFont, UILabel;

@interface RBMenuNewsTickerView : UIView
{
    _Bool m_LinkToStore;
    SEL m_Selector;
    float _baseDuration;
    UIView *_textBaseView;
    UILabel *_textView;
    UIFont *_font;
    NSURL *_linkURL;
    NSString *_packID;
    NSString *_campaignID;
    id _target;
}

@property(nonatomic) float baseDuration; // @synthesize baseDuration=_baseDuration;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *campaignID; // @synthesize campaignID=_campaignID;
@property(retain, nonatomic) NSString *packID; // @synthesize packID=_packID;
@property(retain, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textBaseView; // @synthesize textBaseView=_textBaseView;
- (void).cxx_destruct;
- (id)parseQuery:(id)arg1;
- (void)toLink;
- (_Bool)isLinkToStore;
- (void)stopNews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (float)setText:(id)arg1 LINK:(id)arg2;
- (id)getCampaignID;
- (id)getPackID;
- (void)setDuration:(float)arg1;
- (void)SetUpView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

