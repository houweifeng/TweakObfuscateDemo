//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TuneInfo, UIGestureRecognizer, UIView;

@protocol MusicListViewDelegate <NSObject>
- (void)hiddenCoverView;
- (void)showCoverView:(UIView *)arg1 addGesture:(UIGestureRecognizer *)arg2;
- (NSArray *)removeMusicArray;
- (NSArray *)addMusicArray;
- (TuneInfo *)extendMusicInfoForMusicID:(unsigned int)arg1;
- (TuneInfo *)musicInfoForIndex:(unsigned long long)arg1;
- (unsigned int)numberOfMusic;
@end

