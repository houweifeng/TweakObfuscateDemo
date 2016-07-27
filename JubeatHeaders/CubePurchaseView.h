//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PurchaseManagerDelegate-Protocol.h"
#import "SKProductsRequestDelegate-Protocol.h"

@class CubePurchaseListView, MessageTextView, NSMutableArray, NSString, SKProduct, SKProductsRequest, SessionDownloader, UIButton, UIImageView, UILabel;

@interface CubePurchaseView : UIView <PurchaseManagerDelegate, SKProductsRequestDelegate>
{
    UIView *rootView;
    UIImageView *bgView;
    UIImageView *titleView;
    NSMutableArray *cubeList;
    CubePurchaseListView *purchaseListView;
    SKProductsRequest *productsRequest;
    UIButton *closeBtn;
    UILabel *errorLabel;
    SessionDownloader *infoDownloader;
    UIButton *sptlBtn;
    UIButton *cubePolicyBtn;
    SKProduct *selectedProduct;
    int selectedIndex;
    int selectedPurchaseAge;
    MessageTextView *textView;
    id _aDelegate;
}

@property(nonatomic) __weak id aDelegate; // @synthesize aDelegate=_aDelegate;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)purchaseFailed:(id)arg1 error:(id)arg2;
- (void)purchaseSucceeded:(id)arg1;
- (void)alertSelect:(id)arg1;
- (void)downloaderError:(id)arg1;
- (void)downloaderFinished:(id)arg1;
- (void)selectListCell:(id)arg1;
- (void)purchaseStart:(id)arg1;
- (_Bool)checkAttainLimitPurchase:(id)arg1;
- (void)closeMessage:(id)arg1;
- (void)tapCubePolicy:(id)arg1;
- (void)tapSptl:(id)arg1;
- (void)closePurchaseMenu:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
