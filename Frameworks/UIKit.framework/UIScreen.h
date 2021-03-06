/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIScreen, UIScreenMode, UISoftwareDimmingWindow;

@interface UIScreen : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int overscanCompensation : 2; 
    } _bounds;
    id _display;
    float _horizontalScale;
    int _lastNotifiedBacklightLevel;
    float _scale;
    } _screenFlags;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    BOOL _wantsSoftwareDimming;
}

@property(setter=_setLastNotifiedBacklightLevel:) int _lastNotifiedBacklightLevel;
@property(setter=_setSoftwareDimmingWindow:,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } applicationFrame;
@property(readonly) NSArray * availableModes;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property float brightness;
@property(retain) UIScreenMode * currentMode;
@property(readonly) UIScreen * mirroredScreen;
@property int overscanCompensation;
@property(readonly) UIScreenMode * preferredMode;
@property(readonly) float scale;
@property BOOL wantsSoftwareDimming;

+ (void)_prepareScreensForAppResume;
+ (id)_screenWithDisplayName:(id)arg1;
+ (void)_videoOutSettingsChanged;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)screens;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForScreenOriginRotation:(float)arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToRotateScreen:(float)arg1;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(int)arg1;
- (void)_beginObservingBacklightLevelNotifications;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsInPixels;
- (void)_computeMetrics;
- (void)_endObservingBacklightLevelNotifications;
- (BOOL)_hasStatusBar;
- (BOOL)_hasWindows;
- (float)_horizontalPixelScale;
- (int)_imageOrientation;
- (BOOL)_isExternal;
- (BOOL)_isMainScreen;
- (BOOL)_isOverscanned;
- (int)_lastNotifiedBacklightLevel;
- (id)_lazySoftwareDimmingWindow;
- (id)_name;
- (BOOL)_overscanAdjustmentNeedsUpdate;
- (float)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (void)_prepareForWindow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_realDisplayBounds;
- (double)_refreshRate;
- (float)_rotation;
- (float)_scale;
- (void)_setLastNotifiedBacklightLevel:(int)arg1;
- (void)_setScale:(float)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (id)_softwareDimmingWindow;
- (BOOL)_supportsBrightness;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (float)brightness;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithDisplay:(id)arg1;
- (id)mirroredScreen;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)overscanCompensation;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (float)scale;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(float)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setOverscanCompensation:(int)arg1;
- (void)setWantsSoftwareDimming:(BOOL)arg1;
- (BOOL)wantsSoftwareDimming;

@end
