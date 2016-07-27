//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface StoreUtil : NSObject
{
}

+ (id)affiliateParametersFromURL:(id)arg1;
+ (id)createCampaignItemInfoJSON:(int)arg1;
+ (id)createCampaignSerialCheckJSON:(int)arg1 code:(id)arg2;
+ (id)createCampaignListJSON:(int)arg1 limit:(int)arg2;
+ (id)createNonce:(unsigned long long)arg1;
+ (id)createReceiptCheckDigestV2:(id)arg1 withNonce:(id)arg2;
+ (id)createReceiptCheckDigest:(id)arg1;
+ (id)createReceiptCheckJSONForV2:(id)arg1 productIds:(id)arg2 nonce:(id)arg3;
+ (id)createReceiptCheckJSON:(id)arg1;
+ (_Bool)isValidURL:(id)arg1;
+ (id)priceString:(id)arg1;
+ (int)packIDForProductID:(id)arg1;
+ (id)productIDForPackID:(int)arg1;
+ (id)campaignItemInfoURL;
+ (id)campaignSerialCheckURL;
+ (id)campaignListURL;
+ (id)unlockMusicURL:(int)arg1 randKey:(int)arg2;
+ (id)freeMusicListURL:(int)arg1;
+ (id)searchURL;
+ (id)searchMasterURL;
+ (id)receiptV2URL;
+ (id)receiptURL;
+ (id)purchasedURL:(unsigned int)arg1;
+ (id)twitterSearchURL:(id)arg1;
+ (id)storeNewInfoURL;
+ (id)musicInfoURL:(unsigned int)arg1;
+ (id)packInfoURL:(unsigned int)arg1 UserOpen:(_Bool)arg2;
+ (id)packListURL:(unsigned int)arg1 limit:(unsigned int)arg2 genre:(unsigned int)arg3;
+ (id)createSecureURL:(id)arg1;
+ (id)createURL:(id)arg1;
+ (id)userInfo;
+ (id)identifierParams;
+ (id)deviceName;

@end

