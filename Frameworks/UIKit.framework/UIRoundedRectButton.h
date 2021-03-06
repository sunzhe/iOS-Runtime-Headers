/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIBezierPath, UIColor, UIGroupTableViewCellBackground, UIView;

@interface UIRoundedRectButton : UIButton {
    UIColor *_fillColor;
    UIBezierPath *_fillPath;
    UIView *_shadowView;
    UIGroupTableViewCellBackground *_tableViewStyleBackground;
    UIColor *_tintColor;
}

- (id)_backgroundView;
- (BOOL)_canDrawContent;
- (void)_commonRoundedRectButtonInit;
- (id)_contentBackgroundColor;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_invalidateBackingViews;
- (void)_invalidatePaths;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_setupBackgroundView;
- (void)_updateState;
- (BOOL)_wantsTableViewStyleBackground;
- (int)buttonType;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fillColor:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
