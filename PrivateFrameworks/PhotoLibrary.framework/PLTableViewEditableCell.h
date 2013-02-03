/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLTextView, UITextField, UILabel;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate> {
    int _cellStyle;
    id _delegate;
    BOOL _forceFirstResponder;
    UILabel *_sizeTextLabel;
    UITextField *_textField;
    PLTextView *_textView;
}

@property int style;

+ (id)posterCellIdentifier;

- (void)_textFieldChanged;
- (BOOL)becomeFirstResponder;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (void)forceFirstResponder:(BOOL)arg1;
- (id)initHDSDCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cellStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 multiLine:(BOOL)arg2;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setValue:(id)arg1;
- (id)sizeTextLabel;
- (int)style;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (id)value;

@end