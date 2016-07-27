//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface RBMusicManager : NSObject
{
    _Bool _musicDataArrayDirtyFlag;
    int _clientMusicPageNum;
    NSMutableArray *_clientMusics;
    NSArray *_preinstallMusicIDs;
    NSMutableArray *_purchasedMusicDictionaries;
    NSMutableArray *_musicDataArray;
}

+ (id)getPathFromPurchesedOldDirectory:(int)arg1;
+ (id)getPathFromPurchesed:(int)arg1;
+ (id)getPathFromBundle:(int)arg1;
+ (id)getMusicDataFilename:(int)arg1;
+ (id)getInstance;
@property(nonatomic) _Bool musicDataArrayDirtyFlag; // @synthesize musicDataArrayDirtyFlag=_musicDataArrayDirtyFlag;
@property(retain, nonatomic) NSMutableArray *musicDataArray; // @synthesize musicDataArray=_musicDataArray;
@property(retain, nonatomic) NSMutableArray *purchasedMusicDictionaries; // @synthesize purchasedMusicDictionaries=_purchasedMusicDictionaries;
@property(retain, nonatomic) NSArray *preinstallMusicIDs; // @synthesize preinstallMusicIDs=_preinstallMusicIDs;
@property(retain, nonatomic) NSMutableArray *clientMusics; // @synthesize clientMusics=_clientMusics;
@property(nonatomic) int clientMusicPageNum; // @synthesize clientMusicPageNum=_clientMusicPageNum;
- (void).cxx_destruct;
- (id)getClientCompareMusics;
- (int)setClientMusic:(id)arg1;
- (void)releaseClientMusic;
- (id)getMusicIDs;
- (void)releaseChacheMusicData;
- (id)getMusicData:(int)arg1;
- (id)getMusicDataArray;
- (void)setMusicDataArrayDirty;
- (void)createMusicDataArray;
- (_Bool)addPurchasedMusic:(id)arg1;
- (id)getPurchasedMusicDictionaris;
- (id)getPurchasedMusicDictionary:(int)arg1;
- (void)savePurchasedMusics;
- (void)loadPurchasedMusics;
- (void)createPreInMusics;
- (void)dealloc;
- (id)init;
- (_Bool)deleteMusic:(int)arg1;

@end

