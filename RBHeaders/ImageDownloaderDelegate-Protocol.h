//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ImageDownloader, NSIndexPath;

@protocol ImageDownloaderDelegate <NSObject>
- (void)imageDownloaderDidFail:(ImageDownloader *)arg1 didLoad:(NSIndexPath *)arg2;
- (void)imageDownloader:(ImageDownloader *)arg1 didLoad:(NSIndexPath *)arg2;
@end

