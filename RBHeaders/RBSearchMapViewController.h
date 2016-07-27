//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RBBaseViewController.h"

#import "SearchMapViewDelegate-Protocol.h"

@class NSString, UIButton;

@interface RBSearchMapViewController : RBBaseViewController <SearchMapViewDelegate>
{
    UIButton *_currentLocation;
}

@property(retain, nonatomic) UIButton *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (void)didChangeUserTracking:(_Bool)arg1;
- (void)forceClose;
- (void)pushCurrent:(id)arg1;
- (void)pushBarBtnBack:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

