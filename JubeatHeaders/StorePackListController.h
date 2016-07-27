//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"

@class Downloader, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, SKProductsRequest, StorePackListGenre;
@protocol StorePackListDelegate;

@interface StorePackListController : NSObject <SKProductsRequestDelegate>
{
    NSMutableArray *arrayGenre;
    NSArray *arrayPromotions;
    StorePackListGenre *genreFetching;
    NSDictionary *tmpPackDict;
    Downloader *packlistDownloader;
    SKProductsRequest *productsRequest;
    NSMutableDictionary *dictPackInfo;
    _Bool _initiallyLoaded;
    NSNumber *_additionalPackID;
    id <StorePackListDelegate> _delegate;
}

+ (id)storeCountry;
@property(readonly, nonatomic) _Bool initiallyLoaded; // @synthesize initiallyLoaded=_initiallyLoaded;
@property(nonatomic) __weak id <StorePackListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *additionalPackID; // @synthesize additionalPackID=_additionalPackID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)downloaderProceed:(id)arg1;
- (void)downloaderError:(id)arg1;
- (void)downloaderFinished:(id)arg1;
@property(readonly, nonatomic) _Bool isFetching;
- (void)cancelFetching;
- (void)startFetchAdditionalPack:(id)arg1;
- (void)startFetchGenre:(id)arg1;
- (void)startFetchForGenreIndex:(unsigned long long)arg1;
- (id)packListForGenreIndex:(unsigned long long)arg1;
- (id)promotions;
- (void)addPromotions:(id)arg1 validProducts:(id)arg2;
- (void)addGenres:(id)arg1;
- (id)genreNames;
- (unsigned long long)numGenres;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

