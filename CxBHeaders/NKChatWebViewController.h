//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NKBarButtonItemsToolBar, NKCloseButton, NKGroupInfo, NKJavaScriptRequest, NSString, NSURLRequest, UIActionSheet, UIActivityIndicatorView, UIPopoverController, UIWebView;

@interface NKChatWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate>
{
    _Bool _showsDestructiveButton;
    NKGroupInfo *_defaultGroupInfo;
    NSURLRequest *_lastURLRequest;
    NKJavaScriptRequest *_javaScriptRequest;
    UIActivityIndicatorView *_indicatorView;
    NKBarButtonItemsToolBar *_barButtonItemsToolBar;
    NKCloseButton *_closeButton;
    UIPopoverController *_popoverViewController;
    UIWebView *_webView;
    UIWebView *_externalWebView;
    UIActionSheet *_actionSheet;
}

@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UIWebView *externalWebView; // @synthesize externalWebView=_externalWebView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIPopoverController *popoverViewController; // @synthesize popoverViewController=_popoverViewController;
@property(retain, nonatomic) NKCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NKBarButtonItemsToolBar *barButtonItemsToolBar; // @synthesize barButtonItemsToolBar=_barButtonItemsToolBar;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NKJavaScriptRequest *javaScriptRequest; // @synthesize javaScriptRequest=_javaScriptRequest;
@property(retain, nonatomic) NSURLRequest *lastURLRequest; // @synthesize lastURLRequest=_lastURLRequest;
@property(retain, nonatomic) NKGroupInfo *defaultGroupInfo; // @synthesize defaultGroupInfo=_defaultGroupInfo;
@property _Bool showsDestructiveButton; // @synthesize showsDestructiveButton=_showsDestructiveButton;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showViewController:(id)arg1;
- (void)confirmLaunchAppStore;
- (void)handleInvitationURL:(id)arg1;
- (void)handleJSBridgeURL:(id)arg1 webView:(id)arg2;
- (void)startSingleSignOn;
- (void)openNakamapAppPage;
- (void)handleImplicitGrantAccessTokenURL:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)openChatWithGroupID:(id)arg1 chatName:(id)arg2;
- (void)openChatWithGroupUID:(id)arg1;
- (void)openChatWithGroupID:(id)arg1;
- (void)openSigninPage;
- (void)openInSafari;
- (void)hideExternalWebView;
- (void)showExternalWebView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)releaseOutlets;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

