//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface ChallengeListViewCell : UITableViewCell
{
    UIImageView *bgImage;
    UILabel *listText;
    id _aDelegate;
    UIButton *_addBtn;
}

@property(readonly, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(nonatomic) __weak id aDelegate; // @synthesize aDelegate=_aDelegate;
- (void).cxx_destruct;
- (void)setBgImage:(id)arg1 text:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

