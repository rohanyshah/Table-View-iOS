//
//  IGFormTextView.m
//  CramberryPad
//
//  Created by Rohan Shah on 7/2/10.
//  Copyright 2010 Rohan Shah. All rights reserved.
//

#import "IGFormTextView.h"


@implementation IGFormTextView
@synthesize textView;

-(id)initWithTitle:(NSString *)aTitle {
	if((self = [super initWithTitle:aTitle])) {
		textView = [[UITextView alloc] initWithFrame:CGRectZero];
		textView.opaque = NO;
		textView.backgroundColor = [UIColor clearColor];
		textView.font = [UIFont systemFontOfSize:17.0f];
	}
	return self;
}


-(void)dealloc {
	[textView release];
	[super dealloc];
}

@end
