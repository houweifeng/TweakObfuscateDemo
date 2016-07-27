//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UILabel;

@interface RBRankingTableCell : UITableViewCell
{
    _Bool isPad;
    _Bool _isTop;
    _Bool _isLast;
    UILabel *_labelRank;
    UILabel *_labelName;
    UILabel *_labelScore;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(retain, nonatomic) UILabel *labelScore; // @synthesize labelScore=_labelScore;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) UILabel *labelRank; // @synthesize labelRank=_labelRank;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

