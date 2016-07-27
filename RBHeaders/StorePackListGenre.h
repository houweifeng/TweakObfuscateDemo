//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface StorePackListGenre : NSObject
{
    _Bool _packlistContinued;
    NSString *_genreName;
    unsigned long long _genreID;
    unsigned long long _numFetchedPack;
    NSMutableArray *_arrayPackInfo;
}

@property(retain, nonatomic) NSMutableArray *arrayPackInfo; // @synthesize arrayPackInfo=_arrayPackInfo;
@property(readonly, nonatomic) unsigned long long numFetchedPack; // @synthesize numFetchedPack=_numFetchedPack;
@property(readonly, nonatomic) _Bool packlistContinued; // @synthesize packlistContinued=_packlistContinued;
@property(readonly, nonatomic) unsigned long long genreID; // @synthesize genreID=_genreID;
@property(readonly, nonatomic) NSString *genreName; // @synthesize genreName=_genreName;
- (void).cxx_destruct;
- (void)updateList:(id)arg1 step:(unsigned long long)arg2 hasNext:(_Bool)arg3;
- (id)packIDList;
- (id)packInfoForIndex:(unsigned long long)arg1;
- (unsigned long long)packCount;
- (id)initWithName:(id)arg1 genreID:(unsigned long long)arg2;

@end

