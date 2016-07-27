//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface StoreButtonView : UIButton
{
    UIColor *_buttonColor;
    UIColor *_disabledColor;
    double _cornerRadius;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)highlightColor:(double *)arg1 factor:(double)arg2;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIColor *disabledColor;
@property(retain, nonatomic) UIColor *buttonColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

