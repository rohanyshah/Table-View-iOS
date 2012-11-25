//
//  IGFormTextField.h
//  CramberryPad
//
//  Created by Rohan Shah on 4/3/10.
//  Copyright 2010 Rohan Shah. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IGFormElement.h"

@interface IGFormTextField : IGFormElement {
	UITextField *textField;
}
@property(nonatomic,readonly) UITextField *textField;

@end
