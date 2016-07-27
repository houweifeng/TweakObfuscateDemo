//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RBBaseTableViewController.h"

@class MusicData, NSArray, UIColor, UILabel, UISegmentedControl;
@protocol RBPlaylistViewControllerDelegate;

@interface RBPlaylistViewController : RBBaseTableViewController
{
    id <RBPlaylistViewControllerDelegate> _delegate;
    long long _playlistType;
    long long _playlistNode;
    MusicData *_musicData;
    NSArray *_menuItems;
    NSArray *_playlistFiles;
    UIColor *_musicColor;
    UIColor *_artistColor;
    UIColor *_titleColor;
    UIColor *_buttonColor;
    UIColor *_selectedRowColor;
    UILabel *_titleLabel;
    UISegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *selectedRowColor; // @synthesize selectedRowColor=_selectedRowColor;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *artistColor; // @synthesize artistColor=_artistColor;
@property(retain, nonatomic) UIColor *musicColor; // @synthesize musicColor=_musicColor;
@property(retain, nonatomic) NSArray *playlistFiles; // @synthesize playlistFiles=_playlistFiles;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) MusicData *musicData; // @synthesize musicData=_musicData;
@property(nonatomic) long long playlistNode; // @synthesize playlistNode=_playlistNode;
@property(nonatomic) long long playlistType; // @synthesize playlistType=_playlistType;
@property(nonatomic) __weak id <RBPlaylistViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addButtonPush:(id)arg1;
- (void)closeButtonPush:(id)arg1;
- (void)returnButtonPush:(id)arg1;
- (void)reloadData;
- (void)valueChanged:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setTitle:(id)arg1;

@end
