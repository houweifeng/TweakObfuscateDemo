//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RBBaseViewController.h"

#import "DownloaderDelegate-Protocol.h"
#import "ImageDownloaderDelegate-Protocol.h"
#import "StorePackInfoDownloaderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class Downloader, NSMutableDictionary, NSString, StoreDetailHeaderView, StorePackInfo, StorePackInfoDownloader, UIActivityIndicatorView, UIAlertView, UIImage, UILabel, UITableView;

@interface RBStoreDetailViewController : RBBaseViewController <UITableViewDataSource, UITableViewDelegate, DownloaderDelegate, ImageDownloaderDelegate, StorePackInfoDownloaderDelegate>
{
    long long rowSamplePlayed;
    _Bool isDownloadingSample;
    _Bool _closingFlag;
    StorePackInfo *_packInfo;
    id _delegate;
    StoreDetailHeaderView *_headerView;
    UITableView *_packTableView;
    UIActivityIndicatorView *_accessingIndicator;
    UILabel *_accessingLabel;
    StorePackInfoDownloader *_storePackInfoDownloader;
    Downloader *_sampleDownloader;
    UIImage *_packBGImage0;
    UIImage *_packBGImage1;
    NSMutableDictionary *_artworkDownloaders;
    UIAlertView *_packinfoDownloadAlertView;
}

@property(nonatomic) _Bool closingFlag; // @synthesize closingFlag=_closingFlag;
@property(retain, nonatomic) UIAlertView *packinfoDownloadAlertView; // @synthesize packinfoDownloadAlertView=_packinfoDownloadAlertView;
@property(retain, nonatomic) NSMutableDictionary *artworkDownloaders; // @synthesize artworkDownloaders=_artworkDownloaders;
@property(retain, nonatomic) UIImage *packBGImage1; // @synthesize packBGImage1=_packBGImage1;
@property(retain, nonatomic) UIImage *packBGImage0; // @synthesize packBGImage0=_packBGImage0;
@property(retain, nonatomic) Downloader *sampleDownloader; // @synthesize sampleDownloader=_sampleDownloader;
@property(retain, nonatomic) StorePackInfoDownloader *storePackInfoDownloader; // @synthesize storePackInfoDownloader=_storePackInfoDownloader;
@property(retain, nonatomic) UILabel *accessingLabel; // @synthesize accessingLabel=_accessingLabel;
@property(retain, nonatomic) UIActivityIndicatorView *accessingIndicator; // @synthesize accessingIndicator=_accessingIndicator;
@property(retain, nonatomic) UITableView *packTableView; // @synthesize packTableView=_packTableView;
@property(retain, nonatomic) StoreDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) StorePackInfo *packInfo; // @synthesize packInfo=_packInfo;
- (void).cxx_destruct;
- (void)storeDetailViewOpenItunesWithURL:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)stopDownloadArtworks;
- (void)didPresentAlertView:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)imageDownloaderDidFail:(id)arg1 didLoad:(id)arg2;
- (void)imageDownloader:(id)arg1 didLoad:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)downloaderProceed:(id)arg1;
- (void)downloaderError:(id)arg1;
- (void)downloaderFinished:(id)arg1;
- (void)storePackInfoDownloaderError:(id)arg1;
- (void)storePackInfoDownloaderFinished:(id)arg1;
- (void)setButtonTextInstalled;
- (void)setButtonTextInstalling;
- (void)setButtonTextInstall;
- (void)setButtonTextBuy;
- (void)selfCheckButtonText;
- (_Bool)allDownloaded;
- (void)setPurchaseState:(_Bool)arg1;
- (void)doPurchase:(id)arg1;
- (void)finishBgm:(id)arg1;
- (void)stopSample;
- (void)loadInfo;
- (void)showPackInfo;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

