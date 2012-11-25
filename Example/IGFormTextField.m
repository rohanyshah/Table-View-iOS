//
//  IGFormTextField.m
//  CramberryPad
//
//  Created by Rohan Shah on 4/3/10.
//  Copyright 2010 Rohan Shah. All rights reserved.
//

#import "IGFormTextField.h"


@implementation IGFormTextField
@synthesize textField;

-(id)initWithTitle:(NSString *)aTitle {
	if((self = [super initWithTitle:aTitle])) {
		textField = [[UITextField alloc] initWithFrame:CGRectZero];
		textField.clearButtonMode = UITextFieldViewModeWhileEditing;
		textField.placeholder = aTitle;
	}
	return self;
}

-(void)dealloc {
	[textField release];
	[super dealloc];
}

@end
