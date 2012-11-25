//
//  IGFormSection.m
//  CramberryPad
//
//  Created by Rohan Shah on 4/3/10.
//  Copyright 2010 Rohan Shah. All rights reserved.
//

#import "IGFormElement.h"


@implementation IGFormElement
@synthesize title;

-(id)initWithTitle:(NSString *)aTitle {
	if((self = [super init])) {
		title = [aTitle copy];
	}
	return self;
}

-(void)dealloc {
	[title release];
	[super dealloc];
}


-(UIResponder *)control {return nil;}
-(void)setControl:(UIResponder *)newControl {}

@end
