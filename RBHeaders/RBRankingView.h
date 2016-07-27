//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RBMusicMenuPopupView.h"

@class RBRankingTableView, UIButton, UIImageView, UIView;

@interface RBRankingView : RBMusicMenuPopupView
{
    _Bool m_Animating;
    int _thema;
    UIImageView *_titleView;
    UIView *_scrollBaseView;
    RBRankingTableView *_friendRanking;
    RBRankingTableView *_totalRanking;
    UIButton *_friendButton;
    UIImageView *_friendButtonEffect;
    UIButton *_allButton;
    UIImageView *_allButtonEffect;
}

@property(retain, nonatomic) UIImageView *allButtonEffect; // @synthesize allButtonEffect=_allButtonEffect;
@property(retain, nonatomic) UIButton *allButton; // @synthesize allButton=_allButton;
@property(retain, nonatomic) UIImageView *friendButtonEffect; // @synthesize friendButtonEffect=_friendButtonEffect;
@property(retain, nonatomic) UIButton *friendButton; // @synthesize friendButton=_friendButton;
@property(retain, nonatomic) RBRankingTableView *totalRanking; // @synthesize totalRanking=_totalRanking;
@property(retain, nonatomic) RBRankingTableView *friendRanking; // @synthesize friendRanking=_friendRanking;
@property(retain, nonatomic) UIView *scrollBaseView; // @synthesize scrollBaseView=_scrollBaseView;
@property(retain, nonatomic) UIImageView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)SelectAllButton;
- (void)SelectFriendButton;
- (void)showFriend:(_Bool)arg1;
- (void)setupView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
