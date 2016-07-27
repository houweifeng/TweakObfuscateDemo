//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KUnzip, NSCache, RendererConf, Sequence, UIImage;

@interface ResultTweet : NSObject
{
    UIImage *basePlate;
    Sequence *sequenceData;
    UIImage *titleBImg;
    UIImage *titleWImg;
    CDStruct_c6ce2fc0 *scoreData;
    RendererConf *confInfo;
    NSCache *cache;
    _Bool bWhiteTitle;
    KUnzip *resourceData;
}

+ (id)getAppendDataDirectoryPath;
+ (id)getTwitterImagePath:(id)arg1;
+ (id)getTwitterImagePathOrg:(id)arg1;
+ (id)getAccessoryImage:(id)arg1;
+ (id)getSampleImage:(id)arg1;
- (void).cxx_destruct;
- (id)getImage:(id)arg1;
- (id)getResPNG:(id)arg1;
- (void)drawResult;
- (void)drawMusicInfo;
- (void)drawPlayerInfo;
- (void)drawBg;
- (id)generateTweetImage;
- (void)setTitle:(id)arg1 white:(id)arg2;
- (id)initWithInfo:(id)arg1 conf:(id)arg2;

@end

