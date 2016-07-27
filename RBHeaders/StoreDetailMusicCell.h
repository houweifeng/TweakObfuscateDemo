//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSURL, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface StoreDetailMusicCell : UITableViewCell
{
    UIImageView *_artworkView;
    UILabel *_labelName;
    UILabel *_labelArtist;
    UILabel *_labelLevels;
    NSURL *_linkURL;
    UIImageView *_bgView;
    UIView *_sampleView;
    UIActivityIndicatorView *_indicator;
    UIImageView *_playingView;
    UIButton *_buttonLink;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIButton *buttonLink; // @synthesize buttonLink=_buttonLink;
@property(retain, nonatomic) UIImageView *playingView; // @synthesize playingView=_playingView;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIView *sampleView; // @synthesize sampleView=_sampleView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSURL *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) UILabel *labelLevels; // @synthesize labelLevels=_labelLevels;
@property(retain, nonatomic) UILabel *labelArtist; // @synthesize labelArtist=_labelArtist;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)samplePlaying;
- (void)sampleDownloading;
- (void)sampleStop;
- (void)setLink:(id)arg1;
- (void)setBgImage:(id)arg1;
- (void)handleLink:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

