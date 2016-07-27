//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CampaignItemInfo, Downloader, StoreButton, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface CampaignDetailHeaderView : UIView
{
    UIImageView *bgView;
    UIImageView *artworkView;
    UIImageView *reflectionArtworkView;
    UIImageView *newMarker;
    StoreButton *downloadBtn;
    StoreButton *linkBtn;
    UILabel *labelName;
    UILabel *labelComment;
    CampaignItemInfo *itemInfo;
    UIActivityIndicatorView *indicatorSample;
    Downloader *sampleDownloader;
    _Bool bSamplePlaying;
    UIImageView *playingView;
    UIButton *sampleButton;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloaderProceed:(id)arg1;
- (void)downloaderError:(id)arg1;
- (void)downloaderFinished:(id)arg1;
- (void)finishBgm:(id)arg1;
- (void)stopSample;
- (void)handleSample:(id)arg1;
- (void)updateCampaignState:(id)arg1;
- (void)dlButtonUpdate;
- (void)setArtwork:(id)arg1;
- (void)setCampaignInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getButtonName:(int)arg1;
- (id)getButtonColor:(int)arg1;

@end

