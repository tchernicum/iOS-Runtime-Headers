/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLDelayedScrollViewDelegate>;

@interface QLDelayedScrollView : UIScrollView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    <QLDelayedScrollViewDelegate> *_delayedScrollViewDelegate;
    BOOL _isRotating;
    } _newBounds;
    } _newFrame;
    } _oldScrollerBounds;
    float _oldWidth;
    unsigned int _rotationEdgePin;
    } _rotationRect;
}

- (void)_centerRotationRectWithWebViewToScale:(id)arg1;
- (void)_redrawWebView:(id)arg1 withOldWidth:(float)arg2 andNewSize:(struct CGSize { float x1; float x2; })arg3 enablingTileDrawing:(BOOL)arg4;
- (void)_setIsRotating:(BOOL)arg1;
- (void)didRotateToInterfaceOrientation:(int)arg1;
- (void)layoutSubviews;
- (void)setDelayedScrollViewDelegate:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
