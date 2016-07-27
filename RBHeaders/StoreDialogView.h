//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIButton, UILabel, UIProgressView;

@interface StoreDialogView : UIView
{
    id _delegate;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_labelMessage;
    UIProgressView *_progressView;
    UIButton *_buttonAbort;
}

@property(retain, nonatomic) UIButton *buttonAbort; // @synthesize buttonAbort=_buttonAbort;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *labelMessage; // @synthesize labelMessage=_labelMessage;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)btnAbort:(id)arg1;
- (void)layout:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

