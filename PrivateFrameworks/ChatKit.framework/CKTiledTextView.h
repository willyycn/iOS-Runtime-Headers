/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class _CKTiledTextView;

@interface CKTiledTextView : CKLazyTextView {
    BOOL _containsHyperlink;
    _CKTiledTextView *_textView;
}

@property BOOL containsHyperlink;
@property(retain) _CKTiledTextView * textView;

+ (id)HTMLStringCache;

- (BOOL)containsHyperlink;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)interactionDelegate;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)setAttributedText:(id)arg1;
- (void)setContainsHyperlink:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setWebViewNeedsUpdate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)textView;
- (void)updateWebView;

@end