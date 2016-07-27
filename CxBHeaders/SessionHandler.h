//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKSessionDelegate-Protocol.h"

@class GKSession, NSMutableArray, NSString;

@interface SessionHandler : NSObject <GKSessionDelegate>
{
    GKSession *mpSession;
    GKSession *mpReserve;
    NSString *mpServerPeerId;
    NSMutableArray *mpServerList;
    NSMutableArray *mpMemberList;
    struct _opaque_pthread_mutex_t mMutex;
}

@property(readonly, nonatomic) struct _opaque_pthread_mutex_t mMutex; // @synthesize mMutex;
@property(readonly, nonatomic) NSMutableArray *mpMemberList; // @synthesize mpMemberList;
@property(readonly, nonatomic) NSMutableArray *mpServerList; // @synthesize mpServerList;
@property(readonly, nonatomic) NSString *mpServerPeerId; // @synthesize mpServerPeerId;
@property(readonly, nonatomic) GKSession *mpReserve; // @synthesize mpReserve;
@property(readonly, nonatomic) GKSession *mpSession; // @synthesize mpSession;
- (id).cxx_construct;
- (void)setMpMemberList:(id)arg1;
- (void)setMpServerList:(id)arg1;
- (id)getMpMemberList;
- (id)getMpServerList;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void *)arg4;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)sendAll:(id)arg1 mode:(int)arg2;
- (void)send:(id)arg1 peers:(id)arg2 mode:(int)arg3;
- (id)getPeerName:(id)arg1;
- (void)disconnect:(id)arg1;
- (void)disconnectAll;
- (_Bool)connectAbort;
- (void)connect:(id)arg1;
- (void)setAvailable:(_Bool)arg1;
- (void)releaseSessionObject;
- (void)destroy;
- (void)create:(id)arg1 name:(id)arg2 mode:(int)arg3;
- (void)releaseServerPeerId;
- (void)releaseIdListObject:(id)arg1;
- (int)getIdListIndex:(id)arg1 id:(id)arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

