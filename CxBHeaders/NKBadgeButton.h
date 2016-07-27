//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel;

@interface NKBadgeButton : UIButton
{
    UILabel *_countLabel;
    struct CGPoint _offsetToHide;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) struct CGPoint offsetToHide; // @synthesize offsetToHide=_offsetToHide;
- (void)refreshTitleString;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

