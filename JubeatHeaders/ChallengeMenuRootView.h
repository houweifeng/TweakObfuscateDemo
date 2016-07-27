//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ChallengeLoginInformationView, ChallengeMenuView, ChallengeNameSettingView, ChallengePresentView, ChallengePrevRankingView, ChallengeRivalListView, ChallengeRivalSearchView;

@interface ChallengeMenuRootView : UIView
{
    UIView *coverView;
    _Bool isPad;
    UIView *currentView;
    ChallengeMenuView *menuView;
    ChallengePresentView *presentView;
    ChallengeNameSettingView *nameSettingView;
    ChallengeRivalSearchView *rivalSearchView;
    ChallengeRivalListView *rivalListView;
    ChallengePrevRankingView *prevRankingView;
    ChallengeLoginInformationView *loginInformation;
    id _aDelegate;
}

@property(nonatomic) __weak id aDelegate; // @synthesize aDelegate=_aDelegate;
- (void).cxx_destruct;
- (void)refreshStatus;
- (void)closeMenu;
- (void)selectMenu:(id)arg1;
- (void)switchOutMenu;
- (void)switchInMenu;
- (void)outerMenu;
- (void)enterMenu;
- (void)closeRootMenu;
- (void)enterRootMenu;
- (id)initWithFrame:(struct CGRect)arg1;

@end

