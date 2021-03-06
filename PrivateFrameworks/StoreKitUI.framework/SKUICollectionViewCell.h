/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICollectionViewCell : UICollectionViewCell {
    UIView *_bottomBorderView;
    int _position;
    UIView *_rightBorderView;
    UIColor *_separatorColor;
    int _separatorStyle;
    UIView *_topBorderView;
}

@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) int separatorStyle;
@property (nonatomic) BOOL showsCellSeparators;

- (void).cxx_destruct;
- (void)_setPosition:(int)arg1;
- (BOOL)_showsBottomBorder;
- (BOOL)_showsRightBorder;
- (BOOL)_showsTopBorder;
- (void)_updateBorderVisibility;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)separatorColor;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShowsCellSeparators:(BOOL)arg1;
- (BOOL)showsCellSeparators;

@end
