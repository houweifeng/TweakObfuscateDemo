//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RBCharacterBase : NSObject
{
    float _posX;
    float _posY;
    float _moveX;
    float _moveY;
    float _accX;
    float _accY;
    int _useLimit;
    float _limitPosUp;
    float _limitPosRight;
    float _limitPosDown;
    float _limitPosLeft;
    float _limitMoveX;
    float _limitMoveY;
    float _limitAccX;
    float _limitAccY;
}

@property(nonatomic) float limitAccY; // @synthesize limitAccY=_limitAccY;
@property(nonatomic) float limitAccX; // @synthesize limitAccX=_limitAccX;
@property(nonatomic) float limitMoveY; // @synthesize limitMoveY=_limitMoveY;
@property(nonatomic) float limitMoveX; // @synthesize limitMoveX=_limitMoveX;
@property(nonatomic) float limitPosLeft; // @synthesize limitPosLeft=_limitPosLeft;
@property(nonatomic) float limitPosDown; // @synthesize limitPosDown=_limitPosDown;
@property(nonatomic) float limitPosRight; // @synthesize limitPosRight=_limitPosRight;
@property(nonatomic) float limitPosUp; // @synthesize limitPosUp=_limitPosUp;
@property(nonatomic) int useLimit; // @synthesize useLimit=_useLimit;
@property(nonatomic) float accY; // @synthesize accY=_accY;
@property(nonatomic) float accX; // @synthesize accX=_accX;
@property(nonatomic) float moveY; // @synthesize moveY=_moveY;
@property(nonatomic) float moveX; // @synthesize moveX=_moveX;
@property(nonatomic) float posY; // @synthesize posY=_posY;
@property(nonatomic) float posX; // @synthesize posX=_posX;
- (_Bool)checkLimitType:(int)arg1;
- (void)update;
- (void)setDefault;
- (id)init;

@end

