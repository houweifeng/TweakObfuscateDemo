//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIImageView, UIView;

@interface RBTimingSlider : UIControl
{
    float _value;
    int _digit;
    int _barMin;
    int _barMax;
    float _step;
    UIView *_baseView;
    UIImageView *_gripView;
    NSMutableArray *_numImageViews;
    NSMutableArray *_numImages;
    struct CGRect _barRect;
}

@property(nonatomic) float step; // @synthesize step=_step;
@property(nonatomic) int barMax; // @synthesize barMax=_barMax;
@property(nonatomic) int barMin; // @synthesize barMin=_barMin;
@property(nonatomic) struct CGRect barRect; // @synthesize barRect=_barRect;
@property(nonatomic) int digit; // @synthesize digit=_digit;
@property(retain, nonatomic) NSMutableArray *numImages; // @synthesize numImages=_numImages;
@property(retain, nonatomic) NSMutableArray *numImageViews; // @synthesize numImageViews=_numImageViews;
@property(retain, nonatomic) UIImageView *gripView; // @synthesize gripView=_gripView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) float value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)sliderChangeWithTouchPoint:(struct CGPoint)arg1;
- (id)initWithDigit:(int)arg1;

@end

