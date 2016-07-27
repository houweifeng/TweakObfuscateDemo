//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSURL, NSURLConnection, UIImage;
@protocol ImageDownloaderDelegate;

@interface ImageDownloader : NSObject
{
    NSMutableData *data;
    NSURLConnection *imageConnection;
    UIImage *downloadedImage;
    _Bool _downloading;
    NSURL *_imageURL;
    id _key;
    id <ImageDownloaderDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool downloading; // @synthesize downloading=_downloading;
@property(nonatomic) __weak id <ImageDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id key; // @synthesize key=_key;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)getImage;
- (void)cancelDownload;
- (void)startDownload;
- (id)initWithImageURL:(id)arg1 forKey:(id)arg2;

@end

