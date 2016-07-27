//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface StoreMusicInfo : NSObject
{
    int _musicID;
    int _lvBasic;
    int _lvMedium;
    int _lvHard;
    NSString *_name;
    NSString *_artist;
    NSString *_itemURL;
    NSString *_artworkURL;
    NSString *_sampleURL;
    NSString *_itunesURL;
}

@property(nonatomic) int lvHard; // @synthesize lvHard=_lvHard;
@property(nonatomic) int lvMedium; // @synthesize lvMedium=_lvMedium;
@property(nonatomic) int lvBasic; // @synthesize lvBasic=_lvBasic;
@property(retain, nonatomic) NSString *itunesURL; // @synthesize itunesURL=_itunesURL;
@property(retain, nonatomic) NSString *sampleURL; // @synthesize sampleURL=_sampleURL;
@property(retain, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(retain, nonatomic) NSString *itemURL; // @synthesize itemURL=_itemURL;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int musicID; // @synthesize musicID=_musicID;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)fileExist;
- (id)initWithDictionary:(id)arg1;

@end
