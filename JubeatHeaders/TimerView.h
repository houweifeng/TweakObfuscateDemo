//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UITextView;

@interface TimerView : UIView
{
    double startTime;
    double endTime;
    double currentTime;
    NSTimer *timer;
    UITextView *timeText;
    id _aDelegate;
}

@property(nonatomic) __weak id aDelegate; // @synthesize aDelegate=_aDelegate;
- (void).cxx_destruct;
- (void)timerStart;
- (void)setTimer:(double)arg1;
- (void)setTimeFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

