//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, StorePackInfo, StorePackListController;

@protocol StorePackListDelegate <NSObject>
- (void)additionPackInfoDownloadSuccess:(StorePackListController *)arg1 showPack:(StorePackInfo *)arg2;
- (void)packListDownloadNothing:(StorePackListController *)arg1;
- (void)packListDownloadError:(StorePackListController *)arg1 errorMessage:(NSString *)arg2;
- (void)packListDownloadSuccess:(StorePackListController *)arg1 isInitial:(_Bool)arg2 showPack:(StorePackInfo *)arg3;
@end

