//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DownloaderDelegate-Protocol.h"
#import "RBExperienceCollectionViewDelegate-Protocol.h"
#import "StoreDownloadManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class DAProgressOverlayView, Downloader, NSString, RBCustomInfoPopupView, RBCustomView, RBNumberLabel, RBUnlockCollectionCell, RBUnlockCollectionView, StoreDownloadManager, UIActivityIndicatorView, UIAlertView, UIButton, UIImageView, UIScrollView;

@interface RBUnlockView : UIView <RBExperienceCollectionViewDelegate, StoreDownloadManagerDelegate, DownloaderDelegate, UIAlertViewDelegate>
{
    int _unlockRandomKey;
    RBCustomView *_parentCustomView;
    UIImageView *_pointBackgroundView;
    RBNumberLabel *_pointLabel;
    UIScrollView *_scrollView;
    RBCustomInfoPopupView *_popupView;
    UIActivityIndicatorView *_activityIndicatorView;
    StoreDownloadManager *_storeDownloadManager;
    Downloader *_downloader;
    DAProgressOverlayView *_progressOverlayView;
    RBUnlockCollectionView *_selectedView;
    RBUnlockCollectionCell *_selectedCell;
    NSString *_dlMusicName;
    UIAlertView *_alertView;
    NSString *_rewardBannerUrl;
    UIButton *_rewardButton;
    UIImageView *_rewardBannerImageView;
    NSString *_rewardId;
    NSString *_nonce;
}

@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *rewardId; // @synthesize rewardId=_rewardId;
@property(retain, nonatomic) UIImageView *rewardBannerImageView; // @synthesize rewardBannerImageView=_rewardBannerImageView;
@property(retain, nonatomic) UIButton *rewardButton; // @synthesize rewardButton=_rewardButton;
@property(retain, nonatomic) NSString *rewardBannerUrl; // @synthesize rewardBannerUrl=_rewardBannerUrl;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) int unlockRandomKey; // @synthesize unlockRandomKey=_unlockRandomKey;
@property(copy, nonatomic) NSString *dlMusicName; // @synthesize dlMusicName=_dlMusicName;
@property(nonatomic) __weak RBUnlockCollectionCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(nonatomic) __weak RBUnlockCollectionView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) DAProgressOverlayView *progressOverlayView; // @synthesize progressOverlayView=_progressOverlayView;
@property(retain, nonatomic) Downloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) StoreDownloadManager *storeDownloadManager; // @synthesize storeDownloadManager=_storeDownloadManager;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) RBCustomInfoPopupView *popupView; // @synthesize popupView=_popupView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) RBNumberLabel *pointLabel; // @synthesize pointLabel=_pointLabel;
@property(retain, nonatomic) UIImageView *pointBackgroundView; // @synthesize pointBackgroundView=_pointBackgroundView;
@property(nonatomic) __weak RBCustomView *parentCustomView; // @synthesize parentCustomView=_parentCustomView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)downloadManagerProceed:(id)arg1;
- (void)downloadManagerFailed:(id)arg1;
- (void)downloadManagerCompleted:(id)arg1;
- (void)downloadManagerStartTask:(id)arg1;
- (void)downloaderError:(id)arg1;
- (void)downloaderProceed:(id)arg1;
- (void)downloaderFinished:(id)arg1;
- (void)dealloc;
- (void)downloadWithMusicInfo:(id)arg1;
- (void)getMusicInfoWithMusicID:(unsigned int)arg1;
- (void)noButtonTap:(id)arg1;
- (void)yesButtonTap:(id)arg1;
- (void)didSelectView:(id)arg1 selectedCell:(id)arg2;
- (void)pushRewardButton:(id)arg1;
- (id)getUnlockItemView;
- (void)requestRewardCheck;
- (void)request;
- (void)reloadData;
- (void)setupView;
- (void)setParentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
