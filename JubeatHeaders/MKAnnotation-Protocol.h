//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MKAnnotation <NSObject>
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)setCoordinate:(CDStruct_c3b9c2ee)arg1;
@end

