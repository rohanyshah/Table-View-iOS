//
//  IGFormTextView.h
//  CramberryPad
//
//  Created by Rohan Shah on 7/2/10.
//  Copyright 2010 Rohan Shah. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IGFormElement.h"

@interface IGFormTextView : IGFormElement {
	UITextView *textView;
}
@property(nonatomic,readonly) UITextView *textView;


@end
