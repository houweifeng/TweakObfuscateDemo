//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, RBNumberLabel, RBUnlockPackageItemData, UIImageView, UIView;

@interface RBUnlockCollectionCell : UICollectionViewCell
{
    _Bool _enabled;
    NSIndexPath *_indexPath;
    UIImageView *_imageView;
    UIImageView *_frameImageView;
    RBNumberLabel *_pointLabel;
    RBUnlockPackageItemData *_itemData;
    UIImageView *_badgeView;
    UIImageView *_unlockView;
    UIView *_disableView;
}

@property(retain, nonatomic) UIView *disableView; // @synthesize disableView=_disableView;
@property(retain, nonatomic) UIImageView *unlockView; // @synthesize unlockView=_unlockView;
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) RBUnlockPackageItemData *itemData; // @synthesize itemData=_itemData;
@property(retain, nonatomic) RBNumberLabel *pointLabel; // @synthesize pointLabel=_pointLabel;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIImageView *frameImageView; // @synthesize frameImageView=_frameImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
