//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RBBaseTabBarController.h"

@class RBCampaignViewController, RBMenuView, RBNavigationController, RBPrivilegesViewController, StoreDialogView, UIView;

@interface RBStoreTabController : RBBaseTabBarController
{
    _Bool m_IsUIViewAnimation;
    _Bool m_Animation;
    StoreDialogView *_modalDialog;
    RBMenuView *_musicMenuView;
    RBNavigationController *_mainNavCtrl;
    RBNavigationController *_manageNavCtrl;
    RBNavigationController *_privilegesNavCtrl;
    RBNavigationController *_campaignNavCtrl;
    RBPrivilegesViewController *_privilegesViewCtrl;
    RBCampaignViewController *_campaignViewCtrl;
    UIView *_coverView;
}

@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) RBCampaignViewController *campaignViewCtrl; // @synthesize campaignViewCtrl=_campaignViewCtrl;
@property(retain, nonatomic) RBPrivilegesViewController *privilegesViewCtrl; // @synthesize privilegesViewCtrl=_privilegesViewCtrl;
@property(retain, nonatomic) RBNavigationController *campaignNavCtrl; // @synthesize campaignNavCtrl=_campaignNavCtrl;
@property(retain, nonatomic) RBNavigationController *privilegesNavCtrl; // @synthesize privilegesNavCtrl=_privilegesNavCtrl;
@property(retain, nonatomic) RBNavigationController *manageNavCtrl; // @synthesize manageNavCtrl=_manageNavCtrl;
@property(retain, nonatomic) RBNavigationController *mainNavCtrl; // @synthesize mainNavCtrl=_mainNavCtrl;
@property(nonatomic) __weak RBMenuView *musicMenuView; // @synthesize musicMenuView=_musicMenuView;
@property(retain, nonatomic) StoreDialogView *modalDialog; // @synthesize modalDialog=_modalDialog;
- (void).cxx_destruct;
- (void)selectTab:(int)arg1;
- (void)forceOpen;
- (void)pushBarBtnBack:(id)arg1;
- (_Bool)hideModalDialog;
- (void)openDialogAnimStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (_Bool)showModalDialog:(id)arg1;
- (void)loadView;
- (id)init;

@end

