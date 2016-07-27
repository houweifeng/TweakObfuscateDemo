//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NKInvitation, NSString;

@interface NKConfiguration : NSObject
{
    NSString *_clientID;
    NSString *_accountBaseName;
    NKInvitation *_invitation;
}

+ (id)currentConfiguration;
@property(retain, nonatomic) NKInvitation *invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) NSString *accountBaseName; // @synthesize accountBaseName=_accountBaseName;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (void)setup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

