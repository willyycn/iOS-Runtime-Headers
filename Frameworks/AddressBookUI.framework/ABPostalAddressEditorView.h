/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPostalAddressEditorView : UIControl <ABCountryPickerControllerDelegate, ABText, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    CNPostalAddress *_address;
    NSDictionary *_addressFormats;
    NSArray *_cellsLayout;
    CNContactStyle *_contactStyle;
    <ABPresenterDelegate> *_delegate;
    UITableView *_tableView;
    NSMutableDictionary *_textFields;
    NSDictionary *_valueTextAttributes;
}

@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic, copy) CNPostalAddress *address;
@property (nonatomic, copy) NSDictionary *addressFormats;
@property (nonatomic, copy) NSArray *cellsLayout;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int lineCount;
@property (nonatomic, copy) UIColor *separatorColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, copy) NSMutableDictionary *textFields;

- (id)_addressPlaceholderForKey:(id)arg1;
- (id)_addressValueForKey:(id)arg1;
- (id)_cellsLayoutForCountryCode:(id)arg1;
- (id)_countryCode;
- (void)_invalidateCellsLayout;
- (id)_normalizeCountryCodeToISO:(id)arg1;
- (void)_setAddressValue:(id)arg1 forKey:(id)arg2;
- (void)_setupCountryPickerOnLine:(id)arg1;
- (void)_setupCoutryPickerOnTextField:(id)arg1;
- (id)ab_text;
- (id)ab_textAttributes;
- (id)address;
- (id)addressFormats;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)cellsLayout;
- (id)contactStyle;
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;
- (void)countryPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isFirstResponder;
- (int)lineCount;
- (id)separatorColor;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAddressFormats:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellsLayout:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTextFields:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textFieldChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)textFields;

@end
