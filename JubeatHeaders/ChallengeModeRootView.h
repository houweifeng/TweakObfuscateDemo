//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PurchaseManagerDelegate-Protocol.h"

@class ChallengeLineupView, ChallengeLoginInformationView, ChallengeLoginMessageView, ChallengeMenuRootView, ChallengeNameSettingView, ChallengeRankingListView, ChallengeStatusView, CubePurchaseView, MusicSelectViewController, NSDictionary, NSMutableArray, NSString, NSTimer, ScratchBoardView, ScratchCompleteView, ScratchMusicDetailView, ScratchView, SearchPackIDView, StoreDialogView, UIButton, UIGestureRecognizer, UIImageView, UILabel;

@interface ChallengeModeRootView : UIView <PurchaseManagerDelegate>
{
    UIImageView *bgImageView;
    UIButton *closeBtn;
    ScratchBoardView *scratchBoard;
    ChallengeStatusView *statusView;
    ScratchMusicDetailView *detailView;
    ChallengeRankingListView *rankingView;
    ChallengeLoginMessageView *loginMessage;
    ChallengeLoginInformationView *loginInformation;
    ScratchView *selectedView;
    UIButton *menuBtn;
    ChallengeMenuRootView *menuView;
    _Bool bOpenTotalRank;
    UIButton *totalRankingBtn;
    UIButton *lineupBtn;
    ChallengeLineupView *lineupView;
    CubePurchaseView *cubePurchaseView;
    ScratchCompleteView *completeView;
    UIView *coverView;
    UIGestureRecognizer *coverGesture;
    UIView *modalCoverView;
    NSTimer *refreshTimer;
    _Bool isPad;
    _Bool bVerifyPurchase;
    _Bool bScratchEnable;
    _Bool bDetailOpen;
    NSMutableArray *imageDLTasks;
    NSDictionary *currentDownload;
    ChallengeNameSettingView *nameSettingView;
    SearchPackIDView *searchPackIDView;
    UIImageView *checkMarkImg;
    UIImageView *playExplain;
    UILabel *baseConsumeCoin;
    UILabel *consumeCoin;
    MusicSelectViewController *_controller;
    StoreDialogView *_modalDialog;
}

@property(readonly, nonatomic) StoreDialogView *modalDialog; // @synthesize modalDialog=_modalDialog;
@property(nonatomic) __weak MusicSelectViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshStatus;
- (void)packIDSearchCancel:(id)arg1;
- (void)packIDSearchEnd:(id)arg1;
- (void)openJubeatStore:(long long)arg1;
- (void)closeRanking;
- (void)openRanking;
- (void)openAllRanking;
- (void)scratchEnd:(id)arg1;
- (void)closeScratchComplete;
- (void)openScratchComplete;
- (void)scratchStart:(id)arg1;
- (_Bool)isScratchEnable;
- (void)scratchEnable:(_Bool)arg1;
- (void)selectScratch:(id)arg1;
- (void)storeDialogCancel:(id)arg1;
- (void)purchaseFailed:(id)arg1 error:(id)arg2;
- (void)purchaseSucceeded:(id)arg1;
- (void)closeLoginInformation;
- (void)closeLoginMessage;
- (void)closeLineupView;
- (void)closeView;
- (void)closeCubePurchase;
- (void)cubePurchaseStart;
- (void)downloaderError:(id)arg1;
- (void)downloaderFinished:(id)arg1;
- (void)timerRefresh:(id)arg1;
- (void)hideModalDialog;
- (void)showModalDialog:(id)arg1;
- (void)setPurchaseDialogMessage:(id)arg1;
- (void)hidePurchaseDialog;
- (void)showPurchaseDialog:(id)arg1;
- (void)hideCoverView;
- (void)showCoverView;
- (void)hideMenuCoverView;
- (void)showMenuCoverView;
- (void)updateNailState:(id)arg1;
- (void)startChallengeMusic;
- (id)scratchMessage;
- (void)changeRanking;
- (void)closeMenuView;
- (void)closeMenu;
- (void)closeDetailView;
- (void)openDetailView;
- (void)alertSelect:(id)arg1;
- (void)dispDownloadDialog:(id)arg1;
- (void)dispCoverView:(id)arg1;
- (void)tapRankingBtn:(id)arg1;
- (void)tapLineupBtn:(id)arg1;
- (void)tapMenuBtn:(id)arg1;
- (void)closeChallengeMode:(id)arg1;
- (void)refreshView;
- (void)deleteMusicData;
- (void)setChallengeData:(id)arg1;
- (void)outerChallengeView:(_Bool)arg1;
- (void)enterChallengeView:(_Bool)arg1;
- (void)setNotificateImage;
- (void)imageDownload;
- (_Bool)checkArtworkDownload;
- (void)showLoginMessage;
- (id)soundName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

