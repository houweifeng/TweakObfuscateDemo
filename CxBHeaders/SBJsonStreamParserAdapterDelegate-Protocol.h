//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NakamapSBJsonStreamParser;

@protocol SBJsonStreamParserAdapterDelegate
- (void)parser:(NakamapSBJsonStreamParser *)arg1 foundObject:(NSDictionary *)arg2;
- (void)parser:(NakamapSBJsonStreamParser *)arg1 foundArray:(NSArray *)arg2;
@end

