//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreMusicInfo.h"

@class NSArray, NSString;

@interface PrivilegesMusicInfo : StoreMusicInfo
{
    int unlockType;
    NSArray *termsTable;
    _Bool _alreadyDownload;
    _Bool _bUnlock;
    int _buttonType;
    int _hideType;
    NSString *_unlockString;
}

@property(retain, nonatomic) NSString *unlockString; // @synthesize unlockString=_unlockString;
@property(readonly, nonatomic) int hideType; // @synthesize hideType=_hideType;
@property(readonly, nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(readonly, nonatomic) _Bool bUnlock; // @synthesize bUnlock=_bUnlock;
@property(readonly, nonatomic) _Bool alreadyDownload; // @synthesize alreadyDownload=_alreadyDownload;
- (void).cxx_destruct;
- (_Bool)checkNewUnlock;
- (_Bool)checkExistPackList:(id)arg1 packID:(int)arg2;
- (_Bool)termCheck;
- (id)initWithDictionary:(id)arg1;

@end

