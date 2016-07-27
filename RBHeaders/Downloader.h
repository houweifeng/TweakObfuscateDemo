//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableData, NSMutableURLRequest, NSURLConnection;
@protocol DownloaderDelegate;

@interface Downloader : NSObject
{
    _Bool _hashCheck;
    NSObject *_addData;
    NSMutableURLRequest *_request;
    NSURLConnection *_connection;
    long long _downloadSize;
    NSMutableData *_downloadedData;
    NSDictionary *_downloadedHeader;
    id <DownloaderDelegate> _delegate;
}

@property(nonatomic) _Bool hashCheck; // @synthesize hashCheck=_hashCheck;
@property(nonatomic) __weak id <DownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *downloadedHeader; // @synthesize downloadedHeader=_downloadedHeader;
@property(retain, nonatomic) NSMutableData *downloadedData; // @synthesize downloadedData=_downloadedData;
@property(nonatomic) long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSObject *addData; // @synthesize addData=_addData;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hashChecked;
- (id)getHeader;
- (id)getDataInJSON;
- (id)getData;
- (float)currentProgress;
- (unsigned long long)currentSize;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)startDownloading;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 Post:(id)arg3 ContentType:(id)arg4;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;

@end

