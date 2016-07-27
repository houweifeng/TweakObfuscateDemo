//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MusicSelectViewController, NSMutableArray, NSMutableDictionary, NSString, StoreButton, UIActivityIndicatorView, UILabel, UITableView;

@interface MusicShareView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *listHostID;
    NSMutableDictionary *dictHostName;
    UILabel *labelMessage;
    UITableView *tableViewHosts;
    UIView *shadowView;
    StoreButton *btnCancel;
    UIActivityIndicatorView *indicatorView;
    MusicSelectViewController *_controller;
}

+ (Class)layerClass;
@property(nonatomic) __weak MusicSelectViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)removeHost:(id)arg1;
- (void)addHost:(id)arg1 name:(id)arg2;
- (void)removeHostTmp:(id)arg1;
- (void)addHost:(id)arg1;
- (void)changeClientModeConnected;
- (void)changeClientModeConnecting;
- (void)changeClientModeSearch;
- (void)pushCancel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

