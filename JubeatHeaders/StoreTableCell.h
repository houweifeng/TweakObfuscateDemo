//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class StorePackView;

@interface StoreTableCell : UITableViewCell
{
    StorePackView *_leftPackView;
    StorePackView *_rightPackView;
}

@property(readonly, nonatomic) StorePackView *rightPackView; // @synthesize rightPackView=_rightPackView;
@property(readonly, nonatomic) StorePackView *leftPackView; // @synthesize leftPackView=_leftPackView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
