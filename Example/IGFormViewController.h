//
//  FormViewController.h
//  FormViewController
//
//  Created by Rohan Shah on 3/28/10.
//  Copyright 2010 Rohan Shah. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IGFormViewController : UITableViewController <UIPopoverControllerDelegate, UITextFieldDelegate> {
	UINavigationController *popoverNavigationController;
	NSMutableArray *elements;
}
@property(nonatomic,readonly) UINavigationController *popoverNavigationController;
// Always init with this method
-(id)initWithDefaults;

// Subclasses should override this method to configure fields, etc...
-(void)configure;

// Subclasses should override this method to determine whether the data is valid.
// If valid, return nil. If not, return an error message.
-(NSString *)validateData:(NSDictionary *)formData;

// Subclasses should override this method to save the given data. You can assume that the data is valid according to validateData:.
-(void)saveData:(NSDictionary *)formData;

// Adds a default, untitled, section to the form if none exists already
-(void)addDefaultSectionIfNeeded;

// Creates a new section in the form with the given title
-(void)addSectionWithTitle:(NSString *)title;

// Add and return a text field to the form.
-(void)addTextField:(NSString *)fieldName;

// Same as addTextField:, but also adds a default value
-(void)addTextField:(NSString *)fieldName value:(NSString *)value;

// Same as addTextField:value:, but for multi-line text entry
-(void)addTextView:(NSString *)fieldName value:(NSString *)value;

// Adds a radio option (a row with a checkbox to the right). You should call this multiple times with the same category for each set of options.
-(void)addRadioOption:(NSString *)category title:(NSString *)title;

@end
