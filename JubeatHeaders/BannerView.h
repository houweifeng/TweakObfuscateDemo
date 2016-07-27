//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURLSessionDataTask, StorePromotion, UIImageView;

@interface BannerView : UIView
{
    NSURLSessionDataTask *task;
    UIImageView *_imageView;
    StorePromotion *_promotion;
}

@property(retain, nonatomic) StorePromotion *promotion; // @synthesize promotion=_promotion;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)loadImageWithSession:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

