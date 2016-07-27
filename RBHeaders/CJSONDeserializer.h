//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CJSONScanner;

@interface CJSONDeserializer : NSObject
{
    CJSONScanner *scanner;
    unsigned long long options;
}

+ (id)deserializer;
@property(nonatomic) unsigned long long options; // @synthesize options;
@property(retain, nonatomic) CJSONScanner *scanner; // @synthesize scanner;
- (void).cxx_destruct;
- (id)deserializeAsArray:(id)arg1 error:(id *)arg2;
- (id)deserializeAsDictionary:(id)arg1 error:(id *)arg2;
- (id)deserialize:(id)arg1 error:(id *)arg2;
@property(nonatomic) unsigned long long allowedEncoding;
@property(retain, nonatomic) id nullObject;
- (id)init;

@end

