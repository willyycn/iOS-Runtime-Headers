/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UILabel, UIView;

@interface CAMAvalancheIndicatorView : UIView {
    UIView *__backgroundView;
    UILabel *__countLabel;
    int __numberOfPhotos;
    BOOL _showsWhenStarted;
}

@property(readonly) UIView * _backgroundView;
@property(readonly) UILabel * _countLabel;
@property(readonly) int _numberOfPhotos;
@property BOOL showsWhenStarted;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_commonCAMAvalancheIndicatorViewInitialization;
- (id)_countLabel;
- (int)_numberOfPhotos;
- (void)_performCaptureAnimation;
- (void)_updateCountLabelWithNumberOfPhotos;
- (void)finishIncrementingWithCompletionHandler:(id)arg1;
- (void)incrementWithCaptureAnimation:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)reset;
- (void)setShowsWhenStarted:(BOOL)arg1;
- (BOOL)showsWhenStarted;

@end