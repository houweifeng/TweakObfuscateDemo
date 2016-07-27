//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EAGLContext;
@protocol GLViewDelegate;

@interface neGLView : UIView
{
    int m_FrontBufferWidth;
    int m_FrontBufferHeight;
    unsigned int m_DefaultFramebuffer;
    unsigned int m_ColorRenderbuffer;
    unsigned int m_RenderBufferID;
    struct neIGLES *m_GLInterface;
    id <GLViewDelegate> _delegate;
    EAGLContext *_glContext;
}

+ (Class)layerClass;
+ (id)GetInstance;
@property(retain, nonatomic) EAGLContext *glContext; // @synthesize glContext=_glContext;
@property(nonatomic) __weak id <GLViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)Present;
- (void)SetDefaultColorBuffer;
- (void)SetDefaultFrameBuffer;
- (_Bool)BeginRender;
- (int)GetFrontBufferHeight;
- (int)GetFrontBufferWidth;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

