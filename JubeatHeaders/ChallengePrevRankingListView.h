//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImage, UIImageView, UITableView;

@interface ChallengePrevRankingListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIView *bgView;
    UIImageView *bgImageView;
    UIImageView *titleView;
    UIImageView *listLineView;
    UITableView *listView;
    int cellHeight;
    UIButton *closeBtn;
    UIImage *plateBgImage0;
    UIImage *plateBgImage1;
    NSArray *listArray;
    id _aDelegate;
}

@property(nonatomic) __weak id aDelegate; // @synthesize aDelegate=_aDelegate;
- (void).cxx_destruct;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)showLineup;
- (void)closeLineup:(id)arg1;
- (void)refreshList;
- (id)initWithFrame:(struct CGRect)arg1 lineup:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

